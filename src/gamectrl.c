#include "global.h"

struct UnkStruct_02196f0c_04_00
{
    u32 unk_00;
    void (*unk_04)(void *, char *);
};

struct UnkStruct_02196f0c_04
{
    struct UnkStruct_02196f0c_04_00 * unk_00;
};

struct UnkStruct_02196f0c_10
{
    STRUCT_PAD(0x00, 0x0D);
    u8 unk_0d;
    STRUCT_PAD(0x0e, 0x10);
    u8 unk_10;
};

struct UnkStruct_02196f0c
{
    u32 unk_00;
    struct UnkStruct_02196f0c_04 * unk_04;
    u32 unk_08;
    u32 unk_0c;
    struct UnkStruct_02196f0c_10 * unk_10;
    u32 unk_14;
};

extern struct UnkStruct_02196f0c * data_02196f0c;

struct UnkStruct_02196f20
{
    STRUCT_PAD(0x000, 0x184);
    u32 unk_184;
    u32 unk_188;
    u32 unk_18c;
    u32 unk_190;
    u32 unk_194;
    u8 unk_198;
    u8 unk_199;
    u8 unk_19a;
    u8 unk_19b;
    s8 unk_19c;
};

extern struct UnkStruct_02196f20 * data_02196f20;

// Forward declarations
extern void func_02021b28(void);
extern void func_02021c84(void);
extern void func_02022f28(u32 param_1);

