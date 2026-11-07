#include "sampled_key.h"

#if defined(_WIN32)
__declspec(selectany) int _fltused = 0;
#endif

const unsigned int sampled_key_layout053[] = {
    sizeof(void *),
    sizeof(SampledKeys053),
    sizeof(SampledSegment053),
    __builtin_offsetof(SampledKeys053, keys),
    __builtin_offsetof(SampledSegment053, cached_key),
    __builtin_offsetof(SampledSegment053, period),
    __builtin_offsetof(SampledSegment053, start),
    __builtin_offsetof(SampledSegment053, end),
    __builtin_offsetof(SampledSegment053, value),
    __builtin_offsetof(SampledSegment053, tangent),
    __builtin_offsetof(SampledSegment053, quadratic),
    __builtin_offsetof(SampledSegment053, cubic)
};

SampledKeyU32_053 sampled_key_floor_bits053(SampledKeyU32_053 bits)
{
    union {
        SampledKeyU32_053 bits;
        float value;
    } converted;
    converted.bits = bits;
    converted.value = fn_006fa358(converted.value);
    return converted.bits;
}
