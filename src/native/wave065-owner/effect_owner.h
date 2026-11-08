#ifndef DQMJ3_EFFECT_OWNER065_H
#define DQMJ3_EFFECT_OWNER065_H

#include "../wave065-resource/effect_resource_internal.h"

typedef struct EffectResourceSlot065 {
    unsigned int identifier;
    unsigned char used;
    unsigned char kind;
    unsigned char unknown_06[2];
} EffectResourceSlot065;

typedef struct EffectRegistrationBankView065 {
    EffectResourceSystemView065 *system;
    EffectResourceAllocator065 *allocator;
    EffectResourceSlot065 *begin;
    EffectResourceSlot065 *end;
} EffectRegistrationBankView065;

typedef struct EffectRegistrationView065 {
    unsigned int unknown_00;
    EffectRegistrationBankView065 *bank;
} EffectRegistrationView065;

unsigned int fn_005f0974(EffectRegistrationView065 *registration, unsigned char *image, unsigned char kind);

_Static_assert(sizeof(EffectResourceSlot065) == 8, "registration slot storage");
_Static_assert(__builtin_offsetof(EffectResourceSlot065, used) == 4, "registration used byte");
_Static_assert(__builtin_offsetof(EffectResourceSlot065, kind) == 5, "registration kind byte");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(EffectRegistrationView065, bank) == 4, "registration bank pointer");
_Static_assert(sizeof(void *) != 4 || sizeof(EffectRegistrationBankView065) == 16, "registration bank field view");

#endif
