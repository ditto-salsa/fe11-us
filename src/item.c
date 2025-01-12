#include "global.h"

#include "unit.h"

struct UnkStruct_02196f0c
{
    STRUCT_PAD(0x00, 0x0c);
    u32 unk_0c;
};

extern struct UnkStruct_02196f0c * data_02196f0c;

extern struct Unit * data_021974d8;

// Forward declarations

s32 func_02038e34(struct ItemData * item);
s32 func_02038e3c(struct ItemData * item, struct Unit * unit);
BOOL func_02038f94(struct Item * item);

const char * func_02038328(struct ItemData * item)
{
    return func_02039e10(item->id);
}

const char * func_02038338(struct ItemData * item)
{
    return func_02039e10(item->pName);
}

BOOL func_02038348(struct ItemData * item)
{
    if (item->type == 4 || item->type == 5)
    {
        return TRUE;
    }

    if (item->unk_24 & 4)
    {
        return TRUE;
    }

    return FALSE;
}

// Only checks the lower 32 bits of the item attributes
static inline BOOL CheckItemAttr(struct ItemData * item, u32 attr)
{
    return item->unk_24 & attr;
}

BOOL func_02038384(struct ItemData * item, struct Unit * unit)
{
    struct ItemData * pItem;
    int iVar5;
    struct JobData * job;
    u8 * pWeaponLevel;
    int wlvl;
    int hp;
    int type;
    int level;
    int slot;
    int i;

    if (!CheckItemAttr(item, 1))
    {
        return FALSE;
    }

    if ((item->type < 6))
    {
        if (!func_0203c834(unit, item, FALSE))
        {
            return FALSE;
        }
    }

    switch (item->unk_11)
    {
        case 0:
            hp = unit->hp;

            if (hp >= func_0203c454(unit))
            {
                return FALSE;
            }

            return TRUE;

        case 1:
            if ((unit->state2 & 0x48000) != 0)
            {
                return FALSE;
            }

            if (item->unk_1b != 0)
            {
                if (func_0203c77c(unit) >= 0x20)
                {
                    return FALSE;
                }

                return TRUE;
            }

            for (i = 0; i < 8; i++)
            {
                int cap;

                if (item->unk_1c[i] == 0)
                {
                    continue;
                }

                cap = unit->pJobData->caps[i];
                if (func_0203c6c0(unit, i, NULL, 1) >= cap)
                {
                    continue;
                }

                return TRUE;
            }

            return FALSE;

        case 2:
            if ((unit->state2 & 0x48000) != 0)
            {
                return FALSE;
            }

            slot = func_0203cb98(unit);

            if (slot == -1)
            {
                return FALSE;
            }

            pItem = func_0203df8c(unit->items + slot);

            type = pItem->type;

            if (type >= 6)
            {
                return FALSE;
            }

            if (!func_0203c7ac(unit, type))
            {
                return FALSE;
            }

            iVar5 = func_0203c7ac(unit, type);

            for (i = 0, pWeaponLevel = data_02197254->pWeaponLevel; i < 5; i++)
            {
                if (iVar5 >= pWeaponLevel[i])
                {
                    break;
                }
            }

            if (i == 0)
            {
                return FALSE;
            }

            return TRUE;

        case 3:
            if (data_ov000_021e3328 == 0)
            {
                return FALSE;
            }

            if (data_02196f0c->unk_0c & 0x40)
            {
                return FALSE;
            }

            for (i = 0; i < 8; i++)
            {
                int cap;

                if (item->unk_1c[i] == 0)
                {
                    continue;
                }

                cap = unit->pJobData->caps[i];
                if (func_0203c6c0(unit, i, NULL, 1) >= cap)
                {
                    continue;
                }

                return TRUE;
            }

            return FALSE;

        case 4:
            if (data_ov000_021e3328 == 0)
            {
                return FALSE;
            }

            if (data_02196f0c->unk_0c & 0x40)
            {
                return FALSE;
            }

            if (data_ov000_021e3324->unk_02 == 0)
            {
                return FALSE;
            }

            return TRUE;

        case 5:
            if (func_ov000_021a47e4() && !(data_02196f0c->unk_0c & 0x40))
            {
                return FALSE;
            }

            if (unit->state2 & 0x48000)
            {
                return FALSE;
            }

            job = unit->pJobData;

            if (job->pPromoteJob == NULL)
            {
                return FALSE;
            }

            level = unit->level;

            if (level < 10)
            {
                return FALSE;
            }

            if (item->unk_24 & 0x400000000)
            {
                if (job != func_02037c5c("JID_PEGASUSKNIGHT_F"))
                {
                    return FALSE;
                }
            }

            return TRUE;

        case 6:
        case 7:
        case 8:
        case 9:
            break;

        case 10:
            if (data_ov000_021e3328 == 0)
            {
                return FALSE;
            }

            if (func_ov000_021a47e4())
            {
                return FALSE;
            }

            if (data_02196f0c->unk_0c & 0x40)
            {
                return FALSE;
            }

            return TRUE;
    }

    return FALSE;
}

