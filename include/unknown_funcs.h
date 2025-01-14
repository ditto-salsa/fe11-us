#ifndef UNKNOWN_FUNCS_H
#define UNKNOWN_FUNCS_H

#include "types.h"
#include "unknown_types.h"

#include "proc.h"
#include "unit.h"

extern void func_01ff8000(void * unk1, u8 a, u8 b, s32 c, u8 d, s32 e);
extern void * func_01ffb934(void *, s32);

extern int func_020016e8(struct UnkStruct_Func_2000D2C * unk1, struct Unit * unit, int a, int b);
extern int func_02001770(struct UnkStruct_Func_2000D2C * buf, int a, int b);
extern int func_02001820(struct UnkStruct_Func_2000D2C * buf, int a, int b, int c);
extern int func_02001bac(struct UnkStruct_Func_2000D2C * buf, int a);
extern BOOL func_0201f6a0(void);
extern void func_0201f8a0(void);

extern void func_02002058(struct UnkStruct_020e3ca0 *);
extern BOOL func_020020e0(struct UnkStruct_020e3ca0 *);

extern void func_02003f88(void);

extern void func_020076a8(void);

extern void func_0200c888(void);

extern void func_0200ef04(void);
extern void func_0200f028(void);
extern void func_0200f04c(void);

extern void LoadOverlay(u32 overlayId);
extern void UnloadOverlay(u32 overlayId);
extern void func_0200f28c(u32 arg_0);
extern BOOL IsOverlayLoaded(u32 overlayId);

extern void * func_02011574(s32);
extern void func_020115a4(void *);
extern void func_02012bbc(void);
extern void func_02012680(void *);
extern void func_020146a0(void);
extern void func_02015f64(void);
extern void func_02018f54(struct Proc *, void *);

