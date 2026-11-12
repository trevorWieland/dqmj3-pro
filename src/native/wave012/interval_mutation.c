#include "compile_graph.h"

int fn_004c2d98(IntervalRing *ring, unsigned int point)
{
    IntrusiveLink *head = &ring->head;
    for (IntrusiveLink *link = head->next; link != head; link = link->next) {
        IntervalNode *node = (IntervalNode *)link;
        unsigned int first = node->first;
        unsigned int last = node->last;
        if (first == point) {
            if (last == point) {
                link->previous->next = link->next;
                link->next->previous = link->previous;
                fixed_arena_release(ring->owner, node, RANGE_NODE_BLOCKS);
            } else {
                ++node->first;
            }
            return 1;
        }
        if (last == point) {
            --node->last;
            return 1;
        }
        if (first <= point && point <= last) {
            node->last = (unsigned short)(point - 1);
            IntrusiveLink *following = link->next;
            IntervalNode *right = fixed_arena_allocate(ring->owner, RANGE_NODE_BLOCKS);
            if (right == (void *)0)
                return 0;
            right->link.previous = following->previous;
            right->link.next = following;
            following->previous = &right->link;
            right->link.previous->next = &right->link;
            right->first = (unsigned short)(point + 1);
            right->last = (unsigned short)last;
            return 1;
        }
    }
    return 1;
}
