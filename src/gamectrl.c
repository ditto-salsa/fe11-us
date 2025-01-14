#include "global.h"

#include "proc.h"

extern struct ProcCmd data_020cec14[];
extern struct ProcCmd data_020ceba4[];
extern struct ProcCmd data_020ceb84[];
extern struct ProcCmd data_020cec14[];
extern struct ProcCmd data_020cebc4[];
extern struct ProcCmd data_020cebec[];
extern struct ProcCmd data_ov010_02209e54[];

void func_020136bc(void *);
void func_0201fd44(void *);

void func_0204b1e0(void *);

void func_02021b00(void);
void func_02021b14(void);
void func_02021d70(void);
void func_02021dd4(void);
void func_02021e6c(void);
void func_02021f08(struct Proc *);
void func_02021f2c(struct Proc *);
void func_02021f5c(void);
void func_0202214c(void *);
void func_020221bc(void);
void func_020221e4(void);
void func_0202225c(void);
void func_02022324(void);
void func_02022364(void *);
void func_020223b4(void);
void func_020223cc(void *);
void func_02022414(void);
void func_02022458(void);
void func_02022480(void);
void func_020224a8(void *);
void func_020224d4(void);
void func_020224fc(void);
void func_0202254c(void *);
void func_02022564(void);
void func_02022588(void);
void func_0202272c(void *);
void func_02022814(void);
void func_0202284c(void *);
void func_020228ac(void *);
void func_020228ec(void *);
BOOL func_02022988(void);
void func_020229a8(void);
void func_020229f0(void);
BOOL func_02022b10(void);
BOOL func_02022b30(void);
BOOL func_02022b50(void);
void func_02022b70(struct Proc *);
void func_02022bb0(void *);
void func_02022c54(void *);
void func_02022c78(void *);
void func_02022cb0(void *);
void func_02022cdc(void *);
void func_02022db8(void);
void func_02022dc8(void);
void func_02022dfc(void);
void func_02022e14(void);
BOOL func_02022e34(void);
void func_02022e54(void);
BOOL func_02022eb8(void);
BOOL func_02022ed4(void);
BOOL func_02022ef4(void);

