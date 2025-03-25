#!/usr/bin/env python3

import os
from pathlib import Path
import argparse
import sys

import ninja_syntax
from get_platform import get_platform

DEFAULT_WIBO_PATH = "./wibo"

parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument('-w', type=str, default=DEFAULT_WIBO_PATH, dest="wine", required=False, help="Path to Wine/Wibo (linux only)")
parser.add_argument("--compiler", type=Path, required=False, help="Path to compiler root directory")
parser.add_argument('version', help='Game version')
args = parser.parse_args()


# Config
GAME = "fe11"
DSD_VERSION = 'v0.6.0'
WIBO_VERSION = '0.6.16'
MWCC_VERSION = "2.0/sp2p2"
DECOMP_ME_COMPILER = "mwcc_30_131"
CC_FLAGS = " ".join([
    "-O4,p",                # Optimize maximally for performance
    "-enum int",            # Use int-sized enums
    "-proc arm946e",        # Target processor
    "-gccext,on",           # Enable GCC extensions
    "-fp soft",             # Compute float operations in software
    "-lang c++",
    "-char signed",         # Char type is signed
    "-inline on,noauto",    # Inline only functions marked with 'inline'
    "-Cpp_exceptions off",  # Disable C++ exceptions
    "-gccinc",              # Interpret #include "..." and #include <...> equally
    "-interworking",        # Enable ARM/Thumb interworking
    "-gccdep",
    "-sym on",              # Debug info, including line numbers
    "-nolink",              # Do not link
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
    "-str pool",
    "-enc sjis",
    "-ipa file",
])
LD_FLAGS = " ".join([
    "-proc arm946e",        # Target processor
    "-nostdlib",            # No C/C++ standard library
    "-interworking",        # Enable ARM/Thumb interworking
    "-m Entry",             # Set entry function
    "-map closure,unused",  # Generate map file
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
])
DSD_OBJDIFF_ARGS = " ".join([
    "--scratch",                        # Metadata for creating decomp.me scratches
    f"--compiler {DECOMP_ME_COMPILER}", # decomp.me compiler name
    f'--c-flags "{CC_FLAGS}"',          # decomp.me compiler flags
    "--custom-make ninja",              # Command for rebuilding files
])


# Paths
current_path     = Path(__name__)
root_path        = current_path.parent
build_ninja_path = root_path / "build.ninja"
arm7_bios_path   = root_path / "arm7_bios.bin"
config_path      = root_path / "config"
build_path       = root_path / "build"
src_path         = root_path / "src"
libs_path        = root_path / "libs"
extract_path     = root_path / "extract"
tools_path       = root_path / "tools"
mwcc_root        = args.compiler or tools_path / "mwccarm"
mwcc_path        = mwcc_root / MWCC_VERSION


# Includes
includes = [
    str(root_path / "include")
]
for root, dirs, _ in os.walk(libs_path):
    for dir in dirs:
        if dir == "include":
            includes.append(Path(root) / dir)
CC_INCLUDES = " ".join(f"-i {include}" for include in includes)


# Platform info
platform = get_platform()
if platform is None:
    exit(1)

EXE = platform.exe
WINE = args.wine if platform.system != "windows" else ""
DSD = str(root_path / f"dsd{EXE}")
CC = str(mwcc_path / "mwccarm.exe")
LD = str(mwcc_path / "mwldarm.exe")
PYTHON = sys.executable


