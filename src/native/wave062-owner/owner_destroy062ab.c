#include "owner062ab.h"
#include "tree_erase062z.h"
#define OFFSET(field) __builtin_offsetof(SdkTreeStoreLayout062z, field)

static void destroy_map(void *store)
{
    void *head = sdk_tree_head062z(store);
    if (head == 0)
        return;
    sdk_owner_clear_all062ab(store);
    SdkByte062s *bytes = store;
    void *old = sdk_tree_read_pointer062z(bytes + OFFSET(free_nodes));
    sdk_tree_set_link062z(head, SDK_TREE_RIGHT062Z, old);
    sdk_tree_write_pointer062z(bytes + OFFSET(free_nodes), head);
    while (sdk_tree_read_pointer062z(bytes + OFFSET(pools)) != 0) {
        SdkByte062s *pool = sdk_tree_read_pointer062z(bytes + OFFSET(pools));
        void *next = sdk_tree_read_pointer062z(pool);
        sdk_tree_write_pointer062z(bytes + OFFSET(pools), next);
        void *storage = sdk_tree_read_pointer062z(pool +
            __builtin_offsetof(SdkOwnerPool88062ab, storage));
        sdk_owner_dispose062ab(storage);
        sdk_owner_dispose062ab(pool);
    }
}

SdkOwner062ab *sdk_owner_destroy062ab(SdkOwner062ab *owner)
{
    owner->identity = &sdk_owner_identity062ab;
    destroy_map(&owner->timer.map);
    owner->mutex.methods = &sdk_clock_mutex_methods062u;
    owner->mutex.class_tag = &sdk_mutex_class_identity062u;
    destroy_map(&owner->map56);
    destroy_map(&owner->map88);
    return owner;
}
