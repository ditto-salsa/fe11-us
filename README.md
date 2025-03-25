# Fire Emblem: Shadow Dragon

This is a decompilation of *Fire Emblem: Shadow Dragon* (NDS), powered by [`ds-decomp`](https://github.com/AetiasHax/ds-decomp).

It builds the following ROM:

* [**fe11_usa.nds**](https://datomatic.no-intro.org/index.php?page=show_record&s=28&n=3398): `sha1: 7b7b307ef819ac31a7b71aed2e8e47ff23c1765e`

## Setup

### Prerequisites

1. Use one of these platforms:
    - Windows (recommended)
    - Linux
2. Install the following:
    - Python 3.11+ and pip
    - GCC 9+
    - Ninja
3. Install the Python dependencies:
    ```shell
    python -m pip install -r tools/requirements.txt
    ```
4. Run the Ninja configure script:
    ```shell
    python tools/configure.py usa
    ```
5. Put one or more base ROMs in the [`/extract/`](/extract/) directory of this repository.

Now you can run `ninja` to build a ROM for the chosen version. Currently, only the US version is supported.

Running `ninja` again after making any changes to the project (e.g. source files, delinks.txt, etc) should automatically re-run `configure.py` to ensure that all code gets compiled.

> [!NOTE]
> Wibo is used by default. If you want to use Wine instead, run `configure.py` with `-w <path/to/wine>`.

#### Matching the base ROM

**This is optional!** You only need to follow these steps if you want a matching ROM.

First, [extract the ARM7 BIOS from your DS device](https://wiki.ds-homebrew.com/ds-index/ds-bios-firmware-dump). Put the
ARM7 BIOS in the root directory of this repository, and verify that your dumped BIOS matches one of the following:

| File name       | SHA1                                       |
| --------------- | ------------------------------------------ |
| `arm7_bios.bin` | `24f67bdea115a2c847c8813a262502ee1607b7df` |
| `arm7_bios.bin` | `6ee830c7f552c5bf194c20a2c13d5bb44bdb5c03` |

Now, rerun `configure.py` so it can update `build.ninja` to build a matching ROM.

## Contributing

This project uses the object diffing tool [`objdiff`](https://github.com/encounter/objdiff) to track differences between our decompiled C code and the base ROM's code.

1. [Download the latest release.](https://github.com/encounter/objdiff/releases/latest)
1. Run `configure.py usa` and `ninja` to generate `objdiff.json` in the repository root.
1. In `objdiff`, set the project directory to the repository root.
1. Select your source file in the left sidebar.
1. See the list of functions and data to decompile.

## See also

* [**StanHash/fe1**](https://github.com/StanHash/fe1), a disassembly of Fire Emblem: Ankoku Ryu to Hikari no Tsurugi (NES, JP)
* [**ZaneAvernathy/FireEmblem5**](https://github.com/ZaneAvernathy/FireEmblem5), a disassembly of Fire Emblem: Thracia 776 (SFC, JP)
* [**FireEmblemUniverse/fireemblem6j**](https://github.com/FireEmblemUniverse/fireemblem6j), a decompilation of Fire Emblem: Fūin no Tsurugi (GBA, JP)
* [**MokhaLeee/FireEmblem7J**](https://github.com/MokhaLeee/FireEmblem7J), a decompilation of Fire Emblem: Rekka no Ken (GBA, JP)
* [**FireEmblemUniverse/fireemblem8u**](https://github.com/FireEmblemUniverse/fireemblem8u), a decompilation of Fire Emblem: The Sacred Stones (GBA, US)
* [**AetiasHax/ph**](https://github.com/AetiasHax/ph/), a decompilation of The Legend of Zelda: Phantom Hourglass (NDS)
