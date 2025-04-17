#include "global.h"

#include "unit.h"
#include "event.h"

extern struct Unit * gUnitList;

// FE11U = 0x02040c98
struct Unit ** func_02040c98(int r0) {
    return r0 * 12 + data_021974dc;
}

// FE11U = 0x02040eac
struct Unit * func_02040eac(struct Unit ** unitPtr, int r1) {    
    
    struct Unit * unit = *unitPtr;
    
    for (unit = *unitPtr; unit != NULL; unit = unit->unk_3c)
    {
        if (func_0203c810(unit, r1))
        {
            return unit;
        }
    }
    
    return NULL;
}

// FE11U = 0x02043758
u8 UnitGetByPID(struct EventEngineProc * proc, char * PID) {

    struct Unit * unit = func_0203feac(PID);

    if (unit)
    {
        return unit->unk_68; //return unit->index;
    }
    
    return 0;
}

// FE11U = 0x02043774
// Copy of UnitGetByPID, although both seem referenced
u8 UnitSafetyGetByPID(struct EventEngineProc * proc, char * PID) {

    struct Unit * unit = func_0203feac(PID);

    if (unit)
    {
        return unit->unk_68; //return unit->index;
    }
    
    return 0;
}

// FE11U = 0x02043828
int UnitGetHero(struct EventEngineProc * proc) {
    
    struct Unit * unit = func_02040eac(func_02040c98(0),2);

    if (unit == 0)
    {
        unit = func_02040eac(func_02040c98(2),2);
    }
    
    if (unit == 0)
    {
        return 0;
    }

    return unit->unk_68;

}

// FE11U = 0x02044974
BOOL UnitSetEventDead(struct EventEngineProc * proc, s32 unitId)
{

    struct Unit * unit;
    
    if (!unitId)
    {
        unit = NULL;
    }
    else
    {
        unit = gUnitList + unitId - 1;
    }
    
    if (!unit)
    {
        return FALSE;
    }

    unit->state2 |= (0x88 | 0x20000000);
    return TRUE;
}




