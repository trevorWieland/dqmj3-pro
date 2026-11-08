#ifndef DQMJ3_RESOURCE_VIEW055_H
#define DQMJ3_RESOURCE_VIEW055_H
#include "resource055.h"

struct StateResource055 {
    StateWord055 name;
    float values[256];
    float deltas[256];
    StateWord055 *storage_1024;
    StateWord055 *storage_512_a;
    StateWord055 *storage_64;
    StateWord055 *storage_512_b;
    StateWord055 *storage_512_c;
    StateWord055 *storage_512_d;
    StateWord055 flags;
};

typedef void *(*StateStorageProvider055)(StateWord055,StateWord055,StateWord055,StateWord055);

_Static_assert(sizeof(float)==4,"binary32 samples");
_Static_assert(__builtin_offsetof(StateResource055,values)==4,"actual value array");
_Static_assert(__builtin_offsetof(StateResource055,storage_1024)==(__SIZEOF_POINTER__==4?0x804:0x808),"second pointer");
_Static_assert(__builtin_offsetof(StateResource055,storage_512_d)==(__SIZEOF_POINTER__==4?0x818:0x830),"sixth pointer");
_Static_assert(__builtin_offsetof(StateResource055,flags)==(__SIZEOF_POINTER__==4?0x81c:0x838),"pointer-complete flags");

_Static_assert(__builtin_offsetof(StateResource055,deltas)==0x404,"actual delta array");

#endif
