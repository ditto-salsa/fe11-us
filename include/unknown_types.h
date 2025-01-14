#ifndef UNKNOWN_TYPES_H
#define UNKNOWN_TYPES_H

#include "global.h"
#include "types.h"

struct UnkStruct_Func_2000C7C {
    STRUCT_PAD(0x0000, 0x0854);

    /* 0854 */ s8 * unk_0854;
    /* 0858 */ void * unk_0858;
    /* 085C */ void * unk_085C;
    /* 0860 */ void * unk_0860;

    STRUCT_PAD(0x0864, 0x086E);

    /* 086E */ u8 unk_086E;
    /* 086F */ u8 unk_086F;
    /* 0870 */ u8 unk_0870;
    /* 0871 */ u8 unk_0871;
    /* 0872 */ u8 unk_0872;
    /* 0873 */ u8 unk_0873;
    /* 0874 */ u8 unk_0874;

    STRUCT_PAD(0x0875, 0x0878);

    /* 0878 */ s8 unk_0878[0x400];
    /* 0C78 */ s8 unk_0C78[0x400];
    /* 1078 */ s8 unk_1078[0x80];
    /* 10F8 */ s8 unk_10F8[0x80];
};

struct UnkStruct_02197254_20_08 {
	s8 * unk_00;
	s8 * unk_04;
};

struct UnkStruct_02197254_20 {
	STRUCT_PAD(0x00, 0x08);

	struct UnkStruct_02197254_20_08 unk_08[0x10]; // amt idk
};

struct UnkStruct_02197254 {
	STRUCT_PAD(0x00, 0x20);

	/* 00 */ struct UnkStruct_02197254_20 * unk_20;
};

struct UnkStruct_021E3328_00_04 {
    /* 00 */ struct Unit * unk_00;
};

struct UnkStruct_021E3328_10
{
    STRUCT_PAD(0x00, 0x08);
    u8 unk_08;
    u8 unk_09;
};

struct UnkStruct_021E3328 {
    /* 00 */ int unk_00;
    /* 04 */ struct UnkStruct_021E3328_00_04 * unk_04;
    /* 08 */ struct UnkStruct_Func_2000C7C * unk_08;

    STRUCT_PAD(0x0C, 0x10);
    struct UnkStruct_021E3328_10 * unk_10;
    STRUCT_PAD(0x14, 0x20);

    /* 20 */ u16 unk_20;
    /* 22 */ u16 unk_22;
    /* 24 */ u8 unk_24;
    /* 25 */ u8 unk_25;
    /* 26 */ u8 unk_26;
    /* 27 */ u8 unk_27;
    /* 28 */ u8 unk_28[0x80]; // idk

	STRUCT_PAD(0xA8, 0x828);

	/* 0828 */ u8 * unk_0828; // idk
};

struct UnkStruct_021E3324_00
{
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 03 */ u16 unk_04;
    /* 03 */ u16 unk_06;
    /* 03 */ u32 unk_08;
    /* 03 */ u32 unk_0c;
    /* 03 */ u32 unk_10;
    /* 03 */ u8 unk_14;
    /* 03 */ u8 unk_15;
    /* 03 */ u8 unk_16;
    /* 03 */ u8 unk_17;
    /* 03 */ u8 unk_18[4];
    u8 unk_1c;
};

struct UnkStruct_021E3324
{
    struct UnkStruct_021E3324_00 * unk_00;
};

struct UnkStruct_Func_2000D2C {
    /* 00 */ u8 unk_00[0x42];
    /* 42 */ s8 unk_42;
    /* 43 */ s8 unk_43;

    STRUCT_PAD(0x44, 0x46);

    /* 46 */ u8 unk_46;
    /* 47 */ u8 unk_47;
    /* 48 */ s8 unk_48;
};

struct Unknown_func_01ffb934_ret
{
    STRUCT_PAD(0x00, 0x6C);
    /* 6C */ u32 unk_6c;
};

struct TerrainData
{
    s8 * unk_00;
    s8 * unk_04;
    s8 * unk_08;
    s8 * unk_10;
};

struct DBFE11Footer
{
    u32 pidTableLength;
    u32 jidTableLength;
    u32 iidTableLength;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

// FE11 Database, in RAM
struct Unknown_02197254
{
    void * unk_00;
    void * unk_04;
    /* 08 */ struct PersonData * pPerson;
    /* 0C */ struct JobData * pJob;
    /* 10 */ struct ItemData * pItem;
    STRUCT_PAD(0x14, 0x20);
    /* 20 */ struct TerrainData * pTerrain;
    STRUCT_PAD(0x24, 0x2C);
    /* 2C */ u8 * pWeaponLevel;
    STRUCT_PAD(0x30, 0x48);
    /* 48 */ struct DBFE11Footer * pDBFE11Footer;
};

#endif // UNKNOWN_TYPES_H
