#include "sampled_key.h"

static int floating_format(SampledFormat053 format)
{
    return format == SAMPLED_FLOAT_PAIR053 || format == SAMPLED_FLOAT_TRIPLE053 ||
        format == SAMPLED_FLOAT_QUADRUPLE053;
}

static SampledKeyU32_053 unsigned_conversion(float value)
{
    if (!(value > 0.0f))
        return 0;
    if (value >= 4294967296.0f)
        return 0xffffffffu;
    return (SampledKeyU32_053)value;
}

static SampledKeyU32_053 query_tick(const SampledKeys053 *input, float position,
    SampledFormat053 format)
{
    float scaled = position / input->time_scale;
    if (format == SAMPLED_U16_V16_S16_053)
        return (SampledKeyU32_053)(int)(scaled * 32.0f);
    return unsigned_conversion(scaled);
}

static int compare_key(const SampledKeys053 *input, const unsigned char *key,
    float position, SampledKeyU32_053 tick, SampledFormat053 format)
{
    SampledRecord053 record = sampled_key_read053(input, key, format);
    if (floating_format(format))
        return record.time < position ? -1 : record.time > position ? 1 : 0;
    return record.encoded_time < tick ? -1 : record.encoded_time > tick ? 1 : 0;
}

static void hold_value(const SampledKeys053 *input, SampledSegment053 *output,
    const unsigned char *last, int before, SampledFormat053 format)
{
    SampledRecord053 record = sampled_key_read053(input, before ? input->keys : last, format);
    output->cached_key = before ? input->keys : 0;
    output->period = before ? -1 : 1;
    output->value = record.value;
    output->tangent = 0.0f;
    output->quadratic = 0.0f;
    output->cubic = 0.0f;
    if (before) {
        output->start = -3.40282346638528859812e38f;
        output->end = input->range_start;
    } else {
        float end = record.time + input->range_start;
        output->start = end > input->range_end ? input->range_end : end;
        output->end = 3.40282346638528859812e38f;
    }
}

static void coefficients(SampledSegment053 *output, unsigned int interpolation,
    float start, float end, float first, float second, float outgoing, float incoming)
{
    float width;
    float difference;
    float inverse;
    float inverse_squared;
    float quadratic;
    float cubic;
    if (interpolation > 2)
        return;
    output->start = start;
    output->end = end;
    output->value = first;
    output->quadratic = 0.0f;
    output->cubic = 0.0f;
    if (interpolation == 0) {
        output->tangent = 0.0f;
        return;
    }
    width = end - start;
    if (interpolation == 1) {
        output->tangent = (second - first) / width;
        return;
    }
    output->tangent = outgoing;
    difference = first - second;
    inverse = 1.0f / width;
    quadratic = (width * -2.0f) * outgoing;
    quadratic = quadratic - difference * 3.0f;
    quadratic = quadratic - width * incoming;
    cubic = difference * 2.0f;
    cubic = cubic + width * outgoing;
    cubic = cubic + width * incoming;
    inverse_squared = inverse * inverse;
    output->quadratic = quadratic * inverse_squared;
    output->cubic = cubic * (inverse_squared * inverse);
}

void sampled_key_prepare053(const SampledKeys053 *input, SampledSegment053 *output,
    float position, SampledFormat053 format)
{
    unsigned int stride = sampled_key_stride053(format);
    const unsigned char *last = input->keys + (input->key_count - 1u) * stride;
    const unsigned char *key;
    const unsigned char *neighbor;
    SampledKeyU32_053 tick = 0;
    SampledRecord053 first;
    SampledRecord053 second;
    float shift = 0.0f;
    float current = position;
    float start;
    float end;
    int reverse = 0;
    if (!floating_format(format))
        tick = query_tick(input, position, format);
    if (position >= 0.0f && compare_key(input, last, position, tick, format) > 0) {
        output->period = 0;
    } else {
        unsigned int repeat = position < 0.0f ? input->repeat_before : input->repeat_after;
        if (repeat == 0) {
            hold_value(input, output, last, position < 0.0f, format);
            return;
        }
        output->period = (int)floor_float(input->inverse_duration * position);
        reverse = repeat == 2 && (output->period & 1);
        shift = (input->range_end - input->range_start) *
            (float)(output->period + (reverse ? 1 : 0));
        current = reverse ? shift - position : position - shift;
        if (!floating_format(format))
            tick = query_tick(input, current, format);
    }
    key = output->cached_key;
    if (!key) {
        float estimate = (float)(input->key_count - 1) * current;
        estimate = estimate * input->inverse_duration;
        key = input->keys + unsigned_conversion(estimate) * stride;
    }
    if (reverse) {
        if (compare_key(input, key, current, tick, format) >= 0) {
            do {
                key -= stride;
            } while (compare_key(input, key, current, tick, format) >= 0);
            key += stride;
        } else {
            do {
                key += stride;
            } while (compare_key(input, key, current, tick, format) < 0);
        }
        neighbor = key - stride;
    } else {
        if (compare_key(input, key, current, tick, format) > 0) {
            do {
                key -= stride;
            } while (compare_key(input, key, current, tick, format) > 0);
        } else {
            do {
                key += stride;
            } while (compare_key(input, key, current, tick, format) <= 0);
            key -= stride;
        }
        neighbor = key + stride;
    }
    output->cached_key = neighbor;
    if (input->interpolation > 2)
        return;
    first = sampled_key_read053(input, key, format);
    second = sampled_key_read053(input, neighbor, format);
    if (reverse) {
        start = (input->range_start - first.time) + shift;
        end = (input->range_start - second.time) + shift;
        coefficients(output, input->interpolation, start, end,
            first.value, second.value, -first.outgoing, -second.incoming);
    } else {
        if (floating_format(format)) {
            start = (first.time + input->range_start) + shift;
            end = (second.time + input->range_start) + shift;
        } else {
            start = (first.time + shift) + input->range_start;
            end = (second.time + shift) + input->range_start;
        }
        coefficients(output, input->interpolation, start, end,
            first.value, second.value, first.outgoing, second.incoming);
    }
}
