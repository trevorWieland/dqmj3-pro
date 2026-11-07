#include "native_wave013_file_owner_heap_fixture.h"

const unsigned int pattern_owner_heap_layout_values[] = {
    sizeof(void *), sizeof(PatternOwnerBlock), __builtin_offsetof(PatternOwnerBlock, next),
    __builtin_offsetof(PatternOwnerBlock, previous), __builtin_offsetof(PatternOwnerBlock, data),
    __builtin_offsetof(PatternOwnerBlock, bytes), __builtin_offsetof(PatternOwnerBlock, unknown_flag),
    sizeof(PatternOwnerMutex), __builtin_offsetof(PatternOwnerMutex, state),
    __builtin_offsetof(PatternOwnerMutex, thread), __builtin_offsetof(PatternOwnerMutex, depth),
    sizeof(PatternOwnerHeap), __builtin_offsetof(PatternOwnerHeap, begin), __builtin_offsetof(PatternOwnerHeap, end),
    __builtin_offsetof(PatternOwnerHeap, anchor), __builtin_offsetof(PatternOwnerHeap, mutex),
    sizeof(PatternOwnerSyncServices), sizeof(PatternOwnerSyncFixture)
};
