#include "clock062u.h"

SdkWide062u sdk_clock_divide062u(SdkWide062u numerator, SdkWide062u divisor)
{
    if (divisor == 0)
        __builtin_trap();
    SdkWide062u quotient = 0;
    SdkWide062u remainder = 0;
    for (SdkWord062s bit = 64; bit != 0; --bit) {
        SdkWide062u carry = remainder >> 63;
        remainder = (remainder << 1) | ((numerator >> (bit - 1)) & 1);
        if (carry || remainder >= divisor) {
            remainder -= divisor;
            quotient |= (SdkWide062u)1 << (bit - 1);
        }
    }
    return quotient;
}

void sdk_clock_pair_write062u(SdkClockPair062u *pair, SdkWide062u value)
{
    pair->low = (SdkWord062s)value;
    pair->high = (SdkWord062s)(value >> 32);
}

SdkWide062u sdk_clock_pair_read062u(const SdkClockPair062u *pair)
{
    return pair->low | ((SdkWide062u)pair->high << 32);
}

SdkWord062s sdk_clock_guard062u(SdkWord062s *guard)
{
    if (*guard != 0)
        return 0;
    *guard = 1;
    return 1;
}
