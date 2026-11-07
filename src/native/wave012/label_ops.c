#include "label_ops.h"

void fn_007555b4(IntervalSet *set, void *const *destination, unsigned short character)
{
    set->kind = INTERVAL_SET_SINGLE;
    set->value.character = character;
    set->destination = *destination;
}

void fn_007555cc(IntervalSet *set)
{
    set->destination = (void *)0;
    set->kind = INTERVAL_SET_EPSILON;
    set->intervals.head.previous = &set->intervals.head;
    set->intervals.head.next = &set->intervals.head;
    set->intervals.owner = (void *)0;
}

void fn_00755798(IntervalSet *set)
{
    set->destination = (void *)0;
    set->kind = INTERVAL_SET_EPSILON;
    set->intervals.head.previous = &set->intervals.head;
    set->intervals.head.next = &set->intervals.head;
    set->intervals.owner = (void *)0;
}

IntervalSet *fn_007557bc(IntervalSet *set)
{
    IntrusiveLink *head = &set->intervals.head;
    if (set->intervals.owner != (void *)0) {
        IntrusiveLink *link = head->next;
        while (link != head) {
            IntrusiveLink *next = link->next;
            fn_004c3994(set->intervals.owner, link, RANGE_NODE_BLOCKS);
            link = next;
        }
        set->intervals.owner = (void *)0;
        head->previous = head;
        head->next = head;
    }
    return set;
}
