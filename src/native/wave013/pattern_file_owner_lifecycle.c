#include "pattern_file_owner_services.h"

const PatternFileOwnerOperations pattern_file_owner_operations = {
    (void *)0, fn_004c43a8, {(void *)0, (void *)0, (void *)0}, fn_004c3e74
};

PatternFileOwner *fn_004c4358(PatternFileOwner *owner)
{
    owner->operations = &pattern_file_owner_operations;
    owner->allocation.next = (void *)0;
    owner->allocation.previous = (void *)0;
    owner->allocation.data = (void *)0;
    owner->allocation.bytes = 0;
    owner->allocation.unknown_flag = 0;
    owner->initialized = 0;
    owner->mounted = 0;
    owner->bypass_at_sign = 0;
    owner->storage = (void *)0;
    owner->scratch = (void *)0;
    owner->file_buffer = (void *)0;
    owner->resource_work = (void *)0;
    owner->candidate_storage = (void *)0;
    owner->final_flag = 1;
    return owner;
}

void fn_004c42fc(PatternFileOwner *owner)
{
    const PatternFileOwnerServices *services = pattern_owner_services();
    if (owner->mounted != 0)
        services->unmount(services->context, "ngword:");
    if (owner->initialized != 0)
        fn_0044f5b4(&owner->allocation);
    owner->initialized = 0;
    owner->mounted = 0;
    owner->bypass_at_sign = 0;
    owner->storage = (void *)0;
    owner->scratch = (void *)0;
    owner->file_buffer = (void *)0;
    owner->resource_work = (void *)0;
    owner->candidate_storage = (void *)0;
    owner->final_flag = 1;
}

void fn_004c43a8(PatternFileOwner *owner)
{
    owner->operations = &pattern_file_owner_operations;
    fn_004c42fc(owner);
    fn_0044f5b4(&owner->allocation);
    const PatternFileOwnerServices *services = pattern_owner_services();
    services->delete_owner(services->context, owner);
}
