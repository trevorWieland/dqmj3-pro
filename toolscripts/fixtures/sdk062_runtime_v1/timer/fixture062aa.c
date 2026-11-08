#include "timer062aa.h"
#include "tree_erase062z.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

typedef struct SdkTimerClockBackend062aa {
    SdkClockBackend062u common;
    SdkWide062u value;
    SdkWord062s calls;
    SdkWord062s seen_initialized;
    const SdkByte062s *initialized;
} SdkTimerClockBackend062aa;

const SdkByte062s sdk_endpoint_identity062aa = 0;
const SdkByte062s sdk_mutex_class_identity062u = 0;
const SdkByte062s sdk_mutex_tag_identity062u = 0;
const SdkMutexMethods062s sdk_clock_mutex_methods062u = {
    {0, 0}, sdk_mutex_acquire062s, sdk_mutex_release062s
};

void fixture_timer_clock_read062aa(SdkClockPair062u *output, SdkClockBackend062u *base)
{
    SdkTimerClockBackend062aa *backend = (SdkTimerClockBackend062aa *)base;
    backend->calls += 1;
    backend->seen_initialized = *backend->initialized;
    output->low = (SdkWord062s)backend->value;
    output->high = (SdkWord062s)(backend->value >> 32);
}

const SdkClockMethods062u fixture_timer_clock_methods062aa = {
    {0, 0}, fixture_timer_clock_read062aa
};

const SdkWord062s fixture_timer_layout062aa[] = {
    sizeof(void *), sizeof(SdkEndpoint062aa), OFFSET(SdkEndpoint062aa, data),
    sizeof(SdkTimerPair062aa), OFFSET(SdkTimerPair062aa, second),
    OFFSET(SdkTimerPair062aa, remaining), sizeof(SdkTimerNode062aa),
    OFFSET(SdkTimerNode062aa, pair), sizeof(SdkTimerPool062aa),
    OFFSET(SdkTimerPool062aa, capacity), OFFSET(SdkTimerPool062aa, storage),
    sizeof(SdkTimerMap062aa), OFFSET(SdkTimerMap062aa, count),
    OFFSET(SdkTimerMap062aa, allow_duplicates), OFFSET(SdkTimerMap062aa, address_tag),
    sizeof(SdkTimer062aa), OFFSET(SdkTimer062aa, map),
    OFFSET(SdkTimer062aa, timeout), OFFSET(SdkTimer062aa, unknown_0024),
    OFFSET(SdkTimer062aa, last), sizeof(SdkTimerClockBackend062aa),
    OFFSET(SdkTimerClockBackend062aa, value), OFFSET(SdkTimerClockBackend062aa, calls),
    OFFSET(SdkTimerClockBackend062aa, seen_initialized), OFFSET(SdkTimerClockBackend062aa, initialized),
    sizeof(SdkClockState062u), OFFSET(SdkClockState062u, current),
    OFFSET(SdkClockState062u, offset), OFFSET(SdkClockState062u, backend)
};
