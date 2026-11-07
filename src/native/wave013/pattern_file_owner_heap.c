#include "pattern_file_owner_heap.h"

static void insert_after(PatternOwnerBlock *previous, PatternOwnerBlock *block)
{
    block->previous = previous;
    previous->next->previous = block;
    block->next = previous->next;
    previous->next = block;
}

unsigned char *fn_0014e0a8(PatternOwnerHeap *heap, PatternOwnerBlock *block,
    unsigned int bytes, unsigned int margin)
{
    pattern_owner_mutex_lock(&heap->mutex);
    PatternOwnerBlock *anchor = heap->anchor;
    PatternOwnerBlock *selected = (void *)0;
    unsigned char *cursor = heap->end;
    if (anchor != (void *)0) {
        PatternOwnerBlock *candidate = anchor->next;
        while (candidate != (void *)0) {
            unsigned char *candidate_end = candidate->data + candidate->bytes;
            if (bytes + margin <= (unsigned int)(cursor - candidate_end)) {
                selected = candidate;
                break;
            }
            if (candidate == anchor)
                break;
            cursor = candidate->data - margin;
            candidate = candidate->next;
        }
    }
    unsigned char *placement;
    PatternOwnerBlock *previous = anchor;
    int replace_anchor = 0;
    if (selected != (void *)0) {
        placement = selected->data + selected->bytes + margin;
        if (anchor != (void *)0 && anchor->next != selected && selected->previous != (void *)0) {
            previous = selected->previous;
            replace_anchor = previous == anchor;
        }
    } else {
        placement = heap->begin;
        if (anchor != (void *)0) {
            if (anchor->data < placement + bytes + margin) {
                pattern_owner_mutex_unlock(&heap->mutex);
                return (void *)0;
            }
            replace_anchor = 1;
        } else if (heap->end < placement + bytes) {
            pattern_owner_mutex_unlock(&heap->mutex);
            return (void *)0;
        }
    }
    if (previous != (void *)0) {
        insert_after(previous, block);
    } else {
        block->previous = block;
        block->next = block;
    }
    if (anchor == (void *)0 || replace_anchor)
        heap->anchor = block;
    block->data = placement;
    block->bytes = bytes;
    pattern_owner_mutex_unlock(&heap->mutex);
    return placement;
}

void fn_0015e1b0(PatternOwnerHeap *heap, PatternOwnerBlock *block)
{
    pattern_owner_mutex_lock(&heap->mutex);
    if (block->next == block) {
        heap->anchor = (void *)0;
    } else {
        if (heap->anchor == block)
            heap->anchor = block->previous;
        block->previous->next = block->next;
        block->next->previous = block->previous;
    }
    block->previous = (void *)0;
    block->next = (void *)0;
    block->data = (void *)0;
    block->bytes = 0;
    pattern_owner_mutex_unlock(&heap->mutex);
}
