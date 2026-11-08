#include "heap062ac.h"
#define OFF(T, F) ((SdkWord062s)__builtin_offsetof(T, F))
const SdkWord062s fixture_heap_layout062ac[] = {
    sizeof(void *), sizeof(Heap062ac), sizeof(HeapBlock062ac), HEAP_ALIGNMENT062AC,
    OFF(Heap062ac, signature), OFF(Heap062ac, previous), OFF(Heap062ac, next),
    OFF(Heap062ac, children), OFF(Heap062ac, begin), OFF(Heap062ac, end),
    OFF(Heap062ac, flags), OFF(Heap062ac, lists.free_first), OFF(Heap062ac, lists.free_last),
    OFF(Heap062ac, lists.used_first), OFF(Heap062ac, lists.used_last), OFF(Heap062ac, lists.group),
    OFF(Heap062ac, lists.policy), OFF(Heap062ac, lists.split), sizeof(HeapObject062ac),
    OFF(HeapObject062ac, heap), OFF(HeapObject062ac, live), OFF(HeapObject062ac, mutex)
};
void fixture_heap_reset062ac(void)
{
    heap_registry_initialized062ac = 0;
    heap_registry062ac.first = 0;
    heap_registry062ac.last = 0;
    heap_registry062ac.count = 0;
    heap_registry062ac.offset = 0;
}
