#ifndef UNKNOWN_FUNCS_H
#define UNKNOWN_FUNCS_H

#include "types.h"

#include "proc.h"

extern void func_01ffbb90(void *, void *);
extern void * func_01ffb934(void *, s32);
extern BOOL IsRootProcess(struct Proc * proc);
extern struct Proc * Proc_Start(struct ProcCmd * script, struct Proc * parent);
extern struct Proc * Proc_StartBlocking(struct ProcCmd * script, struct Proc * parent);
extern void Proc_End(struct Proc * proc);
extern void Proc_Break(struct Proc * proc, s32 arg_1);

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

extern void func_020a3080(void *, void *, void *, void *, s32, s32);
extern BOOL func_020a3350(void *);
extern void func_020a341c(void *);
extern void func_020a36ac(void (*)(void *, void *));
extern void func_020a374c(void *, void (*)(void *));

#endif // UNKNOWN_FUNCS_H
