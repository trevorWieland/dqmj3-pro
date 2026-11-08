#ifndef DQMJ3_NAMESPACE071_H
#define DQMJ3_NAMESPACE071_H

#include "../wave072-construction/device_types072.h"

typedef struct EffectFileNamespaceEntry071 {
    unsigned long long key;
    EffectFileDevice068 *device;
    unsigned char config;
    unsigned char borrowed;
    unsigned char reserved[2];
} EffectFileNamespaceEntry071;

typedef struct EffectFileNamespace071 {
    EffectFileNamespaceEntry071 *entries;
    EffectFileDevice068 *default_device;
    void *context;
    void (*fatal)(void *context);
} EffectFileNamespace071;

EffectFileNamespaceEntry071 *effect_file_namespace_construct071(EffectFileNamespaceEntry071 *entry);
unsigned int effect_file_namespace_register071(EffectFileNamespace071 *state, const unsigned char *name,
    EffectFileDevice068 *device, int config, int borrowed);
unsigned int effect_file_namespace_alias071(EffectFileNamespace071 *state, const unsigned char *name,
    const unsigned char *target);
unsigned int effect_file_namespace_unmount071(EffectFileNamespace071 *state, const unsigned char *name);

_Static_assert(sizeof(EffectFileNamespaceEntry071) == (sizeof(void *) == 4 ? 16 : 24), "namespace logical and native entry sizes");
_Static_assert(__builtin_offsetof(EffectFileNamespaceEntry071, device) == 8, "namespace device offset");
_Static_assert(__builtin_offsetof(EffectFileNamespaceEntry071, config) == (sizeof(void *) == 4 ? 12 : 16), "namespace flag offset");

#endif
