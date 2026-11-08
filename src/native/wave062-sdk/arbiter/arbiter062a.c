#include "arbiter062a.h"

ArbiterApi062a arbiter_api062a;

void arbiter_wait062a(_Atomic(SdkSigned062s) *address)
{
    __c11_atomic_thread_fence(5);
    SdkSigned062s expected = __c11_atomic_load(address, 5);
    __c11_atomic_fetch_add(&arbiter_api062a.wait_calls, 1, 5);
    if (expected < 0) {
        if (!arbiter_api062a.wait(address, &expected, sizeof(expected), 0xffffffffu))
            __builtin_trap();
    }
    __c11_atomic_fetch_add(&arbiter_api062a.wait_returns, 1, 5);
    __c11_atomic_thread_fence(5);
}

void arbiter_signal062a(_Atomic(SdkSigned062s) *address, SdkWord062s count)
{
    if (count != 1)
        __builtin_trap();
    __c11_atomic_thread_fence(5);
    __c11_atomic_fetch_add(&arbiter_api062a.wake_calls, 1, 5);
    arbiter_api062a.wake(address);
    __c11_atomic_thread_fence(5);
}

void *arbiter_owner062a(void)
{
    return arbiter_api062a.tls(arbiter_api062a.index);
}
