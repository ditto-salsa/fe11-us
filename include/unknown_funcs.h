#ifndef UNKNOWN_FUNCS_H
#define UNKNOWN_FUNCS_H

#include "types.h"
#include "unknown_types.h"

#include "proc.h"
#include "unit.h"

extern void func_01ff8000(void * unk1, u8 a, u8 b, s32 c, u8 d, s32 e);

extern void func_01ffbb90(void *, void *);
extern void * func_01ffb934(void *, s32);
extern BOOL IsRootProcess(struct Proc * proc);
extern struct Proc * Proc_Start(struct ProcCmd * script, struct Proc * parent);
extern struct Proc * Proc_StartBlocking(struct ProcCmd * script, struct Proc * parent);
extern void Proc_End(struct Proc * proc);
extern void Proc_Break(struct Proc * proc, s32 arg_1);

extern int func_020016e8(struct UnkStruct_Func_2000D2C * unk1, struct Unit * unit, int a, int b);
extern int func_02001770(struct UnkStruct_Func_2000D2C * buf, int a, int b);
extern int func_02001820(struct UnkStruct_Func_2000D2C * buf, int a, int b, int c);
extern int func_02001bac(struct UnkStruct_Func_2000D2C * buf, int a);

extern void func_0200ef04(void);
extern void func_0200f028(void);
extern void func_0200f04c(void);

extern void func_0200f20c(u32 overlayId);
extern void func_0200f24c(u32 overlayId);
extern void func_0200f28c(u32 arg_0);

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

extern void func_02022f10(void);

extern struct JobData * func_02037c5c(const char *);

extern s32 func_02039088(struct Unit * unit, int b, int c, int d, int e, int f, int g);
extern const char * func_02039e10(const char *);

extern s32 func_0203c454(struct Unit * unit);
extern s32 func_0203c4d0(struct Unit * unit, struct ItemData * item, BOOL unused);
extern s32 func_0203c6c0(struct Unit * unit, u32 arg_1, struct ItemData * item, s32 arg_3);
extern s32 func_0203c77c(struct Unit * unit);
extern s32 func_0203c7ac(struct Unit * unit, u32 arg_1);
extern s32 func_0203c7e4(struct Unit * unit, u32 arg_1);
extern s32 func_0203c810(struct Unit * unit, int attribute);
extern BOOL func_0203c834(struct Unit * unit, struct ItemData * item, s32 arg_2);
extern s32 func_0203cb98(struct Unit * unit);
extern struct ItemData * func_0203df8c(struct Item *);

struct Unit ** func_02040c98(s32);

extern void func_020a3080(void *, void *, void *, void *, s32, s32);
extern BOOL func_020a3350(void *);
extern void func_020a341c(void *);
extern void func_020a36ac(void (*)(void *, void *));
extern void func_020a374c(void *, void (*)(void *));

extern void func_020a5824(void * buf, int a, int b);

extern void func_020ad244(int a);

extern BOOL func_ov000_021a47e4(void);

#endif // UNKNOWN_FUNCS_H
