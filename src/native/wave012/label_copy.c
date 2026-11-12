#include "compile_graph.h"

int fn_007555f0(IntervalSet *destination, const IntervalSet *source, void *const *target, FixedArena *arena)
{
    switch (source->kind) {
    case INTERVAL_SET_EPSILON:
        destination->kind = INTERVAL_SET_EPSILON;
        destination->destination = *target;
        return 1;
    case INTERVAL_SET_SINGLE:
        destination->kind = INTERVAL_SET_SINGLE;
        destination->value.character = source->value.character;
        destination->destination = *target;
        return 1;
    case INTERVAL_SET_CONTROL:
        destination->kind = INTERVAL_SET_CONTROL;
        destination->value.control_bit = source->value.control_bit;
        destination->destination = *target;
        return 1;
    case INTERVAL_SET_LIST:
        destination->kind = INTERVAL_SET_LIST;
        destination->destination = *target;
        destination->intervals.owner = arena;
        fn_007557bc(destination);
        destination->intervals.owner = source->intervals.owner;
        for (const IntrusiveLink *link = source->intervals.head.next;
             link != &source->intervals.head; link = link->next) {
            const IntervalNode *old = (const IntervalNode *)link;
            IntervalNode *node = fixed_arena_allocate(destination->intervals.owner, RANGE_NODE_BLOCKS);
            if (node == (void *)0)
                return 0;
            IntrusiveLink *head = &destination->intervals.head;
            node->link.previous = head->previous;
            node->link.next = head;
            head->previous = &node->link;
            node->link.previous->next = &node->link;
            node->first = old->first;
            node->last = old->last;
        }
        return 1;
    default:
        return 1;
    }
}

int fn_00755720(IntervalSet *destination, const IntervalSet *source, FixedArena *arena)
{
    void *target = source->destination;
    return fn_007555f0(destination, source, &target, arena);
}
