#include "pattern_file_owner_sync.h"

static const PatternOwnerSyncServices *active_services;

int pattern_owner_bind_sync(const PatternOwnerSyncServices *services)
{
    if (services == (void *)0 || services->current_thread == (void *)0 ||
        services->acquire == (void *)0 || services->release == (void *)0)
        return 0;
    active_services = services;
    return 1;
}

void pattern_owner_mutex_lock(PatternOwnerMutex *mutex)
{
    if (active_services->current_thread(active_services->context) != mutex->thread) {
        active_services->acquire(active_services->context, mutex);
        mutex->thread = active_services->current_thread(active_services->context);
    }
    ++mutex->depth;
}

void pattern_owner_mutex_unlock(PatternOwnerMutex *mutex)
{
    if (--mutex->depth == 0) {
        mutex->thread = (void *)0;
        active_services->release(active_services->context, mutex);
    }
}
