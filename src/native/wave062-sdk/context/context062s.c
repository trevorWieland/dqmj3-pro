#include "sdk062s.h"

static void *context_resolve062s(SdkWord062s slot)
{
    SdkWord062s index = 0;
    if (sdk_environment062s.contexts_enabled != 0) {
        SdkContextManager062s *manager = sdk_environment062s.manager;
        manager->mutex.methods->acquire(&manager->mutex);
        SdkWord062s key = sdk_environment062s.platform.thread_id();
        SdkNode062s *head = manager->map.head;
        SdkNode062s *candidate = head;
        SdkNode062s *current = head->parent;
        while (current != (void *)0) {
            if (current->pair.key >= key) {
                candidate = current;
                current = current->left;
            } else {
                current = current->right;
            }
        }
        if (candidate != head && candidate->pair.key > key)
            candidate = head;
        SdkWord062s *value;
        if (candidate == head) {
            key = sdk_environment062s.platform.thread_id();
            value = sdk_map_value062s(&manager->map, &key);
            *value = manager->default_index;
            key = sdk_environment062s.platform.thread_id();
            value = sdk_map_value062s(&manager->map, &key);
        } else {
            value = &candidate->pair.value;
        }
        manager->mutex.methods->release(&manager->mutex);
        index = *value;
    }
    SdkContextRoot062s *root = sdk_environment062s.root;
    SdkContextRecord062s *record = &root->default_record;
    if (index != 0) {
        SdkContextVector062s *vector = root->records;
        if (index >= (SdkWord062s)(vector->end - vector->begin))
            __builtin_trap();
        record = vector->begin[index];
    }
    SdkContextBinding062s *binding = record->slots[slot];
    return binding == (void *)0 ? (void *)0 : binding->context;
}

SdkContext062s *sdk_context062s(void)
{
    return context_resolve062s(3);
}

SdkQueryContext062s *sdk_context_alternate062s(void)
{
    return context_resolve062s(1);
}
