#include "global.h"

struct UnkStruct_Func_02078808 {
    u16 unk_00;
};

struct UnkStruct_0219796C {
    STRUCT_PAD(0x00, 0x08);

    int unk_08;
};

extern int func_02078f5c(int, int, struct UnkStruct_Func_02078808 *);
extern struct UnkStruct_0219796C data_0219796c;

int func_02078808(struct UnkStruct_Func_02078808 * r0)
{
    int r2;

    if (func_02078f5c(0x20, 0x20, r0) == 0)
        return 0;

    r2 = r0->unk_00;

    data_0219796c.unk_08 = r2 * 8 - 0x400;
    return 1;
}

int func_0207884c(struct UnkStruct_Func_02078808 * r0)
{
    return func_02078F5C(data_0219796c.unk_08, 0x400, r0) != 0 ? 1 : 0;
}
