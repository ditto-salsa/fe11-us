#include "global.h"

#include "proc.h"

// .bss

struct Proc gProcArray[0x80];
struct Proc * gProcAllocList[0x80 + 1];
struct Proc * gProcTreeRootArray[14];
struct Unknown02190ce0 data_02190ce0;

#pragma force_active on

void Proc_Init(void)
{
    struct Proc * it = gProcArray;
    s32 i;

    for (i = 0; i < 0x80; i++, it++)
    {
        it->proc_funcTable = NULL;
        it->proc_script = NULL;
        it->proc_scrCur = NULL;
        it->proc_endCb = NULL;
        it->proc_idleCb = NULL;
        it->unk_14 = NULL;
        it->proc_parent = NULL;
        it->proc_child = NULL;
        it->proc_next = NULL;
        it->proc_prev = NULL;
        it->unk_28 = NULL;
        it->unk_2c = NULL;
        it->proc_sleepTime = 0;
        it->proc_mark = 0;
        it->proc_flags = 0x80;
        it->proc_lockCnt = 0;

        gProcAllocList[i] = it;
    }

    gProcAllocList[0x80] = NULL;
    data_02190ce0.unk_00 = gProcAllocList;

    for (i = 0; i < 14; i++)
    {
        gProcTreeRootArray[i] = NULL;
    }

    return;
}

struct Proc * Proc_Find(struct ProcCmd * script)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other->proc_script != script)
        {
            continue;
        }

        return other;
    }

    return NULL;
}

struct Proc * func_02018d40(struct ProcCmd * script)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other->unk_28 != data_027e1268)
        {
            continue;
        }

        if (other->proc_script != script)
        {
            continue;
        }

        return other;
    }

    return NULL;
}

struct Proc * func_02018d9c(struct ProcCmd * script, struct Proc * proc)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other == proc)
        {
            continue;
        }

        if (other->proc_lockCnt != 0)
        {
            continue;
        }

        if (other->proc_script != script)
        {
            continue;
        }

        return other;
    }

    return NULL;
}

struct Proc * func_02018df4(struct ProcCmd * script, struct Proc * proc)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other == proc)
        {
            continue;
        }

        if (other->proc_lockCnt == 0)
        {
            continue;
        }

        if (other->proc_script != script)
        {
            continue;
        }

        return other;
    }

    return NULL;
}

struct Proc * func_02018e4c(u32 mark)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * proc = *it;

        if (proc->proc_mark != mark)
        {
            continue;
        }

        return proc;
    }

    return NULL;
}

struct Proc * func_02018e90(struct ProcCmd * script, u32 mark)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * proc = *it;

        if (proc->proc_script != script)
        {
            continue;
        }

        if (proc->proc_mark != mark)
        {
            continue;
        }

        return proc;
    }

    return NULL;
}

void Proc_SetMark(struct Proc * proc, u32 mark)
{
    proc->proc_mark = mark;
    return;
}

void Proc_Goto(struct Proc * proc, s32 label, s32 unk)
{
    struct ProcCmd * cmd = proc->proc_script;

    if (cmd->opcode == 0)
    {
        return;
    }

    for (cmd = proc->proc_script; cmd->opcode != 0; cmd++)
    {
        if (cmd->opcode == 0x13 && cmd->dataImm == label)
        {
            proc->proc_scrCur = cmd;
            proc->proc_idleCb = NULL;

            if (unk != 0)
            {
                proc->proc_flags |= 0x20;
            }

            return;
        }
    }

    return;
}

void Proc_GotoScript(struct Proc * proc, struct ProcCmd * script)
{
    proc->proc_script = script;
    proc->proc_scrCur = script;

    proc->proc_idleCb = NULL;

    return;
}

void Proc_SetEndFunc(struct Proc * proc, ProcFunc func)
{
    proc->proc_endCb = func;
    return;
}

void func_02018f54(struct Proc * proc, void * unk_14)
{
    proc->unk_14 = unk_14;
    return;
}

void * func_02018f5c(struct Proc * proc)
{
    return proc->unk_14;
}

void Proc_ForEach(struct ProcCmd * script, ProcFunc func)
{
    struct Proc * it = gProcArray;
    s32 i;

    for (i = 0; i < 0x80; i++, it++)
    {
        if (it->proc_script != script)
        {
            continue;
        }

        func(it);
    }

    return;
}

