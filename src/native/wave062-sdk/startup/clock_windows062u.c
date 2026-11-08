#include "clock_windows062u.h"

SdkWindowsClock062u sdk_windows_clock062u;

SdkWide062u sdk_windows_ticks062u(void)
{
    SdkSignedWide062u counter;
    SdkSignedWide062u frequency;
    if (!sdk_windows_clock062u.counter(&counter) ||
        !sdk_windows_clock062u.frequency(&frequency) || counter < 0 ||
        frequency <= 0 || (SdkWide062u)frequency >
            ~(SdkWide062u)0 / 268111856)
        __builtin_trap();
    SdkWide062u count = (SdkWide062u)counter;
    SdkWide062u rate = (SdkWide062u)frequency;
    SdkWide062u seconds = sdk_clock_divide062u(count, rate);
    SdkWide062u remainder = count - seconds * rate;
    SdkWide062u partial = sdk_clock_divide062u(remainder * 268111856, rate);
    sdk_windows_clock062u.last_counter = count;
    sdk_windows_clock062u.last_frequency = rate;
    sdk_windows_clock062u.calls++;
    return seconds * 268111856 + partial;
}
