#include "sdk062s.h"

typedef union SdkAllocationPrefix062s {
    void (*dispose)(void *);
    SdkByte062s bytes[8];
} SdkAllocationPrefix062s;

SdkEnvironment062s sdk_environment062s;

void *sdk_allocate062s(SdkWord062s bytes)
{
    SdkWord062s rounded = (bytes + 3u) & ~3u;
    SdkByte062s *memory = sdk_environment062s.platform.allocate(rounded + 8u);
    SdkAllocationPrefix062s *prefix = (SdkAllocationPrefix062s *)memory;
    prefix->dispose = sdk_environment062s.platform.dispose;
    return memory + 8;
}
