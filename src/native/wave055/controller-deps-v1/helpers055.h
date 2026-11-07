#ifndef DQMJ3_STATE_HELPERS055_H
#define DQMJ3_STATE_HELPERS055_H
#include "state055.h"

typedef struct StateValue055 {
    StateWord055 first;
} StateValue055;

typedef struct StateIndex055 {
    unsigned char opaque[0x828];
    StateValue055 *objects[32];
} StateIndex055;

extern STATE_API055 StateIndex055 *state_index055;
STATE_API055 StateAddress055 state_reserve055(StateWord055 base,StateWord055 count);
STATE_API055 StateAddress055 state_write_fixed055(StateWord055 base,StateWord055 count,const StateWord055 *input);
STATE_API055 StateWord055 state_lookup055(StateWord055 index);

_Static_assert(__builtin_offsetof(StateIndex055,objects) == 0x828, "measured pointer-table start");
_Static_assert(sizeof(StateIndex055) == 0x828 + 32*sizeof(void *), "actual native pointer slots");

#endif
