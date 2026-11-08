#include "registry062ad.h"

void registry_observer_acquire_endpoint062ad(SdkMutex062s *);
void registry_observer_release_endpoint062ad(SdkMutex062s *);

SdkWord062s fixture_registry_events062ad[8192][7];
SdkWord062s fixture_registry_event_count062ad;
static Registry062ad *observed_registry;
static const SdkByte062s *observed_output;

static void snapshot062ad(SdkMutex062s *mutex, SdkWord062s kind)
{
    SdkWord062s index = fixture_registry_event_count062ad++;
    if (index >= 8192)
        __builtin_trap();
    SdkWord062s count = (SdkWord062s)(observed_registry->end - observed_registry->begin);
    SdkWord062s *event = fixture_registry_events062ad[index];
    event[0] = kind;
    event[1] = count;
    event[2] = *observed_output;
    event[3] = mutex->fast.depth;
    event[4] = (SdkWord062s)__c11_atomic_load(&mutex->fast.count, __ATOMIC_SEQ_CST);
    event[5] = count == 0 ? 256 : registry_key062ad(observed_registry->begin);
    event[6] = count == 0 ? 256 : registry_key062ad(observed_registry->end - 1);
}

static void observer_acquire062ad(SdkMutex062s *mutex)
{
    snapshot062ad(mutex, 0);
    registry_observer_acquire_endpoint062ad(mutex);
}

static void observer_release062ad(SdkMutex062s *mutex)
{
    snapshot062ad(mutex, 1);
    registry_observer_release_endpoint062ad(mutex);
}

const SdkMutexMethods062s fixture_registry_mutex_methods062ad = {
    {0, 0}, observer_acquire062ad, observer_release062ad
};

void fixture_registry_observe062ad(Registry062ad *registry,
    const SdkByte062s *output)
{
    observed_registry = registry;
    observed_output = output;
    fixture_registry_event_count062ad = 0;
}
