#include "projection.h"

const SineCosineEntry derived_sine_cosine[256] = {
#include "sine_table.inc"

};

static float normalized_angle(float value)
{
    union { float value; unsigned int bits; } angle;
    angle.value = value;
    angle.bits &= 0x7fffffff;
    unsigned int exponent = angle.bits >> 23;
    if (exponent >= 166)
        return 0;
    if (exponent >= 150) {
        unsigned int mantissa = (angle.bits & 0x7fffff) | 0x800000;
        return (float)((mantissa << (exponent - 150)) & 65535);
    }
    if (angle.value >= 65536.0f) {
        unsigned int whole = (unsigned int)angle.value;
        float fraction = angle.value - (float)whole;
        return (float)(whole & 65535) + fraction;
    }
    return angle.value;
}

/* sine_cosine -- 0x0052534c, 136 bytes, ARM, 20 call sites, draft.
 *
 * Table-driven sine and cosine of a 256-unit angle: normalizes the angle to
 * [0, 256), interpolates the 256-entry table by the fractional part, and negates
 * the sine for a negative input.
 *
 * Evidence: the reconstructed body and the derived_sine_cosine table in this
 * unit; 20 call sites, several in the projection path.
 */
DQM_VFP void sine_cosine(float *sine, float *cosine, float indexed_angle)
{
    float magnitude = normalized_angle(indexed_angle);
    unsigned int whole = (unsigned int)magnitude;
    float fraction = magnitude - (float)whole;
    const SineCosineEntry *entry = &derived_sine_cosine[whole & 255];
    float result_sine = entry->sine + fraction * entry->sineStep;
    float result_cosine = entry->cosine + fraction * entry->cosineStep;
    if (indexed_angle < 0)
        result_sine = -result_sine;
    *sine = result_sine;
    *cosine = result_cosine;
}

void fn_0055492c(float output[6], const MaterialTransform *transform, const MaterialTexture *texture)
{
    float sine, cosine;
    (void)texture;
    sine_cosine(&sine, &cosine, transform->rotation * (256.0f / 360.0f));
    float xx = transform->scaleX * cosine;
    float xy = -(sine * transform->scaleY);
    output[0] = xx;
    output[1] = xy;
    float translate_x = transform->translateX + 0.5f;
    translate_x -= xx * 0.5f;
    translate_x -= xy * 0.5f;
    output[2] = translate_x;
    float yx = transform->scaleX * sine;
    float yy = transform->scaleY * cosine;
    output[3] = yx;
    output[4] = yy;
    float translate_y = transform->translateY + 0.5f;
    translate_y -= yx * 0.5f;
    translate_y -= yy * 0.5f;
    output[5] = translate_y;
    output[3] = -yx;
    output[4] = -output[4];
    output[5] = 1.0f - translate_y;
}
