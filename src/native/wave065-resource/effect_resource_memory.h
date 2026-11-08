#ifndef DQMJ3_EFFECT_RESOURCE_MEMORY065_H
#define DQMJ3_EFFECT_RESOURCE_MEMORY065_H

#include "../wave065/effect_services.h"

typedef enum EffectResourceAllocation065 {
    EFFECT_RESOURCE_HEADER065,
    EFFECT_RESOURCE_SHADER_ARRAY065,
    EFFECT_RESOURCE_SHADER065,
    EFFECT_RESOURCE_PRIMITIVE_ARRAY065,
    EFFECT_RESOURCE_PRIMITIVE065,
    EFFECT_RESOURCE_POSITION065,
    EFFECT_RESOURCE_COLOR065,
    EFFECT_RESOURCE_TEXCOORD065,
    EFFECT_RESOURCE_INDICES065,
    EFFECT_RESOURCE_COMMANDS065,
    EFFECT_RESOURCE_SETS065,
    EFFECT_RESOURCE_TEXTURE065
} EffectResourceAllocation065;

typedef struct EffectResourceMemory065 {
    void *(*allocate)(void *context, EffectResourceAllocation065 role, unsigned int logical_bytes,
                      __SIZE_TYPE__ physical_bytes, unsigned int alignment);
    void (*release)(void *context, void *memory);
    void *context;
} EffectResourceMemory065;

typedef struct EffectResourceAllocationRequest065 {
    EffectResourceAllocation065 role;
    unsigned int logical_bytes;
    __SIZE_TYPE__ physical_bytes;
    unsigned int alignment;
} EffectResourceAllocationRequest065;

typedef struct EffectResourceAllocator065 {
    EffectAllocator065 base;
    const EffectResourceMemory065 *memory;
    EffectResourceAllocationRequest065 pending;
    unsigned int pending_active;
} EffectResourceAllocator065;

int effect_resource_allocator_init065(EffectResourceAllocator065 *allocator, const EffectResourceMemory065 *memory);
void *effect_resource_allocate065(EffectResourceAllocator065 *allocator, EffectResourceAllocation065 role,
                                  unsigned int logical_bytes, __SIZE_TYPE__ physical_bytes, unsigned int alignment);
void effect_resource_release065(EffectResourceAllocator065 *allocator, void *memory);

_Static_assert(__builtin_offsetof(EffectResourceAllocator065, base) == 0, "genuine allocator interface first member");

#endif