struct ProcCmd data_020cec44[] =
{
    { PROC_CMD_NOP_1D, 0x0000, 0x00000000 },
    { PROC_CMD_SLEEP, 0x0000, 0x00000000 },
    { PROC_CMD_06, 0x0000, func_02021d70 },
    { PROC_CMD_CALL, 0x0000, func_020136bc },
    { PROC_CMD_START_CHILD, 0x0000, data_020cec14 },
    { PROC_CMD_GOTO, 0x0001, 0x00000000 },
{ PROC_CMD_LABEL, 0x0001, 0x00000000 },
    { PROC_CMD_START_CHILD_BLOCKING, 0x0001, data_020ceba4 },
    { PROC_CMD_GOTO, 0x0003, 0x00000000 },
{ PROC_CMD_LABEL, 0x0002, 0x00000000 },
    { PROC_CMD_START_CHILD_BLOCKING, 0x0001, data_020ceb84 },
    { PROC_CMD_GOTO, 0x0003, 0x00000000 },
{ PROC_CMD_LABEL, 0x0003, 0x00000000 },
    { PROC_CMD_WHILE_EXISTS, 0x0000, data_020cec14 },
    { PROC_CMD_CALL, 0x0000, func_02021b00 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0004, 0x00000000 },
    { PROC_CMD_REPEAT, 0x0000, func_02021f08 },
    { PROC_CMD_REPEAT, 0x0000, func_02021f2c },
    { PROC_CMD_CALL, 0x0000, func_02021b14 },
    { PROC_CMD_CALL, 0x0000, func_0201fd44 },
    { PROC_CMD_START_CHILD_BLOCKING, 0x0001, data_020cebc4 },
    { PROC_CMD_GOTO, 0x0002, 0x00000000 },
{ PROC_CMD_LABEL, 0x0005, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022cdc },
    { PROC_CMD_GOTO, 0x0006, 0x00000000 },
{ PROC_CMD_LABEL, 0x0006, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0004, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, data_ov010_02209e54 },
    { PROC_CMD_OVERLAY, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0007, 0x00000000 },
    { PROC_CMD_REPEAT, 0x0000, func_02021f2c },
    { PROC_CMD_CALL, 0x0000, func_02021dd4 },
    { PROC_CMD_CALL, 0x0000, func_02021f5c },
    { PROC_CMD_CALL, 0x0000, func_0202214c },
    { PROC_CMD_CALL, 0x0000, func_020221bc },
    { PROC_CMD_CALL, 0x0000, func_020221e4 },
    { PROC_CMD_CALL, 0x0000, func_02022364 },
    { PROC_CMD_CALL, 0x0000, func_020223b4 },
    { PROC_CMD_OVERLAY, 0x0005, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov005_022052d0 },
    { PROC_CMD_OVERLAY, 0x0005, 0x00000000 },
{ PROC_CMD_LABEL, 0x0008, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_020223cc },
    { PROC_CMD_CALL, 0x0000, func_02022414 },
    { PROC_CMD_CALL, 0x0000, func_02022458 },
{ PROC_CMD_LABEL, 0x0009, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov000_021a9714 },
{ PROC_CMD_LABEL, 0x000A, 0x00000000 },
    { PROC_CMD_WHILE, 0x0000, func_0204b1e0 },
    { PROC_CMD_CALL, 0x0000, func_02022480 },
    { PROC_CMD_CALL, 0x0000, func_020224a8 },
    { PROC_CMD_CALL, 0x0000, func_02022414 },
    { PROC_CMD_CALL, 0x0000, func_020224d4 },
    { PROC_CMD_21, 0x0010, (void *)0x00000003 },
    { PROC_CMD_CALL, 0x0000, func_020224fc },
{ PROC_CMD_LABEL, 0x000B, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_0202254c },
    { PROC_CMD_CALL, 0x0000, func_02022564 },
    { PROC_CMD_CALL, 0x0000, func_02022588 },
    { PROC_CMD_CALL, 0x0000, func_0202272c },
    { PROC_CMD_CALL, 0x0000, func_02021e6c },
    { PROC_CMD_START_CHILD_BLOCKING, 0x0001, data_020cebec },
    { PROC_CMD_GOTO, 0x0006, 0x00000000 },
{ PROC_CMD_LABEL, 0x000C, 0x00000000 },
    { PROC_CMD_21, 0x0040, (void *)0x00000003 },
    { PROC_CMD_CALL, 0x0000, func_020224fc },
    { PROC_CMD_CALL, 0x0000, func_0202254c },
    { PROC_CMD_CALL, 0x0000, func_02022564 },
    { PROC_CMD_CALL, 0x0000, func_02021e6c },
    { PROC_CMD_OVERLAY, 0x0006, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov006_0221776c },
    { PROC_CMD_OVERLAY, 0x0006, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02021b00 },
    { PROC_CMD_GOTO, 0x0002, 0x00000000 },
{ PROC_CMD_LABEL, 0x000D, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0009, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_02022db8 },
    { PROC_CMD_CALL, 0x0000, func_ov009_02206020 },
    { PROC_CMD_CALL, 0x0000, func_ov009_022065a0 },
    { PROC_CMD_CALL, 0x0000, func_ov009_02204e10 },
    { PROC_CMD_CALL, 0x0000, func_02022dc8 },
    { PROC_CMD_OVERLAY, 0x0009, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02021b00 },
    { PROC_CMD_GOTO, 0x0002, 0x00000000 },
{ PROC_CMD_LABEL, 0x000E, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022c54 },
    { PROC_CMD_CALL, 0x0000, func_02022cdc },
    { PROC_CMD_CALL, 0x0000, func_02022324 },
    { PROC_CMD_GOTO, 0x0006, 0x00000000 },
{ PROC_CMD_LABEL, 0x000F, 0x00000000 },
    { PROC_CMD_REPEAT, 0x0000, func_02021f2c },
    { PROC_CMD_CALL, 0x0000, func_02022c78 },
    { PROC_CMD_CALL, 0x0000, func_02022cdc },
    { PROC_CMD_CALL, 0x0000, func_020221e4 },
    { PROC_CMD_CALL, 0x0000, func_0202225c },
    { PROC_CMD_20, 0x0008, (void *)0x00000003 },
    { PROC_CMD_GOTO, 0x0009, 0x00000000 },
{ PROC_CMD_LABEL, 0x0010, 0x00000000 },
    { PROC_CMD_REPEAT, 0x0000, func_02021f2c },
    { PROC_CMD_CALL, 0x0000, func_02022cb0 },
    { PROC_CMD_CALL, 0x0000, func_02022cdc },
    { PROC_CMD_CALL, 0x0000, func_020221e4 },
    { PROC_CMD_CALL, 0x0000, func_0202225c },
    { PROC_CMD_20, 0x0008, (void *)0x00000003 },
    { PROC_CMD_GOTO, 0x0009, 0x00000000 },
{ PROC_CMD_LABEL, 0x0027, 0x00000000 },
    { PROC_CMD_WHILE, 0x0000, func_0204b1e0 },
    { PROC_CMD_21, 0x0020, (void *)0x00000003 },
    { PROC_CMD_CALL, 0x0000, func_020224fc },
    { PROC_CMD_CALL, 0x0000, func_0202254c },
    { PROC_CMD_CALL, 0x0000, func_02022564 },
    { PROC_CMD_CALL, 0x0000, func_02021e6c },
    { PROC_CMD_CALL, 0x0000, func_02021b00 },
    { PROC_CMD_GOTO, 0x0002, 0x00000000 },
{ PROC_CMD_LABEL, 0x0011, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0006, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov006_02221aec },
    { PROC_CMD_OVERLAY, 0x0006, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0012, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0006, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov006_022226cc },
    { PROC_CMD_OVERLAY, 0x0006, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0015, 0x00000000 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f049c },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x001A, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, (void *)0x00000001 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4204 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f24e4 },
    { PROC_CMD_GOTO, 0x0028, 0x00000000 },
{ PROC_CMD_LABEL, 0x0013, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, (void *)0x00000001 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021fc0d4 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0014, 0x00000000 },
    { PROC_CMD_25, 0x0001, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, (void *)0x00000001 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e3610 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, 0x00000000 },
    { PROC_CMD_25, 0x0000, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x001B, 0x00000000 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0007, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov007_02218284 },
    { PROC_CMD_OVERLAY, 0x0007, 0x00000000 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x001C, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x0007, (void *)0x00000001 },
    { PROC_CMD_CALL, 0x0000, func_ov007_0221ad60 },
    { PROC_CMD_OVERLAY, 0x0007, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0017, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_020229a8 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4204 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
    { PROC_CMD_CALL, 0x0000, func_020228ac },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f9470 },
    { PROC_CMD_GOTO, 0x0028, 0x00000000 },
{ PROC_CMD_LABEL, 0x0018, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, (void *)0x00000001 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4244 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f4a84 },
    { PROC_CMD_GOTO, 0x0028, 0x00000000 },
{ PROC_CMD_LABEL, 0x0019, 0x00000000 },
    { PROC_CMD_OVERLAY, 0x000B, (void *)0x00000001 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4244 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f6ce8 },
    { PROC_CMD_GOTO, 0x0028, 0x00000000 },
{ PROC_CMD_LABEL, 0x0016, 0x00000000 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021f31f0 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x0028, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4284 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022814 },
    { PROC_CMD_GOTO, 0x0004, 0x00000000 },
{ PROC_CMD_LABEL, 0x001D, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_020229a8 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_020228ec },
    { PROC_CMD_GOTO_IF_YES, 0x001E, func_02022b30 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e4204 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022ef4 },
{ PROC_CMD_LABEL, 0x001E, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021fb690 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022e34 },
    { PROC_CMD_GOTO_IF_YES, 0x0022, func_02022b30 },
    { PROC_CMD_GOTO, 0x0020, 0x00000000 },
{ PROC_CMD_LABEL, 0x001F, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021fb704 },
    { PROC_CMD_GOTO_IF_NO, 0x0028, func_02022e34 },
    { PROC_CMD_GOTO_IF_YES, 0x0022, func_02022b30 },
    { PROC_CMD_GOTO, 0x0020, 0x00000000 },
{ PROC_CMD_LABEL, 0x0020, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022e54 },
    { PROC_CMD_CALL, 0x0000, func_0202284c },
    { PROC_CMD_GOTO_IF_YES, 0x0028, func_02022eb8 },
    { PROC_CMD_GOTO_IF_NO, 0x001F, func_02022ef4 },
    { PROC_CMD_GOTO_IF_YES, 0x0021, func_02022988 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021ebb8c },
    { PROC_CMD_GOTO_IF_YES, 0x0028, func_02022ed4 },
{ PROC_CMD_LABEL, 0x0021, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021e439c },
    { PROC_CMD_GOTO_IF_YES, 0x0028, func_02022eb8 },
    { PROC_CMD_GOTO, 0x0023, 0x00000000 },
{ PROC_CMD_LABEL, 0x0022, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022e54 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021eb9b0 },
    { PROC_CMD_GOTO_IF_NO, 0x001F, func_02022e34 },
    { PROC_CMD_CALL, 0x0000, func_02022e14 },
    { PROC_CMD_GOTO, 0x0023, 0x00000000 },
{ PROC_CMD_LABEL, 0x0023, 0x00000000 },
    { PROC_CMD_25, 0x0002, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02021dd4 },
    { PROC_CMD_CALL, 0x0000, func_02021f5c },
    { PROC_CMD_CALL, 0x0000, func_0202214c },
    { PROC_CMD_CALL, 0x0000, func_020221bc },
    { PROC_CMD_CALL, 0x0000, func_020221e4 },
    { PROC_CMD_20, 0x0008, (void *)0x00000003 },
    { PROC_CMD_CALL, 0x0000, func_ov000_021a9714 },
    { PROC_CMD_CALL, 0x0000, func_020229f0 },
    { PROC_CMD_CALL, 0x0000, func_020224d4 },
    { PROC_CMD_CALL, 0x0000, func_02022b70 },
    { PROC_CMD_CALL, 0x0000, func_020224fc },
    { PROC_CMD_CALL, 0x0000, func_0202254c },
    { PROC_CMD_CALL, 0x0000, func_02022564 },
    { PROC_CMD_CALL, 0x0000, func_02021e6c },
    { PROC_CMD_CALL, 0x0000, func_02022dfc },
    { PROC_CMD_REPEAT, 0x0000, func_02021f08 },
    { PROC_CMD_25, 0x0003, 0x00000000 },
    { PROC_CMD_GOTO_IF_YES, 0x0028, func_02022b10 },
    { PROC_CMD_GOTO_IF_NO, 0x0025, func_02022b50 },
{ PROC_CMD_LABEL, 0x0024, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021ed664 },
    { PROC_CMD_GOTO, 0x0026, 0x00000000 },
{ PROC_CMD_LABEL, 0x0025, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_ov003_021edf2c },
    { PROC_CMD_GOTO, 0x0026, 0x00000000 },
{ PROC_CMD_LABEL, 0x0026, 0x00000000 },
    { PROC_CMD_CALL, 0x0000, func_02022bb0 },
    { PROC_CMD_GOTO, 0x0028, 0x00000000 },
    { PROC_CMD_03, 0x0000, 0x00000000 },
    { PROC_CMD_END, 0x0000, NULL },
};

