#include "clock062u.h"

SdkClockState062u sdk_clock062u;

void sdk_clock_raw062u(SdkClockPair062u *output)
{
    SdkClockBackend062u *backend = sdk_clock062u.backend;
    if (backend) {
        backend->methods->read(output, backend);
    } else {
        SdkWide062u ticks = sdk_clock062u.read_ticks();
        SdkWide062u product = ticks * 1000;
        sdk_clock_pair_write062u(output,
            sdk_clock_divide062u(product, 268111856));
    }
}

void sdk_clock_current062u(SdkClockPair062u *output)
{
    if (sdk_clock062u.monotonic) {
        sdk_clock_monotonic062u(output, 0);
    } else if (sdk_clock062u.initialized) {
        SdkClockPair062u raw;
        sdk_clock_raw062u(&raw);
        sdk_clock_pair_write062u(output,
            sdk_clock_pair_read062u(&raw) + sdk_clock062u.offset);
    } else {
        SdkClockPair062u raw;
        sdk_clock062u.initialized = 1;
        sdk_clock_raw062u(&raw);
        sdk_clock062u.offset = 1 - sdk_clock_pair_read062u(&raw);
        sdk_clock_pair_write062u(output, 1);
    }
    sdk_clock062u.current = sdk_clock_pair_read062u(output);
}

void sdk_clock_locked062u(SdkClockPair062u *output)
{
    SdkMutex062s *mutex = sdk_clock062u.mutex;
    mutex->methods->acquire(mutex);
    if (sdk_clock062u.monotonic) {
        sdk_clock_monotonic062u(output, 1);
    } else if (sdk_clock062u.initialized) {
        SdkClockPair062u raw;
        sdk_clock_raw062u(&raw);
        sdk_clock_pair_write062u(output,
            sdk_clock_pair_read062u(&raw) + sdk_clock062u.offset);
    } else {
        SdkClockPair062u raw;
        sdk_clock062u.initialized = 1;
        sdk_clock_raw062u(&raw);
        sdk_clock062u.offset = 1 - sdk_clock_pair_read062u(&raw);
        sdk_clock_pair_write062u(output, 1);
    }
    mutex->methods->release(mutex);
}
