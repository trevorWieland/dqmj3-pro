#ifndef ARBITER062A_H
#define ARBITER062A_H

#include "sdk062s.h"

typedef int (*ArbiterWait062a)(volatile void *, void *, __UINTPTR_TYPE__, SdkWord062s);
typedef void (*ArbiterWake062a)(void *);
typedef void *(*ArbiterTls062a)(SdkWord062s);

typedef struct ArbiterApi062a {
    ArbiterWait062a wait;
    ArbiterWake062a wake;
    ArbiterTls062a tls;
    SdkWord062s index;
    _Atomic(SdkWord062s) wait_calls;
    _Atomic(SdkWord062s) wake_calls;
    _Atomic(SdkWord062s) wait_returns;
} ArbiterApi062a;

extern ArbiterApi062a arbiter_api062a;
void arbiter_wait062a(_Atomic(SdkSigned062s) *);
void arbiter_signal062a(_Atomic(SdkSigned062s) *, SdkWord062s);
void *arbiter_owner062a(void);
void arbiter_model_wait062a(_Atomic(SdkSigned062s) *);
void arbiter_model_signal062a(_Atomic(SdkSigned062s) *, SdkWord062s);
void *arbiter_model_owner062a(void);
extern void *arbiter_model_owner_value062a;

#endif