void func_02018fa4(struct ProcCmd * script, ProcFunc func)
{
    struct Proc * it = gProcArray;
    s32 i;

    for (i = 0; i < 0x80; i++, it++)
    {
        if (it->proc_script != script)
        {
            continue;
        }

        if (it->unk_28 != data_027e1268)
        {
            continue;
        }

        func(it);
    }

    return;
}

void Proc_BreakEach(struct ProcCmd * script)
{
    Proc_ForEach(script, (ProcFunc)func_01ffc3b0); // Possible bug - mismatched function declaration
    return;
}

void func_0201900c(struct ProcCmd * script)
{
    func_02018fa4(script, (ProcFunc)func_01ffc3b0); // Possible bug - mismatched function declaration
    return;
}

void Proc_EndEach(struct ProcCmd * script)
{
    Proc_ForEach(script, func_01ffc174);
    return;
}

void func_02019034(struct ProcCmd * script)
{
    func_02018fa4(script, func_01ffc174);
    return;
}

void Proc_EndEachMarked(u32 mark)
{
    struct Proc * it = gProcArray;
    s32 i;

    for (i = 0; i < 0x80; i++, it++)
    {
        if (it->proc_script == NULL)
        {
            continue;
        }

        if (it->proc_mark != mark)
        {
            continue;
        }

        func_01ffc174(it);
    }

    return;
}

void Proc_Lock(struct Proc * proc)
{
    proc->proc_lockCnt++;
    return;
}

void Proc_Release(struct Proc * proc)
{
    proc->proc_lockCnt--;
    return;
}

BOOL IsProcLocked(struct Proc * proc)
{
    return proc->proc_lockCnt != 0;
}

struct ProcCmd * func_020190c4(struct Proc * proc)
{
    return proc->proc_script;
}

struct Proc * func_020190cc(struct Proc * proc)
{
    if (func_01ffbca0(proc->proc_parent))
    {
        return NULL;
    }

    return proc->proc_parent;
}

void func_020190ec(struct Proc * proc)
{
    if (func_01ffbca0(proc->proc_parent))
    {
        return;
    }

    proc->proc_flags |= 2;
    proc->proc_parent->proc_lockCnt++;

    return;
}

void func_02019124(struct Proc * proc)
{
    if (func_01ffbca0(proc->proc_parent))
    {
        return;
    }

    if (!(proc->proc_flags & 2))
    {
        return;
    }

    proc->proc_flags &= ~2;
    proc->proc_parent->proc_lockCnt--;

    return;
}

void func_02019164(struct Proc * proc)
{
    if (func_01ffbca0(proc->proc_parent))
    {
        return;
    }

    func_01ffc174(proc->proc_parent);

    return;
}

struct Proc * Proc_GetChild(struct Proc * proc)
{
    return proc->proc_child;
}

BOOL func_02019190(struct Proc * proc, u32 flags)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other == proc)
        {
            continue;
        }

        if (other->proc_script != proc->proc_script)
        {
            continue;
        }

        if (flags & 1)
        {
            if (other->unk_28 != data_027e1268)
            {
                continue;
            }
        }

        if (!(flags & 2) || (other->proc_funcTable != NULL) && (other->proc_funcTable == proc->proc_funcTable))
        {
            func_01ffc174(proc);
            return FALSE;
        }
    }

    return TRUE;
}

BOOL func_02019230(struct Proc * proc, u32 flags)
{
    struct Proc ** it;

    for (it = gProcAllocList; it < data_02190ce0.unk_00; it++)
    {
        struct Proc * other = *it;

        if (other == proc)
        {
            continue;
        }

        if (other->proc_script != proc->proc_script)
        {
            continue;
        }

        if (flags & 1)
        {
            if (other->unk_28 != data_027e1268)
            {
                continue;
            }
        }

        if (!(flags & 2) || (other->proc_funcTable != NULL) && (other->proc_funcTable == proc->proc_funcTable))
        {
            func_01ffc174(other);
            break;
        }
    }

    return TRUE;
}

void func_020192d0(struct Proc * proc)
{
    proc->unk_58--;

    if (proc->unk_58 > 0)
    {
        return;
    }

    func_01ffc174(proc);

    return;
}

void func_020192f4(struct Proc * proc)
{
    proc->unk_38(proc);
    func_01ffc174(proc);
    return;
}

void func_02019310(void * func, struct Proc * parent)
{
    struct Proc * proc = func_01ffbf78(data_020ce6f0, parent);
    proc->unk_38 = func;
    return;
}

void func_0201932c(struct Proc * proc)
{
    proc->unk_38(proc);
    return;
}

void func_0201933c(void * func, struct Proc * parent)
{
    struct Proc * proc = func_01ffbf78(data_020ce710, parent);
    proc->unk_38 = func;
    return;
}

