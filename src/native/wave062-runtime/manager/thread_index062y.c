#include "thread_map062y.h"

static SdkWord062s current_thread(void)
{
    SdkWord062s thread;
    SdkSigned062s result = sdk_thread_query062y(&thread);
    if (result < 0)
        sdk_thread_result_failure062y(result, 1);
    return thread;
}

SdkWord062s *sdk_thread_index062y(SdkContextManager062s *manager)
{
    SdkMutex062s *mutex = &manager->mutex;
    mutex->methods->acquire(mutex);
    SdkWord062s key = current_thread();
    SdkNode062s *head = manager->map.head;
    SdkNode062s *candidate = head;
    SdkNode062s *node = head->parent;
    while (node != 0) {
        if (node->pair.key >= key) {
            candidate = node;
            node = node->left;
        } else {
            node = node->right;
        }
    }
    if (candidate != head && candidate->pair.key > key)
        candidate = head;
    SdkWord062s *value;
    if (candidate == head) {
        SdkPair062s pair = { current_thread(), 0 };
        SdkMapInsertion062y insertion;
        sdk_map_select062y(&insertion, &manager->map, &pair);
        insertion.node->pair.value = manager->default_index;
        pair.key = current_thread();
        pair.value = 0;
        sdk_map_select062y(&insertion, &manager->map, &pair);
        value = &insertion.node->pair.value;
    } else {
        value = &candidate->pair.value;
    }
    mutex->methods->release(mutex);
    return value;
}
