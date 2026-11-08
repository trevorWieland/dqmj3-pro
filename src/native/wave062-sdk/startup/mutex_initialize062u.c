#include "clock062u.h"

void sdk_count_initialize062u(_Atomic(SdkSigned062s) *count)
{
    __c11_atomic_exchange(count, 1, __ATOMIC_RELAXED);
}

void sdk_recursive_initialize062u(SdkFastMutex062s *mutex)
{
    sdk_count_initialize062u(&mutex->count);
    __c11_atomic_store(&mutex->owner, (void *)0, __ATOMIC_RELAXED);
    mutex->depth = 0;
}

SdkMutex062s *sdk_mutex_initialize062u(SdkMutex062s *mutex, SdkWord062s control)
{
    mutex->methods = &sdk_clock_mutex_methods062u;
    mutex->class_tag = &sdk_mutex_class_identity062u;
    __c11_atomic_store(&mutex->fast.count, 0, __ATOMIC_RELAXED);
    mutex->fast.depth = 0xffffffffu;
    __c11_atomic_store(&mutex->fast.owner, (void *)0, __ATOMIC_RELAXED);
    sdk_recursive_initialize062u(&mutex->fast);
    mutex->tag = &sdk_mutex_tag_identity062u;
    mutex->flags_0018 = 0;
    mutex->control = control;
    mutex->state = 0;
    mutex->unknown_0024 = 0;
    return mutex;
}
