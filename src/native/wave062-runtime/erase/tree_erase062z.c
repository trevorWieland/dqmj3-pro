#include "tree_erase062z.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

static void *extreme(void *node, enum SdkTreeField062z direction)
{
    void *child;
    while ((child = sdk_tree_link062z(node, direction)) != 0)
        node = child;
    return node;
}

static void *next(void *node)
{
    void *right = sdk_tree_link062z(node, SDK_TREE_RIGHT062Z);
    if (right != 0)
        return extreme(right, SDK_TREE_LEFT062Z);
    void *parent = sdk_tree_link062z(node, SDK_TREE_PARENT062Z);
    while (node == sdk_tree_link062z(parent, SDK_TREE_RIGHT062Z)) {
        node = parent;
        parent = sdk_tree_link062z(parent, SDK_TREE_PARENT062Z);
    }
    if (sdk_tree_link062z(node, SDK_TREE_RIGHT062Z) != parent)
        node = parent;
    return node;
}

static void replace(void *head, void *old, void *replacement)
{
    void *parent = sdk_tree_link062z(old, SDK_TREE_PARENT062Z);
    if (parent == head)
        sdk_tree_set_link062z(head, SDK_TREE_PARENT062Z, replacement);
    else if (sdk_tree_link062z(parent, SDK_TREE_LEFT062Z) == old)
        sdk_tree_set_link062z(parent, SDK_TREE_LEFT062Z, replacement);
    else
        sdk_tree_set_link062z(parent, SDK_TREE_RIGHT062Z, replacement);
}

void *sdk_tree_erase062z(void *output, void *store, const void *iterator)
{
    void *node = sdk_tree_read_pointer062z(iterator);
    void *head = sdk_tree_head062z(store);
    if (node == head) {
        sdk_tree_write_pointer062z(output, head);
        return output;
    }
    void *successor = next(node);
    void *left = sdk_tree_link062z(node, SDK_TREE_LEFT062Z);
    void *right = sdk_tree_link062z(node, SDK_TREE_RIGHT062Z);
    void *cursor;
    if (left != 0 && right != 0) {
        void *replacement = extreme(right, SDK_TREE_LEFT062Z);
        void *child = sdk_tree_link062z(replacement, SDK_TREE_RIGHT062Z);
        sdk_tree_set_link062z(left, SDK_TREE_PARENT062Z, replacement);
        sdk_tree_set_link062z(replacement, SDK_TREE_LEFT062Z, left);
        if (right != replacement) {
            void *parent = sdk_tree_link062z(replacement, SDK_TREE_PARENT062Z);
            if (child != 0)
                sdk_tree_set_link062z(child, SDK_TREE_PARENT062Z, parent);
            sdk_tree_set_link062z(parent, SDK_TREE_LEFT062Z, child);
            sdk_tree_set_link062z(replacement, SDK_TREE_RIGHT062Z, right);
            sdk_tree_set_link062z(right, SDK_TREE_PARENT062Z, replacement);
        } else if (child != 0) {
            sdk_tree_set_link062z(child, SDK_TREE_PARENT062Z, replacement);
        }
        replace(head, node, replacement);
        sdk_tree_set_link062z(replacement, SDK_TREE_PARENT062Z,
            sdk_tree_link062z(node, SDK_TREE_PARENT062Z));
        SdkByte062s color = sdk_tree_color062z(node);
        sdk_tree_set_color062z(node, sdk_tree_color062z(replacement));
        sdk_tree_set_color062z(replacement, color);
        cursor = child != 0 ? child : replacement;
    } else {
        void *child = left != 0 ? left : right;
        void *parent = sdk_tree_link062z(node, SDK_TREE_PARENT062Z);
        if (child != 0)
            sdk_tree_set_link062z(child, SDK_TREE_PARENT062Z, parent);
        replace(head, node, child);
        if (sdk_tree_link062z(head, SDK_TREE_LEFT062Z) == node)
            sdk_tree_set_link062z(head, SDK_TREE_LEFT062Z,
                right == 0 ? parent : extreme(child, SDK_TREE_LEFT062Z));
        if (sdk_tree_link062z(head, SDK_TREE_RIGHT062Z) == node)
            sdk_tree_set_link062z(head, SDK_TREE_RIGHT062Z,
                left == 0 ? parent : extreme(child, SDK_TREE_RIGHT062Z));
        cursor = child != 0 ? child : parent;
    }
    if (cursor != head && sdk_tree_color062z(node) != 0)
        sdk_tree_rebalance062z(store, cursor);
    SdkByte062s *bytes = store;
    void *free_nodes = sdk_tree_read_pointer062z(bytes +
        OFFSET(SdkTreeStoreLayout062z, free_nodes));
    sdk_tree_set_link062z(node, SDK_TREE_RIGHT062Z, free_nodes);
    sdk_tree_write_pointer062z(bytes + OFFSET(SdkTreeStoreLayout062z, free_nodes), node);
    SdkWord062s count;
    __builtin_memcpy(&count, bytes + OFFSET(SdkTreeStoreLayout062z, count), sizeof(count));
    --count;
    __builtin_memcpy(bytes + OFFSET(SdkTreeStoreLayout062z, count), &count, sizeof(count));
    sdk_tree_write_pointer062z(output, successor);
    return output;
}
