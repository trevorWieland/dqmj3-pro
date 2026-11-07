#include "sampled_key.h"

float SAMPLED_KEY_ABI053 fn_006fa358(float value)
{
    union {
        SampledKeyU32_053 bits;
        float value;
    } converted;
    SampledKeyU32_053 fraction_mask;
    int exponent;
    converted.value = value;
    exponent = (int)((converted.bits >> 23) & 255u) - 127;
    if (exponent >= 23)
        return value;
    if (exponent < 0) {
        if ((converted.bits & 0x7fffffffu) == 0)
            return value;
        return converted.bits & 0x80000000u ? -1.0f : 0.0f;
    }
    fraction_mask = 0x7fffffu >> exponent;
    if ((converted.bits & fraction_mask) == 0)
        return value;
    if (converted.bits & 0x80000000u)
        converted.bits += 0x800000u >> exponent;
    converted.bits &= ~fraction_mask;
    return converted.value;
}
