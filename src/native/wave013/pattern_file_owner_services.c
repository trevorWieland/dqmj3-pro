#include "pattern_file_owner_services.h"

static const PatternFileOwnerServices *active_owner_services;

int pattern_owner_bind_services(const PatternFileOwnerServices *services)
{
    if (services == (void *)0 || services->heap == (void *)0 ||
        services->resource_work_required == (void *)0 || services->mount == (void *)0 ||
        services->unmount == (void *)0 || services->open == (void *)0 || services->release == (void *)0 ||
        services->delete_owner == (void *)0 || services->failure == (void *)0)
        return 0;
    active_owner_services = services;
    return 1;
}

const PatternFileOwnerServices *pattern_owner_services(void)
{
    return active_owner_services;
}