void func_020219a4(int param_1, int param_2)
{
    func_020210d0(data_02196f0c->unk_00, param_1);
    func_02024c80();
    func_02024d8c();
    func_0203fb68();
    func_02040f28();
    func_02041234();
    func_0200c888();

    if (param_1 == 0)
    {
        func_02003f88();
    }

    func_020494a0(data_02196f0c->unk_04, "gf_canceled", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_gameover", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_complete", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved2", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved3", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved4", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved5", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved6", 0);

    func_02021b28();
    func_02021c84();
    func_020424b8("RegistGrobalFlags");

    if (param_2 != 0)
    {
        return;
    }

    data_02196f20->unk_198 = func_02025060();

    return;
}

void func_02021b00(void)
{
    func_020219a4(0, 0);
    return;
}

void func_02021b14(void)
{
    func_020219a4(1, 0);
    return;
}

void func_02021b28(void)
{
    func_020494a0(data_02196f0c->unk_08, "os_BraveSword", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveLance", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveAxe", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveBow", 0);
    func_020494a0(data_02196f0c->unk_08, "os_Wato", 0);
    func_020494a0(data_02196f0c->unk_08, "os_MasterProof", 0);
    func_020494a0(data_02196f0c->unk_08, "os_LongBow", 0);
    func_020494a0(data_02196f0c->unk_08, "os_EmpyreadWhip", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved1", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved2", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved3", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved4", 0);

    return;
}

void func_02021c84(void)
{
    func_02049a2c(data_02196f0c->unk_08, "os_BraveSword", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveLance", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveAxe", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveBow", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_Wato", 5);
    func_02049a2c(data_02196f0c->unk_08, "os_MasterProof", 0xf);
    func_02049a2c(data_02196f0c->unk_08, "os_LongBow", 5);
    func_02049a2c(data_02196f0c->unk_08, "os_EmpyreadWhip", 3);
    return;
}

extern vu32 data_027e1264;

void func_02021d70(void)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    if (data_02196f0c->unk_0c & 0x2000000)
    {
        return;
    }

    iVar4 = data_027e1264;
    iVar2 = iVar4 - data_02196f20->unk_18c;

    iVar1 = 0x7fffffff;
    if (data_02196f20->unk_184 <= 0x7fffffff - iVar2)
    {
        iVar1 = data_02196f20->unk_184 + iVar2;
    }

    data_02196f20->unk_184 = iVar1;
    data_02196f20->unk_18c = iVar4;

    return;
}

extern char * data_02196f14;

void func_02021dd4(void)
{
    data_02196f14 = (char *)func_020211b8();

    if (data_02196f14[0] == 'b' && data_02196f14[1] == 'm' && data_02196f14[2] == 'a' && data_02196f14[3] == 'p')
    {
        data_02196f14 += 4;
    }
    else
    {
        data_02196f14++;
    }

    if (func_02039e7c(data_02196f14))
    {
        func_02039eac(data_02196f14);
    }
    else
    {
        data_02196f14 = NULL;
    }

    func_020211b8();
    func_02042460();
    func_020424b8("RegistLocalFlags");
    func_020484b0();

    return;
}

void func_02021e6c(void)

{
    func_020485d0();
    func_020424ac();
    func_02049528(data_02196f0c->unk_04);
    data_02196f0c->unk_04->unk_00->unk_04(data_02196f0c->unk_04, "gf_complete");
    data_02196f0c->unk_04->unk_00->unk_04(data_02196f0c->unk_04, "gf_gameover");

    func_02049528(data_02196f0c->unk_08);

    if (data_02196f14 == NULL)
    {
        return;
    }

    func_02039f00(data_02196f14, 0);
    data_02196f14 = NULL;

    return;
}

void func_02021f08(struct Proc * param_1)
{
    if (func_0201f690())
    {
        return;
    }

    Proc_Break(param_1, 1);

    return;
}

extern u32 data_020e3ca0;

void func_02021f2c(struct Proc * param_1)
{
    if (func_020020e0(data_020e3ca0))
    {
        return;
    }

    Proc_Break(param_1, 1);

    return;
}

// #func_02021f5c

struct UnkStruct_02196f10
{
    STRUCT_PAD(0x00, 0x04);
    s8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    STRUCT_PAD(0x13, 0x17);
    u8 unk_17;
};

extern struct UnkStruct_02196f10 * data_02196f10;

void func_0202214c(u32 param_1)
{
    struct Unit ** pUnitStack;
    struct Unit * unit;

    func_02047708("MapBegin", param_1);

    if (!(data_02196f0c->unk_0c & 0x10000))
    {
        return;
    }

    pUnitStack = func_02040c98(data_02196f10->unk_06);
    unit = *pUnitStack;

    if (unit == NULL)
    {
        return;
    }

    func_ov000_021a4e84(data_ov000_021e3328->unk_00, unit->xPos, unit->yPos, 1);

    return;
}

struct UnkStruct_021e3528
{
    STRUCT_PAD(0x00, 0x2F);
    u8 unk_2f;
};

extern struct UnkStruct_021e3528 data_ov000_021e3528;

void func_020221bc(void)
{
    data_ov000_021e3528.unk_2f = 1;
    data_02196f20->unk_188 = data_02196f20->unk_184;
    return;
}

struct UnkStruct_021974fc
{
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
};

extern struct UnkStruct_021974fc * data_021974fc;

void func_020221e4(void)
{
    if (data_021974fc == 0)
    {
        data_021974fc = (struct UnkStruct_021974fc *)func_02011574(0x1c);
    }

    func_0204a9e0(data_02196f20->unk_19b);
    func_0204abe4();
    func_0204bbb4(0);

    if (!(((data_02196f20->unk_19c >= 0) ? TRUE : FALSE) & 0xFF))
    {
        return;
    }

    func_0205038c(data_02196f20->unk_19c, -1);

    return;
}

extern struct Unit * gUnitList;

void func_0202225c(void)
{
    struct Unit * iVar1;
    int uVar2;

    func_0204b790();

    uVar2 = data_ov000_021e3328->unk_28[data_ov000_021e3328->unk_10->unk_08 | data_ov000_021e3328->unk_10->unk_09 << 5];

    if (uVar2 == 0)
    {
        iVar1 = NULL;
    }
    else
    {
        iVar1 = gUnitList + uVar2 - 1;
    }

    func_0204e1a4(iVar1, 0, 1);
    func_0204eab8(data_ov000_021e3328->unk_10->unk_08, data_ov000_021e3328->unk_10->unk_09, 0);
    func_0204f6d0();

    func_0204ad38(data_02196f20->unk_19b, 0, 0);

    if (!(((data_02196f20->unk_19c >= 0) ? TRUE : FALSE) & 0xFF))
    {
        return;
    }

    func_0205038c(data_02196f20->unk_19c, -1);

    return;
}

struct UnkStruct_02196f1c
{
    STRUCT_PAD(0x00, 0x09);
    u8 unk_09;
};

extern struct UnkStruct_02196f1c * data_02196f1c;

void func_02022324(void)
{
    data_02196f1c->unk_09 = data_02196f0c->unk_10;

    if (!(data_02196f0c->unk_0c & 0x40))
    {
        return;
    }

    func_02022f28(7);

    return;
}

void func_02022364(u32 param_1)
{
    if (data_02196f0c->unk_0c & 0x40)
    {
        return;
    }

    if (!func_020377e8("SallyTalk"))
    {
        return;
    }

    func_02039eac("suppliance");
    func_02047708("SallyTalk", param_1);

    return;
}

void func_020223b4(void)
{
    func_02039f00("suppliance", 1);
    return;
}

void func_020223cc(u32 param_1)
{
    data_021974fc->unk_00 = 0;
    data_021974fc->unk_08 = 0;

    if (!func_020377e8("Opening"))
    {
        return;
    }

    func_02047708("Opening", param_1);

    return;
}

struct Unknown_020efcc8_unk_a8_unk_00
{
    STRUCT_PAD(0x00, 0x28);
    void (*unk_28)(void *, u32, u32, u32);
    STRUCT_PAD(0x2C, 0x38);
    void (*unk_38)(void *, u32);
    void (*unk_3c)(void *, u32, u32, u32);
    STRUCT_PAD(0x40, 0x6c);
    void (*unk_6c)(void *, u32);
};

struct Unknown_020efcc8_unk_a8
{
    struct Unknown_020efcc8_unk_a8_unk_00 * unk_00;
};

struct Unknown_020efcc8
{
    STRUCT_PAD(0x00, 0xA4);
    struct Unknown_020efcc8_unk_a8 * unk_a4;
    struct Unknown_020efcc8_unk_a8 * unk_a8;
};

extern struct Unknown_020efcc8 * data_020efcc8;

void func_02022414(void)
{
    data_020efcc8->unk_a4->unk_00->unk_6c(data_020efcc8->unk_a4, 0x7f);
    data_020efcc8->unk_a8->unk_00->unk_6c(data_020efcc8->unk_a8, 0x7f);
    return;
}

void func_02022458(void)
{
    if (!(data_02196f0c->unk_0c & 0x800))
    {
        return;
    }

    func_02022f28(10);

    return;
}

void func_02022480(void)
{
    data_021974fc->unk_00 = 0;
    data_021974fc->unk_08 = 0;

    func_0203fc88();

    return;
}

void func_020224a8(u32 param_1)
{
    if (!func_020377e8("Ending"))
    {
        return;
    }

    func_02047708("Ending", param_1);

    return;
}

void func_020224d4(void)
{
    data_020efcc8->unk_a4->unk_00->unk_38(data_020efcc8->unk_a4, 0x10);
    return;
}

void func_020224fc(void)
{
    data_02196f20->unk_19b = data_021974fc->unk_10;
    data_02196f20->unk_19c = 0xff;
    func_0204ac00();

    func_020115a4(data_021974fc);
    data_021974fc = NULL;

    return;
}

void func_0202254c(u32 param_1)
{
    func_02047708("MapEnd", param_1);
    return;
}

void func_02022564(void)
{
    func_020115a4(data_ov000_021e3324.unk_00);
    data_ov000_021e3324.unk_00 = NULL;
    return;
}

// #func_02022588

void func_0202272c(u32 param_1)
{
    func_02047708("ChapterNext", param_1);

    if ((data_02196f0c->unk_0c & 1) == 0)
    {
        if ((data_02196f0c->unk_0c & 0x800) == 0)
        {
            data_02196f0c->unk_0c |= 1;
        }

        data_02196f1c->unk_09 = 0;
    }

    data_02196f0c->unk_0c &= ~0x100;
    data_02196f0c->unk_0c &= ~0x200;
    data_02196f0c->unk_0c &= ~0x800;
    data_02196f0c->unk_0c &= ~0x1000;
    data_02196f0c->unk_0c &= ~0x400;
    data_02196f0c->unk_0c &= ~0x4000;
    data_02196f0c->unk_0c &= ~0x20000;
    data_02196f0c->unk_0c &= ~0x100000;

    data_02196f20->unk_194 = func_0201ffc0();

    return;
}

void func_02022814(void)
{
    if (func_0200f2f8(10))
    {
        func_0200f24c(10);
    }

    if (func_0200f2f8(11))
    {
        func_0200f24c(11);
    }

    return;
}

void func_0202284c(u32 param_1)
{
    switch (data_02196f10->unk_04)
    {
        case 0:
            func_ov003_021e42c8(param_1, 0);
            break;

        case 1:
            func_ov003_021e4310(param_1, 0);
            break;

        case 2:
            func_ov003_021e4354(param_1, 0);
            break;

        case 3:
            func_02022f28(0x23);
            break;
    }

    return;
}

void func_020228ac(u32 param_1)
{
    switch (data_02196f10->unk_04)
    {
        case 0:
            func_ov003_021e42c8(param_1, 1);
            break;

        case 2:
            func_ov003_021e4354(param_1, 1);
            break;
    }

    return;
}

// TODO: Figure out inline
inline BOOL func_02022988(void)
{
    return data_02196f10->unk_04 == 1 ? TRUE : FALSE;
}

void func_020228ec(u32 unused)
{
    if (data_02196f10->unk_04 != 3)
    {
        data_02196f0c->unk_0c |= 0x20;
    }

    data_02196f0c->unk_0c |= 0x10000;
    data_02196f0c->unk_0c |= 0x4000;
    data_02196f0c->unk_0c |= 1;

    if (func_02022988())
    {
        func_0202118c();
        return;
    }

    func_02021178(0);

    return;
}

// TODO: Figure out inline
// #func_02022988

void func_020229a8(void)
{
    switch (data_02196f10->unk_04)
    {
        case 0:
            func_0200f20c(10);
            break;

        case 1:
        case 2:
            func_0200f20c(11);
            break;

        case 3:
            break;

        default:
            break;
    }

    return;
}

// #func_020229f0

// TODO: Inlines
// #func_02022b10

inline BOOL func_02022b30(void)
{
    return data_02196f10->unk_04 == 3 ? TRUE : FALSE;
}

// #func_02022b50

// #func_02022b70

void func_02022bb0(u32 param_1)
{
    u32 uVar1;

    if (!func_02022b30())
    {
        if (data_02196f10->unk_08 != 0)
        {
            return;
        }

        func_020146a0();
        func_02012bbc();
        func_02012680(param_1);

        uVar1 = data_02196f10->unk_04;
        func_02021b14();
        data_02196f10->unk_04 = uVar1;

        func_020228ec(param_1);
        func_02022f28(0x1e);

        data_020efcc8->unk_a4->unk_00->unk_3c(data_020efcc8->unk_a4, 0x10, 0x48, 0);
    }

    func_0201ffd0();

    return;
}

void func_02022c54(u32 param_1)
{
    func_020240a0(&data_02196f0c->unk_10->unk_0d, param_1);
    return;
}

void func_02022c78(u32 param_1)
{
    func_020240a0(&data_02196f0c->unk_10->unk_10, param_1);
    data_02196f0c->unk_0c |= 4;
    return;
}

void func_02022cb0(u32 param_1)
{
    func_020240a0(11, param_1);
    data_02196f0c->unk_0c |= 4;
    return;
}

void func_02022cdc(u32 param_1)
{
    if (!func_0201f760(11))
    {
        return;
    }

    func_0202437c(param_1);

    return;
}

// #func_02022d00

void func_02022db8(void)
{
    func_020ad244(4);
    return;
}

void func_02022dc8(void)
{
    func_020ad244(0x14);
    return;
}

void func_02022dd8(void)
{
    if (!func_0201f6a0())
    {
        return;
    }

    func_02039e10("MBackup_LoadError");
    func_0201f8a0();

    return;
}

void func_02022dfc(void)
{
    func_02021790(data_02196f10);
    return;
}

void func_02022e14(void)
{
    func_02021430(data_02196f10, 0, 0);
    return;
}

BOOL func_02022e34(void)
{
    return data_02196f0c->unk_14 == 1 ? TRUE : FALSE;
}

void func_02022e54(void)
{
    data_02196f10->unk_09 = 1;
    data_02196f10->unk_0c = 300;
    data_02196f10->unk_0a = 10;
    data_02196f10->unk_0b = 1;
    data_02196f10->unk_10 = 0;
    data_02196f10->unk_11 = 0;
    data_02196f10->unk_12 = 0;
    data_02196f10->unk_17 = 0;
    data_02196f10->unk_08 = 0;

    return;
}

extern u32 data_020efcb4;

BOOL func_02022eb8(void)
{
    return data_020efcb4 == 2 ? TRUE : FALSE;
}

BOOL func_02022ed4(void)
{
    return data_02196f0c->unk_14 == 2 ? TRUE : FALSE;
}

BOOL func_02022ef4(void)
{
    return data_020efcb4 == 1 ? TRUE : FALSE;
}

extern struct ProcCmd data_020cec44[];

void func_02022f10(void)
{
    Proc_Start(data_020cec44, 9);
    return;
}

void func_02022f28(u32 param_1)
{
    Proc_Goto(Proc_Find(data_020cec44), param_1, 0);
    return;
}
