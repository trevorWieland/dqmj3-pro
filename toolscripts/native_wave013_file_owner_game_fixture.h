#ifndef DQMJ3_WAVE013_FILE_OWNER_GAME_FIXTURE_H
#define DQMJ3_WAVE013_FILE_OWNER_GAME_FIXTURE_H

#include "native_wave013_file_owner_backend_fixture.h"
#include "../src/native/wave013/pattern_file_owner_game_services.h"

struct PatternGameEnvironment;
struct PatternGameHeap;

typedef struct PatternGameHeapOperations {
    void *(*allocate)(struct PatternGameHeap *heap, unsigned int bytes, unsigned int alignment);
    void (*release)(struct PatternGameHeap *heap, PatternFileOwner *owner);
} PatternGameHeapOperations;

typedef struct PatternGameHeap {
    const PatternGameHeapOperations *operations;
    struct PatternGameEnvironment *environment;
} PatternGameHeap;

typedef struct PatternGameReleasedOwner {
    PatternFileOwner *identity;
    PatternFileOwner *slot_value;
    PatternFileOwner snapshot;
} PatternGameReleasedOwner;

typedef struct PatternGameEnvironment {
    PatternOwnerBackendFixture backend;
    PatternGameHeap heap;
    PatternGameFilterOwner *filter;
    PatternFileOwner *candidate;
    PatternFileOwner *intervening;
    unsigned int reentry_mode;
    unsigned int allocations;
    unsigned int releases;
    unsigned int requested_bytes;
    unsigned int requested_alignment;
    PatternFileOwner *slot_before_allocation;
    PatternFileOwner *slot_written_during_allocation;
    PatternGameReleasedOwner released[4];
} PatternGameEnvironment;

void *pattern_game_heap_allocate(PatternGameHeap *heap, unsigned int bytes, unsigned int alignment);
void pattern_game_heap_free(PatternGameHeap *heap, PatternFileOwner *owner);
PatternFileOwner *pattern_game_heap_allocate_owner(void *context);
void pattern_game_heap_source_delete(void *context, PatternFileOwner *owner);

extern const PatternGameHeapOperations pattern_game_heap_operations;
extern const unsigned int pattern_game_layout_values[];

#endif
