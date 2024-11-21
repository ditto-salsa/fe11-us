#ifndef GLOBAL_H
#define GLOBAL_H

#include "types.h"

#define STRUCT_PAD(from, to) unsigned char _pad_ ## from[(to) - (from)]

#endif // GLOBAL_H
