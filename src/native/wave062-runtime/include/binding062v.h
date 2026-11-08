#ifndef BINDING062V_H
#define BINDING062V_H
#include "object062t.h"

typedef struct SdkBinding062v SdkBinding062v;
typedef struct SdkBindingMethods062v {
    SdkReferenceMethods062t reference;
    void (*unqualified_0008[3])(void);
    void (*notify)(SdkBinding062v *);
    void (*unqualified_0018[6])(void);
    SdkWord062s (*can_transition)(const SdkBinding062v *, SdkWord062s);
    SdkWord062s (*active)(const SdkBinding062v *);
} SdkBindingMethods062v;

struct SdkBinding062v {
    SdkReference062t reference;
    const void *identity;
    const unsigned short *name;
    unsigned short state;
    SdkWord062s dependents;
};

SdkWord062s sdk_binding_active062v(const SdkBinding062v *);
SdkWord062s sdk_binding_can_transition062v(const SdkBinding062v *, SdkWord062s);
void sdk_binding_notify062v(SdkBinding062v *);
#endif
