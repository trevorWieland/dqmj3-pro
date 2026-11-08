#include "heap062ac.h"

void *heap_proxy_allocate062ac(HeapProxy062ac *proxy, SdkWord062s bytes,
    SdkSigned062s alignment)
{
    HeapObject062ac *object = proxy->heap;
    SdkWord062s group = proxy->group;
    SdkWord062s fit = proxy->fit;
    SdkSigned062s split = proxy->split;
    sdk_recursive_acquire062s(&object->mutex);
    void *result = heap_object_allocate062ac(object, bytes, alignment, group, fit, split);
    sdk_recursive_release062s(&object->mutex);
    return result;
}

void heap_proxy_free062ac(HeapProxy062ac *proxy, void *payload)
{
    HeapObject062ac *object = proxy->heap;
    sdk_recursive_acquire062s(&object->mutex);
    heap_object_free062ac(object, payload);
    sdk_recursive_release062s(&object->mutex);
}

const HeapMethods062ac heap_methods062ac = {
    heap_proxy_allocate062ac,
    heap_proxy_free062ac
};
