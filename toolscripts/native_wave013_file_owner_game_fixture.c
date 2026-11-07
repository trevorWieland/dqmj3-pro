#include "native_wave013_file_owner_game_fixture.h"

void *pattern_game_heap_allocate(PatternGameHeap *heap, unsigned int bytes, unsigned int alignment)
{
    PatternGameEnvironment *environment = heap->environment;
    ++environment->allocations;
    environment->requested_bytes = bytes;
    environment->requested_alignment = alignment;
    environment->slot_before_allocation = environment->filter->owner;
    if (environment->reentry_mode == 1)
        environment->filter->owner = environment->intervening;
    else if (environment->reentry_mode == 2)
        environment->filter->owner = environment->candidate;
    environment->slot_written_during_allocation = environment->filter->owner;
    return environment->candidate;
}

void pattern_game_heap_free(PatternGameHeap *heap, PatternFileOwner *owner)
{
    PatternGameEnvironment *environment = heap->environment;
    unsigned int index = environment->releases++;
    if (index < 4) {
        PatternGameReleasedOwner *released = &environment->released[index];
        released->identity = owner;
        released->slot_value = environment->filter->owner;
        PatternFileOwner *snapshot = &released->snapshot;
        snapshot->operations = owner->operations;
        snapshot->allocation.next = owner->allocation.next;
        snapshot->allocation.previous = owner->allocation.previous;
        snapshot->allocation.data = owner->allocation.data;
        snapshot->allocation.bytes = owner->allocation.bytes;
        snapshot->allocation.unknown_flag = owner->allocation.unknown_flag;
        snapshot->initialized = owner->initialized;
        snapshot->mounted = owner->mounted;
        snapshot->bypass_at_sign = owner->bypass_at_sign;
        snapshot->file_id = owner->file_id;
        snapshot->storage = owner->storage;
        snapshot->scratch = owner->scratch;
        snapshot->file_buffer = owner->file_buffer;
        snapshot->resource_work = owner->resource_work;
        snapshot->candidate_storage = owner->candidate_storage;
        snapshot->final_flag = owner->final_flag;
    }
    pattern_owner_provider_delete_owner(&environment->backend.provider, owner);
}

PatternFileOwner *pattern_game_heap_allocate_owner(void *context)
{
    PatternGameEnvironment *environment = context;
    return pattern_game_heap_allocate(&environment->heap, sizeof(PatternFileOwner), _Alignof(PatternFileOwner));
}

void pattern_game_heap_source_delete(void *context, PatternFileOwner *owner)
{
    PatternGameEnvironment *environment = context;
    pattern_game_heap_free(&environment->heap, owner);
}

const PatternGameHeapOperations pattern_game_heap_operations = {
    pattern_game_heap_allocate, pattern_game_heap_free
};

const unsigned int pattern_game_layout_values[] = {
    sizeof(PatternGameEnvironment), sizeof(PatternGameHeap), sizeof(PatternGameReleasedOwner),
    sizeof(PatternGameFilterOwner), sizeof(PatternFileOwner), _Alignof(PatternFileOwner),
    __builtin_offsetof(PatternGameEnvironment, heap), __builtin_offsetof(PatternGameEnvironment, filter),
    __builtin_offsetof(PatternGameEnvironment, candidate), __builtin_offsetof(PatternGameEnvironment, intervening),
    __builtin_offsetof(PatternGameEnvironment, reentry_mode), __builtin_offsetof(PatternGameEnvironment, allocations),
    __builtin_offsetof(PatternGameEnvironment, releases), __builtin_offsetof(PatternGameEnvironment, requested_bytes),
    __builtin_offsetof(PatternGameEnvironment, requested_alignment), __builtin_offsetof(PatternGameEnvironment, slot_before_allocation),
    __builtin_offsetof(PatternGameEnvironment, slot_written_during_allocation), __builtin_offsetof(PatternGameEnvironment, released),
    __builtin_offsetof(PatternGameReleasedOwner, identity), __builtin_offsetof(PatternGameReleasedOwner, slot_value),
    __builtin_offsetof(PatternGameReleasedOwner, snapshot)
};
