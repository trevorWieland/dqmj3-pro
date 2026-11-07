#include "pattern_file_owner_services.h"

void fn_0044f54c(PatternOwnerBlock *block, unsigned int bytes)
{
    const PatternFileOwnerServices *services = pattern_owner_services();
    if (services->memory_ready != 0 && block->data == (void *)0) {
        unsigned int physical_bytes = (bytes + 0xfff) & ~0xfffu;
        if (fn_0014e0a8(services->heap, block, physical_bytes, 0) == (void *)0)
            services->failure(services->context, 0xd8601837u);
        block->unknown_flag = 0;
    }
}

void fn_0044f5b4(PatternOwnerBlock *block)
{
    if (block->data != (void *)0)
        fn_0015e1b0(pattern_owner_services()->heap, block);
}

unsigned int fn_004c3e08(PatternFileOwner *owner)
{
    if (owner->initialized != 0)
        return 0xe0e0ebebu;
    fn_0044f54c(&owner->allocation, sizeof(PatternOwnerStorage));
    PatternOwnerStorage *storage = (PatternOwnerStorage *)owner->allocation.data;
    owner->storage = storage;
    owner->initialized = 1;
    owner->scratch = storage;
    owner->file_buffer = storage->file_buffer;
    owner->candidate_storage = storage->candidate_storage;
    owner->resource_work = storage->resource_work;
    int result = fn_004c4068(owner);
    return result < 0 ? (unsigned int)result : 0;
}
