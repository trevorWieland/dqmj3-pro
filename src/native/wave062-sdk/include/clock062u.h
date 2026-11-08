#ifndef CLOCK062U_H
#define CLOCK062U_H
#include "sdk062s.h"

typedef unsigned long long SdkWide062u;
typedef long long SdkSignedWide062u;
typedef struct SdkClockPair062u {
    SdkWord062s low;
    SdkWord062s high;
} SdkClockPair062u;
typedef struct SdkClockBackend062u SdkClockBackend062u;
typedef struct SdkClockMethods062u {
    void (*unknown[2])(SdkClockPair062u *, SdkClockBackend062u *);
    void (*read)(SdkClockPair062u *, SdkClockBackend062u *);
} SdkClockMethods062u;
struct SdkClockBackend062u {
    const SdkClockMethods062u *methods;
};
typedef struct SdkClockState062u {
    SdkByte062s initialized;
    SdkByte062s monotonic;
    SdkByte062s alternate;
    SdkWord062s guard;
    SdkWide062u current;
    SdkWide062u offset;
    SdkWide062u last;
    SdkClockBackend062u *backend;
    SdkMutex062s *mutex;
    SdkWide062u (*read_ticks)(void);
} SdkClockState062u;

extern SdkClockState062u sdk_clock062u;
extern const SdkMutexMethods062s sdk_clock_mutex_methods062u;
extern const SdkByte062s sdk_mutex_class_identity062u;
extern const SdkByte062s sdk_mutex_tag_identity062u;
SdkWide062u sdk_clock_divide062u(SdkWide062u, SdkWide062u);
void sdk_clock_pair_write062u(SdkClockPair062u *, SdkWide062u);
SdkWide062u sdk_clock_pair_read062u(const SdkClockPair062u *);
SdkWord062s sdk_clock_guard062u(SdkWord062s *);
void sdk_clock_raw062u(SdkClockPair062u *);
void sdk_clock_current062u(SdkClockPair062u *);
void sdk_clock_monotonic062u(SdkClockPair062u *, SdkWord062s);
void sdk_clock_locked062u(SdkClockPair062u *);
void sdk_count_initialize062u(_Atomic(SdkSigned062s) *);
void sdk_recursive_initialize062u(SdkFastMutex062s *);
SdkMutex062s *sdk_mutex_initialize062u(SdkMutex062s *, SdkWord062s);
#endif
