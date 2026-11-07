#ifndef RANDOM062_H
#define RANDOM062_H

#include "packets062.h"

typedef struct ResourceRandom062 {
    Word062 sdk_seed;
    Word062 words[55];
    Word062 *first;
    Word062 *second;
    Word062 xorshift[4];
} ResourceRandom062;

extern ResourceRandom062 resource_random_state062;
void resource_seed062(Word062);

#endif
