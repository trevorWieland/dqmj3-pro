#include "pattern_ranges.h"

static IntervalNode *append(IntervalRing *ring, unsigned short first, unsigned short last)
{
    IntervalNode *node = fn_004c39c8(ring->owner, 1);
    if (node != (void *)0) {
        node->link.previous = ring->head.previous;
        node->link.next = &ring->head;
        ring->head.previous = &node->link;
        node->link.previous->next = &node->link;
        node->first = first;
        node->last = last;
    }
    return node;
}

static void release(IntervalRing *ring)
{
    if (ring->owner != (void *)0) {
        IntrusiveLink *link = ring->head.next;
        while (link != &ring->head) {
            IntrusiveLink *following = link->next;
            fn_004c3994(ring->owner, link, 1);
            link = following;
        }
    }
}

int fn_004c3070(IntervalRing *ring)
{
    IntrusiveLink *head = &ring->head;
    if (head->next == head)
        return append(ring, 0, 65535) != (void *)0;
    IntervalNode *first = (IntervalNode *)head->next;
    if (first->link.next == head && first->first == 0 && first->last == 0) {
        first->link.previous->next = first->link.next;
        first->link.next->previous = first->link.previous;
        fn_004c3994(ring->owner, first, 1);
        return 1;
    }
    IntervalRing replacement;
    replacement.head.previous = &replacement.head;
    replacement.head.next = &replacement.head;
    replacement.owner = ring->owner;
    if (first->first != 0 && append(&replacement, 0, (unsigned short)(first->first - 1)) == (void *)0)
        return 0;
    IntervalNode *previous = first;
    for (IntrusiveLink *link = first->link.next; link != head; link = link->next) {
        IntervalNode *node = (IntervalNode *)link;
        if (append(&replacement, (unsigned short)(previous->last + 1), (unsigned short)(node->first - 1)) == (void *)0) {
            release(&replacement);
            return 0;
        }
        previous = node;
    }
    if (previous->last != 65535 && append(&replacement, (unsigned short)(previous->last + 1), 65535) == (void *)0) {
        release(&replacement);
        return 0;
    }
    release(ring);
    if (ring->owner != (void *)0) {
        ring->owner = (void *)0;
        head->previous = head;
        head->next = head;
    }
    if (replacement.head.next == &replacement.head) {
        head->previous = head;
        head->next = head;
    } else {
        head->next = replacement.head.next;
        head->next->previous = head;
        head->previous = replacement.head.previous;
        head->previous->next = head;
    }
    ring->owner = replacement.owner;
    return 1;
}
