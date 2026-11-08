#include "timer062aa.h"

static SdkTimerNode062aa *timer_node062aa(SdkTimerMap062aa *map)
{
    SdkTimerNode062aa *node = map->free_nodes;
    if (node != (void *)0) {
        map->free_nodes = node->right;
        return node;
    }
    if (map->next != map->limit) {
        node = map->next;
        map->next += 1;
        return node;
    }
    SdkWord062s capacity = 32;
    if (map->pools != (void *)0) {
        SdkWord062s old = map->pools->capacity;
        capacity = old + old / 2 + old / 8;
        if (capacity < old + 32)
            capacity = old + 32;
    }
    SdkTimerPool062aa *pool = sdk_allocate062s((SdkWord062s)sizeof(*pool));
    SdkTimerNode062aa *storage = sdk_allocate062s(capacity * (SdkWord062s)sizeof(*storage));
    pool->storage = storage;
    pool->next = map->pools;
    pool->capacity = capacity;
    map->pools = pool;
    map->next = storage + 1;
    map->limit = storage + capacity;
    return storage;
}

static void timer_left062aa(SdkTimerMap062aa *map, SdkTimerNode062aa *node)
{
    SdkTimerNode062aa *right = node->right;
    node->right = right->left;
    if (right->left != (void *)0)
        right->left->parent = node;
    right->parent = node->parent;
    if (node == map->head->parent)
        map->head->parent = right;
    else if (node == node->parent->left)
        node->parent->left = right;
    else
        node->parent->right = right;
    right->left = node;
    node->parent = right;
}

static void timer_right062aa(SdkTimerMap062aa *map, SdkTimerNode062aa *node)
{
    SdkTimerNode062aa *left = node->left;
    node->left = left->right;
    if (left->right != (void *)0)
        left->right->parent = node;
    left->parent = node->parent;
    if (node == map->head->parent)
        map->head->parent = left;
    else if (node == node->parent->right)
        node->parent->right = left;
    else
        node->parent->left = left;
    left->right = node;
    node->parent = left;
}

void sdk_timer_insert062aa(SdkTimerNode062aa **output, SdkTimerMap062aa *map, SdkWord062s force_left,
    SdkTimerNode062aa *parent, const SdkTimerPair062aa *pair)
{
    SdkTimerNode062aa *node = timer_node062aa(map);
    node->parent = (void *)0;
    node->left = (void *)0;
    node->right = (void *)0;
    node->black = 0;
    sdk_endpoint_copy062aa(&node->pair.first, &pair->first);
    sdk_endpoint_copy062aa(&node->pair.second, &pair->second);
    node->pair.remaining = pair->remaining;
    map->count += 1;
    if (parent == map->head || force_left != 0 || sdk_endpoint_compare062aa(&pair->first, &parent->pair.first) < 0) {
        parent->left = node;
        if (parent == map->head) {
            map->head->parent = node;
            map->head->right = node;
        } else if (map->head->left == parent) {
            map->head->left = node;
        }
    } else {
        parent->right = node;
        if (map->head->right == parent)
            map->head->right = node;
    }
    node->parent = parent;
    SdkTimerNode062aa *current = node;
    while (current != map->head->parent && current->parent->black == 0) {
        SdkTimerNode062aa *above = current->parent;
        SdkTimerNode062aa *grand = above->parent;
        if (above == grand->left) {
            SdkTimerNode062aa *uncle = grand->right;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->right) {
                    current = above;
                    timer_left062aa(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                timer_right062aa(map, current->parent->parent);
            }
        } else {
            SdkTimerNode062aa *uncle = grand->left;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->left) {
                    current = above;
                    timer_right062aa(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                timer_left062aa(map, current->parent->parent);
            }
        }
    }
    map->head->parent->black = 1;
    *output = node;
}
