#ifndef UNKNOWN_FUNCS_H
#define UNKNOWN_FUNCS_H

#include "types.h"
#include "unknown_types.h"

#include "proc.h"
#include "unit.h"

extern void func_01ff8000(void * unk1, u8 a, u8 b, s32 c, u8 d, s32 e);
extern void func_01ff8d88(void *, struct Unit *, s32, s32, s32, s32);
extern void func_01ff8db8(void *, struct Unit *, s32, s32, s32, s32);
extern void func_01ff9300(void *, s32, s32, s32, s32);
extern void * func_01ffb934(void *, s32);

extern void func_02000d14(struct UnkStruct_Func_2000C7C * buf, s32 a);

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
extern void func_020115bc(void *);
extern void func_020115a4(void *);
extern s32 func_02012190(void);
extern BOOL func_02012298(void);
extern void func_02012680(void *);
extern void func_02012b64(void *, s32);
extern void func_02012bbc(void);
extern void func_020146a0(void);
extern BOOL func_02014b20(ProcPtr, s32);
extern void func_02015f64(void);
extern BOOL func_02016250(s32);
extern void func_02018f54(struct Proc *, void *);

extern s32 func_0201bce4(void);
extern s32 func_0201bcf4(void);

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
extern u32 func_0201ffd0(void);

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

extern s32 func_020295ec(u16 *, char *, u32, u32, u32, u32, u32, u32, u32, u32);
extern void func_02029850(u16 *, s32, u32, u32, u32, u32, u32, u32, u32);

extern void func_020302e0(void *);
extern void func_020303bc(void *, char *, u32 *, ProcPtr, s32, s32);

extern void func_020355e4(void);
extern s32 func_020357e8(void);
extern void * func_02035b98(void *);
extern char * GetEventStr(void *, u16);
extern void func_02035c7c(void *, s32);
extern void func_02035dc4(void *, void *);
extern void func_02035e5c(void *, void *);
extern void func_02035f20(void *);

extern void func_020377c8(void);
extern BOOL func_020377e8(char *);
extern void * func_02037800(char *);
extern void func_02037a04(struct Unknown_02197254 *);
extern struct PersonData * GetPersonByPidStr(char *);
extern struct JobData * GetJobByJidStr(char *);
extern s32 func_02037fd8(struct JobData *);

extern s32 func_02038108(struct UnkStruct_02196f0c_00 *);
extern s32 func_0203826c(void *, u8);
extern s32 func_02038348(struct ItemData *);
extern s32 GetItemMaxRange(struct ItemData *, struct Unit *);

extern s32 func_02039088(struct Unit * unit, int b, int c, int d, int e, int f, int g);
extern char * func_02039e10(char *);
extern BOOL func_02039e7c(char *);
extern void func_02039eac(char *);
extern void func_02039f00(char *, s32);
extern void func_02039f40(char *, s32);

extern void func_0203a728(struct Unit *, struct PersonData *, struct JobData *, s32);
extern void func_0203a94c(struct Unit *);

