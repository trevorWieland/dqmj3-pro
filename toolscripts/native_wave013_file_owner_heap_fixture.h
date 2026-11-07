#ifndef DQMJ3_WAVE013_OWNER_HEAP_FIXTURE_H
#define DQMJ3_WAVE013_OWNER_HEAP_FIXTURE_H

#include "../src/native/wave013/pattern_file_owner_sync.h"

typedef struct PatternOwnerSyncFixture {
    void *thread;
    unsigned int queries;
    unsigned int acquisitions;
    unsigned int releases;
} PatternOwnerSyncFixture;

void *pattern_owner_fixture_thread(void *context);
void pattern_owner_fixture_acquire(void *context, PatternOwnerMutex *mutex);
void pattern_owner_fixture_release(void *context, PatternOwnerMutex *mutex);

#endif