extern void func_0201d728(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d778(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d7c8(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d814(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d860(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d8b0(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d900(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d950(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d9a0(struct Proc * proc, u16 data, u32 flag);
extern void func_0201d9f4(struct Proc * proc, u16 data, u32 flag);
extern void func_0201da48(struct Proc * proc, u16 data, u32 flag);
extern void func_0201da98(struct Proc * proc, u16 data, u32 flag);

extern BOOL func_0201f690(void);
extern BOOL func_0201f760(s32);
extern s32 func_0201ffc0(void);
extern void func_0201ffd0(void);

extern s32 RollRN(s32, s32);

extern void func_020210d0(struct UnkStruct_02196f0c_00 *, s32);
extern void func_02021014(void);
extern void func_02021178(s32);
extern void func_0202118c(void);
extern char * GetBattleMapNameMaybe(void);
extern void func_02021430(struct UnkStruct_02196f10 *, s32, s32);
extern void func_02021790(struct UnkStruct_02196f10 *);

extern void StartGame(void);

extern void func_020240a0(s32, void *);
extern void func_0202437c(void *);
extern void func_0202454c(s32, s32, s32);
extern void func_02024c74(void);
extern void func_02024c80(void);
extern void func_02024d28(void);
extern void func_02024d8c(void);
extern void func_02024e70(void);
extern void func_02024f34(void);
extern s32 func_02025060(void);
extern void func_0202511c(void);
extern void func_02025344(void);
extern void func_02028c68(void);

extern void func_020355e4(void);

extern void func_02037a04(struct Unknown_02197254 *);
extern void func_020377c8(void);
extern BOOL func_020377e8(char *);
extern struct JobData * func_02037c5c(const char *);

extern s32 func_02038108(struct UnkStruct_02196f0c_00 *);

extern s32 func_02039088(struct Unit * unit, int b, int c, int d, int e, int f, int g);
extern const char * func_02039e10(const char *);
extern BOOL func_02039e7c(char *);
extern void func_02039eac(const char *);
extern void func_02039f00(char *, s32);

extern void func_0203bd34(struct Unit *, s32, s32);
extern void func_0203c19c(struct Unit *);
extern s32 GetUnitMaxHp(struct Unit * unit);
extern s32 GetUnitMag(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c6c0(struct Unit * unit, u32 arg_1, struct ItemData * item, s32 arg_3);
extern s32 func_0203c77c(struct Unit * unit);
extern s32 func_0203c7ac(struct Unit * unit, u32 arg_1);
extern s32 func_0203c7e4(struct Unit * unit, u32 arg_1);
extern s32 CheckUnitAttribute(struct Unit * unit, int attribute);
extern BOOL func_0203c834(struct Unit * unit, struct ItemData * item, s32 arg_2);
extern s32 GetUnitEquippedWeaponSlot(struct Unit * unit);
extern struct ItemData * GetItemData(struct Item *);
extern void func_0203e02c(struct Item *);
extern void func_0203fafc(void);
extern void func_0203fb68(void);
extern void func_0203fc88(void);

s32 func_02040c74(struct Unit **);
void func_02040cb0(struct Unit **, s32, s32);
void func_02040f5c(struct Item *);
struct Unit ** func_02040c98(s32);
extern void func_02040eec(void);
extern void func_02040f28(void);
extern void func_020411e8(void);
extern void func_02041234(void);
extern void func_02041458(void);
extern s32 func_02041928(void);
extern void func_020421c4(struct Unit *, s32);
extern void func_020423fc(void);
extern void func_02042420(const char *);
extern void func_02042460(char *);
extern void func_020424ac(void);
extern void func_020424b8(const char *);
extern void func_02047708(char *, void *);
extern void func_020476a0(void);
extern void func_020484b0(void);
extern void func_020485d0(void);
extern void func_0204939c(s32, s32);
extern void func_020494a0(struct UnkStruct_02196f0c_04 *, const char *, s32);
extern void func_02049528(struct UnkStruct_02196f0c_04 *);
extern void func_02049a2c(struct UnkStruct_02196f0c_04 *, const char *, s32);
extern void func_0204a9e0(s32);
extern void func_0204abe4(void);
extern void func_0204ac00(void);
extern void func_0204ad38(s32, s32, s32);
extern void func_0204b790(void);
extern void func_0204bbb4(s32);
extern void func_0204e1a4(struct Unit *, s32, s32);
extern void func_0204eab8(s32, s32, s32);
extern void func_0204f6d0(void);

extern void func_0205038c(s32, s32);

extern void func_0206ecbc(void);

extern void func_020a3080(void *, void *, void *, void *, s32, s32);
extern BOOL func_020a3350(void *);
extern void func_020a341c(void *);
extern void func_020a36ac(void (*)(void *, void *));
extern void func_020a374c(void *, void (*)(void *));

extern void func_020a5824(void * buf, int a, int b);

extern void func_020ad244(int a);

// Overlay 000:

extern BOOL func_ov000_021a47e4(void);
extern BOOL func_ov000_021a4e84(s32, s32, s32, s32);

// Overlay 002:

extern void func_ov002_021e69ac(void);

// Overlay 003:

extern void func_ov000_021a9714(void *);
extern void func_ov003_021e3610(void *);
extern void func_ov003_021e4204(void *);
extern void func_ov003_021e4244(void *);
extern void func_ov003_021e4284(void *);
extern void func_ov003_021e42c8(void *, s32);
extern void func_ov003_021e4310(void *, s32);
extern void func_ov003_021e4354(void *, s32);
extern void func_ov003_021e439c(void *);
extern void func_ov003_021eb9b0(void *);
extern void func_ov003_021ebb8c(void *);
extern void func_ov003_021ed664(void *);
extern void func_ov003_021edf2c(void *);
extern void func_ov003_021f049c(void *);
extern void func_ov003_021f24e4(void *);
extern void func_ov003_021f31f0(void *);
extern void func_ov003_021f4a84(void *);
extern void func_ov003_021f6ce8(void *);
extern void func_ov003_021f9470(void *);
extern void func_ov003_021fb690(void *);
extern void func_ov003_021fb704(void *);
extern void func_ov003_021fc0d4(void *);

// Overlay 005:

extern void func_ov005_022052d0(void *);

// Overlay 006:

extern void func_ov006_0221776c(void *);
extern void func_ov006_0221bdbc(void *);
extern void func_ov006_02221aec(void *);
extern void func_ov006_022226cc(void *);

// Overlay 007:

extern void func_ov007_02218284(void *);
extern void func_ov007_0221ad60(void *);

// Overlay 009:

extern void func_ov009_02204e10(void *);
extern void func_ov009_02206020(void *);
extern void func_ov009_022065a0(void *);

#endif // UNKNOWN_FUNCS_H
