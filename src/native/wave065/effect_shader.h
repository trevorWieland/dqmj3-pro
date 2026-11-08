#ifndef DQMJ3_EFFECT_SHADER065_H
#define DQMJ3_EFFECT_SHADER065_H

#include "effect_services.h"

typedef unsigned int EffectDeviceWord065;

typedef struct EffectShaderProgram065 {
    const EffectDeviceWord065 *commands;
    unsigned int command_word_count;
    void *owner;
} EffectShaderProgram065;

typedef struct EffectShaderPool065 {
    EffectShaderProgram065 programs[30];
} EffectShaderPool065;

typedef struct EffectShaderBinding065 {
    unsigned int unknown_00;
    const EffectDeviceWord065 *commands;
    unsigned int command_word_count;
    unsigned char commands_borrowed;
    unsigned char unknown_0d[3];
    unsigned int keys[6];
} EffectShaderBinding065;

int effect_bind_shader_pool065(const EffectShaderPool065 *pool);
EffectShaderBinding065 *fn_0053a688(EffectShaderBinding065 *binding);
void fn_0053e2c4(EffectShaderBinding065 *binding);
void fn_0017db84(EffectShaderBinding065 *binding, EffectAllocator065 *allocator);

_Static_assert(sizeof(EffectDeviceWord065) == 4, "effect device word width");
_Static_assert(sizeof(((EffectShaderBinding065 *)0)->keys) == 24, "effect serialized key width");
_Static_assert(__builtin_offsetof(EffectShaderBinding065, commands) == sizeof(void *), "effect shader command pointer alignment");
_Static_assert(__builtin_offsetof(EffectShaderBinding065, keys) == sizeof(void *) * 2 + 8, "effect shader key ownership");

#endif
