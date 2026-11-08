#include "registry062ad.h"

static void record_copy062ad(RegistryRecord062ad *to,
    const RegistryRecord062ad *from)
{
    SdkByte062s *destination = (SdkByte062s *)to;
    const SdkByte062s *source = (const SdkByte062s *)from;
    for (SdkWord062s i = 0; i < sizeof(*to); ++i)
        destination[i] = source[i];
}

static RegistryRecord062ad *insert062ad(Registry062ad *registry,
    RegistryRecord062ad *position, SdkByte062s key, SdkOwner062ab *owner)
{
    SdkWord062s count = registry_count062ad(registry);
    SdkWord062s index = (SdkWord062s)(position - registry->begin);
    if (registry->end != registry->limit && position == registry->end) {
        RegistryRecord062ad *row = registry->end++;
        registry_key_store062ad(row, key);
        row->owner = owner;
    } else if (registry->end != registry->limit) {
        RegistryRecord062ad *last = registry->end - 1;
        RegistryRecord062ad *destination = registry->end++;
        registry_key_store062ad(destination, registry_key062ad(last));
        destination->owner = last->owner;
        while (last != position) {
            --last;
            record_copy062ad(last + 1, last);
        }
        position->key_word = key;
        position->owner = owner;
    } else {
        SdkWord062s capacity = count + count / 2 + count / 8;
        if (capacity < count + 32)
            capacity = count + 32;
        RegistryRecord062ad *memory = registry_allocate062ad(
            capacity * sizeof(RegistryRecord062ad));
        for (SdkWord062s i = 0; i < index; ++i) {
            registry_key_store062ad(&memory[i], registry_key062ad(&registry->begin[i]));
            memory[i].owner = registry->begin[i].owner;
        }
        registry_key_store062ad(&memory[index], key);
        memory[index].owner = owner;
        for (SdkWord062s i = index; i < count; ++i) {
            registry_key_store062ad(&memory[i + 1], registry_key062ad(&registry->begin[i]));
            memory[i + 1].owner = registry->begin[i].owner;
        }
        registry_dispose062ad(registry->begin);
        registry->limit = memory + capacity;
        registry->end = memory + count + 1;
        registry->begin = memory;
    }
    return registry->begin + index;
}

SdkWord062s registry_register062ad(Registry062ad *registry,
    SdkOwner062ab *owner, SdkWord062s requested, SdkByte062s *chosen)
{
    SdkMutex062s *mutex = registry_mutex062ad();
    mutex->methods->acquire(mutex);
    SdkWord062s slot = requested;
    SdkByte062s key;
    if (slot == 0) {
        slot = 15;
        for (;;) {
            key = (SdkByte062s)((owner->component << 4) | slot);
            if (registry_find062ad(registry, &key) == 0)
                break;
            slot = (slot - 1) & 255;
            if (slot == 0) {
                mutex->methods->release(mutex);
                return 0;
            }
        }
    }
    key = (SdkByte062s)((owner->component << 4) | slot);
    if (registry_find062ad(registry, &key) != 0) {
        mutex->methods->release(mutex);
        return 0;
    }
    RegistryRecord062ad *position = registry_lower_bound062ad(registry, key);
    if (position == registry->end || registry_key062ad(position) > key)
        position = insert062ad(registry, position, key, owner);
    (void)position;
    if (chosen != 0)
        *chosen = (SdkByte062s)slot;
    mutex->methods->release(mutex);
    return 1;
}
