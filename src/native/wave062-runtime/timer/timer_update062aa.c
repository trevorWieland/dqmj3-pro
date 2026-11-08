#include "timer062aa.h"
#include "tree_erase062z.h"

static SdkTimerNode062aa *next(SdkTimerNode062aa *node)
{
    if (node->right != 0) {
        node = node->right;
        while (node->left != 0)
            node = node->left;
        return node;
    }
    SdkTimerNode062aa *parent = node->parent;
    while (node == parent->right) {
        node = parent;
        parent = parent->parent;
    }
    if (node->right != parent)
        node = parent;
    return node;
}

void sdk_timer_update062aa(SdkTimer062aa *timer)
{
    SdkClockPair062u current;
    sdk_clock_current062u(&current);
    SdkWord062s elapsed = current.low - timer->last.low;
    if (elapsed < 1000)
        return;
    timer->last.low = current.low;
    timer->last.high = current.high;
    SdkTimerNode062aa *node = timer->map.head->left;
    while (node != timer->map.head) {
        SdkTimerNode062aa *current_node = node;
        if (current_node->pair.remaining > elapsed) {
            current_node->pair.remaining -= elapsed;
            node = next(current_node);
        } else {
            node = next(current_node);
            SdkTimerNode062aa *discarded_next;
            sdk_tree_erase062z(&discarded_next, &timer->map, &current_node);
        }
    }
}
