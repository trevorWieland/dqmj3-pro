#include "timer062aa.h"

static SdkTimerNode062aa *previous(SdkTimerNode062aa *node)
{
    if (!node->black && node->parent->parent == node)
        return node->right;
    if (node->left != 0) {
        node = node->left;
        while (node->right != 0)
            node = node->right;
        return node;
    }
    SdkTimerNode062aa *parent = node->parent;
    while (node == parent->left) {
        node = parent;
        parent = parent->parent;
    }
    return parent;
}

SdkWord062s sdk_timer_set062aa(SdkTimer062aa *timer, const SdkEndpoint062aa *first,
    const SdkEndpoint062aa *second, SdkWord062s replace)
{
    if (second->data[1] == 0)
        return 0;
    if (first->data[1] == second->data[1] &&
        first->data[0] >> 16 == second->data[0] >> 16)
        return 0;
    SdkTimerPair062aa pair;
    sdk_endpoint_copy062aa(&pair.first, first);
    sdk_endpoint_copy062aa(&pair.second, second);
    pair.remaining = timer->timeout;
    SdkTimerMap062aa *map = &timer->map;
    SdkTimerNode062aa *parent = map->head;
    SdkTimerNode062aa *current = parent->parent;
    SdkWord062s left = 1;
    while (current != 0) {
        parent = current;
        left = sdk_endpoint_compare062aa(&pair.first, &current->pair.first) < 0;
        current = left ? current->left : current->right;
    }
    SdkTimerNode062aa *found = 0;
    if (!map->allow_duplicates && (!left || parent != map->head->left)) {
        SdkTimerNode062aa *candidate = left ? previous(parent) : parent;
        if (sdk_endpoint_compare062aa(&candidate->pair.first, &pair.first) >= 0)
            found = candidate;
    }
    if (found == 0) {
        sdk_timer_insert062aa(&found, map, 0, parent, &pair);
        return 1;
    }
    if (replace == 0)
        return 0;
    for (SdkWord062s i = 0; i < 7; ++i)
        found->pair.second.data[i] = second->data[i];
    found->pair.remaining = timer->timeout;
    return 1;
}
