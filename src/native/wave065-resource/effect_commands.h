#ifndef DQMJ3_EFFECT_COMMANDS_RESOURCE065_H
#define DQMJ3_EFFECT_COMMANDS_RESOURCE065_H

#include "effect_vertex.h"

typedef struct EffectIndexWords065 {
    EffectDeviceWord065 buffer_word;
    unsigned int element_count;
    unsigned char use_byte_indices;
    unsigned char unknown_09[3];
} EffectIndexWords065;

void effect_bind_command_base065(EffectDeviceWord065 base_units);
void fn_0044f3b8(EffectVertexInput065 *input, const EffectAttributeKey065 *attribute,
                  unsigned int components, const float *values);
EffectDeviceWord065 *fn_001830e0(const EffectVertexInput065 *input, EffectDeviceWord065 *output);
EffectDeviceWord065 *fn_006cf79c(const EffectVertexInput065 *input, EffectDeviceWord065 *output,
                                const EffectIndexWords065 *indices);

_Static_assert(sizeof(EffectIndexWords065) == 12, "index command data words");

#endif
