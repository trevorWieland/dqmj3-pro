#include "random062.h"

ResourceRandom062 resource_random_state062;

static void sdk_seed062(ResourceRandom062 *state, Word062 seed)
{
    Word062 value = seed;
    Word062 index = 55;
    state->sdk_seed = seed;
    state->first = state->words + 31;
    state->second = state->words;
    while (index != 0) {
        --index;
        state->words[index] = value + (value >> 16);
        value = value * 69069 + 0x66d619e1;
    }
}

static void xorshift_seed062(ResourceRandom062 *state, Word062 seed)
{
    Word062 x = 123456789;
    Word062 y = 362436069;
    Word062 z = 521288629;
    Word062 w = seed;
    for (Word062 index = 0; index < 20; ++index) {
        Word062 shift = x ^ (x << 11);
        Word062 next = w ^ (w >> 19) ^ shift ^ (shift >> 8);
        x = y;
        y = z;
        z = w;
        w = next;
    }
    state->xorshift[0] = x;
    state->xorshift[1] = y;
    state->xorshift[2] = z;
    state->xorshift[3] = w;
}

void resource_seed062(Word062 seed)
{
    sdk_seed062(&resource_random_state062, seed);
    xorshift_seed062(&resource_random_state062, seed);
}

