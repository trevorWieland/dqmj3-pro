#include "../src/native/wave013/pattern_file_owner_view.h"

const unsigned int pattern_owner_layout_values[] = {
    sizeof(void *), sizeof(PatternFileOwner), sizeof(PatternOwnerStorage), sizeof(PatternFileOwnerOperations),
    __builtin_offsetof(PatternFileOwner, operations), __builtin_offsetof(PatternFileOwner, allocation),
    __builtin_offsetof(PatternFileOwner, initialized), __builtin_offsetof(PatternFileOwner, mounted),
    __builtin_offsetof(PatternFileOwner, bypass_at_sign), __builtin_offsetof(PatternFileOwner, file_id),
    __builtin_offsetof(PatternFileOwner, storage), __builtin_offsetof(PatternFileOwner, scratch),
    __builtin_offsetof(PatternFileOwner, file_buffer), __builtin_offsetof(PatternFileOwner, resource_work),
    __builtin_offsetof(PatternFileOwner, candidate_storage), __builtin_offsetof(PatternFileOwner, final_flag),
    __builtin_offsetof(PatternOwnerStorage, arena_blocks), __builtin_offsetof(PatternOwnerStorage, file_buffer),
    __builtin_offsetof(PatternOwnerStorage, resource_work), __builtin_offsetof(PatternOwnerStorage, candidate_storage),
    sizeof(((PatternOwnerStorage *)0)->file_buffer), sizeof(((PatternOwnerStorage *)0)->resource_work),
    sizeof(((PatternOwnerStorage *)0)->candidate_storage), sizeof(FixedArenaBlock)
};
