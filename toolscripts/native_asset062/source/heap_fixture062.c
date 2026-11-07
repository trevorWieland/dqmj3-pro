#include "heap_fixture062.h"

static HeapEvent062 *fixture_heap_event062(HeapFixture062 *heap,
    Word062 kind, void *memory)
{
    HeapEvent062 *event;
    if (heap->event_count >= 64)
        return (void *)0;
    event = heap->events + heap->event_count++;
    event->kind = kind;
    event->bytes = 0;
    event->alignment = 0;
    event->memory = memory;
    event->begin = heap->vector->begin;
    event->end = heap->vector->end;
    event->limit = heap->vector->limit;
    return event;
}

void *fixture_heap_allocate062(void *context, Word062 bytes, Word062 alignment)
{
    HeapFixture062 *heap = context;
    HeapEvent062 *event = fixture_heap_event062(heap, 4, (void *)0);
    Word062 offset;
    void *memory;
    ++heap->allocations;
    if (event != (void *)0) {
        event->bytes = bytes;
        event->alignment = alignment;
    }
    if (heap->allocations == heap->fail_at)
        return (void *)0;
    offset = (heap->used + 31) & ~15u;
    if (offset > heap->capacity || bytes > heap->capacity - offset)
        return (void *)0;
    memory = heap->pool + offset;
    heap->used = offset + bytes;
    if (event != (void *)0)
        event->memory = memory;
    return memory;
}

void fixture_heap_dispose062(void *context, void *memory)
{
    HeapFixture062 *heap = context;
    ++heap->releases;
    fixture_heap_event062(heap, 5, memory);
}

static void *fixture_sdk_allocate062(SdkHeapFixture062 *heap,
    Word062 bytes, Word062 alignment)
{
    return fixture_heap_allocate062(heap->context, bytes, alignment);
}

static void fixture_sdk_dispose062(SdkHeapFixture062 *heap, void *memory)
{
    fixture_heap_dispose062(heap->context, memory);
}

const SdkHeapOperations062 fixture_sdk_operations062 = {
    fixture_sdk_allocate062, fixture_sdk_dispose062
};

#define O(type, member) ((Word062)__builtin_offsetof(type, member))

const Word062 fixture_heap_layout062[] = {
    sizeof(ResourceRecord062), sizeof(ResourceRecordVector062),
    sizeof(ResourceHeapServices062), sizeof(HeapFixture062), sizeof(HeapEvent062),
    O(HeapFixture062,pool), O(HeapFixture062,capacity), O(HeapFixture062,used),
    O(HeapFixture062,allocations), O(HeapFixture062,releases),
    O(HeapFixture062,fail_at), O(HeapFixture062,event_count),
    O(HeapFixture062,vector), O(HeapFixture062,events),
    O(HeapEvent062,kind), O(HeapEvent062,bytes), O(HeapEvent062,alignment),
    O(HeapEvent062,memory), O(HeapEvent062,begin), O(HeapEvent062,end),
    O(HeapEvent062,limit)
};
