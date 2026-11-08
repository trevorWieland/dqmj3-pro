#include "random062.h"

ResourceRandom062 resource_random_state063;
const Word062 fixture_layout062[9] = {sizeof(void *),4,4,128,248,240,244,7660,4};
const Word062 fixture_random_layout062[6] = {sizeof(ResourceRandom062),
    __builtin_offsetof(ResourceRandom062,sdk_seed),
    __builtin_offsetof(ResourceRandom062,words),
    __builtin_offsetof(ResourceRandom062,first),
    __builtin_offsetof(ResourceRandom062,second),
    __builtin_offsetof(ResourceRandom062,xorshift)};