extern char * data_02196f14;

extern struct UnkStruct_021e3528 data_ov000_021e3528;

extern struct UnkStruct_021974fc * data_021974fc;

extern struct Unknown_020efcc8 * data_020efcc8;

struct UnkStruct_Func_02021410_Ret * func_02021410(u32);

extern u32 data_020efcb4;

extern struct Unit * gUnitList;

extern vu32 data_027e1264;

struct UnkStruct_02196f18
{
    u32 unk_00;
};

extern struct UnkStruct_02196f18 * data_02196f18;

extern struct UnkStruct_020e3ca0 * data_020e3ca0;


extern struct UnkStruct_02196f1c * data_02196f1c;

extern struct UnkStruct_02196f10 * data_02196f10;


extern struct UnkStruct_02196f0c * data_02196f0c;

extern struct UnkStruct_02196f20 * data_02196f20;

extern struct UnkStruct_02196f24 * data_02196f24;

// Forward declarations
extern void func_02021b28(void);
extern void func_02021c84(void);
extern void func_02022f28(u32 label);

void func_020217b4(void)
{
    int iVar1;
    u32 uVar2;

    func_0200f20c(0);
    func_0200f20c(2);

    func_020377c8();
    func_02028c68();
    func_020355e4();

    iVar1 = func_0202000c(1, 4) * 4;
    func_01ffb934(data_027e1b9c, iVar1);

    if (data_02197254 == NULL)
    {
        data_02197254 = (struct Unknown_02197254 *)func_02011574(0x4c);
    }

    func_02037a04(data_02197254);

    if (data_020e3ca0 == NULL)
    {
        data_020e3ca0 = (struct UnkStruct_020e3ca0 *)func_02011574(0x14);
    }

    func_02002058(data_020e3ca0);

    if (data_02196f0c == NULL)
    {
        data_02196f0c = (struct UnkStruct_02196f0c *)func_02011574(0x18);
    }

    func_02021014();

    if (data_02196f10 == NULL)
    {
        struct UnkStruct_02196f10 * puVar3 = (struct UnkStruct_02196f10 *)func_02011574(0x18);

        if (puVar3 != NULL)
        {
            puVar3->unk_00 = 0;
            puVar3->unk_06 = 0;
        }

        data_02196f10 = puVar3;
    }

    func_020423fc();
    func_020476a0();

    if (data_02196f24 == NULL)
    {
        data_02196f24 = (struct UnkStruct_02196f24 *)func_02011574(0x10);
    }

    func_02024c74();

    if (data_02196f20 == NULL)
    {
        data_02196f20 = (struct UnkStruct_02196f20 *)func_02011574(0x1a4);
    }

    func_02024d28();

    if (data_02196f1c == NULL)
    {
        data_02196f1c = (struct UnkStruct_02196f1c *)func_02011574(0x10);
    }

    func_02024e70();

    if (data_02196f18 == NULL)
    {
        data_02196f18 = (struct UnkStruct_02196f18 *)func_02011574(0x600);
    }

    func_02024f34();
    func_0206ecbc();
    func_ov002_021e69ac();
    func_020076a8();
    func_02015f64();

    func_02039eac("system\0");
    func_02039eac("die");
    func_02039eac("tutorial\0\0\0");

    func_02042420("startup");

    func_0203fafc();
    func_02040eec();
    func_020411e8();

    return;
}

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
    func_020494a0(data_02196f0c->unk_04, "gf_reserved2\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved3\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved4\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved5\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_04, "gf_reserved6\0\0\0", 0);

    func_02021b28();
    func_02021c84();
    func_020424b8("RegistGrobalFlags\0\0");

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
    func_020494a0(data_02196f0c->unk_08, "os_BraveSword\0\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveLance\0\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveAxe", 0);
    func_020494a0(data_02196f0c->unk_08, "os_BraveBow", 0);
    func_020494a0(data_02196f0c->unk_08, "os_Wato", 0);
    func_020494a0(data_02196f0c->unk_08, "os_MasterProof\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_LongBow\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_EmpyreadWhip", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved1\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved2\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved3\0\0\0", 0);
    func_020494a0(data_02196f0c->unk_08, "os_reserved4\0\0\0", 0);

    return;
}

void func_02021c84(void)
{
    func_02049a2c(data_02196f0c->unk_08, "os_BraveSword\0\0", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveLance\0\0", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveAxe", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_BraveBow", 3);
    func_02049a2c(data_02196f0c->unk_08, "os_Wato", 5);
    func_02049a2c(data_02196f0c->unk_08, "os_MasterProof\0", 15);
    func_02049a2c(data_02196f0c->unk_08, "os_LongBow\0", 5);
    func_02049a2c(data_02196f0c->unk_08, "os_EmpyreadWhip", 3);
    return;
}

void func_02021d70(void)
{
    int r3;
    int lr;
    int r1;

    if (data_02196f0c->unk_0c & 0x2000000)
    {
        return;
    }

    lr = data_027e1264;
    r3 = lr - data_02196f20->unk_18c;

    r1 = 0x7fffffff;

    if ((u32)data_02196f20->unk_184 <= (0x7fffffff - r3))
    {
        data_02196f20->unk_184 = data_02196f20->unk_184 + r3;
    }
    else
    {
        data_02196f20->unk_184 = r1;
    }

    data_02196f20->unk_18c = lr;

    return;
}

void func_02021dd4(void)
{
    data_02196f14 = func_020211b8();

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

    func_02042460(func_020211b8());
    func_020424b8("RegistLocalFlags\0\0\0");
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

void func_02021f2c(struct Proc * param_1)
{
    if (func_020020e0(data_020e3ca0))
    {
        return;
    }

    Proc_Break(param_1, 1);

    return;
}

void func_02021f5c(void)
{
    int iVar8;

    if (data_ov000_021e3324.unk_00 == NULL)
    {
        struct UnkStruct_021E3324_00 * puVar2 = (struct UnkStruct_021E3324_00 *)func_02011574(0x20);

        if (puVar2 != NULL)
        {
            int iVar6;

            puVar2->unk_00 = 0;
            puVar2->unk_01 = 0;
            puVar2->unk_04 = 1;
            puVar2->unk_06 = 0;
            puVar2->unk_08 = 0;
            puVar2->unk_0c = 0;
            puVar2->unk_02 = 0;
            puVar2->unk_03 = 0;
            puVar2->unk_14 = 0x1f;
            puVar2->unk_15 = 0x1f;
            puVar2->unk_16 = 0x1f;

            for (iVar6 = 0; iVar6 < 4; iVar6++)
            {
                puVar2->unk_18[iVar6] = 0;
            }

            puVar2->unk_1c = 0;
        }

        data_ov000_021e3324.unk_00 = puVar2;
    }

    for (iVar8 = 0; iVar8 < 0x2e; iVar8++)
    {
        data_ov000_021e3528.unk_00[iVar8] = -1;
    }

    data_ov000_021e3528.unk_2e = 0;
    data_ov000_021e3528.unk_2f = 0;

    if ((data_02196f0c->unk_00->unk_0a != 0) && ((data_02196f0c->unk_0c & 1) != 0))
    {
        int n = func_02040c74(func_02040c98(0)) + func_02040c74(func_02040c98(2));

        if (n < data_02196f0c->unk_00->unk_0a)
        {
            int uVar4 = func_02041928();

            for (; n < data_02196f0c->unk_00->unk_0a; n++)
            {
                struct Unit ** ppUVar5 = func_02040c98(4);
                struct Unit * pUVar9 = *ppUVar5;

                if (pUVar9 == NULL)
                {
                    break;
                }

                func_0203bd34(pUVar9, 2, 1);
                func_020421c4(pUVar9, uVar4);

                data_02196f0c->unk_0c |= 0x20000;
            }
        }
    }

    if ((data_02196f0c->unk_0c & 0x10000) != 0)
    {
        data_ov000_021e3324.unk_00->unk_02 = data_02196f10->unk_09;
        data_ov000_021e3324.unk_00->unk_0c = data_02196f10->unk_0c * 0x3c;
        data_ov000_021e3324.unk_00->unk_06 = data_02196f10->unk_0a;
    }

    return;
}

void func_0202214c(void * param_1)
{
    struct Unit ** pUnitStack;
    struct Unit * unit;

    func_02047708("MapBegin\0\0\0", param_1);

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

void func_020221bc(void)
{
    data_ov000_021e3528.unk_2f = 1;
    data_02196f20->unk_188 = data_02196f20->unk_184;
    return;
}

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

void func_0202225c(void)
{
    struct Unit * pUnit;
    int unitId;

    func_0204b790();

    unitId =
        data_ov000_021e3328->unk_28[data_ov000_021e3328->unk_10->unk_08 | data_ov000_021e3328->unk_10->unk_09 << 5];

    if (unitId == 0)
    {
        pUnit = NULL;
    }
    else
    {
        pUnit = gUnitList + unitId - 1;
    }

    func_0204e1a4(pUnit, 0, 1);
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

void func_02022364(void * param_1)
{
    if (data_02196f0c->unk_0c & 0x40)
    {
        return;
    }

    if (!func_020377e8("SallyTalk\0\0"))
    {
        return;
    }

    func_02039eac("suppliance\0");
    func_02047708("SallyTalk\0\0", param_1);

    return;
}

void func_020223b4(void)
{
    func_02039f00("suppliance\0", 1);
    return;
}

void func_020223cc(void * param_1)
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

void func_020224a8(void * param_1)
{
    if (!func_020377e8("Ending\0"))
    {
        return;
    }

    func_02047708("Ending\0", param_1);

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

void func_0202254c(void * param_1)
{
    func_02047708("MapEnd\0", param_1);
    return;
}

void func_02022564(void)
{
    func_020115a4(data_ov000_021e3324.unk_00);
    data_ov000_021e3324.unk_00 = NULL;
    return;
}

void func_02022588(void)
{
    struct Unit * pUnit;
    int i;

    if ((data_02196f0c->unk_0c & 0x00010020) != 0)
    {
        return;
    }

    func_02041458();

    for (i = 0, pUnit = gUnitList; i < 0x8c; i++, pUnit++)
    {
        if (pUnit->unk_4c->unk_08 == 4)
        {
            continue;
        }

        if (pUnit->unk_4c->unk_08 == 5)
        {
            continue;
        }

        if (pUnit->unk_4c->unk_08 != 3)
        {
            continue;
        }

        if ((pUnit->state2 & 0x40000) != 0)
        {
            func_0203c19c(pUnit);
        }

        pUnit->state2 &= 0xfffffeff;

        if ((pUnit->state2 & 0x80) != 0)
        {
            int j;
            struct Item * pUnitItem;

            pUnit->state2 &= 0xffffff7f;
            pUnit->unk_34 = func_02038108(data_02196f0c->unk_00);

            for (j = 0, pUnitItem = pUnit->items; j < 5; j++, pUnitItem++)
            {
                if (((pUnitItem->id == 0) ? TRUE : FALSE) & 0xFF)
                {
                    continue;
                }

                pUnitItem->unk_03 &= ~0x30;

                func_02040f5c(pUnitItem);
                func_0203e02c(pUnitItem);
            }
        }

        if ((pUnit->state2 & 0x80000) != 0)
        {
            func_0203bd34(pUnit, 4, 1);
        }
    }

    func_02040cb0(func_02040c98(2), 0, 1);

    while (TRUE)
    {
        struct Unit ** pUnitStack;
        struct Unit * it;
        struct Unit * pUnit;

        pUnitStack = func_02040c98(0);
        pUnit = *pUnitStack;

        if (pUnit == NULL)
        {
            break;
        }

        for (it = pUnit->unk_3c; it != NULL; it = it->unk_3c)
        {
            s32 a = it->unk_95;
            s32 b = pUnit->unk_95;

            if (a < b)
            {
                pUnit = it;
            }
        }

        func_0203bd34(pUnit, 2, 1);
    }

    if ((data_02196f0c->unk_0c & 0x800) != 0)
    {
        return;
    }

    func_0202511c();

    return;
}

void func_0202272c(void * param_1)
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

void func_0202284c(void * param_1)
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
            func_02022f28(35);
            break;
    }

    return;
}

void func_020228ac(void * param_1)
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

// TODO: Figure out the inline issues
inline BOOL _func_02022988(void)
{
    return data_02196f10->unk_04 == 1 ? TRUE : FALSE;
}

void func_020228ec(void * unused)
{
    if (data_02196f10->unk_04 != 3)
    {
        data_02196f0c->unk_0c |= 0x20;
    }

    data_02196f0c->unk_0c |= 0x10000;
    data_02196f0c->unk_0c |= 0x4000;
    data_02196f0c->unk_0c |= 1;

    if (_func_02022988())
    {
        func_0202118c();
        return;
    }

    func_02021178(0);

    return;
}

/* inline */ BOOL func_02022988(void)
{
    return _func_02022988();
}

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

inline BOOL _func_02022b10(void)
{
    return data_02196f10->unk_07 == 2 ? TRUE : FALSE;
}

inline BOOL _func_02022b30(void)
{
    return data_02196f10->unk_04 == 3 ? TRUE : FALSE;
}

inline BOOL _func_02022b50(void)
{
    return data_02196f10->unk_07 == 0 ? TRUE : FALSE;
}

void func_020229f0(void)
{
    int uVar3;

    if (_func_02022b10())
    {
        return;
    }

    if (_func_02022b30())
    {
        return;
    }

    if (_func_02022b50())
    {
        uVar3 = func_0202000c(1, data_02197254->pDBFE11Footer->unk_14 - 1);
        data_02196f10->unk_11 = uVar3;
        func_0204939c(data_02196f18->unk_00, uVar3);

        if (data_02196f10->unk_0b != 0 && func_02021410(data_02196f10->unk_06)->unk_756 == 0x14)
        {
            uVar3 = func_0202000c(1, data_02197254->pDBFE11Footer->unk_14 - 2);

            if (uVar3 >= data_02196f10->unk_11)
            {
                uVar3 += 1;
            }

            data_02196f10->unk_12 = uVar3;

            func_0204939c(data_02196f18->unk_00, uVar3);
        }
    }

    func_02025344();
    func_0202454c(0x18, 0, 0);

    return;
}

// TODO: Figure out inlines

/* inline */ BOOL func_02022b10(void)
{
    return _func_02022b10();
}

/* inline */ BOOL func_02022b30(void)
{
    return _func_02022b30();
}

/* inline */ BOOL func_02022b50(void)
{
    return _func_02022b50();
}

void func_02022b70(struct Proc * proc)
{
    if (_func_02022b50())
    {
        func_0201d950(proc, 0x10, 1);
    }
    else
    {
        func_0201d814(proc, 0x10, 1);
    }

    return;
}

void func_02022bb0(void * param_1)
{
    u32 uVar1;

    if (!_func_02022b30())
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
        func_02022f28(30);

        data_020efcc8->unk_a4->unk_00->unk_3c(data_020efcc8->unk_a4, 0x10, 0x48, 0);
    }

    func_0201ffd0();

    return;
}

void func_02022c54(void * param_1)
{
    func_020240a0(data_02196f0c->unk_10 + 0x0d, param_1);
    return;
}

void func_02022c78(void * param_1)
{
    func_020240a0(data_02196f0c->unk_10 + 0x10, param_1);
    data_02196f0c->unk_0c |= 4;
    return;
}

void func_02022cb0(void * param_1)
{
    func_020240a0(11, param_1);
    data_02196f0c->unk_0c |= 4;
    return;
}

void func_02022cdc(void * param_1)
{
    if (!func_0201f760(11))
    {
        return;
    }

    func_0202437c(param_1);

    return;
}

void func_02022d00(void * param_1)
{
    struct Unit * pUnit;
    int i;

    if (data_02196f0c->unk_0c & 0x2000)
    {
        for (i = 0, pUnit = gUnitList; i < 0x8c; i++, pUnit++)
        {
            if (pUnit->unk_4c->unk_08 == 4)
            {
                continue;
            }

            if (pUnit->unk_4c->unk_08 == 5)
            {
                continue;
            }

            if (!(pUnit->state2 & 0x40000))
            {
                continue;
            }

            func_0203c19c(pUnit);
        }

        data_02196f0c->unk_0c &= 0xffffdfff;
        func_02022f28(13);

        return;
    }

    if (data_02196f0c->unk_0c & 0x10000)
    {
        data_02196f0c->unk_0c &= 0xfffeffff;
        func_02022f28(54);

        return;
    }

    if (!(data_02196f0c->unk_0c & 0x80))
    {
        func_ov006_0221bdbc(param_1);
        return;
    }

    data_02196f0c->unk_0c &= 0xffffff7f;

    return;
}

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

    func_02039e10("MBackup_LoadError\0\0");
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
    Proc_Start(data_020cec44, (void *)9);
    return;
}

void func_02022f28(u32 label)
{
    Proc_Goto(Proc_Find(data_020cec44), label, 0);
    return;
}
