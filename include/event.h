#ifndef EVENT_H
#define EVENT_H

#include "global.h"
#include "proc.h"

struct EventEngineProc
{
    PROC_HEADER
    STRUCT_PAD(0x36, 0x78);
};

#endif // EVENT_H
