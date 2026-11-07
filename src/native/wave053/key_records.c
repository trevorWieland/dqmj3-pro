#include "sampled_key.h"

static unsigned int read_u16(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8;
}

static SampledKeyU32_053 read_u32(const unsigned char *bytes)
{
    return read_u16(bytes) | read_u16(bytes + 2) << 16;
}

static int signed_value(unsigned int value, unsigned int width)
{
    unsigned int sign = 1u << (width - 1);
    return value & sign ? (int)value - (int)(sign * 2u) : (int)value;
}

static float read_float(const unsigned char *bytes)
{
    union {
        SampledKeyU32_053 bits;
        float value;
    } converted;
    converted.bits = read_u32(bytes);
    return converted.value;
}

unsigned int sampled_key_stride053(SampledFormat053 format)
{
    static const unsigned char strides[] = {4, 8, 4, 6, 12, 6, 8, 16};
    return strides[format];
}

SampledRecord053 sampled_key_read053(const SampledKeys053 *input,
    const unsigned char *key, SampledFormat053 format)
{
    SampledRecord053 result;
    unsigned int value = 0;
    int incoming = 0;
    int outgoing = 0;
    float slope_scale = 0.0f;
    result.incoming = 0.0f;
    result.outgoing = 0.0f;
    if (format == SAMPLED_FLOAT_PAIR053 || format == SAMPLED_FLOAT_TRIPLE053 ||
        format == SAMPLED_FLOAT_QUADRUPLE053) {
        result.encoded_time = 0;
        result.time = read_float(key);
        result.value = read_float(key + 4);
        if (format != SAMPLED_FLOAT_PAIR053) {
            result.incoming = read_float(key + 8);
            result.outgoing = format == SAMPLED_FLOAT_TRIPLE053 ?
                result.incoming : read_float(key + 12);
        }
        return result;
    }
    switch (format) {
    case SAMPLED_U12_V20_053:
    case SAMPLED_U12_V20_S16_PAIR053:
        result.encoded_time = read_u32(key) & 4095u;
        value = read_u32(key) >> 12;
        if (format == SAMPLED_U12_V20_S16_PAIR053) {
            incoming = signed_value(read_u16(key + 4), 16);
            outgoing = signed_value(read_u16(key + 6), 16);
            slope_scale = 0.00390625f;
        }
        break;
    case SAMPLED_U8_V12_S12_053:
        result.encoded_time = key[0];
        value = key[1] | ((unsigned int)key[2] & 15u) << 8;
        incoming = signed_value((unsigned int)key[2] >> 4 | (unsigned int)key[3] << 4, 12);
        outgoing = incoming;
        slope_scale = 0.03125f;
        break;
    case SAMPLED_U16_V16_S16_053:
        result.encoded_time = read_u16(key);
        value = read_u16(key + 2);
        incoming = signed_value(read_u16(key + 4), 16);
        outgoing = incoming;
        slope_scale = 0.00390625f;
        break;
    case SAMPLED_U8_V16_S12_PAIR053:
        result.encoded_time = key[0];
        value = read_u16(key + 1);
        incoming = signed_value(key[3] | ((unsigned int)key[4] & 15u) << 8, 12);
        outgoing = signed_value((unsigned int)key[4] >> 4 | (unsigned int)key[5] << 4, 12);
        slope_scale = 0.03125f;
        break;
    default:
        result.encoded_time = 0;
        break;
    }
    result.time = (float)result.encoded_time * input->time_scale;
    if (format == SAMPLED_U16_V16_S16_053)
        result.time = result.time * 0.03125f;
    result.value = input->value_offset + (float)value * input->value_scale;
    result.incoming = (float)incoming * slope_scale;
    result.outgoing = (float)outgoing * slope_scale;
    return result;
}