BOOL ProcCmd_End(struct Proc * proc)
{
    func_01ffc174(proc);
    return FALSE;
}

BOOL func_02019368(struct Proc * proc)
{
    return FALSE;
}

BOOL func_02019370(struct Proc * proc)
{
    return TRUE;
}

BOOL func_02019378(struct Proc * proc)
{
    proc->proc_scrCur++;
    return TRUE;
}

BOOL ProcCmd_SetEndFunc(struct Proc * proc)
{
    Proc_SetEndFunc(proc, proc->proc_scrCur->dataPtr);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL func_020193b4(struct Proc * proc)
{
    func_02018f54(proc, proc->proc_scrCur->dataPtr);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL ProcCmd_Call(struct Proc * proc)
{
    ProcFunc func = proc->proc_scrCur->dataPtr;
    proc->proc_scrCur++;

    func(proc);

    return TRUE;
}

BOOL ProcCmd_CallArg(struct Proc * proc)
{
    s16 arg = proc->proc_scrCur->dataImm;
    BOOL (*func)(struct Proc *, s16) = proc->proc_scrCur->dataPtr;

    proc->proc_scrCur++;
    func(proc, arg);

    return TRUE;
}

BOOL ProcCmd_While(struct Proc * proc)
{
    BOOL (*func)(struct Proc *) = proc->proc_scrCur->dataPtr;
    proc->proc_scrCur++;

    if (func(proc))
    {
        proc->proc_scrCur--;
        return FALSE;
    }

    return TRUE;
}

BOOL ProcCmd_WhileArg(struct Proc * proc)
{
    s16 arg = proc->proc_scrCur->dataImm;
    BOOL (*func)(struct Proc *, s16) = proc->proc_scrCur->dataPtr;

    proc->proc_scrCur++;

    if (func(proc, arg))
    {
        proc->proc_scrCur--;
        return FALSE;
    }

    return TRUE;
}

void func_0201949c(void * arg_0, void * arg_1)
{
    struct Unknown_func_01ffb934_ret * cast_0;
    struct Unknown_func_01ffb934_ret * cast_1;

    cast_0 = arg_0;

    if (data_020ce6ec == cast_0->unk_6c)
    {
        data_02190ce0.unk_08 = data_027e1268;
        data_027e1268 = data_02190ce0.unk_04;
    }

    cast_1 = arg_1;

    if (data_020ce6ec == cast_1->unk_6c)
    {
        data_02190ce0.unk_04 = data_027e1268;
        data_027e1268 = data_02190ce0.unk_08;
    }

    return;
}

void func_020194fc(void * unused)
{
    data_020ce6ec = -1;
    func_020a36ac(NULL);
}

BOOL func_0201951c(struct Proc * proc)
{
    void * (*func)(void *);
    struct Unknown_func_01ffb934_ret * unk;

    if (proc->proc_flags & 0x40)
    {
        if (!func_020a3350(proc->unk_2c))
        {
            return FALSE;
        }

        func_01ffbb90(&data_027e1b9c, proc->unk_2c);

        proc->unk_2c = 0;
        proc->proc_flags &= ~0x40;

        proc->proc_scrCur++;

        return TRUE;
    }

    func = proc->proc_scrCur->dataPtr;
    unk = func_01ffb934(&data_027e1b9c, 0x10c0);
    func_020a3080(unk, func, proc, ((u8 *)unk) + 0x10c0, 0x1000, 0x13);

    func_020a374c(unk, func_020194fc);

    data_02190ce0.unk_08 = proc->unk_28;
    data_020ce6ec = unk->unk_6c;

    func_020a36ac(func_0201949c);
    func_020a341c(unk);

    proc->unk_2c = unk;
    proc->proc_flags |= 0x40;

    return TRUE;
}

BOOL ProcCmd_Repeat(struct Proc * proc)
{
    proc->proc_idleCb = proc->proc_scrCur->dataPtr;
    proc->proc_scrCur++;
    return FALSE;
}

BOOL ProcCmd_WhileExists(struct Proc * proc)
{
    if (Proc_Find(proc->proc_scrCur->dataPtr) == NULL)
    {
        proc->proc_scrCur++;
        return TRUE;
    }

    return FALSE;
}

BOOL ProcCmd_SpawnChild(struct Proc * proc)
{
    func_01ffbf78(proc->proc_scrCur->dataPtr, proc);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL ProcCmd_SpawnLockChild(struct Proc * proc)
{
    func_01ffc018(proc->proc_scrCur->dataPtr, proc);
    proc->proc_scrCur++;
    return FALSE;
}

BOOL ProcCmd_SpawnChildInTree(struct Proc * proc)
{
    func_01ffbf78(proc->proc_scrCur->dataPtr, (void *)(u32)proc->proc_scrCur->dataImm);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL func_020196f8(struct Proc * proc)
{
    if (proc->proc_scrCur->dataImm != 0)
    {
        func_02019034(proc->proc_scrCur->dataPtr);
    }
    else
    {
        Proc_EndEach(proc->proc_scrCur->dataPtr);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019734(struct Proc * proc)
{
    if (proc->proc_scrCur->dataImm != 0)
    {
        func_0201900c(proc->proc_scrCur->dataPtr);
    }
    else
    {
        Proc_BreakEach(proc->proc_scrCur->dataPtr);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL ProcCmd_Goto(struct Proc * proc)
{
    Proc_Goto(proc, proc->proc_scrCur->dataImm, 0);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL ProcCmd_GotoIfYes(struct Proc * proc)
{
    BOOL (*func)(struct Proc *) = proc->proc_scrCur->dataPtr;

    if (func == NULL || func(proc))
    {
        Proc_Goto(proc, proc->proc_scrCur->dataImm, 0);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL ProcCmd_GotoIfNo(struct Proc * proc)
{
    BOOL (*func)(struct Proc *) = proc->proc_scrCur->dataPtr;

    if (func == NULL || !func(proc))
    {
        Proc_Goto(proc, proc->proc_scrCur->dataImm, 0);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL ProcCmd_Jump(struct Proc * proc)
{
    Proc_GotoScript(proc, proc->proc_scrCur->dataPtr);
    return TRUE;
}

void SleepRepeatFunc(struct Proc * proc)
{
    proc->proc_sleepTime--;

    if (proc->proc_sleepTime != 0)
    {
        return;
    }

    func_01ffc3b0(proc, 0);

    return;
}

BOOL ProcCmd_Sleep(struct Proc * proc)
{
    if (proc->proc_scrCur->dataImm != 0)
    {
        proc->proc_sleepTime = proc->proc_scrCur->dataImm;
        proc->proc_idleCb = SleepRepeatFunc;
    }

    proc->proc_scrCur++;

    return FALSE;
}

BOOL ProcCmd_Mark(struct Proc * proc)
{
    proc->proc_mark = proc->proc_scrCur->dataImm;
    proc->proc_scrCur++;
    return TRUE;
}

BOOL func_020198c4(struct Proc * proc)
{
    if (!func_02019190(proc, proc->proc_scrCur->dataImm))
    {
        return FALSE;
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_020198f8(struct Proc * proc)
{
    if (!func_02019190(proc, proc->proc_scrCur->dataImm))
    {
        return FALSE;
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_0201992c(struct Proc * proc)
{
    func_02019230(proc, proc->proc_scrCur->dataImm);
    proc->proc_scrCur++;
    return TRUE;
}

BOOL func_02019954(struct Proc * proc)
{
    proc->proc_scrCur++;
    return TRUE;
}

BOOL func_02019968(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d9a0(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201da48(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_020199b8(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d9f4(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201da98(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019a08(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d728(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201d7c8(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019a58(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d778(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201d814(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019aa8(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d860(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201d900(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019af8(struct Proc * proc)
{
    u8 flag = ((u32)proc->proc_scrCur->dataPtr) & 2 ? 1 : 0;

    if (!(((u32)proc->proc_scrCur->dataPtr) & 1))
    {
        func_0201d8b0(proc, proc->proc_scrCur->dataImm, flag);
    }
    else
    {
        func_0201d950(proc, proc->proc_scrCur->dataImm, flag);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL ProcCmd_Overlay(struct Proc * proc)
{
    if (proc->proc_scrCur->dataPtr != 0)
    {
        func_0200f20c(proc->proc_scrCur->dataImm);
    }
    else
    {
        func_0200f24c(proc->proc_scrCur->dataImm);
    }

    proc->proc_scrCur++;

    return TRUE;
}

BOOL func_02019b84(struct Proc * proc)
{
    func_0200f28c(proc->proc_scrCur->dataImm);
    proc->proc_scrCur++;
    return TRUE;
}

void func_02019bac(struct Proc * proc)
{
    proc->proc_funcTable->unk_08(proc);
    return;
}

void func_02019bc0(struct Proc * proc)
{
    proc->proc_funcTable->unk_0C(proc);
    return;
}

#pragma force_active reset
