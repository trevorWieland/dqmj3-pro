#include "fixture058.h"

static Heap058 *current_heap;

void fixture_bind058(Heap058 *heap)
{
    current_heap = heap;
}

static Event058 *event(Heap058 *heap, Word058 kind, void *memory)
{
    Event058 *entry;
    if (heap->event_count >= 32)
        return (void *)0;
    entry = &heap->events[heap->event_count++];
    entry->kind = kind;
    entry->memory = memory;
    entry->bytes = 0;
    entry->alignment = 0;
    if (heap->stream != (void *)0) {
        entry->published_state = heap->stream->state;
        entry->message = heap->stream->message;
        entry->disposer = heap->stream->dispose;
        entry->context = heap->stream->context;
    }
    return entry;
}

static void *allocate(Heap058 *heap, Word058 bytes, Word058 alignment, Word058 kind)
{
    Word058 at;
    void *memory;
    Event058 *entry;
    ++heap->allocations;
    entry = event(heap, kind, (void *)0);
    if (entry != (void *)0) {
        entry->bytes = bytes;
        entry->alignment = alignment;
    }
    if (heap->allocations == heap->fail_at)
        return (void *)0;
    at = (heap->used + 31u) & ~15u;
    if (at > heap->capacity || bytes > heap->capacity - at)
        return (void *)0;
    memory = heap->pool + at;
    heap->used = at + bytes;
    if (entry != (void *)0)
        entry->memory = memory;
    return memory;
}

static void dispose(Heap058 *heap, void *memory, Word058 kind)
{
    ++heap->releases;
    event(heap, kind, memory);
    if (heap->reentry != 0 && heap->releases == 1 && heap->stream != (void *)0) {
        if (heap->reentry & 1)
            heap->stream->state = heap->replacement;
        if (heap->reentry & 2)
            heap->stream->dispose = heap->alternate_disposer;
        if (heap->reentry & 4)
            heap->stream->context = heap->alternate_context;
    }
}

void *fixture_allocate058(void *context, Word058 count, Word058 bytes)
{
    return allocate(context, count * bytes, 4, 1);
}

void fixture_dispose058(void *context, void *memory)
{
    dispose(context, memory, 2);
}

void fixture_alternate_dispose058(void *context, void *memory)
{
    dispose(context, memory, 3);
}

void *stream_heap_allocate058(Word058 bytes)
{
    return allocate(current_heap, bytes, 4, 4);
}

void stream_heap_dispose058(void *memory)
{
    if (memory != (void *)0)
        dispose(current_heap, memory, 5);
}

static void *sdk_allocate(SdkHeap058 *heap, Word058 bytes, Word058 alignment)
{
    return allocate(heap->context, bytes, alignment, 4);
}

static void sdk_dispose(SdkHeap058 *heap, void *memory)
{
    dispose(heap->context, memory, 5);
}

const SdkOperations058 fixture_sdk_operations058 = {sdk_allocate, sdk_dispose};

#define O(type, member) ((Word058)__builtin_offsetof(type, member))

const Word058 fixture_layout058[] = {
    sizeof(void *), sizeof(Stream058), sizeof(State058),
    O(State058,mode), O(State058,last), O(State058,wrap), O(State058,dictionary_present),
    O(State058,maximum_distance), O(State058,total), O(State058,header), O(State058,window_bits),
    O(State058,window_size), O(State058,window_have), O(State058,window_next), O(State058,window),
    O(State058,hold), O(State058,bits), O(State058,lengths), O(State058,distances),
    O(State058,length_bits), O(State058,distance_bits), O(State058,next_code), O(State058,codes),
    O(State058,sane), O(State058,back), O(State058,untouched_tail),
    sizeof(Heap058), O(Heap058,pool), O(Heap058,capacity), O(Heap058,used),
    O(Heap058,allocations), O(Heap058,releases), O(Heap058,fail_at), O(Heap058,stream),
    O(Heap058,reentry), O(Heap058,replacement), O(Heap058,alternate_disposer),
    O(Heap058,alternate_context), O(Heap058,event_count), O(Heap058,events),
    sizeof(Event058), O(Event058,kind), O(Event058,bytes), O(Event058,alignment),
    O(Event058,memory), O(Event058,published_state), O(Event058,message),
    O(Event058,disposer), O(Event058,context)
};
