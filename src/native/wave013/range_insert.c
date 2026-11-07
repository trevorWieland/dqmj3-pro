#include "pattern_ranges.h"

static IntervalNode *insert_before(IntervalRing *ring, IntrusiveLink *position)
{
    IntervalNode *node = fn_004c39c8(ring->owner, 1);
    if (node != (void *)0) {
        node->link.previous = position->previous;
        node->link.next = position;
        position->previous = &node->link;
        node->link.previous->next = &node->link;
    }
    return node;
}

static void remove_node(IntervalRing *ring, IntervalNode *node)
{
    node->link.previous->next = node->link.next;
    node->link.next->previous = node->link.previous;
    fn_004c3994(ring->owner, node, 1);
}

int fn_004c2e84(IntervalRing *ring, unsigned int first, unsigned int last)
{
    int extended = 0;
    IntrusiveLink *head = &ring->head;
    IntrusiveLink *link = head->next;
    while (link != head) {
        IntervalNode *node = (IntervalNode *)link;
        unsigned int low = node->first;
        unsigned int high = node->last;
        if (low <= first && last <= high)
            return 1;
        if (first <= low && high <= last) {
            link = link->next;
            remove_node(ring, node);
            continue;
        }
        if ((low <= first && first <= high) || (high != 65535 && high + 1 == first)) {
            extended = 1;
            node->last = (unsigned short)last;
        } else if ((low <= last && last <= high) || (last != 65535 && last + 1 == low)) {
            if (extended) {
                IntrusiveLink *following = link->next;
                remove_node(ring, node);
                ((IntervalNode *)following->previous)->last = (unsigned short)high;
            } else
                node->first = (unsigned short)first;
            return 1;
        } else if (last < low) {
            if (extended)
                return 1;
            IntervalNode *created = insert_before(ring, link);
            if (created == (void *)0)
                return 0;
            created->first = (unsigned short)first;
            created->last = (unsigned short)last;
            return 1;
        }
        link = link->next;
    }
    if (extended)
        return 1;
    IntervalNode *created = insert_before(ring, head);
    if (created == (void *)0)
        return 0;
    created->first = (unsigned short)first;
    created->last = (unsigned short)last;
    return 1;
}

int fn_004c3028(IntervalRing *destination, const IntervalRing *source)
{
    for (const IntrusiveLink *link = source->head.next; link != &source->head; link = link->next) {
        const IntervalNode *node = (const IntervalNode *)link;
        if (!fn_004c2e84(destination, node->first, node->last))
            return 0;
    }
    return 1;
}
