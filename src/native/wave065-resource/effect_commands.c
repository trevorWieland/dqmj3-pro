#include "effect_commands.h"

static EffectDeviceWord065 active_command_base065;

void effect_bind_command_base065(EffectDeviceWord065 base_units)
{
    active_command_base065 = base_units;
}

static unsigned int float_bits065(const float *value)
{
    const unsigned char *bytes = (const unsigned char *)value;
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
        (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

static unsigned int float24_bits065(unsigned int bits)
{
    unsigned int sign = bits >> 31 << 23;
    unsigned int magnitude = bits & 0x7fffffffu;
    int exponent = (int)(magnitude >> 23) - 64;
    if (magnitude == 0 || exponent < 0)
        return sign;
    return sign | (unsigned int)exponent << 16 | (magnitude & 0x7fffffu) >> 7;
}

void fn_0044f3b8(EffectVertexInput065 *input, const EffectAttributeKey065 *attribute,
                  unsigned int components, const float *values)
{
    static const float defaults[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    unsigned int index = attribute->index;
    fn_0014db24(input, index);
    input->attributes_enabled[index] = 1;
    EffectConstantAttribute065 *constant = input->constants + index;
    constant->enabled = (unsigned char)components;
    for (unsigned int item = 0; item < 4; ++item) {
        const unsigned char *source = (const unsigned char *)(item < components ? values + item : defaults + item);
        unsigned char *destination = (unsigned char *)(constant->values + item);
        for (unsigned int byte = 0; byte < 4; ++byte)
            destination[byte] = source[byte];
    }
    input->cache_word = 0;
}

EffectDeviceWord065 *fn_001830e0(const EffectVertexInput065 *input, EffectDeviceWord065 *output)
{
    output[1] = 0x000b02b9u;
    output[3] = 0x00010242u;
    output[4] = 0;
    output[5] = 0x000f02bbu;
    output[6] = 0;
    output[7] = 0x000f02bcu;
    output[8] = active_command_base065;
    output[10] = 0;
    unsigned int attributes = 0;
    unsigned int bindings = 0;
    EffectDeviceWord065 *cursor = output + 12;
    for (unsigned int slot = 0; slot < 12; ++slot) {
        const EffectVertexBinding065 *binding = input->bindings + slot;
        if (binding->buffer_word == 0)
            continue;
        unsigned int stride = 0;
        unsigned int alignment = 1;
        unsigned int count = 0;
        unsigned int permutation[2] = {0, 0};
        for (unsigned int item = 0; item < 12; ++item) {
            unsigned int format = binding->format[item];
            if (format == 2 || format == 6 || format == 10 || format == 14) {
                stride = (stride + 1) & ~1u;
                if (alignment < 2)
                    alignment = 2;
            } else if (format == 3 || format == 7 || format == 11 || format == 15) {
                stride = (stride + 3) & ~3u;
                if (alignment < 4)
                    alignment = 4;
            }
            unsigned int bytes = binding->strides[item];
            if (bytes == 0)
                break;
            stride += bytes;
            unsigned int shift = (item % 8) * 4;
            if (binding->attributes[item] & 0x80000000u) {
                permutation[item / 8] |= (bytes / 4 + 11) << shift;
            } else {
                permutation[item / 8] |= attributes << shift;
                shift = (attributes % 8) * 4;
                output[10 + attributes / 8] |= format << shift;
                unsigned int map = 4 + attributes / 8 * 2;
                output[map] = (output[map] & ~(15u << shift)) | binding->attributes[item] << shift;
                ++attributes;
            }
            ++count;
        }
        cursor[0] = binding->buffer_word - active_command_base065 * 8;
        cursor[1] = permutation[0];
        cursor[2] = (((stride + alignment - 1) & ~(alignment - 1)) << 16) | count << 28 | permutation[1];
        cursor += 3;
        ++bindings;
    }
    output[9] = (bindings * 0x300000u + 0x200000u) | 0x800f0200u;
    if (bindings & 1)
        *cursor++ = 0;
    for (int index = 11; index >= 0; --index) {
        const EffectConstantAttribute065 *constant = input->constants + index;
        if (constant->enabled == 0)
            continue;
        unsigned int x = float24_bits065(float_bits065(constant->values));
        unsigned int y = float24_bits065(float_bits065(constant->values + 1));
        unsigned int z = float24_bits065(float_bits065(constant->values + 2));
        unsigned int w = float24_bits065(float_bits065(constant->values + 3));
        cursor[0] = attributes;
        cursor[1] = 0x803f0232u;
        cursor[2] = (z >> 16 & 255) | w << 8;
        cursor[3] = (y >> 8 & 65535) | z << 16;
        cursor[4] = (x & 0xffffffu) | y << 24;
        cursor[5] = 0;
        cursor += 6;
        unsigned int shift = (attributes % 8) * 4;
        unsigned int map = 4 + attributes / 8 * 2;
        output[map] = (output[map] & ~(15u << shift)) | (unsigned int)index << shift;
        output[11] |= 1u << (16 + attributes);
        ++attributes;
    }
    output[0] = (attributes - 1) | 0xa0000000u;
    output[2] = attributes - 1;
    output[11] = (output[11] & 0x0fffffffu) | (attributes * 0x10000000u + 0xf0000000u);
    return cursor;
}

EffectDeviceWord065 *fn_006cf79c(const EffectVertexInput065 *input, EffectDeviceWord065 *output,
                                const EffectIndexWords065 *indices)
{
    (void)input;
    output[0] = 1;
    output[1] = 0x000f025fu;
    output[2] = (indices->use_byte_indices ? 0 : 0x80000000u) |
        (indices->buffer_word - active_command_base065 * 8);
    output[3] = 0x000f0227u;
    output[4] = indices->element_count;
    output[5] = 0x000f0228u;
    output[6] = 0;
    output[7] = 0x00010245u;
    output[8] = 1;
    output[9] = 0x000f022fu;
    output[10] = 1;
    output[11] = 0x00010245u;
    output[12] = 1;
    output[13] = 0x000f0231u;
    output[14] = 0;
    output[15] = 0x0008025eu;
    output[16] = 0;
    output[17] = 0x0008025eu;
    return output + 18;
}
