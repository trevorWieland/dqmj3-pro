#include "native_wave013_file_owner_heap_fixture.h"

void *pattern_owner_fixture_thread(void *context)
{
    PatternOwnerSyncFixture *fixture = context;
    ++fixture->queries;
    return fixture->thread;
}

void pattern_owner_fixture_acquire(void *context, PatternOwnerMutex *mutex)
{
    PatternOwnerSyncFixture *fixture = context;
    ++fixture->acquisitions;
    mutex->state = 1;
}

void pattern_owner_fixture_release(void *context, PatternOwnerMutex *mutex)
{
    PatternOwnerSyncFixture *fixture = context;
    ++fixture->releases;
    mutex->state = 0;
}
