#ifndef DQMJ3_EFFECT_VERTEX_RESOURCE065_H
#define DQMJ3_EFFECT_VERTEX_RESOURCE065_H

#include "../wave065/effect_shader.h"

typedef struct EffectVertexBinding065 {
    EffectDeviceWord065 buffer_word;
    unsigned char format[12];
    unsigned int strides[12];
    unsigned int attributes[12];
} EffectVertexBinding065;

typedef struct EffectConstantAttribute065 {
    unsigned char enabled;
    unsigned char unknown_01[3];
    float values[4];
} EffectConstantAttribute065;

typedef struct EffectVertexInput065 {
    unsigned int cache_word;
    EffectDeviceWord065 unknown_words[84];
    unsigned char attributes_enabled[12];
    EffectVertexBinding065 bindings[12];
    EffectConstantAttribute065 constants[12];
} EffectVertexInput065;

typedef struct EffectAttributeKey065 {
    unsigned char unknown_00[2];
    unsigned char index;
} EffectAttributeKey065;

void fn_0016771c(unsigned char *storage);
void fn_0015d210(EffectConstantAttribute065 *attribute);
void fn_0015d258(EffectVertexBinding065 *binding);
void fn_0015d21c(EffectVertexBinding065 *binding);
void fn_0014db24(EffectVertexInput065 *input, unsigned int index);
void fn_0015d0e0(EffectVertexInput065 *input, const EffectAttributeKey065 *attribute,
                  EffectDeviceWord065 buffer_word, unsigned int format);

_Static_assert(sizeof(EffectVertexBinding065) == 112, "fixed device-word vertex binding");
_Static_assert(__builtin_offsetof(EffectVertexBinding065, strides) == 16, "vertex stride words");
_Static_assert(__builtin_offsetof(EffectVertexBinding065, attributes) == 64, "vertex attribute words");
_Static_assert(sizeof(EffectConstantAttribute065) == 20, "constant attribute storage");
_Static_assert(__builtin_offsetof(EffectVertexInput065, attributes_enabled) == 0x154, "vertex enabled bytes");
_Static_assert(__builtin_offsetof(EffectVertexInput065, bindings) == 0x160, "vertex binding collection");
_Static_assert(__builtin_offsetof(EffectVertexInput065, constants) == 0x6a0, "vertex constant collection");
_Static_assert(sizeof(EffectVertexInput065) == 0x790, "measured vertex configuration view");

#endif
