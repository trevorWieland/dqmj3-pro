#ifndef DQMJ3_WAVE013_FILE_OWNER_SYNC_H
#define DQMJ3_WAVE013_FILE_OWNER_SYNC_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/thread.h"

#include "pattern_file_owner_heap.h"

typedef struct PatternOwnerSyncServices {
    void *(*current_thread)(void *context);
    void (*acquire)(void *context, PatternOwnerMutex *mutex);
    void (*release)(void *context, PatternOwnerMutex *mutex);
    void *context;
} PatternOwnerSyncServices;

int pattern_owner_bind_sync(const PatternOwnerSyncServices *services);

#endif
