#include "clock062u.h"
#include "clock_windows062u.h"
#define AT(type, field) __builtin_offsetof(type, field)

const SdkByte062s sdk_mutex_class_identity062u = 0;
const SdkByte062s sdk_mutex_tag_identity062u = 0;
const SdkMutexMethods062s sdk_clock_mutex_methods062u = {
    {0, 0}, sdk_mutex_acquire062s, sdk_mutex_release062s
};
SdkWide062u fixture_kernel_ticks062u;
SdkWord062s fixture_kernel_tick_calls062u;
SdkWide062u fixture_kernel_tick_log062u[32];
SdkWide062u fixture_windows_counter_log062u[32];
SdkWide062u fixture_windows_frequency_log062u[32];
SdkWide062u fixture_read_ticks062u(void)
{
    if (fixture_kernel_tick_calls062u >= 32)
        __builtin_trap();
    fixture_kernel_tick_log062u[fixture_kernel_tick_calls062u++] =
        fixture_kernel_ticks062u;
    return fixture_kernel_ticks062u;
}

SdkWide062u fixture_windows_ticks062u(void)
{
    SdkWide062u value = sdk_windows_ticks062u();
    if (fixture_kernel_tick_calls062u >= 32)
        __builtin_trap();
    fixture_windows_counter_log062u[fixture_kernel_tick_calls062u] =
        sdk_windows_clock062u.last_counter;
    fixture_windows_frequency_log062u[fixture_kernel_tick_calls062u] =
        sdk_windows_clock062u.last_frequency;
    fixture_kernel_tick_log062u[fixture_kernel_tick_calls062u++] = value;
    return value;
}

typedef struct FixtureClockBackend062u {
    SdkClockBackend062u common;
    SdkWide062u value;
    SdkWord062s calls;
    SdkByte062s *initialized;
    SdkWord062s seen_initialized;
    SdkWord062s change_initialized;
    SdkWord062s initialized_value;
} FixtureClockBackend062u;
static void fixture_clock_read062u(SdkClockPair062u *output,
    SdkClockBackend062u *backend)
{
    FixtureClockBackend062u *fixture = (FixtureClockBackend062u *)backend;
    fixture->calls++;
    fixture->seen_initialized = *fixture->initialized;
    if (fixture->change_initialized)
        *fixture->initialized = (SdkByte062s)fixture->initialized_value;
    output->low = (SdkWord062s)fixture->value;
    output->high = (SdkWord062s)(fixture->value >> 32);
}
const SdkClockMethods062u fixture_clock_methods062u = {
    {0, 0}, fixture_clock_read062u
};
const SdkWord062s fixture_clock_layout062u[] = {
    sizeof(SdkClockState062u), AT(SdkClockState062u, initialized),
    AT(SdkClockState062u, monotonic), AT(SdkClockState062u, alternate),
    AT(SdkClockState062u, guard), AT(SdkClockState062u, current),
    AT(SdkClockState062u, offset), AT(SdkClockState062u, last),
    AT(SdkClockState062u, backend), AT(SdkClockState062u, mutex),
    AT(SdkClockState062u, read_ticks), sizeof(FixtureClockBackend062u),
    AT(FixtureClockBackend062u, value), AT(FixtureClockBackend062u, calls),
    AT(FixtureClockBackend062u, initialized),
    AT(FixtureClockBackend062u, seen_initialized),
    AT(FixtureClockBackend062u, change_initialized),
    AT(FixtureClockBackend062u, initialized_value),
    sizeof(SdkWindowsClock062u), AT(SdkWindowsClock062u, calls),
    AT(SdkWindowsClock062u, last_counter),
    AT(SdkWindowsClock062u, last_frequency)
};
