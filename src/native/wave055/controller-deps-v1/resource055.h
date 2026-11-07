#ifndef DQMJ3_RESOURCE055_H
#define DQMJ3_RESOURCE055_H
#include "state055.h"

typedef struct StateResource055 StateResource055;

typedef struct StateResourceEntry055 {
    StateResource055 *resource;
} StateResourceEntry055;

typedef struct StateResourceIndex055 {
    unsigned char opaque[0x828];
    StateResourceEntry055 *entries[32];
} StateResourceIndex055;

extern STATE_API055 StateResourceIndex055 *state_resource_index055;
STATE_API055 StateResource055 *state_resource_lookup055(StateWord055 index);

_Static_assert(__builtin_offsetof(StateResourceIndex055,entries) == 0x828, "actual pointer table boundary");
_Static_assert(sizeof(StateResourceEntry055) == sizeof(void *), "actual native resource pointer");
_Static_assert(sizeof(StateResourceIndex055) == 0x828 + 32*sizeof(void *), "actual native index slots");

#endif
