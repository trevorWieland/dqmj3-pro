#include "registry062ad.h"

RegistryEnvironment062ad registry_environment062ad;

SdkMutex062s *registry_mutex062ad(void)
{
    return &sdk_context062s()->owner->mutex;
}

SdkWord062s registry_count062ad(const Registry062ad *registry)
{
    if (registry->begin == 0)
        return 0;
    return (SdkWord062s)(registry->end - registry->begin);
}

RegistryRecord062ad *registry_lower_bound062ad(Registry062ad *registry,
    SdkByte062s key)
{
    RegistryRecord062ad *position = registry->begin;
    SdkWord062s remaining = registry_count062ad(registry);
    while (remaining != 0) {
        SdkWord062s half = remaining / 2;
        RegistryRecord062ad *middle = position + half;
        if (registry_key062ad(middle) < key) {
            position = middle + 1;
            remaining -= half + 1;
        } else {
            remaining = half;
        }
    }
    return position;
}

SdkOwner062ab *registry_find062ad(Registry062ad *registry,
    const SdkByte062s *key)
{
    SdkMutex062s *mutex = 0;
    if (registry_environment062ad.lookup_lock != 0) {
        mutex = registry_mutex062ad();
        mutex->methods->acquire(mutex);
    }
    RegistryRecord062ad *position = registry_lower_bound062ad(registry, *key);
    SdkOwner062ab *owner = 0;
    if (position != registry->end && registry_key062ad(position) <= *key)
        owner = position->owner;
    if (mutex != 0)
        mutex->methods->release(mutex);
    return owner;
}
