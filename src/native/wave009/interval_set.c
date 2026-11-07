#include "interval_set.h"

int fn_00780578(const IntervalSet *set, unsigned int value)
{
    if (set->kind == INTERVAL_SET_SINGLE)
        return set->value.character == value;
    if (set->kind == INTERVAL_SET_LIST) {
        const IntrusiveLink *end = &set->intervals.head;
        const IntrusiveLink *link = end->next;
        while (link != end) {
            const IntervalNode *node = (const IntervalNode *)link;
            if (node->first <= value && value <= node->last)
                return 1;
            link = link->next;
        }
    }
    return 0;
}

int fn_007805e4(const IntervalSet *set, unsigned int value)
{
    if (set->kind == INTERVAL_SET_SINGLE)
        return set->value.character == value;
    if (set->kind == INTERVAL_SET_LIST) {
        const IntrusiveLink *end = &set->intervals.head;
        const IntrusiveLink *link = end->next;
        while (link != end) {
            const IntervalNode *node = (const IntervalNode *)link;
            if (node->first <= value && value <= node->last)
                return 1;
            link = link->next;
        }
    }
    return 0;
}
