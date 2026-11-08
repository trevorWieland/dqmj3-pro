#include "owner062ab.h"
#include "tree_erase062z.h"
#define OFFSET(field) __builtin_offsetof(SdkTreeStoreLayout062z, field)

static void *read_field(const void *store, SdkWord062s offset)
{
    return sdk_tree_read_pointer062z((const SdkByte062s *)store + offset);
}

static void write_field(void *store, SdkWord062s offset, void *value)
{
    sdk_tree_write_pointer062z((SdkByte062s *)store + offset, value);
}

static void clear_branch(void *store, void *node)
{
    while (node != 0) {
        clear_branch(store, sdk_tree_link062z(node, SDK_TREE_RIGHT062Z));
        void *next = sdk_tree_link062z(node, SDK_TREE_LEFT062Z);
        sdk_tree_set_link062z(node, SDK_TREE_RIGHT062Z,
            read_field(store, OFFSET(free_nodes)));
        write_field(store, OFFSET(free_nodes), node);
        node = next;
    }
}

void sdk_owner_clear_all062ab(void *store)
{
    SdkWord062s *count = (SdkWord062s *)((SdkByte062s *)store + OFFSET(count));
    if (*count == 0)
        return;
    void *head = sdk_tree_head062z(store);
    void *node = sdk_tree_link062z(head, SDK_TREE_PARENT062Z);
    while (node != 0) {
        clear_branch(store, sdk_tree_link062z(node, SDK_TREE_RIGHT062Z));
        void *next = sdk_tree_link062z(node, SDK_TREE_LEFT062Z);
        sdk_tree_set_link062z(node, SDK_TREE_RIGHT062Z,
            read_field(store, OFFSET(free_nodes)));
        write_field(store, OFFSET(free_nodes), node);
        node = next;
    }
    sdk_tree_set_link062z(head, SDK_TREE_LEFT062Z, head);
    sdk_tree_set_link062z(head, SDK_TREE_PARENT062Z, 0);
    sdk_tree_set_link062z(head, SDK_TREE_RIGHT062Z, head);
    *count = 0;
}
