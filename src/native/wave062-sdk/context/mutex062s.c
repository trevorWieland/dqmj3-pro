#include "sdk062s.h"

static SdkSigned062s mutex_load062s(_Atomic(SdkSigned062s) *value)
{
    return __c11_atomic_load(value, 5);
}

static int mutex_replace062s(_Atomic(SdkSigned062s) *value,
    SdkSigned062s before, SdkSigned062s after)
{
    return __c11_atomic_compare_exchange_strong(value, &before, after, 5, 5);
}

void sdk_fast_acquire062s(_Atomic(SdkSigned062s) *value)
{
    for (;;) {
        SdkSigned062s before = mutex_load062s(value);
        if (before > 0) {
            if (mutex_replace062s(value, before, -before))
                return;
        } else if (before < 0) {
            if (mutex_replace062s(value, before, before - 1))
                break;
        }
    }
    for (;;) {
        sdk_environment062s.platform.wait_arbiter(value);
        SdkSigned062s before = mutex_load062s(value);
        if (before > 0 && mutex_replace062s(value, before, 1 - before))
            return;
    }
}

void sdk_fast_release062s(_Atomic(SdkSigned062s) *value)
{
    SdkSigned062s before;
    do {
        before = mutex_load062s(value);
    } while (!mutex_replace062s(value, before, -before));
    if (-before > 1)
        sdk_environment062s.platform.signal_arbiter(value, 1);
}

void sdk_recursive_acquire062s(SdkFastMutex062s *mutex)
{
    void *owner = sdk_environment062s.platform.thread_owner();
    if (__c11_atomic_load(&mutex->owner, 5) != owner) {
        sdk_fast_acquire062s(&mutex->count);
        owner = sdk_environment062s.platform.thread_owner();
        __c11_atomic_store(&mutex->owner, owner, 5);
    }
    mutex->depth += 1;
}

void sdk_recursive_release062s(SdkFastMutex062s *mutex)
{
    mutex->depth -= 1;
    if (mutex->depth == 0) {
        __c11_atomic_store(&mutex->owner, (void *)0, 5);
        sdk_fast_release062s(&mutex->count);
    }
}

void sdk_mutex_acquire062s(SdkMutex062s *mutex)
{
    if (sdk_environment062s.locking_disabled == 0)
        sdk_recursive_acquire062s(&mutex->fast);
}

void sdk_mutex_release062s(SdkMutex062s *mutex)
{
    if (sdk_environment062s.locking_disabled == 0)
        sdk_recursive_release062s(&mutex->fast);
}
