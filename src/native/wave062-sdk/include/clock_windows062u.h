#ifndef CLOCK_WINDOWS062U_H
#define CLOCK_WINDOWS062U_H
#include "clock062u.h"

typedef int (*SdkPerformanceQuery062u)(SdkSignedWide062u *);
typedef struct SdkWindowsClock062u {
    SdkPerformanceQuery062u counter;
    SdkPerformanceQuery062u frequency;
    SdkWord062s calls;
    SdkWide062u last_counter;
    SdkWide062u last_frequency;
} SdkWindowsClock062u;
extern SdkWindowsClock062u sdk_windows_clock062u;
SdkWide062u sdk_windows_ticks062u(void);
#endif
