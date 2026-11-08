#include "sdk062s.h"

static SdkNode062s *map_node062s(SdkMap062s *map)
{
    SdkNode062s *node = map->free_nodes;
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
    SdkPool062s *pool = sdk_allocate062s((SdkWord062s)sizeof(*pool));
    SdkNode062s *storage = sdk_allocate062s(capacity * (SdkWord062s)sizeof(*storage));
    pool->storage = storage;
    pool->next = map->pools;
    pool->capacity = capacity;
    map->pools = pool;
    map->next = storage + 1;
    map->limit = storage + capacity;
    return storage;
}

static void map_left062s(SdkMap062s *map, SdkNode062s *node)
{
    SdkNode062s *right = node->right;
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

static void map_right062s(SdkMap062s *map, SdkNode062s *node)
{
    SdkNode062s *left = node->left;
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

void sdk_map_insert062s(SdkNode062s **output, SdkMap062s *map, SdkWord062s force_left,
    SdkNode062s *parent, const SdkPair062s *pair)
{
    SdkNode062s *node = map_node062s(map);
    node->parent = (void *)0;
    node->left = (void *)0;
    node->right = (void *)0;
    node->black = 0;
    node->pair = *pair;
    map->count += 1;
    if (parent == map->head || force_left != 0 || pair->key < parent->pair.key) {
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
    SdkNode062s *current = node;
    while (current != map->head->parent && current->parent->black == 0) {
        SdkNode062s *above = current->parent;
        SdkNode062s *grand = above->parent;
        if (above == grand->left) {
            SdkNode062s *uncle = grand->right;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->right) {
                    current = above;
                    map_left062s(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                map_right062s(map, current->parent->parent);
            }
        } else {
            SdkNode062s *uncle = grand->left;
            if (uncle != (void *)0 && uncle->black == 0) {
                above->black = 1;
                uncle->black = 1;
                grand->black = 0;
                current = grand;
            } else {
                if (current == above->left) {
                    current = above;
                    map_right062s(map, current);
                }
                current->parent->black = 1;
                current->parent->parent->black = 0;
                map_left062s(map, current->parent->parent);
            }
        }
    }
    map->head->parent->black = 1;
    *output = node;
}

SdkWord062s *sdk_map_value062s(SdkMap062s *map, const SdkWord062s *key)
{
    SdkNode062s *parent = map->head;
    SdkNode062s *current = map->head->parent;
    SdkNode062s *found = (void *)0;
    while (current != (void *)0) {
        parent = current;
        if (*key == current->pair.key)
            found = current;
        current = *key < current->pair.key ? current->left : current->right;
    }
    if (map->allow_duplicates == 0 && found != (void *)0)
        return &found->pair.value;
    SdkPair062s pair = {*key, 0};
    sdk_map_insert062s(&current, map, 0, parent, &pair);
    return &current->pair.value;
}
