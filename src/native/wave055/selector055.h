#ifndef DQMJ3_SELECTOR055_H
#define DQMJ3_SELECTOR055_H
#include "state055.h"
#include "address055.h"

typedef struct StateDescriptor055 {
    StateWord055 first_filter;
    StateWord055 second_filter;
    StateWord055 first_wrap;
    StateWord055 second_wrap;
    StateWord055 opaque10;
    int level;
    float colors[4];
    float bias;
    StateWord055 opaque2c[2];
    AddressWord055 target_address;
    StateWord055 opaque38[2];
    StateWord055 width;
    StateWord055 height;
    StateWord055 format;
    StateWord055 opaque4c;
    StateWord055 tail;
    StateWord055 opaque54[5];
    StateWord055 levels;
} StateDescriptor055;

typedef struct StateContextSelector055 {
    unsigned char opaque0[0xf8];
    StateWord055 mode;
    unsigned char opaquefc[8];
    unsigned char enabled[4];
    unsigned char opaque108[0x668];
    StateWord055 cache[32];
} StateContextSelector055;

extern STATE_API055 StateContextSelector055 *state_context_select055;
STATE_API055 StateWord055 state_select055(const StateDescriptor055 *descriptor,StateWord055 unit);

_Static_assert(sizeof(StateDescriptor055) == 108, "measured descriptor extent");
_Static_assert(__builtin_offsetof(StateDescriptor055,target_address) == 0x34, "explicit target token");
_Static_assert(__builtin_offsetof(StateContextSelector055,enabled) == 0x104, "measured selector bytes");
_Static_assert(__builtin_offsetof(StateContextSelector055,cache) == 0x770, "actual cache word array");
_Static_assert(sizeof(StateContextSelector055) == 0x7f0, "bounded declared context storage");

#endif
