#include "global.h"

#include "unit.h"

extern struct Unit * data_021974d8;

// FE11U = 0x02044974
bool UnitSetEventDead(void * unused, s32 unitId)
{

    struct Unit * unit;
    
    if (!unitId)
    {
        unit = 0;
    }
    else
    {
        unit = data_021974d8 + unitId - 1;
    }
    
    if (!unit)
    {
        return FALSE;
    }

    unit->state2 |= (0x88 | 0x20000000);
    return TRUE;
}