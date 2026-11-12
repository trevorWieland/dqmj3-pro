#include "pattern_ranges.h"

static void remove_node(IntervalRing *ring, IntervalNode *node)
{
    node->link.previous->next = node->link.next;
    node->link.next->previous = node->link.previous;
    fixed_arena_release(ring->owner, node, 1);
}

static IntervalNode *split_after(IntervalRing *ring, IntervalNode *node, unsigned int first, unsigned int last)
{
    IntrusiveLink *following = node->link.next;
    IntervalNode *right = fixed_arena_allocate(ring->owner, 1);
    if (right != (void *)0) {
        right->link.previous = following->previous;
        right->link.next = following;
        following->previous = &right->link;
        right->link.previous->next = &right->link;
        right->first = (unsigned short)first;
        right->last = (unsigned short)last;
    }
    return right;
}

int fn_004c33dc(IntervalRing *destination, const IntervalRing *source)
{
    IntrusiveLink *head = &destination->head;
    IntrusiveLink *link = head->next;
    const IntrusiveLink *other = source->head.next;
    while (link != head) {
        if (other == &source->head) {
            while (link != head) {
                IntervalNode *node = (IntervalNode *)link;
                link = link->next;
                remove_node(destination, node);
            }
            return 1;
        }
        IntervalNode *node = (IntervalNode *)link;
        const IntervalNode *match = (const IntervalNode *)other;
        unsigned int first = node->first;
        unsigned int last = node->last;
        unsigned int low = match->first;
        unsigned int high = match->last;
        if (first < low) {
            if (last < low) {
                link = link->next;
                remove_node(destination, node);
                continue;
            }
            node->first = (unsigned short)low;
        } else if (first > high) {
            other = other->next;
            continue;
        }
        if (last <= high) {
            link = link->next;
            if (first == low && last == high)
                other = other->next;
            continue;
        }
        node->last = (unsigned short)high;
        IntervalNode *right = split_after(destination, node, high + 1, last);
        if (right == (void *)0)
            return 0;
        link = &right->link;
        other = other->next;
    }
    return 1;
}
