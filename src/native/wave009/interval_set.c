#include "interval_set.h"

int fn_00780578(const IntervalSet *set, unsigned int value)
{
    if (set->kind == INTERVAL_SET_SINGLE)
        return set->value == value;
    if (set->kind == INTERVAL_SET_LIST) {
        const IntervalNode *end = &set->intervals;
        const IntervalNode *node = end->next;
        while (node != end) {
            if (node->first <= value && value <= node->last)
                return 1;
            node = node->next;
        }
    }
    return 0;
}

int fn_007805e4(const IntervalSet *set, unsigned int value)
{
    if (set->kind == INTERVAL_SET_SINGLE)
        return set->value == value;
    if (set->kind == INTERVAL_SET_LIST) {
        const IntervalNode *end = &set->intervals;
        const IntervalNode *node = end->next;
        while (node != end) {
            if (node->first <= value && value <= node->last)
                return 1;
            node = node->next;
        }
    }
    return 0;
}
