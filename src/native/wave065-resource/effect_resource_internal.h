#ifndef DQMJ3_EFFECT_RESOURCE_INTERNAL065_H
#define DQMJ3_EFFECT_RESOURCE_INTERNAL065_H

#include "effect_resource.h"
#include "effect_serialized.h"

void effect_resource_shaders065(EffectResource065 *resource);
void effect_resource_primitives065(EffectResource065 *resource);
void effect_resource_sets065(EffectResource065 *resource);
void fn_0053fe5c(EffectResource065 *resource, EffectResourceAllocator065 *allocator,
                  unsigned char *image, unsigned int identifier, EffectResourceSystemView065 *system,
                  const EffectResourceOptions065 *options);
EffectResource065 *fn_005411a4(EffectResource065 *resource, EffectResourceAllocator065 *allocator,
                               unsigned char *image, unsigned int identifier, EffectResourceSystemView065 *system,
                               const EffectResourceOptions065 *options);
void fn_00160c68(EffectResource065 *resource, EffectResourceAllocator065 *allocator);
void fn_0053ea1c(EffectResourceSystemView065 *system, EffectResourceAllocator065 *allocator,
                  unsigned char *image, unsigned int slot, const EffectResourceOptions065 *options);

#endif
