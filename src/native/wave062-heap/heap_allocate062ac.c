#include "heap062ac.h"

void *heap_allocate062ac(Heap062ac *heap, SdkWord062s bytes, SdkSigned062s alignment)
{
    if (bytes == 0)
        bytes = 1;
    bytes = (bytes + HEAP_ALIGNMENT062AC - 1u) & ~(HEAP_ALIGNMENT062AC - 1u);
    SdkWord062s magnitude = alignment < 0 ? 0u - (SdkWord062s)alignment : (SdkWord062s)alignment;
    if (magnitude < HEAP_ALIGNMENT062AC)
        magnitude = HEAP_ALIGNMENT062AC;
    HeapAddress062ac mask = (HeapAddress062ac)magnitude - 1u;
    HeapBlock062ac *selected = 0;
    SdkByte062s *payload = 0;
    SdkWord062s best = ~0u;
    HeapBlock062ac *block = alignment < 0 ? heap->lists.free_last : heap->lists.free_first;
    while (block != 0) {
        SdkByte062s *start = (SdkByte062s *)block + HEAP_HEADER062AC;
        HeapAddress062ac address;
        if (alignment < 0)
            address = ((HeapAddress062ac)start + block->size - bytes) & ~mask;
        else
            address = ((HeapAddress062ac)start + mask) & ~mask;
        SdkWord062s needed = (SdkWord062s)(address - (HeapAddress062ac)start) + bytes;
        if (address >= (HeapAddress062ac)start && block->size >= needed && block->size < best) {
            selected = block;
            payload = (SdkByte062s *)address;
            best = block->size;
            if (!(heap->lists.policy & 1u) || best == bytes)
                break;
        }
        block = alignment < 0 ? block->previous : block->next;
    }
    if (selected == 0)
        return 0;
    return heap_split062ac(&heap->lists, selected, payload, bytes, alignment < 0 ? 1u : 0u);
}
