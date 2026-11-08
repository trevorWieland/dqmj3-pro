#include "heap062ac.h"

SdkWord062s heap_group_set062ac(Heap062ac *heap, SdkWord062s group)
{
    SdkWord062s previous = heap->lists.group;
    heap->lists.group = (HeapHalf062ac)group;
    return previous;
}

SdkWord062s heap_policy_set062ac(Heap062ac *heap, SdkWord062s policy)
{
    SdkWord062s previous = heap->lists.policy & 1u;
    heap->lists.policy = (HeapHalf062ac)((heap->lists.policy & ~1u) | (policy & 1u));
    return previous;
}

SdkSigned062s heap_split_set062ac(Heap062ac *heap, SdkSigned062s split)
{
    SdkSigned062s previous = heap->lists.split;
    if (previous > 127)
        previous -= 256;
    heap->lists.split = (SdkByte062s)split;
    return previous;
}

void *heap_object_allocate062ac(HeapObject062ac *object, SdkWord062s bytes,
    SdkSigned062s alignment, SdkWord062s group, SdkWord062s policy, SdkSigned062s split)
{
    heap_group_set062ac(&object->heap, group);
    heap_policy_set062ac(&object->heap, policy);
    heap_split_set062ac(&object->heap, split);
    void *result = heap_allocate062ac(&object->heap, bytes, alignment);
    if (result != 0)
        object->live += 1;
    return result;
}

void heap_object_free062ac(HeapObject062ac *object, void *payload)
{
    heap_free062ac(&object->heap, payload);
    object->live -= 1;
}

SdkWord062s heap_object_initialize062ac(HeapObject062ac *object, void *storage,
    SdkWord062s bytes, SdkWord062s flags)
{
    if (heap_initialize062ac(&object->heap, storage, bytes, flags & 65535u) == 0)
        heap_initialization_failure062ac();
    object->live = 0;
    return 0;
}
