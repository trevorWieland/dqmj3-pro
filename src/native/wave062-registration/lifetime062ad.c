#include "registry062ad.h"

const RegistryMethods062ad registry_methods062ad = {registry_destroy062ad};

Registry062ad *registry_initialize062ad(Registry062ad *registry)
{
    registry->methods = &registry_methods062ad;
    registry->begin = 0;
    registry->end = 0;
    registry->limit = 0;
    RegistryRecord062ad *memory = registry_allocate062ad(
        32 * sizeof(RegistryRecord062ad));
    registry->begin = memory;
    registry->end = memory;
    registry->limit = memory + 32;
    return registry;
}

Registry062ad *registry_destroy062ad(Registry062ad *registry)
{
    registry->methods = &registry_methods062ad;
    while (registry->begin != registry->end) {
        SdkByte062s key = registry_key062ad(registry->begin);
        registry_unregister062ad(registry, key >> 4, key & 15);
    }
    if (registry->begin != 0)
        registry_dispose062ad(registry->begin);
    return registry;
}