void func_02038708(struct ItemData * item, struct Unit * unit)
{
    switch (item->unk_11)
    {
        case 0:
        {
            s32 hp = unit->hp;
            hp += func_02038e34(item);

            if (hp > func_0203c454(unit))
            {
                hp = func_0203c454(unit);
            }

            unit->hp = hp;

            break;
        }
        case 1:
        {
            s32 unk_1b;
            s32 i;
            s16 * r7;
            s8 * r8;
            s8 * r9;
            s32 cap;

            unk_1b = item->unk_1b;

            if (item->unk_1b != 0)
            {
                unk_1b = item->unk_1b;
                unk_1b += func_0203c77c(unit);
                if (unk_1b < 0x20)
                {
                    unit->unk_6d = unit->unk_6d + item->unk_1b;
                }
                else
                {
                    unit->unk_6d = 0x20 - unit->pJobData->mov;
                }
            }

            for (r9 = item->unk_1c, i = 0; i < 8; i++)
            {
                if (r9[i] == 0)
                {
                    continue;
                }

                do
                {
                    s32 r2;

                    r8 = unit->unk_50;
                    r7 = unit->unk_58;

                    cap = unit->pJobData->caps[i];

                    if (func_0203c6c0(unit, i, NULL, 1) < cap)
                    {
                        cap = unit->pJobData->caps[i];
                        r2 = cap - func_0203c6c0(unit, i, NULL, 1);

                        if (r2 > item->unk_1c[i])
                        {
                            r2 = item->unk_1c[i];
                        }

                        r8[i] += (s8)(r2);
                        r7[i] += (s16)(r2 * 100);
                    }

                } while (0);
            }

            break;
        }
        case 2:
        {
            int i;
            u8 * pWeaponLevel;
            int iVar5;
            int type;
            int req;
            struct ItemData * pIVar5 = func_0203df8c(unit->items + func_0203cb98(unit));
            type = pIVar5->type;

            iVar5 = func_0203c7ac(unit, type);

            for (i = 0, pWeaponLevel = data_02197254->pWeaponLevel; i < 5; i++)
            {
                if (iVar5 >= pWeaponLevel[i])
                {
                    break;
                }
            }

            req = pWeaponLevel[i - 1];
            unit->unk_84[type] = req - func_0203c7e4(unit, type);

            break;
        }
        case 3:
        {
            s8 * r2;
            int i;

            for (r2 = item->unk_1c, i = 0; i < 8; i++)
            {
                if (r2[i] == 0)
                {
                    continue;
                }

                if (i != 7)
                {
                    continue;
                }

                unit->unk_91 = item->unk_1c[i];
            }

            break;
        }
        case 4:
        {
            unit->unk_92 = item->unk_1c[0] << 1;
            break;
        }
    }

    return;
}

