#include "heap062ac.h"

typedef union HeapSdkPrefix062ac {
    void (*dispose)(void *);
    SdkByte062s bytes[8];
} HeapSdkPrefix062ac;

SdkEnvironment062s sdk_environment062s;

void *heap_sdk_allocate062ac(SdkWord062s bytes)
{
    SdkWord062s rounded = (bytes + 3u) & ~3u;
    SdkByte062s *memory;
    if (sdk_environment062s.platform.allocate != 0)
        memory = sdk_environment062s.platform.allocate(rounded + 8u);
    else
        memory = heap_default_bytes062ac(rounded + 8u);
    HeapSdkPrefix062ac *prefix = (HeapSdkPrefix062ac *)memory;
    prefix->dispose = sdk_environment062s.platform.dispose;
    return memory + 8;
}

void heap_sdk_dispose062ac(void *payload)
{
    if (payload == 0)
        return;
    HeapSdkPrefix062ac *prefix = (HeapSdkPrefix062ac *)((SdkByte062s *)payload - 8);
    if (prefix->dispose != 0)
        prefix->dispose(prefix);
    else
        heap_default_free062ac(prefix);
}
