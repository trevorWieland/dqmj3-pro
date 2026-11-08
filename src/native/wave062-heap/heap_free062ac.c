#include "heap062ac.h"

void heap_free062ac(Heap062ac *heap, void *payload)
{
    HeapBlock062ac *used = (HeapBlock062ac *)((SdkByte062s *)payload - HEAP_HEADER062AC);
    SdkByte062s *begin = (SdkByte062s *)used - ((used->flags >> 8) & 127u);
    SdkByte062s *end = (SdkByte062s *)payload + used->size;
    HeapBlock062ac *previous = used->previous;
    HeapBlock062ac *next = used->next;
    if (previous != 0)
        previous->next = next;
    else
        heap->lists.used_first = next;
    if (next != 0)
        next->previous = previous;
    else
        heap->lists.used_last = previous;
    HeapBlock062ac *before = 0;
    HeapBlock062ac *after = heap->lists.free_first;
    while (after != 0 && (HeapAddress062ac)begin > (HeapAddress062ac)after) {
        before = after;
        after = after->next;
    }
    if (after != 0 && end == (SdkByte062s *)after) {
        end = (SdkByte062s *)after + HEAP_HEADER062AC + after->size;
        previous = after->previous;
        next = after->next;
        if (previous != 0)
            previous->next = next;
        else
            heap->lists.free_first = next;
        if (next != 0)
            next->previous = previous;
        else
            heap->lists.free_last = previous;
    }
    if (before != 0 && (SdkByte062s *)before + HEAP_HEADER062AC + before->size == begin) {
        begin = (SdkByte062s *)before;
        previous = before->previous;
        next = before->next;
        if (previous != 0)
            previous->next = next;
        else
            heap->lists.free_first = next;
        if (next != 0)
            next->previous = previous;
        else
            heap->lists.free_last = previous;
        before = previous;
    }
    SdkWord062s span = (SdkWord062s)(end - begin);
    if (span < HEAP_HEADER062AC)
        return;
    HeapBlock062ac *block = (HeapBlock062ac *)begin;
    block->magic = 0x4652;
    block->flags = 0;
    block->size = span - HEAP_HEADER062AC;
    block->previous = before;
    block->next = 0;
    HeapBlock062ac *following = before == 0 ? heap->lists.free_first : before->next;
    if (before != 0)
        before->next = block;
    else
        heap->lists.free_first = block;
    block->next = following;
    if (following != 0)
        following->previous = block;
    else
        heap->lists.free_last = block;
}