BOOL func_02038914(struct ItemData * item, u32 x, u32 y)
{
    struct Unit ** ppUVar2;
    int i;
    u32 unitId;
    int hp;
    struct Unit * pUnit;
    struct Item * it;

    if (data_ov000_021e3328 == 0)
    {
        return FALSE;
    }

    if (item->type != 5)
    {
        return FALSE;
    }

    switch (item->unk_11)
    {
        case 0:
            pUnit = NULL;

            if ((item->unk_24 & 0x10) != 0)
            {
                if (x != -1)
                {
                    return FALSE;
                }

                ppUVar2 = func_02040c98(data_ov000_021e3324->unk_00);

                for (pUnit = *ppUVar2; pUnit != 0; pUnit = pUnit->unk_3c)
                {
                    int hp;

                    if (pUnit->state2 & 0x00021020)
                    {
                        continue;
                    }

                    hp = pUnit->hp;

                    if (hp >= func_0203c454(pUnit))
                    {
                        continue;
                    }

                    return TRUE;
                }

                return FALSE;
            }

            if (x == -1)
            {
                return FALSE;
            }

            unitId = data_ov000_021e3328->unk_28[(x | y << 5)];

            if (unitId != 0)
            {
                pUnit = data_021974d8 + unitId - 1;
            }

            if (pUnit == NULL)
            {
                return FALSE;
            }

            if (!((pUnit->unk_4c->unk_08 == data_ov000_021e3324->unk_00 ? 1 : 0) & 0xff))
            {
                return FALSE;
            }

            hp = pUnit->hp;

            if (hp >= func_0203c454(pUnit))
            {
                return FALSE;
            }

            return TRUE;

        case 1:
            break;

        case 2:
            break;

        case 3:
            if (x == -1)
            {
                return FALSE;
            }

            unitId = data_ov000_021e3328->unk_28[(x | y << 5)];

            if (unitId == 0)
            {
                pUnit = NULL;
            }
            else
            {
                pUnit = data_021974d8 + unitId - 1;
            }

            if (pUnit == NULL)
            {
                return FALSE;
            }

            if (!((pUnit->unk_4c->unk_08 == data_ov000_021e3324->unk_00 ? 1 : 0) & 0xff))
            {
                return FALSE;
            }

            for (i = 0; i < 8; i++)
            {
                int cap;

                if (item->unk_1c[i] == 0)
                {
                    continue;
                }

                cap = pUnit->pJobData->caps[i];

                if (func_0203c6c0(pUnit, i, NULL, 1) >= cap)
                {
                    continue;
                }

                return TRUE;
            }

            return FALSE;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            if (x == -1)
            {
                return FALSE;
            }

            unitId = data_ov000_021e3328->unk_28[(x | (y << 5))];

            if (unitId == 0)
            {
                pUnit = NULL;
            }
            else
            {
                pUnit = data_021974d8 + unitId - 1;
            }

            if (pUnit == NULL)
            {
                return FALSE;
            }

            if (!((pUnit->unk_4c->unk_08 == data_ov000_021e3324->unk_00 ? TRUE : FALSE) & 0xff))
            {
                return FALSE;
            }

            return TRUE;

        case 8:
            if (x == -1)
            {
                return FALSE;
            }

            unitId = data_ov000_021e3328->unk_28[(x | (y << 5))];

            if (unitId == 0)
            {
                pUnit = NULL;
            }
            else
            {
                pUnit = data_021974d8 + unitId - 1;
            }

            if (pUnit == NULL)
            {
                return FALSE;
            }

            if (!((pUnit->unk_4c->unk_08 == data_ov000_021e3324->unk_00 ? TRUE : FALSE) & 0xff))
            {
                return FALSE;
            }

            it = pUnit->items;

            for (i = 0; i < 5; it++, i++)
            {
                if (!func_02038f94(it))
                {
                    continue;
                }

                return TRUE;
            }

            return FALSE;

        case 9:
            if (func_ov000_021a47e4())
            {
                return FALSE;
            }

            if (x != -1)
            {
                return FALSE;
            }

            ppUVar2 = func_02040c98(3);

            for (pUnit = *ppUVar2; pUnit != NULL; pUnit = pUnit->unk_3c)
            {
                if (pUnit->state2 & 0x20000000)
                {
                    continue;
                }

                return TRUE;
            }

            return FALSE;
    }

    return FALSE;
}

