#include "registry062ad.h"

SdkWord062s registry_unregister062ad(Registry062ad *registry,
    SdkWord062s component, SdkWord062s slot)
{
    SdkMutex062s *mutex = registry_mutex062ad();
    mutex->methods->acquire(mutex);
    SdkByte062s key = (SdkByte062s)((component << 4) | slot);
    if (registry_find062ad(registry, &key) == 0) {
        mutex->methods->release(mutex);
        return 0;
    }
    RegistryRecord062ad *position = registry_lower_bound062ad(registry, key);
    if (position != registry->end) {
        SdkWord062s bytes = (SdkWord062s)((SdkByte062s *)registry->end -
            (SdkByte062s *)(position + 1));
        SdkByte062s *destination = (SdkByte062s *)position;
        const SdkByte062s *source = (const SdkByte062s *)(position + 1);
        for (SdkWord062s i = 0; i < bytes; ++i)
            destination[i] = source[i];
        --registry->end;
    }
    mutex->methods->release(mutex);
    return 1;
}
