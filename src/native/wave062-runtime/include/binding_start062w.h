#ifndef BINDING_START062W_H
#define BINDING_START062W_H
#include "binding062v.h"

typedef struct SdkBindingObject062w {
    SdkBinding062v policy;
    SdkWord062s unknown_001c;
} SdkBindingObject062w;

typedef struct SdkBindingMethods062w {
    SdkReferenceMethods062t reference;
    void (*unqualified_0008[3])(void);
    void (*notify)(SdkBinding062v *);
    SdkWord062s (*query)(const SdkBinding062v *);
    void (*unqualified_001c)(void);
    SdkWord062s (*start)(SdkBinding062v *);
    SdkWord062s (*ready)(SdkBinding062v *);
    void (*unqualified_0028)(void);
    void (*unqualified_002c)(void);
    SdkWord062s (*can_transition)(const SdkBinding062v *, SdkWord062s);
    SdkWord062s (*active)(const SdkBinding062v *);
    SdkWord062s (*state)(const SdkBinding062v *);
} SdkBindingMethods062w;

SdkWord062s sdk_binding_start062w(SdkBinding062v *);
SdkWord062s sdk_binding_query062w(const SdkBinding062v *);
SdkWord062s sdk_binding_start_ready062w(SdkBinding062v *);
SdkWord062s sdk_binding_poll_ready062w(SdkBinding062v *);
SdkWord062s sdk_binding_state062w(const SdkBinding062v *);
#endif