def main():
    game_version: str = args.version
    game_config = config_path / game_version
    if not game_config.is_dir():
        print(f"Version '{game_version}' not recognized")
        return

    with build_ninja_path.open("w") as file:
        n = ninja_syntax.Writer(file)

        n.rule(
            name="download_tool",
            command=f'{PYTHON} tools/download_tool.py $tool $tag --path $path'
        )
        n.newline()

        if arm7_bios_path.is_file():
            n.variable("arm7_bios_flag", f"--arm7-bios {arm7_bios_path.relative_to(root_path)}")
        else:
            n.variable("arm7_bios_flag", "")
        n.newline()

        n.rule(
            name="extract",
            command=f"{DSD} rom extract --rom $in --output-path $output_path $arm7_bios_flag"
        )
        n.newline()

        n.rule(
            name="delink",
            command=f"{DSD} delink --config-path $config_path"
        )
        n.newline()

        # -MMD excludes all includes instead of just system includes for some reason, so use -MD instead.
        mwcc_cmd = f'{WINE} "{CC}" {CC_FLAGS} {CC_INCLUDES} $cc_flags -d $game_version -MD -c $in -o $basedir'
        mwcc_implicit = [CC]
        if platform.system != "windows":
            transform_dep = "tools/transform_dep.py"
            mwcc_cmd += f" && $python {transform_dep} $basefile.d $basefile.d"
            mwcc_implicit.append(transform_dep)

        n.rule(
            name="mwcc",
            command=mwcc_cmd,
            depfile="$basefile.d",
        )
        n.newline()

        n.rule(
            name="lcf",
            command=f"{DSD} lcf -c $config_path --lcf-file $lcf_file --objects-file $objects_file"
        )
        n.newline()

        n.rule(
            name="mwld",
            command=f'{WINE} "{LD}" {LD_FLAGS} @$objects_file $lcf_file -o $out'
        )
        n.newline()

        n.rule(
            name="rom_config",
            command=f"{DSD} rom config --elf $in --config $config_path"
        )
        n.newline()

        n.rule(
            name="rom_build",
            command=f"{DSD} rom build --config $in --rom $out $arm7_bios_flag"
        )
        n.newline()
        
        n.rule(
            name="objdiff",
            command=f"{DSD} objdiff --config-path $config_path {DSD_OBJDIFF_ARGS}"
        )
        n.newline()

        n.rule(
            name="m2ctx",
            command=f"{PYTHON} tools/m2ctx.py -f $out $in"
        )
        n.newline()

        n.rule(
            name="sha1",
            command=f"{PYTHON} tools/sha1.py $in -c $sha1_file"
        )
        n.newline()

        game_build = build_path / game_version
        game_extract = extract_path / game_version

        add_download_tool_builds(n)
        add_extract_build(n, game_extract, game_version)
        add_delink_and_lcf_builds(n, game_config, game_build, game_extract)
        add_mwcc_builds(n, game_version, game_build, mwcc_implicit)
        add_mwld_and_rom_builds(n, game_build, game_config, game_version)

def add_download_tool_builds(n: ninja_syntax.Writer):
    n.build(
        rule="download_tool",
        outputs=DSD,
        variables={
            "tool": "dsd",
            "tag": DSD_VERSION,
            "path": DSD,
        },
    )
    n.newline()

    if args.compiler is None:
        n.build(
            rule="download_tool",
            outputs=[CC, LD],
            variables={
                "tool": "mwccarm",
                "tag": "latest",
                "path": tools_path,
            },
        )
        n.newline()

    if platform.system != "windows" and WINE == DEFAULT_WIBO_PATH:
        n.build(
            rule="download_tool",
            outputs=WINE,
            variables={
                "tool": "wibo",
                "tag": WIBO_VERSION,
                "path": WINE,
            },
        )
        n.newline()

def add_extract_build(n: ninja_syntax.Writer, game_extract: Path, game_version: str):
    rom_path = extract_path / f'baserom_{GAME}_{game_version}.nds'
    rom_config = game_extract / 'config.yaml'
    n.build(
        inputs=str(rom_path),
        implicit=DSD,
        rule="extract",
        outputs=str(rom_config),
        variables={
            "output_path": str(game_extract)
        }
    )
    n.newline()


