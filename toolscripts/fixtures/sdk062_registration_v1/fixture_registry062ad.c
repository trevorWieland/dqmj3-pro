#include "registry062ad.h"
#include "clock062u.h"
#include "heap062ac.h"

#define OFFSET(type, member) __builtin_offsetof(type, member)

const SdkByte062s sdk_mutex_class_identity062u = 0;
const SdkByte062s sdk_mutex_tag_identity062u = 0;
const SdkMutexMethods062s sdk_clock_mutex_methods062u = {
    {0, 0}, sdk_mutex_acquire062s, sdk_mutex_release062s
};
SdkContextRoot062s fixture_registry_root062ad;

const SdkWord062s fixture_registry_layout062ad[] = {
    sizeof(void *), sizeof(Registry062ad),
    OFFSET(Registry062ad, methods), OFFSET(Registry062ad, preserved_0004),
    OFFSET(Registry062ad, begin), OFFSET(Registry062ad, end), OFFSET(Registry062ad, limit),
    sizeof(RegistryRecord062ad), OFFSET(RegistryRecord062ad, key_word),
    OFFSET(RegistryRecord062ad, owner), sizeof(SdkOwner062ab),
    OFFSET(SdkOwner062ab, component), sizeof(SdkContextBinding062s),
    OFFSET(SdkContextBinding062s, context), sizeof(SdkContext062s),
    OFFSET(SdkContext062s, owner), sizeof(SdkContextOwner062s),
    OFFSET(SdkContextOwner062s, mutex), sizeof(SdkMutex062s),
    OFFSET(SdkMutex062s, class_tag), OFFSET(SdkMutex062s, fast),
    OFFSET(SdkMutex062s, tag), OFFSET(SdkMutex062s, flags_0018),
    OFFSET(SdkMutex062s, control), OFFSET(SdkMutex062s, state),
    OFFSET(SdkMutex062s, unknown_0024), OFFSET(SdkFastMutex062s, owner),
    OFFSET(SdkFastMutex062s, depth)
};

void fixture_registry_bind062ad(SdkContextBinding062s *binding,
    SdkContext062s *context, SdkContextOwner062s *owner, SdkWord062s lookup_lock)
{
    fixture_registry_root062ad.default_record.slots[3] = binding;
    binding->context = context;
    context->owner = owner;
    sdk_environment062s.root = &fixture_registry_root062ad;
    sdk_environment062s.contexts_enabled = 0;
    sdk_environment062s.locking_disabled = 0;
    registry_environment062ad.lookup_lock = (SdkByte062s)lookup_lock;
    sdk_mutex_initialize062u(&owner->mutex, 0);
}

void fixture_registry_owner062ad(SdkOwner062ab *owner, SdkWord062s component)
{
    owner->component = (SdkByte062s)component;
}

void fixture_registry_locking062ad(SdkWord062s lookup_lock)
{
    registry_environment062ad.lookup_lock = (SdkByte062s)lookup_lock;
}

void fixture_registry_disposer062ad(SdkWord062s enabled)
{
    sdk_environment062s.platform.dispose = enabled ? heap_default_free062ac : 0;
}