void func_02038ce4(struct ItemData * item, struct Unit * unitA, struct Unit * unitB)
{
    struct Unit ** ppUVar3;
    int hp;
    int i;
    struct Unit * pUnit;
    s8 * r2;

    switch (item->unk_11)
    {
        case 0:
            if (item->unk_24 & 0x10)
            {
                ppUVar3 = func_02040c98(data_ov000_021e3324->unk_00);
                pUnit = *ppUVar3;

                for (; pUnit != NULL; pUnit = pUnit->unk_3c)
                {
                    if (!(pUnit->state2 & 0x0021020) && pUnit != unitA)
                    {
                        hp = pUnit->hp;
                        hp += func_02038e3c(item, unitA);

                        if (hp > func_0203c454(pUnit))
                        {
                            hp = func_0203c454(pUnit);
                        }

                        pUnit->hp = hp;
                    }
                }
            }
            else
            {
                hp = unitB->hp;
                hp += func_02038e3c(item, unitA);

                if (hp > func_0203c454(unitB))
                {
                    hp = func_0203c454(unitB);
                }

                unitB->hp = hp;
            }

            break;

        case 3:
            for (r2 = item->unk_1c, i = 0; i < 8; i++)
            {
                if (r2[i] == 0)
                {
                    continue;
                }

                if (i != 7)
                {
                    continue;
                }

                unitB->unk_91 = item->unk_1c[i];
            }

            break;
    }

    return;
}

s32 func_02038e0c(struct ItemData * item, struct Unit * unit)
{
    if (item->maxRange != 0xfe)
    {
        return item->maxRange;
    }

    return func_0203c4d0(unit, NULL, TRUE) >> 1;
}

s32 func_02038e34(struct ItemData * item)
{
    return item->unk_1c[0];
}

s32 func_02038e3c(struct ItemData * item, struct Unit * unit)
{
    s32 var = item->unk_1c[0];

    if (item->unk_24 & 0x20)
    {
        var += (func_0203c4d0(unit, NULL, TRUE) >> 1);
    }

    return var;
}

BOOL func_02038e80(struct ItemData * item, struct Unit * unit)
{
    if (item->unk_24 & 0x100000)
    {
        return TRUE;
    }

    if (item->unk_24 & 0x400000)
    {
        if (unit != NULL && func_0203c810(unit, 0x400))
        {
            return TRUE;
        }
    }

    return FALSE;
}

BOOL func_02038edc(struct ItemData * item, struct Unit * unit)
{
    if (item->unk_24 & 0x200000)
    {
        return TRUE;
    }

    if (item->unk_24 & 0x400000)
    {
        if (unit != NULL && func_0203c810(unit, 0x400))
        {
            return TRUE;
        }
    }

    return FALSE;
}

BOOL func_02038f38(struct ItemData * item, struct Unit * unit)
{
    if (item->unk_24 & 0x80000)
    {
        return TRUE;
    }

    if ((item->unk_24 & 0x400000))
    {
        if (unit != NULL && func_0203c810(unit, 0x400))
        {
            return TRUE;
        }
    }

    return FALSE;
}

BOOL func_02038f94(struct Item * item)
{
    s32 uses;
    struct ItemData * itemData = func_0203df8c(item);

    if (itemData->type == 8)
    {
        return FALSE;
    }

    if (itemData->unk_11 == 8)
    {
        return FALSE;
    }

    uses = itemData->uses;

    if (uses != 0 && item->unk_02 < uses)
    {
        return TRUE;
    }

    return FALSE;
}

struct JobData * func_02038fe4(struct ItemData * item, struct Unit * unit)
{
    if (item->type != 6)
    {
        return unit->pJobData;
    }

    if (func_0203c834(unit, item, 1) == 0)
    {
        return unit->pJobData;
    }

    switch (item->unk_11)
    {
        case 11:
            return func_02037c5c("JID_FIREDRAGON\0");

        case 12:
            return func_02037c5c("JID_EARTHDRAGON");

        case 13:
            return func_02037c5c("JID_MAGICDRAGON");

        case 14:
            return func_02037c5c("JID_GODDESSDRAGON_F");

        default:
            return unit->pJobData;
    }
}
