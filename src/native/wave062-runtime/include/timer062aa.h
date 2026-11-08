#ifndef TIMER062AA_H
#define TIMER062AA_H
#include "clock062u.h"

typedef struct SdkEndpoint062aa {
    const void *identity;
    SdkWord062s data[7];
} SdkEndpoint062aa;
typedef struct SdkTimerPair062aa {
    SdkEndpoint062aa first;
    SdkEndpoint062aa second;
    SdkWord062s remaining;
} SdkTimerPair062aa;
typedef struct SdkTimerNode062aa SdkTimerNode062aa;
struct SdkTimerNode062aa {
    SdkByte062s black;
    SdkTimerNode062aa *parent;
    SdkTimerNode062aa *left;
    SdkTimerNode062aa *right;
    SdkTimerPair062aa pair;
};
typedef struct SdkTimerPool062aa {
    struct SdkTimerPool062aa *next;
    SdkWord062s capacity;
    SdkTimerNode062aa *storage;
} SdkTimerPool062aa;
typedef struct SdkTimerMap062aa {
    SdkTimerPool062aa *pools;
    SdkTimerNode062aa *free_nodes;
    SdkTimerNode062aa *next;
    SdkTimerNode062aa *limit;
    SdkTimerNode062aa *head;
    SdkWord062s count;
    SdkByte062s allow_duplicates;
    SdkByte062s address_tag;
} SdkTimerMap062aa;
typedef struct SdkTimer062aa {
    SdkWord062s unknown_0000;
    SdkTimerMap062aa map;
    SdkWord062s timeout;
    SdkWord062s unknown_0024;
    SdkClockPair062u last;
} SdkTimer062aa;

extern const SdkByte062s sdk_endpoint_identity062aa;
void sdk_endpoint_copy062aa(SdkEndpoint062aa *, const SdkEndpoint062aa *);
SdkSigned062s sdk_endpoint_compare062aa(const SdkEndpoint062aa *, const SdkEndpoint062aa *);
SdkTimer062aa *sdk_timer_initialize062aa(SdkTimer062aa *, SdkWord062s);
void sdk_timer_insert062aa(SdkTimerNode062aa **, SdkTimerMap062aa *, SdkWord062s,
    SdkTimerNode062aa *, const SdkTimerPair062aa *);
SdkWord062s sdk_timer_set062aa(SdkTimer062aa *, const SdkEndpoint062aa *,
    const SdkEndpoint062aa *, SdkWord062s);
void sdk_timer_update062aa(SdkTimer062aa *);
#endif
