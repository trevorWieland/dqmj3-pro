#include "effect_vertex.h"

void fn_0016771c(unsigned char *storage)
{
    (void)storage;
}

void fn_0015d210(EffectConstantAttribute065 *attribute)
{
    attribute->enabled = 0;
}

void fn_0015d258(EffectVertexBinding065 *binding)
{
    binding->buffer_word = 0;
    for (unsigned int index = 0; index < 12; ++index)
        fn_0016771c(binding->format + index);
}

void fn_0015d21c(EffectVertexBinding065 *binding)
{
    binding->buffer_word = 0;
    for (unsigned int index = 0; index < 12; ++index) {
        binding->format[index] = 0;
        binding->strides[index] = 0;
        binding->attributes[index] = 0xffffffffu;
    }
}

void fn_0014db24(EffectVertexInput065 *input, unsigned int index)
{
    if (!input->attributes_enabled[index])
        return;
    input->cache_word = 0;
    if (input->constants[index].enabled) {
        input->constants[index].enabled = 0;
        input->attributes_enabled[index] = 0;
        return;
    }
    for (unsigned int slot = 0; slot < 12; ++slot) {
        EffectVertexBinding065 *binding = input->bindings + slot;
        if (binding->buffer_word == 0)
            continue;
        for (unsigned int item = 0; item < 12; ++item) {
            if (binding->attributes[item] != index)
                continue;
            binding->attributes[item] = 0xffffffffu;
            input->attributes_enabled[index] = 0;
            unsigned int remaining = 0;
            for (unsigned int other = 0; other < 12; ++other)
                remaining |= binding->attributes[other] != 0xffffffffu;
            if (!remaining) {
                binding->buffer_word = 0;
                for (unsigned int other = 0; other < 12; ++other)
                    binding->strides[other] = 0;
            }
            return;
        }
    }
}

static unsigned int vertex_format_bytes065(unsigned int format)
{
    switch (format) {
    case 0:
    case 1:
        return 1;
    case 2:
    case 4:
    case 5:
        return 2;
    case 3:
    case 6:
    case 12:
    case 13:
        return 4;
    case 7:
    case 14:
        return 8;
    case 8:
    case 9:
        return 3;
    case 10:
        return 6;
    case 11:
        return 12;
    case 15:
        return 16;
    default:
        return 0;
    }
}

void fn_0015d0e0(EffectVertexInput065 *input, const EffectAttributeKey065 *attribute,
                  EffectDeviceWord065 buffer_word, unsigned int format)
{
    unsigned int index = attribute->index;
    unsigned int bytes = vertex_format_bytes065(format);
    fn_0014db24(input, index);
    EffectVertexBinding065 *available = 0;
    for (unsigned int slot = 0; slot < 12; ++slot) {
        if (input->bindings[slot].buffer_word == 0) {
            available = input->bindings + slot;
            break;
        }
    }
    input->attributes_enabled[index] = 1;
    available->buffer_word = buffer_word;
    available->format[0] = (unsigned char)format;
    available->attributes[0] = index;
    available->strides[0] = bytes;
    for (unsigned int item = 1; item < 12; ++item) {
        available->strides[item] = 0;
        available->attributes[item] = 0xffffffffu;
    }
    input->cache_word = 0;
}
