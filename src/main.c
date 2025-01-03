#include "global.h"

void main(void)
{
    func_0200ef04();
    func_0200f028();
    func_02022f10();
    func_020ad244(0x14);

    while (TRUE)
        func_0200f04c();
}

void * func_02000c70(void)
{
    return &data_027e00e0;
}

void func_02000c7c(struct UnkStruct_Func_2000C7C * buf)
{
    buf->unk_086E = data_ov000_021e3328->unk_20;
    buf->unk_086F = data_ov000_021e3328->unk_22;
    buf->unk_0870 = data_ov000_021e3328->unk_24;
    buf->unk_0871 = data_ov000_021e3328->unk_25;
    buf->unk_0872 = data_ov000_021e3328->unk_26;
    buf->unk_0873 = data_ov000_021e3328->unk_27;
    buf->unk_0874 = data_ov000_021e3324->unk_00;

    buf->unk_0854 = buf->unk_0878;
    buf->unk_0858 = buf->unk_1078;
    buf->unk_085C = buf->unk_10F8;
    buf->unk_0860 = data_ov000_021e3328->unk_28;
}

void func_02000d14(struct UnkStruct_Func_2000C7C * buf, s32 a)
{
    func_020a5824(buf->unk_0854, a & 0xFF, 0x400);
}

void func_02000d2c(struct UnkStruct_Func_2000D2C * buf, s32 a, s32 b)
{
    s32 tmp1, tmp2;
    struct UnkStruct_021E3328 * unk0 = data_ov000_021e3328;
    struct UnkStruct_021E3328_00_04_00 * unk1 = unk0->unk_04->unk_00;
    
    tmp1 = func_0203c77c(unk1);
    if (func_0203c810(unk1, 0x8000000))
        tmp1 = 0;

    tmp2 = func_02001770(buf, a, b);
    if (tmp2 >= 0)
    {
        func_02001bac(buf, tmp2);
        return;
    }

    if ((ABS(a - buf->unk_42) + ABS(b - buf->unk_43)) == 1)
    {
        s32 tmp_r0 = func_020016e8(buf, unk1, a, b);

        if ((buf->unk_47 + tmp_r0) <= tmp1)
        {
            s32 tmp_r2 = buf->unk_42;
            s32 tmp_r3 = buf->unk_43;

            if (buf->unk_42 < (s8)a)
                tmp_r2 = 2;
            else if (buf->unk_42 > (s8)a)
                tmp_r2 = 1;
            else if (buf->unk_43 < (s8)b)
                tmp_r2 = 4;
            else if (tmp_r3 > (s8)b)
                tmp_r2 = 8;
            else
                tmp_r2 = 0x80;

            buf->unk_00[buf->unk_46] = tmp_r2;
            buf->unk_42 = a;
            buf->unk_43 = b;
            buf->unk_47 += tmp_r0;
            buf->unk_46++;
            return;
        }
    }

    data_ov000_021e3328->unk_08->unk_0854 = data_ov000_021e3328->unk_08->unk_0C78;

    func_01ff8000(
        data_ov000_021e3328->unk_08,
        buf->unk_42,
        buf->unk_43,
        unk1->unk_44->unk_28,
        tmp1 - buf->unk_47,
        0xA
    );

    if (data_ov000_021e3328->unk_08->unk_0854[a | (b << 5)] >= 0)
    {
        func_02001820(buf, a, b, 1);
        data_ov000_021e3328->unk_08->unk_0854 = data_ov000_021e3328->unk_08->unk_0878;
    }
    else
    {
        data_ov000_021e3328->unk_08->unk_0854 = data_ov000_021e3328->unk_08->unk_0878;
        buf->unk_47 = 0;
        buf->unk_46 = 0;
        func_02001820(buf, a, b, 1);
    }
}

BOOL func_02000f18(struct UnkStruct_Func_2000D2C * buf, s32 a, s32 b, s32 c)
{
    s32 tmp4;
    void * tmp1 = data_ov000_021e3328->unk_04->unk_00;

    if (data_ov000_021e3328->unk_28[buf->unk_42 | (buf->unk_43 << 5)] != 0)
        return FALSE;

    tmp4 = ABS(a - buf->unk_42) + ABS(b - buf->unk_43);

    if (c == 2)
    {
        if (tmp4 != 1)
            return FALSE;

        buf->unk_48 = -1;
    }
    else
    {
        s32 ret = func_02039088(tmp1, buf->unk_42, buf->unk_43, tmp4, c == 0, c == 1, -1);

        if (ret < 0)
            return FALSE;

        buf->unk_48 = ret;
    }

    return TRUE;
}