extern void func_0203bd34(struct Unit *, s32, s32);
extern void func_0203c19c(struct Unit *);
extern s32 GetUnitMaxHp(struct Unit * unit);
extern s32 GetUnitMag(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c480(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c610(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c660(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c6c0(struct Unit * unit, u32 arg_1, struct ItemData * item, s32 arg_3);
extern s32 func_0203c77c(struct Unit * unit);
extern s32 func_0203c7ac(struct Unit * unit, u32 arg_1);
extern s32 func_0203c7e4(struct Unit * unit, u32 arg_1);
extern s32 CheckUnitAttribute(struct Unit * unit, int attribute);
extern BOOL func_0203c834(struct Unit * unit, struct ItemData * item, s32 arg_2);
extern s32 GetUnitEquippedWeaponSlot(struct Unit * unit);
extern struct ItemData * GetItemData(struct Item *);
extern s32 func_0203dbd4(struct Unit *, s32, s32);
extern void func_0203dd48(struct Unit *);
extern void func_0203de10(struct Unit *);
extern void func_0203e02c(struct Item *);
extern void func_0203e008(struct Item *, u8);
extern void func_0203e040(struct Item *, struct Item *);
extern void func_0203fafc(void);
extern struct Unit * func_0203fcb8(s32);
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
extern BOOL func_020424b8(char *);

extern void RegisterEventFunctions(void);
extern BOOL func_02047708(char *, void *);
extern void func_020476a0(void);
extern BOOL func_020479b0(void);
BOOL TryStartVisitEvent(ProcPtr parent, u32 arg_1, u32 arg_2, u32 arg_3);

extern void func_020484b0(void);
extern void func_020485d0(void);
extern void func_02049024(void *, ProcPtr);
extern s32 func_020492f4(struct UnkStruct_02196f0c_04 *, char *);
extern BOOL func_02049350(struct UnkStruct_02196f0c_04 *, u32);
extern BOOL func_02049370(struct UnkStruct_02196f0c_04 *, char *);
extern void func_0204939c(struct UnkStruct_02196f0c_04 *, u32);
extern void func_020493b8(struct UnkStruct_02196f0c_04 *, char *);
extern void func_020494a0(struct UnkStruct_02196f0c_04 *, char *, s32);
extern void func_02049528(struct UnkStruct_02196f0c_04 *);
//extern void func_02049a2c(struct UnkStruct_02196f0c_04 *, char *, s32);
extern void func_0204a9e0(s32);
extern void func_0204abe4(void);
extern BOOL func_0204b1f8(u32);
extern void func_0204ac00(void);
extern void func_0204ac18(ProcPtr);
extern void func_0204aca8(ProcPtr);
extern BOOL func_0204ad38(s32, s32, s32);
extern void func_0204ae60(s32, s32);
extern void func_0204ae9c(u32, BOOL);
extern void func_0204b194(s32, s32);
extern void func_0204b1e0(ProcPtr);
extern BOOL func_0204b260(u32);
extern void func_0204b39c(ProcPtr);
extern void func_0204b3b8(ProcPtr);
extern void func_0204b3d4(ProcPtr);
extern void func_0204b40c(ProcPtr);
extern void func_0204b790(void);
extern void func_0204bbb4(s32);
extern void func_0204e1a4(struct Unit *, s32, s32);
extern void func_0204eab8(s32, s32, s32);
extern void func_0204eb24(void);
extern void func_0204f6d0(void);

extern void func_0205038c(s32, s32);
extern BOOL func_02050474(void);
extern void func_02054870(struct Unit *, ProcPtr);
extern void func_02055224(struct Unit *, ProcPtr);
extern void func_02055ab0(struct Unit *, ProcPtr);
extern void func_0205633c(void);
extern BOOL func_020563fc(void);
extern void func_0205e138(struct Unit *, ProcPtr);

extern void func_02062a54(u32);
extern void func_02067510(void);
extern void func_0206ecbc(void);

extern void func_020a3080(void *, void *, void *, void *, s32, s32);
extern BOOL func_020a3350(void *);
extern void func_020a341c(void *);
extern void func_020a36ac(void (*)(void *, void *));
extern void func_020a374c(void *, void (*)(void *));

extern void func_020a5780(void *, void *, s32);
extern void func_020a5824(void * buf, int a, int b);

extern void func_020a8f40(char *);

extern void * func_020c3bfc(s32, s32, s32, s32, s32);

extern void func_020ad244(int a);

// Overlay 000:

extern void func_ov000_021a340c(void);
extern void func_ov000_021a3498(struct Unit *, s32, s32, s32);
extern void func_ov000_021a354c(struct Unit *, s32, s32);
extern BOOL func_ov000_021a35a0(void);
extern void func_ov000_021a378c(void);
extern BOOL func_ov000_021a37b4(void);
extern void func_ov000_021a38b4(void);
extern void func_ov000_021a3c20(u8 *, s32, struct Unit *);
extern void func_ov000_021a3c84(u8 *, s32, s32, s32, s32, s32, void *, s32);
extern BOOL func_ov000_021a3da0(struct Unit *);
extern void func_ov000_021a3ee4(struct Unit *, s32);
extern void func_ov000_021a43e8(void);
extern void func_ov000_021a4694(void);
extern void func_ov000_021a46b8(void);
extern BOOL func_ov000_021a471c(void);
extern BOOL func_ov000_021a478c(void);
extern BOOL func_ov000_021a47e4(void);
extern s32 func_ov000_021a4854(struct Unit *);
extern BOOL func_ov000_021a48d8(void);
extern void func_ov000_021a4cec(void *, s32, s32, s32, s32, s32);
extern BOOL func_ov000_021a4e84(s32, s32, s32, s32);
extern void func_ov000_021a516c(s32);
extern BOOL func_ov000_021a5650(void *, u32);
extern BOOL func_ov000_021a5768(void *, u32);
extern void func_ov000_021a5774(void *, u32);
extern void func_ov000_021a57e4(void *, u32);
extern void func_ov000_021a5810(void *, u32);
extern void func_ov000_021a5d5c(void *, u32);
extern void func_ov000_021a6bd0(void *);
extern void func_ov000_021a7284(void);
extern void func_ov000_021a81d4(void);
extern BOOL func_ov000_021a8248(void);
extern void func_ov000_021a969c(s32);
extern void func_ov000_021a9714(void *);
extern void func_ov000_021a98a4(ProcPtr, s32, s32, s32);
extern BOOL func_ov000_021a98ec(s32, s32);
extern BOOL func_ov000_021a995c(u32, s32);
extern void func_ov000_021a9a48(void);
extern BOOL func_ov000_021a9cac(void);
extern void func_ov000_021a9ce4(void);
extern void func_ov000_021aa1d0(void);
extern void func_ov000_021ab768(void);
extern BOOL func_ov000_021abf30(void);

extern void func_ov000_021b06d4(ProcPtr);
extern void func_ov000_021b0de8(s32, s32, s32, s32);
extern void func_ov000_021b799c(s32, s32, s32);
extern void func_ov000_021b79f8(void);
extern void func_ov000_021b95e8(void *);
extern void func_ov000_021b9960(void *);
extern void func_ov000_021b9978(void *);
extern void func_ov000_021bb318(void *);
extern void func_ov000_021bc540(void *);
extern void func_ov000_021bc5a8(void *);
extern void func_ov000_021bc994(void *, s32, s32, s32);
extern void func_ov000_021bc9e4(void *);
extern void func_ov000_021bec24(ProcPtr);
extern void func_ov000_021bfb80(ProcPtr);

extern void func_ov000_021c266c(ProcPtr, s32, struct Unit *);
extern void func_ov000_021c52fc(ProcPtr, struct Unit *);
extern void func_ov000_021c63f8(void);
extern void func_ov000_021c669c(void);

extern void func_ov000_021d3fa8(void);
extern void func_ov000_021d604c(s32, ProcPtr);
extern void func_ov000_021d609c(void);
extern void func_ov000_021d6dfc(u32);
extern void func_ov000_021d6e30(u32);
extern void func_ov000_021d6f1c(ProcPtr, u32);
extern void func_ov000_021d95ec(ProcPtr);
extern void func_ov000_021db624(void);

// Overlay 002:

extern void func_ov002_021e69ac(void);

// Overlay 003:

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
extern void func_ov005_022054b0(s32);

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

// Overlay 011:

extern void func_ov011_022069b8(u32, void *, ProcPtr);

#endif // UNKNOWN_FUNCS_H
