#ifndef DQMJ3_WAVE013_FILE_OWNER_VIEW_H
#define DQMJ3_WAVE013_FILE_OWNER_VIEW_H

#include "pattern_file_view.h"
#include "pattern_file_owner_heap.h"

typedef struct PatternOwnerStorage {
    unsigned char arena_bitmap_and_header[0xc00];
    FixedArenaBlock arena_blocks[0xa40];
    unsigned short file_buffer[0x2000];
    unsigned char resource_work[0x800];
    unsigned short candidate_storage[0x400];
} PatternOwnerStorage;

struct PatternFileOwner;

typedef struct PatternFileOwnerOperations {
    void (*opaque_00)(void);
    void (*destroy)(struct PatternFileOwner *owner);
    void (*opaque_08[3])(void);
    unsigned int (*apply)(struct PatternFileOwner *owner, unsigned int *flags,
        unsigned int selection_input, const unsigned short *const *candidates, unsigned int count);
} PatternFileOwnerOperations;

typedef struct PatternFileOwner {
    const PatternFileOwnerOperations *operations;
    PatternOwnerBlock allocation;
    unsigned char initialized;
    unsigned char mounted;
    unsigned char bypass_at_sign;
    unsigned char file_id;
    PatternOwnerStorage *storage;
    void *scratch;
    unsigned short *file_buffer;
    unsigned char *resource_work;
    unsigned short *candidate_storage;
    unsigned char final_flag;
} PatternFileOwner;

PatternFileOwner *fn_004c4358(PatternFileOwner *owner);
unsigned int fn_004c3e08(PatternFileOwner *owner);
int fn_004c4068(PatternFileOwner *owner);
void fn_004c42fc(PatternFileOwner *owner);
void fn_004c43a8(PatternFileOwner *owner);
unsigned int fn_004c3e74(PatternFileOwner *owner, unsigned int *flags,
    unsigned int selection_input, const unsigned short *const *candidates, unsigned int count);

#endif
