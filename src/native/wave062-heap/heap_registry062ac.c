#include "heap062ac.h"

HeapList062ac heap_registry062ac;
SdkByte062s heap_registry_initialized062ac;

void heap_list_initialize062ac(HeapList062ac *list, SdkWord062s offset)
{
    list->offset = (HeapHalf062ac)offset;
    list->first = 0;
    list->last = 0;
    list->count = 0;
}

Heap062ac *heap_list_next062ac(const HeapList062ac *list, Heap062ac *current)
{
    return current == 0 ? list->first : current->next;
}

HeapList062ac *heap_list_append062ac(HeapList062ac *list, Heap062ac *heap)
{
    if (list->first != 0) {
        heap->next = 0;
        heap->previous = list->last;
        list->last->next = heap;
        list->last = heap;
    } else {
        heap->next = 0;
        heap->previous = 0;
        list->first = heap;
        list->last = heap;
    }
    list->count = (HeapHalf062ac)(list->count + 1);
    return list;
}

Heap062ac *heap_find_containing062ac(HeapList062ac *list, const void *address)
{
    Heap062ac *current = 0;
    while ((current = heap_list_next062ac(list, current)) != 0) {
        if ((HeapAddress062ac)address < (HeapAddress062ac)current->begin ||
            (HeapAddress062ac)address >= (HeapAddress062ac)current->end)
            continue;
        Heap062ac *child = heap_find_containing062ac(&current->children, address);
        return child == 0 ? current : child;
    }
    return 0;
}

HeapList062ac *heap_register062ac(Heap062ac *heap, SdkWord062s signature,
    SdkByte062s *begin, SdkByte062s *end, SdkWord062s flags)
{
    heap->signature = signature;
    heap->flags = flags & 255u;
    heap->begin = begin;
    heap->end = end;
    heap_list_initialize062ac(&heap->children, __builtin_offsetof(Heap062ac, previous));
    if (!heap_registry_initialized062ac) {
        heap_list_initialize062ac(&heap_registry062ac, __builtin_offsetof(Heap062ac, previous));
        heap_registry_initialized062ac = 1;
    }
    HeapList062ac *destination = &heap_registry062ac;
    Heap062ac *current = 0;
    while ((current = heap_list_next062ac(&heap_registry062ac, current)) != 0) {
        if ((HeapAddress062ac)heap < (HeapAddress062ac)current->begin ||
            (HeapAddress062ac)heap >= (HeapAddress062ac)current->end)
            continue;
        Heap062ac *child = heap_find_containing062ac(&current->children, heap);
        destination = &(child == 0 ? current : child)->children;
        break;
    }
    return heap_list_append062ac(destination, heap);
}
