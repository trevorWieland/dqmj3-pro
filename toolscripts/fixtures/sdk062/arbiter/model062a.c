#include "arbiter062a.h"

void *arbiter_model_owner_value062a;

void arbiter_model_wait062a(_Atomic(SdkSigned062s) *address)
{
    __c11_atomic_fetch_add(&arbiter_api062a.wait_calls, 1, 5);
    while (__c11_atomic_load(address, 5) < 0) {
    }
    __c11_atomic_fetch_add(&arbiter_api062a.wait_returns, 1, 5);
}

void arbiter_model_signal062a(_Atomic(SdkSigned062s) *address, SdkWord062s count)
{
    (void)address;
    __c11_atomic_fetch_add(&arbiter_api062a.wake_calls, 1, 5);
    if (count != 1)
        __builtin_trap();
}

void *arbiter_model_owner062a(void)
{
    return arbiter_model_owner_value062a;
}
