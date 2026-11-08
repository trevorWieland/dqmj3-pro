#include "clock062u.h"

static void clock_rebase062u(SdkClockPair062u *output, SdkWide062u last,
    SdkWide062u raw)
{
    SdkWide062u value = last + 1;
    sdk_clock062u.offset = value - raw;
    sdk_clock062u.last = value;
    sdk_clock_pair_write062u(output, value);
}

void sdk_clock_monotonic062u(SdkClockPair062u *output, SdkWord062s force)
{
    if ((sdk_clock062u.guard & 1) == 0 &&
        sdk_clock_guard062u(&sdk_clock062u.guard))
        sdk_clock062u.last = 0;
    SdkWide062u offset = sdk_clock062u.offset;
    SdkWide062u last = sdk_clock062u.last;
    SdkClockPair062u pair;
    sdk_clock_raw062u(&pair);
    SdkWide062u raw = sdk_clock_pair_read062u(&pair);
    if (sdk_clock062u.initialized == 0) {
        sdk_clock062u.last = 1;
        sdk_clock062u.initialized = 1;
        sdk_clock062u.offset = 1 - raw;
        sdk_clock_pair_write062u(output, 1);
        return;
    }
    if ((offset >> 63) && raw < (SdkWide062u)0 - offset) {
        if (force)
            clock_rebase062u(output, last, raw);
        else
            sdk_clock_locked062u(output);
        return;
    }
    SdkWide062u value = raw + offset;
    if (value >= last) {
        sdk_clock062u.last = value;
        sdk_clock_pair_write062u(output, value);
    } else if (force) {
        clock_rebase062u(output, last, raw);
    } else {
        sdk_clock_locked062u(output);
    }
}