def add_mwld_and_rom_builds(n: ninja_syntax.Writer, game_build: Path, game_config: Path, game_version: str):
    source_object_files = [
        str(game_build / source_file.with_suffix(".o"))
        for source_file in get_c_cpp_files([src_path, libs_path])
    ]
    lcf_file = str(game_build / "linker_script.lcf")
    objects_file = str(game_build / "objects.txt")
    delink_file = str(game_build / "delinks" / "delink.yaml")
    elf_file = str(game_build / "arm9.o")
    n.build(
        inputs=source_object_files + [lcf_file, objects_file, delink_file],
        implicit=LD,
        rule="mwld",
        outputs=elf_file,
        variables={
            "target_dir": game_build,
            "objects_file": objects_file,
            "lcf_file": lcf_file,
        }
    )
    n.newline()

    rom_config_file = str(game_build / "build" / "rom_config.yaml")
    n.build(
        inputs=elf_file,
        implicit=DSD,
        rule="rom_config",
        outputs=rom_config_file,
        variables={
            "config_path": game_config / "arm9" / "config.yaml",
        }
    )
    n.newline()

    rom_file = f"{GAME}_{game_version}.nds"
    n.build(
        inputs=rom_config_file,
        implicit=DSD,
        rule="rom_build",
        outputs=rom_file,
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="phony",
        outputs="rom",
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="sha1",
        variables={
            "sha1_file": str(Path(rom_file).with_suffix(".sha1"))
        },
        outputs="sha1",
    )
    n.newline()

def add_mwcc_builds(n: ninja_syntax.Writer, game_version: str, game_build: Path, mwcc_implicit: list[Path]):
    for source_file in get_c_cpp_files([src_path, libs_path]):
        src_obj_path = game_build / source_file
        cc_flags = []
        if is_cpp(source_file): cc_flags.append("-lang=c++")
        elif is_c(source_file): cc_flags.append("-lang=c")
        n.build(
            inputs=str(source_file),
            implicit=mwcc_implicit,
            rule="mwcc",
            outputs=str(src_obj_path.with_suffix(".o")),
            variables={
                "game_version": game_version,
                "cc_flags": " ".join(cc_flags),
                "basedir": os.path.dirname(src_obj_path),
                "basefile": str(src_obj_path.with_suffix("")),
            },
        )
        n.newline()
        
        extension = source_file.suffix
        ctx_file = str(game_build / source_file.with_suffix(f".ctx{extension}"))
        n.build(
            inputs=str(source_file),
            rule="m2ctx",
            outputs=ctx_file,
        )
        n.newline()


def get_c_cpp_files(dirs: list[Path]):
    for dir in dirs:
        for root, _, files in os.walk(dir):
            root = Path(root)
            for file in files:
                if is_cpp(file) or is_c(file):
                    yield root / file


def is_cpp(name: str):
    return Path(name).suffix in [".cpp"]


def is_c(name: str):
    return Path(name).suffix in [".c"]


def add_delink_and_lcf_builds(n: ninja_syntax.Writer, game_config: Path, game_build: Path, game_extract: Path):
    n.comment("Delink ELF binaries when any delinks.txt file is modified")
    delinks_files = get_config_files(game_config, "delinks.txt")
    relocs_files = get_config_files(game_config, "relocs.txt")
    symbols_files = get_config_files(game_config, "symbols.txt")
    rom_config = str(game_extract / 'config.yaml')
    delinks_path = game_build / "delinks"
    n.build(
        inputs=delinks_files + relocs_files + symbols_files + [rom_config],
        implicit=DSD,
        rule="delink",
        outputs=str(delinks_path / "delink.yaml"),
        variables={
            "config_path": game_config / "arm9" / "config.yaml",
        }
    )
    n.newline()

    n.build(
        inputs=str(delinks_path / "delink.yaml"),
        rule="phony",
        outputs="delink"
    )
    n.newline()

    lcf_file = game_build / "linker_script.lcf"
    objects_file = game_build / "objects.txt"
    n.build(
        inputs=delinks_files + [str(rom_config)],
        implicit=DSD,
        rule="lcf",
        outputs=[str(lcf_file), str(objects_file)],
        variables={
            "config_path": game_config / "arm9" / "config.yaml",
            "lcf_file": lcf_file,
            "objects_file": objects_file,
        }
    )
    n.newline()

    n.build(
        inputs=delinks_files + relocs_files + symbols_files,
        implicit=DSD,
        rule="objdiff",
        outputs="objdiff.json",
        variables={
            "config_path": game_config / "arm9" / "config.yaml",
        }
    )
    n.newline()

    n.build(
        inputs="objdiff.json",
        rule="phony",
        outputs="objdiff",
    )
    n.newline()


def get_config_files(game_config: Path, name: str):
    return [
        f"{root}/{file}"
        for root, _, files in os.walk(game_config)
        for file in files
        if file == name
    ]


if __name__ == "__main__":
    main()
