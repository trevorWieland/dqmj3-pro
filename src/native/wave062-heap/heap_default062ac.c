#include "heap062ac.h"

HeapEnvironment062ac heap_environment062ac;
HeapProxy062ac heap_proxy062ac;

HeapProxy062ac *heap_default_initialize062ac(void *storage, SdkWord062s bytes)
{
    HeapAddress062ac address = (HeapAddress062ac)storage;
    HeapAddress062ac aligned = (address + _Alignof(HeapObject062ac) - 1u) &
        ~(HeapAddress062ac)(_Alignof(HeapObject062ac) - 1u);
    HeapObject062ac *object = (HeapObject062ac *)aligned;
    if (object != 0) {
        for (SdkWord062s i = 0; i < sizeof(object->opaque_0004); ++i)
            object->opaque_0004[i] = 0;
        object->heap.signature = 0;
        object->live = 0;
        object->mutex.count = 0;
        object->mutex.owner = 0;
        object->mutex.depth = ~0u;
        object->identity = &heap_identity062ac;
        SdkByte062s *begin = (SdkByte062s *)object + sizeof(*object);
        SdkWord062s remaining = (SdkWord062s)((address + bytes) - (HeapAddress062ac)begin);
        heap_object_initialize062ac(object, begin, remaining, 0);
        __c11_atomic_exchange(&object->mutex.count, 1, 0);
        object->mutex.owner = 0;
        object->mutex.depth = 0;
    }
    heap_environment062ac.heap = object;
    heap_proxy062ac.methods = &heap_methods062ac;
    heap_proxy062ac.heap = object;
    heap_proxy062ac.group = 0;
    heap_proxy062ac.fit = 0;
    heap_proxy062ac.split = 0;
    heap_environment062ac.allocator = &heap_proxy062ac;
    return &heap_proxy062ac;
}

void *heap_default_allocate062ac(SdkWord062s bytes, SdkSigned062s alignment)
{
    if (!heap_environment062ac.enabled)
        return 0;
    HeapProxy062ac *allocator = heap_environment062ac.allocator;
    return allocator->methods->allocate(allocator, bytes, alignment);
}

void heap_default_free062ac(void *payload)
{
    if (payload == 0 || !heap_environment062ac.enabled)
        return;
    HeapProxy062ac *allocator = heap_environment062ac.allocator;
    (void)heap_allocation_size062ac(allocator->heap, payload);
    allocator = heap_environment062ac.allocator;
    allocator->methods->dispose(allocator, payload);
}

void *heap_default_bytes062ac(SdkWord062s bytes)
{
    return heap_default_allocate062ac(bytes, 4);
}
