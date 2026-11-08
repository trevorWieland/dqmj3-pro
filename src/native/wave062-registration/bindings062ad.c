#include "registry062ad.h"
#include "heap062ac.h"

void *registry_allocate062ad(SdkWord062s bytes)
{
    return heap_sdk_allocate062ac(bytes);
}

void registry_dispose062ad(void *memory)
{
    heap_sdk_dispose062ac(memory);
}
