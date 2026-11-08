#include "owner062ab.h"

static SdkOwnerNode88062ab *owner_node062ab(SdkOwnerMap88062ab *map)
{
    SdkOwnerNode88062ab *node = map->free_nodes;
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
    SdkOwnerPool88062ab *pool = sdk_allocate062s((SdkWord062s)sizeof(*pool));
    SdkOwnerNode88062ab *storage = sdk_allocate062s(capacity * (SdkWord062s)sizeof(*storage));
    pool->storage = storage;
    pool->next = map->pools;
    pool->capacity = capacity;
    map->pools = pool;
    map->next = storage + 1;
    map->limit = storage + capacity;
    return storage;
}

static void owner_left062ab(SdkOwnerMap88062ab *map, SdkOwnerNode88062ab *node)
{
    SdkOwnerNode88062ab *right = node->right;
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

static void owner_right062ab(SdkOwnerMap88062ab *map, SdkOwnerNode88062ab *node)
{
    SdkOwnerNode88062ab *left = node->left;
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

static SdkSigned062s owner_pair_compare062ab(const SdkOwnerPair062ab *pair,
    const SdkOwnerNode88062ab *node)
{
    SdkSigned062s first = sdk_endpoint_compare062aa(&pair->first, &node->first);
    if (first != 0)
        return first;
    return sdk_endpoint_compare062aa(&pair->second, &node->second);
}

void sdk_owner_insert88062ab(SdkOwnerNode88062ab **output, SdkOwnerMap88062ab *map, SdkWord062s force_left,
    SdkOwnerNode88062ab *parent, const SdkOwnerPair062ab *pair)
{
    SdkOwnerNode88062ab *node = owner_node062ab(map);
    node->parent = (void *)0;
    node->left = (void *)0;
    node->right = (void *)0;
    node->black = 0;
    sdk_endpoint_copy062aa(&node->first, &pair->first);
    sdk_endpoint_copy062aa(&node->second, &pair->second);
    node->stamp = pair->stamp;
    map->count += 1;
    if (parent == map->head || force_left != 0 || owner_pair_compare062ab(pair, parent) < 0) {
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
    SdkOwnerNode88062ab *current = node;
    while (current != map->head->parent && current->parent->black == 0) {
        SdkOwnerNode88062ab *above = current->parent;
        SdkOwnerNode88062ab *grand = above->parent;
        if (above == grand->left) {
            SdkOwnerNode88062ab *uncle = grand->right;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->right) {
                    current = above;
                    owner_left062ab(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                owner_right062ab(map, current->parent->parent);
            }
        } else {
            SdkOwnerNode88062ab *uncle = grand->left;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->left) {
                    current = above;
                    owner_right062ab(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                owner_left062ab(map, current->parent->parent);
            }
        }
    }
    map->head->parent->black = 1;
    *output = node;
}
