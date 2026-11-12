#ifndef NATIVE_SAMPLED_KEY053_H
#define NATIVE_SAMPLED_KEY053_H

#if defined(__arm__)
#define SAMPLED_KEY_ABI053 __attribute__((pcs("aapcs-vfp")))
#else
#define SAMPLED_KEY_ABI053
#endif

typedef unsigned int SampledKeyU32_053;

_Static_assert(sizeof(float) == 4, "Sampled keys require 32-bit floats");
_Static_assert(sizeof(SampledKeyU32_053) == 4, "Sampled keys require 32-bit words");
_Static_assert(sizeof(unsigned short) == 2, "Sampled keys require 16-bit counts");

typedef struct SampledKeys053 {
    float range_start;
    float range_end;
    unsigned char repeat_before;
    unsigned char repeat_after;
    unsigned char unknown_0a[2];
    unsigned char interpolation;
    unsigned char unknown_0d;
    unsigned short key_count;
    float value_scale;
    float value_offset;
    float time_scale;
    float inverse_duration;
    const unsigned char *keys;
} SampledKeys053;

typedef struct SampledSegment053 {
    const unsigned char *cached_key;
    int period;
    float start;
    float end;
    float value;
    float tangent;
    float quadratic;
    float cubic;
} SampledSegment053;

typedef struct SampledRecord053 {
    SampledKeyU32_053 encoded_time;
    float time;
    float value;
    float incoming;
    float outgoing;
} SampledRecord053;

typedef enum SampledFormat053 {
    SAMPLED_U12_V20_053,
    SAMPLED_FLOAT_PAIR053,
    SAMPLED_U8_V12_S12_053,
    SAMPLED_U16_V16_S16_053,
    SAMPLED_FLOAT_TRIPLE053,
    SAMPLED_U8_V16_S12_PAIR053,
    SAMPLED_U12_V20_S16_PAIR053,
    SAMPLED_FLOAT_QUADRUPLE053
} SampledFormat053;

float SAMPLED_KEY_ABI053 floor_float(float value);
unsigned int sampled_key_stride053(SampledFormat053 format);
SampledRecord053 sampled_key_read053(const SampledKeys053 *input,
    const unsigned char *key, SampledFormat053 format);
void sampled_key_prepare053(const SampledKeys053 *input, SampledSegment053 *output,
    float position, SampledFormat053 format);

void SAMPLED_KEY_ABI053 fn_0075bd7c(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075c360(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075c760(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075ce80(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075d460(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075d97c(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075e094(const SampledKeys053 *, SampledSegment053 *, float);
void SAMPLED_KEY_ABI053 fn_0075e6bc(const SampledKeys053 *, SampledSegment053 *, float);

#endif
