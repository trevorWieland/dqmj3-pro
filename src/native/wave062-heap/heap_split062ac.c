#include "heap062ac.h"

static void free_fragment(Heap062ac *heap, HeapBlock062ac *block,
    SdkWord062s bytes, HeapBlock062ac *previous)
{
    block->magic = 0x4652;
    block->flags = 0;
    block->next = 0;
    block->previous = previous;
    block->size = bytes - HEAP_HEADER062AC;
    HeapBlock062ac *next = previous == 0 ? heap->lists.free_first : previous->next;
    if (previous != 0)
        previous->next = block;
    else
        heap->lists.free_first = block;
    block->next = next;
    if (next != 0)
        next->previous = block;
    else
        heap->lists.free_last = block;
}

void *heap_split062ac(HeapLists062ac *lists, HeapBlock062ac *free_block,
    SdkByte062s *payload, SdkWord062s bytes, SdkWord062s reverse)
{
    Heap062ac *heap = (Heap062ac *)((SdkByte062s *)lists - __builtin_offsetof(Heap062ac, lists));
    SdkByte062s *header = payload - HEAP_HEADER062AC;
    SdkByte062s *old_end = (SdkByte062s *)free_block + HEAP_HEADER062AC + free_block->size;
    SdkByte062s *begin = (SdkByte062s *)free_block - ((free_block->flags >> 8) & 127u);
    SdkByte062s *end = payload + bytes;
    HeapBlock062ac *previous = free_block->previous;
    HeapBlock062ac *next = free_block->next;
    if (previous != 0)
        previous->next = next;
    else
        heap->lists.free_first = next;
    if (next != 0)
        next->previous = previous;
    else
        heap->lists.free_last = previous;
    SdkWord062s leading = (SdkWord062s)(header - begin);
    if (leading >= HEAP_HEADER062AC + HEAP_ALIGNMENT062AC && (reverse != 0 || heap->lists.split != 0)) {
        free_fragment(heap, (HeapBlock062ac *)begin, leading, previous);
        previous = (HeapBlock062ac *)begin;
    } else {
        header = begin;
    }
    SdkWord062s trailing = (SdkWord062s)(old_end - end);
    if (trailing >= HEAP_HEADER062AC + HEAP_ALIGNMENT062AC && (reverse != 1 || heap->lists.split != 0)) {
        free_fragment(heap, (HeapBlock062ac *)end, trailing, previous);
    } else {
        end = old_end;
    }
    if (heap->flags & 1u) {
        for (SdkByte062s *at = header; at != end; ++at)
            *at = 0;
    }
    HeapBlock062ac *used = (HeapBlock062ac *)(payload - HEAP_HEADER062AC);
    used->magic = 0x5544;
    used->previous = 0;
    used->size = (SdkWord062s)(end - (SdkByte062s *)used) - HEAP_HEADER062AC;
    used->next = 0;
    SdkWord062s padding = (SdkWord062s)((SdkByte062s *)used - header) & 127u;
    used->flags = (HeapHalf062ac)((reverse << 15) | (padding << 8) | (heap->lists.group & 255u));
    HeapBlock062ac *last = heap->lists.used_last;
    used->previous = last;
    HeapBlock062ac *following = last == 0 ? heap->lists.used_first : last->next;
    if (last != 0)
        last->next = used;
    else
        heap->lists.used_first = used;
    used->next = following;
    if (following != 0)
        following->previous = used;
    else
        heap->lists.used_last = used;
    return payload;
}
