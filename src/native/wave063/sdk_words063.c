#include "sdk_words063.h"

void resource_sdk_words063(ResourceRandom062 *state, Word062 seed)
{
    Word062 value = seed;
    state->first = state->words + 31;
    state->second = state->words;
    for (Word062 index = 55; index != 0;) {
        --index;
        state->words[index] = value + (value >> 16);
        value = value * 69069 + 0x66d619e1;
    }
}
