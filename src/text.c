#include "global.h"

struct UnkStruct_Func_02078808
{
    u16 unk_00;
};

struct UnkStruct_0219796C
{
    STRUCT_PAD(0x00, 0x08);

    s32 unk_08;
};

extern s32 func_02078f5c(s32, s32, struct UnkStruct_Func_02078808 *);
extern struct UnkStruct_0219796C data_0219796c;

BOOL func_02078808(struct UnkStruct_Func_02078808 * r0)
{
    s32 r2;

    if (func_02078f5c(0x20, 0x20, r0) == 0)
        return FALSE;

    r2 = r0->unk_00;

    data_0219796c.unk_08 = r2 * 8 - 0x400;
    return TRUE;
}

BOOL func_0207884c(struct UnkStruct_Func_02078808 * r0)
{
    return func_02078F5C(data_0219796c.unk_08, 0x400, r0) != 0 ? TRUE : FALSE;
}
