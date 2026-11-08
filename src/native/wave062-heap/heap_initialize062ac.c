#include "heap062ac.h"

Heap062ac *heap_initialize062ac(Heap062ac *heap, void *storage,
    SdkWord062s bytes, SdkWord062s flags)
{
    HeapAddress062ac original = (HeapAddress062ac)storage;
    HeapAddress062ac begin = (original + HEAP_ALIGNMENT062AC - 1u) &
        ~(HeapAddress062ac)(HEAP_ALIGNMENT062AC - 1u);
    HeapAddress062ac end = (original + bytes) &
        ~(HeapAddress062ac)(HEAP_ALIGNMENT062AC - 1u);
    if (end < begin || end - begin < HEAP_HEADER062AC + HEAP_ALIGNMENT062AC)
        return 0;
    heap_register062ac(heap, 0x45585048u, (SdkByte062s *)begin,
        (SdkByte062s *)end, flags);
    heap->lists.group = 0;
    heap->lists.policy = 0;
    HeapBlock062ac *first = (HeapBlock062ac *)heap->begin;
    first->magic = 0x4652;
    first->flags = 0;
    first->size = (SdkWord062s)(heap->end - heap->begin) - HEAP_HEADER062AC;
    first->previous = 0;
    first->next = 0;
    heap->lists.free_first = first;
    heap->lists.free_last = first;
    heap->lists.used_first = 0;
    heap->lists.used_last = 0;
    return heap;
}
