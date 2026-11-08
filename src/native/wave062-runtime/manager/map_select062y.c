#include "thread_map062y.h"

static SdkNode062s *previous(SdkNode062s *node)
{
    if (!node->black && node->parent->parent == node)
        return node->right;
    if (node->left != 0) {
        node = node->left;
        while (node->right != 0)
            node = node->right;
        return node;
    }
    SdkNode062s *parent = node->parent;
    while (node == parent->left) {
        node = parent;
        parent = parent->parent;
    }
    return parent;
}

SdkNode062s *sdk_map_select062y(SdkMapInsertion062y *output, SdkMap062s *map,
    const SdkPair062s *pair)
{
    SdkNode062s *parent = map->head;
    SdkNode062s *current = parent->parent;
    SdkWord062s left = 1;
    while (current != 0) {
        parent = current;
        left = pair->key < current->pair.key;
        current = left ? current->left : current->right;
    }
    if (!map->allow_duplicates) {
        SdkNode062s *candidate = parent;
        if (!left || parent != map->head->left) {
            if (left)
                candidate = previous(parent);
            if (candidate->pair.key >= pair->key) {
                output->node = candidate;
                output->inserted = 0;
                return 0;
            }
        }
    }
    SdkNode062s *node;
    sdk_map_insert062s(&node, map, 0, parent, pair);
    output->node = node;
    output->inserted = 1;
    return node;
}
