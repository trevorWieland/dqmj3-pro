#include "heap062ac.h"

SdkWord062s heap_allocation_size062ac(const HeapObject062ac *object, const void *payload)
{
    (void)object;
    const HeapBlock062ac *block = (const HeapBlock062ac *)((const SdkByte062s *)payload - HEAP_HEADER062AC);
    return block->size;
}
