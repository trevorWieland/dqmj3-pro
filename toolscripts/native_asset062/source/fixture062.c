#include "packets062.h"
#include "random062.h"

const unsigned int fixture_layout062[] = {
    sizeof(void *), sizeof(Word062), sizeof(Signed062), sizeof(ResourceBlock062),
    sizeof(ResourceMetadata062), __builtin_offsetof(ResourceMetadata062, ordinal),
    __builtin_offsetof(ResourceMetadata062, valid), sizeof(ResourcePacket062),
    __builtin_offsetof(ResourcePacket062, bytes)
};

#define O(member) ((Word062)__builtin_offsetof(ResourceRandom062, member))

const Word062 fixture_random_layout062[] = {
    sizeof(ResourceRandom062), O(sdk_seed), O(words), O(first), O(second), O(xorshift)
};
