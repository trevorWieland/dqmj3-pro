#include "sampled_key.h"


/* floor_float -- 0x006fa358, 140 bytes, ARM, 23 call sites, draft.
 *
 * Rounds toward negative infinity: values whose exponent is at least 23 are
 * already integral, sub-unit values collapse to -1.0 or 0.0 by sign, and the
 * remaining fraction bits are cleared with a sign-aware step.
 *
 * Evidence: the reconstructed body, which is the floorf algorithm; 23 call sites.
 */
float SAMPLED_KEY_ABI053 floor_float(float value)
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
