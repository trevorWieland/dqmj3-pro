#include "records062.h"

void *memory_copy(void *, const void *, unsigned int);

static void record_copy062(ResourceRecord062 *destination,
    const ResourceRecord062 *source)
{
    memory_copy(destination->record, source->record, 240);
    destination->valid = source->valid;
}

void resource_record_append062(ResourceRecordVector062 *vector,
    const ResourceRecord062 *record, const ResourceHeapServices062 *heap)
{
    ResourceRecord062 *position = vector->end;
    ResourceRecord062 *storage;
    Word062 count;
    Word062 capacity;
    if (position != vector->limit) {
        vector->end = position + 1;
        record_copy062(position, record);
        return;
    }
    count = vector->begin == (void *)0 ? 0 : (Word062)(position - vector->begin);
    capacity = count + count / 2 + count / 8;
    if (capacity < count + 32)
        capacity = count + 32;
    storage = heap->allocate(heap->context, capacity * sizeof(*storage), 4);
    for (Word062 index = 0; index < count; ++index)
        record_copy062(storage + index, vector->begin + index);
    record_copy062(storage + count, record);
    if (vector->begin != (void *)0)
        heap->dispose(heap->context, vector->begin);
    vector->begin = storage;
    vector->end = storage + count + 1;
    vector->limit = storage + capacity;
}
