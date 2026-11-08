#include "tree_erase062z.h"

static SdkWord062s black(const void *node)
{
    return node == 0 || sdk_tree_color062z(node) == 1;
}

void sdk_tree_rebalance062z(void *store, void *cursor)
{
    void *head = sdk_tree_head062z(store);
    while (cursor != sdk_tree_link062z(head, SDK_TREE_PARENT062Z) &&
        sdk_tree_color062z(cursor) == 1) {
        void *parent = sdk_tree_link062z(cursor, SDK_TREE_PARENT062Z);
        SdkWord062s left = sdk_tree_link062z(parent, SDK_TREE_LEFT062Z) == cursor;
        enum SdkTreeField062z near = left ? SDK_TREE_LEFT062Z : SDK_TREE_RIGHT062Z;
        enum SdkTreeField062z far = left ? SDK_TREE_RIGHT062Z : SDK_TREE_LEFT062Z;
        void *sibling = sdk_tree_link062z(parent, far);
        if (sibling == 0) {
            sdk_tree_set_color062z(cursor, 0);
            cursor = parent;
            continue;
        }
        if (sdk_tree_color062z(sibling) == 0) {
            sdk_tree_set_color062z(sibling, 1);
            sdk_tree_set_color062z(parent, 0);
            sdk_tree_rotate062z(store, parent, left);
            sibling = sdk_tree_link062z(parent, far);
            if (sibling == 0) {
                sdk_tree_set_color062z(cursor, 0);
                cursor = parent;
                continue;
            }
        }
        void *near_child = sdk_tree_link062z(sibling, near);
        void *far_child = sdk_tree_link062z(sibling, far);
        if (black(near_child) && black(far_child)) {
            sdk_tree_set_color062z(sibling, 0);
            cursor = parent;
            continue;
        }
        if (black(far_child)) {
            if (near_child != 0)
                sdk_tree_set_color062z(near_child, 1);
            sdk_tree_set_color062z(sibling, 0);
            sdk_tree_rotate062z(store, sibling, !left);
            sibling = sdk_tree_link062z(parent, far);
            if (sibling == 0)
                break;
        }
        sdk_tree_set_color062z(sibling, sdk_tree_color062z(parent));
        sdk_tree_set_color062z(parent, 1);
        far_child = sdk_tree_link062z(sibling, far);
        if (far_child != 0)
            sdk_tree_set_color062z(far_child, 1);
        sdk_tree_rotate062z(store, parent, left);
        break;
    }
    sdk_tree_set_color062z(cursor, 1);
}
