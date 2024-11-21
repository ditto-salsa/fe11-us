#ifndef PROC_H
#define PROC_H

#include "global.h"

struct ProcCmd
{
    /* 00 */ s16 opcode;
    /* 02 */ s16 dataImm;
    /* 04 */ void * dataPtr;
};

struct Proc;

typedef void (*ProcFunc)(struct Proc *);

struct ProcFuncTable
{
    /* 00 */ ProcFunc unk_00; // End Callback?
    /* 04 */ ProcFunc unk_04; // ?
    /* 08 */ ProcFunc unk_08; // Init?
    /* 0C */ ProcFunc unk_0C; // Main Loop?
};

struct Proc
{
    /* 00 */ struct ProcFuncTable * proc_funcTable;
    /* 04 */ struct ProcCmd * proc_script;
    /* 08 */ struct ProcCmd * proc_scrCur;
    /* 0C */ ProcFunc proc_endCb;
    /* 10 */ ProcFunc proc_idleCb;
    /* 14 */ ProcFunc unk_14;
    /* 18 */ struct Proc * proc_parent;
    /* 1C */ struct Proc * proc_child;
    /* 20 */ struct Proc * proc_next;
    /* 24 */ struct Proc * proc_prev;
    /* 28 */ void * unk_28; // maybe child?
    /* 2C */ void * unk_2c;
    /* 30 */ s16 proc_sleepTime;
    /* 32 */ u16 proc_flags;
    /* 34 */ u8 proc_mark;
    /* 35 */ u8 proc_lockCnt;
    STRUCT_PAD(0x36, 0x38);
    /* 38 */ void (*unk_38)(void *);
    STRUCT_PAD(0x3C, 0x58);
    /* 58 */ s16 unk_58;
    STRUCT_PAD(0x5A, 0x78);
};

struct Unknown02190ce0
{
    /* 00 */ struct Proc ** unk_00;
    /* 04 */ void * unk_04;
    /* 08 */ void * unk_08;
};

extern struct Proc gProcArray[0x80];
extern struct Proc * gProcAllocList[0x80 + 1];
extern struct Proc * gProcTreeRootArray[14];
extern struct Unknown02190ce0 data_02190ce0;

#endif // PROC_H
