#include "dfa_compile.h"

int fn_006d4080(const IntervalRing *left, const IntervalRing *right)
{
    const IntrusiveLink *a = left->head.next;
    const IntrusiveLink *b = right->head.next;
    while (a != &left->head && b != &right->head) {
        const IntervalNode *first = (const IntervalNode *)a;
        const IntervalNode *second = (const IntervalNode *)b;
        if (first->first <= second->first) {
            if (second->first <= first->last)
                return 1;
            a = a->next;
        } else {
            if (first->first <= second->last)
                return 1;
            b = b->next;
        }
    }
    return 0;
}

static IntrusiveLink *remove_range(IntervalRing *ring, IntervalNode *node)
{
    IntrusiveLink *next = node->link.next;
    node->link.previous->next = next;
    next->previous = node->link.previous;
    fixed_arena_release(ring->owner, node, 1);
    return next;
}

int fn_004c2c80(IntervalRing *destination, const IntervalRing *source)
{
    IntrusiveLink *link = destination->head.next;
    const IntrusiveLink *other = source->head.next;
    while (link != &destination->head && other != &source->head) {
        IntervalNode *node = (IntervalNode *)link;
        const IntervalNode *range = (const IntervalNode *)other;
        unsigned short first = node->first;
        unsigned short last = node->last;
        unsigned short low = range->first;
        unsigned short high = range->last;
        if (first == low) {
            if (high < last) {
                node->first = (unsigned short)(high + 1);
                other = other->next;
            } else
                link = remove_range(destination, node);
        } else if (low < first) {
            if (first <= high) {
                if (last <= high)
                    link = remove_range(destination, node);
                else
                    node->first = (unsigned short)(high + 1);
            } else
                other = other->next;
        } else if (last < low)
            link = link->next;
        else {
            node->last = (unsigned short)(low - 1);
            if (last <= high) {
                link = link->next;
                continue;
            }
            IntrusiveLink *following = link->next;
            IntervalNode *right = fixed_arena_allocate(destination->owner, 1);
            if (right == (void *)0)
                return 0;
            right->link.previous = following->previous;
            right->link.next = following;
            following->previous = &right->link;
            right->link.previous->next = &right->link;
            right->first = (unsigned short)(high + 1);
            right->last = last;
            link = &right->link;
            other = other->next;
        }
    }
    return 1;
}

void fn_0075559c(IntervalSet *set, void *const *destination, FixedArena *owner)
{
    set->kind = INTERVAL_SET_LIST;
    set->intervals.owner = owner;
    set->destination = *destination;
}
