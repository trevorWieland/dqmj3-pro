#include "selector055.h"

StateContextSelector055 *state_context_select055;

static StateWord055 state_float_bits055(float value) {
    union { float value; StateWord055 bits; } view = { .value = value };
    return view.bits;
}

static StateWord055 state_unsigned_float055(float value) {
    if (!(value > 0.0f))
        return 0;
    if (value >= 4294967296.0f)
        return 0xffffffffu;
    return (StateWord055)value;
}

static StateWord055 state_color055(const float values[4]) {
    StateWord055 result = 0;
    for (StateWord055 index = 0; index < 4; index++)
        result |= state_unsigned_float055(values[index]*255.0f) << (index*8);
    return result;
}

static StateWord055 state_bias055(float value) {
    if (value == 0.0f || ((state_float_bits055(value) >> 23) & 255u) == 255u)
        return 0;
    float scaled = (value+16.0f)*256.0f;
    if (scaled < 0.0f)
        scaled = 0.0f;
    if (scaled >= 8192.0f)
        scaled = 8191.0f;
    scaled = scaled >= 4096.0f ? scaled-4096.0f : scaled+4096.0f;
    return state_unsigned_float055(scaled) & 8191u;
}

static StateWord055 state_dimensions055(StateWord055 previous,const StateDescriptor055 *descriptor) {
    return (previous & ~0x07ff07ffu) | ((descriptor->width << 16) & 0x07ff0000u) | (descriptor->height & 0x7ffu);
}

static StateWord055 state_wrap055(StateWord055 previous,StateWord055 value,StateWord055 shift) {
    StateWord055 bits;
    switch (value) {
        case 0x2901: bits = 2; break;
        case 0x812d: bits = 1; break;
        case 0x812f: bits = 0; break;
        case 0x8370: bits = 3; break;
        default: return previous;
    }
    return (previous & ~(7u << shift)) | (bits << shift);
}

static void state_filter055(StateWord055 *configuration,StateWord055 *lod,const StateDescriptor055 *descriptor) {
    StateWord055 value = descriptor->second_filter;
    if (value != 0x2600 && value != 0x2601 && (value < 0x2700 || value > 0x2703))
        return;
    *configuration = (*configuration & ~4u) | ((value & 1u) << 2);
    *configuration &= ~0x1000000u;
    *lod &= ~0x0f0f0000u;
    if (value >= 0x2700) {
        StateWord055 level = descriptor->level < 0 ? 0u : (StateWord055)descriptor->level;
        *lod |= ((descriptor->levels-1u) & 15u) << 16;
        *lod |= (level & 15u) << 24;
        if (value >= 0x2702)
            *configuration |= 0x1000000u;
    }
}

static int state_format_valid055(StateWord055 format) {
    return (format >= 0x1906 && format <= 0x190a) || format == 0x6700 || format == 0x675a || format == 0x675b;
}

StateWord055 state_select055(const StateDescriptor055 *descriptor,StateWord055 unit) {
    StateContextSelector055 *context = state_context_select055;
    StateWord055 *cache = context->cache;
    StateWord055 enabled = context->enabled[unit];
    if (!enabled || !descriptor->target_address) {
        if (unit > 2)
            return 0x501;
        cache[0] &= ~(1u << unit);
        return enabled ? 0x502u : 0u;
    }
    StateWord055 color = state_color055(descriptor->colors);
    if (unit > 2)
        return 0;
    StateWord055 index = unit == 0 ? 1u : unit == 1 ? 17u : 25u;
    StateWord055 configuration = index+2u;
    StateWord055 lod = index+3u;
    if (unit == 0) {
        cache[index] = color;
        cache[configuration] &= ~0x100000u;
        cache[index+1u] = state_dimensions055(cache[index+1u],descriptor);
        cache[14] = (cache[14] & ~15u) | (descriptor->tail & 15u);
    } else {
        cache[configuration] &= ~0xc0u;
    }
    cache[lod] = (cache[lod] & ~8191u) | state_bias055(descriptor->bias);
    StateWord055 format = descriptor->format;
    if (!state_format_valid055(format) && format != 0x6050 && !(unit == 0 && format == 0x6040))
        return 0x502;
    if (unit == 0 && format == 0x6040) {
        cache[configuration] = (cache[configuration] & ~0x71000000u) | 0x20100006u;
        cache[configuration] = (cache[configuration] & ~0x7730u) | 0x1100u;
        cache[lod] &= ~0x0f0f1fffu;
    } else if (format == 0x6050) {
        cache[configuration] &= unit == 0 ? ~0x70007736u : ~0x7706u;
        cache[lod] &= ~0x0f0f1fffu;
        color = 0;
        cache[index] = 0;
    } else {
        if (unit == 0)
            cache[configuration] = (cache[configuration] & ~0x70000000u) | (context->mode == 0x6e00 ? 0x30000000u : 0u);
        cache[configuration] = state_wrap055(cache[configuration],descriptor->first_wrap,12);
        cache[configuration] = state_wrap055(cache[configuration],descriptor->second_wrap,8);
        if (descriptor->first_filter == 0x2600)
            cache[configuration] &= ~2u;
        else if (descriptor->first_filter == 0x2601)
            cache[configuration] |= 2u;
        state_filter055(&cache[configuration],&cache[lod],descriptor);
    }
    cache[configuration] = (cache[configuration] & ~0x30u) | (format == 0x675a ? 0x20u : 0u);
    if (unit != 0) {
        cache[index] = color;
        cache[index+1u] = state_dimensions055(cache[index+1u],descriptor);
    }
    cache[index+4u] = (cache[index+4u] & 0xc0000000u) | (address_convert_entry055(descriptor->target_address) >> 3);
    cache[0] |= 1u << unit;
    if (unit != 0)
        cache[index+5u] = (cache[index+5u] & ~15u) | (descriptor->tail & 15u);
    state_write055(unit == 0 ? 0x81u : unit == 1 ? 0x91u : 0x99u,unit == 0 ? 10u : 6u,cache+index);
    if (unit == 0) {
        StateWord055 *output = state_pair055.cursor;
        if ((StateAddress055)output < (StateAddress055)state_pair055.limit) {
            output[0] = cache[14];
            output[1] = 0xf008eu;
            state_pair055.cursor = output+2;
        }
    }
    return 0;
}
