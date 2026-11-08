#include "dispatch_types6.h"

StateWord055 state_dispatch_bits6(float value) {
    StateWord055 bits;
    const unsigned char *source = (const unsigned char *)&value;
    unsigned char *destination = (unsigned char *)&bits;
    for (unsigned byte = 0; byte < 4; byte++)
        destination[byte] = source[byte];
    return bits;
}

static float selected_float6(const StateDispatchSelection6 *selection,StateWord055 offset) {
    StateWord055 bits = state_dispatch_word6(selection,offset);
    return state_dispatch_float6(&bits,0);
}

static float context_float6(StateWord055 offset) {
    StateWord055 bits = state_context_word055(state_apply_context055,offset);
    return state_dispatch_float6(&bits,0);
}

static StateWord055 positive24_6(const void *input,float scale) {
    StateWord055 bits = state_dispatch_input6(input,0);
    float value = state_dispatch_float6(input,0);
    if (!(value > 0.0f) || (bits&0x7f800000u)==0x7f800000u)
        return 0;
    value *= scale;
    return value < 16777216.0f ? state_dispatch_unsigned_float6(value) : 0xffffffu;
}

_Bool state_dispatch_scalar_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    switch (operation) {
        case 1: case 0x1f: case 0x20: case 0x21: case 0x23:
        case 0x26: case 0x28: case 0x29: case 0x2a: case 0x2c:
            break;
        default:
            return 0;
    }
    StateWord055 bits = state_dispatch_input6(input,0);
    if (operation == 1 || operation == 0x29) {
        if (operation == 1)
            state_dispatch_store6(selection,0xe44,bits);
        state_dispatch_property6(selection,operation == 1 ? 42 : 88,positive24_6(input,operation == 1 ? 16777216.0f : 256.0f),operation == 1 ? 0xfffffeu : 0xffffffu,7);
        if (operation == 0x29)
            state_dispatch_store6(selection,0xea0,bits);
        return 1;
    }
    if (operation == 0x1f || operation == 0x20) {
        state_dispatch_store6(selection,operation == 0x1f ? 0xe40 : 0xe3c,bits);
        StateWord055 negated = state_dispatch_word6(selection,0xe40)^0x80000000u;
        float sum = selected_float6(selection,0xe40)+selected_float6(selection,0xe3c);
        StateWord055 upper = state_dispatch_reduced6(negated,10,112,15);
        StateWord055 lower = state_dispatch_reduced6(state_dispatch_bits6(sum),10,112,15);
        state_dispatch_property6(selection,91,lower|(upper<<16),0xffffffffu,15);
        return 1;
    }
    if (operation == 0x21) {
        float value = state_dispatch_float6(input,0);
        _Bool zero = value == 0.0f;
        state_dispatch_property6(selection,39,zero,0xffffffffu,15);
        float base = zero ? context_float6(0x4c) : 0.0f;
        float range = zero ? base-context_float6(0x50) : -value;
        float bias = context_float6(0x44);
        if (state_context_byte055(state_apply_context055,0x54) && bias != 0.0f) {
            float step = state_context_word055(state_apply_context055,0x68c) ? 0x1.000002p-24f : 0x1.000100p-16f;
            base += bias*step;
        }
        state_dispatch_property6(selection,23,state_dispatch_reduced6(state_dispatch_bits6(range),16,64,23),0xffffffffu,15);
        state_dispatch_property6(selection,24,base == 0.0f ? 0 : state_dispatch_reduced6(state_dispatch_bits6(base),16,64,23),0xffffffffu,15);
        state_dispatch_store6(selection,0xe4c,bits);
        return 1;
    }
    if (operation == 0x23) {
        for (StateWord055 component = 0; component < 4; component++)
            state_dispatch_property6(selection,34+component,state_dispatch_reduced6(state_dispatch_input6(input,component),16,64,23),0xffffffffu,15);
        for (StateWord055 component = 0; component < 4; component++)
            state_dispatch_store6(selection,0xe50+component*4,state_dispatch_input6(input,component));
        return 1;
    }
    if (operation == 0x26) {
        state_dispatch_store6(selection,0xe60,bits);
        StateWord055 value = state_dispatch_unsigned_float6(state_dispatch_float6(input,0)*255.0f+0.5f);
        state_dispatch_property6(selection,90,(value&255)<<8,0xff00,2);
        return 1;
    }
    if (operation == 0x28) {
        state_dispatch_property6(selection,86,state_dispatch_color6(input,3),0xffffffu,7);
        state_dispatch_property6(selection,87,state_dispatch_clamped_component6(state_dispatch_float6(input,3)),255,1);
        for (StateWord055 component = 0; component < 4; component++)
            state_dispatch_store6(selection,0xe90+component*4,state_dispatch_input6(input,component));
        return 1;
    }
    if (operation == 0x2a || operation == 0x2c) {
        StateWord055 value = operation == 0x2a && !(bits&0x7fffffffu) ? 0 : bits;
        state_dispatch_property6(selection,operation == 0x2a ? 83 : 82,state_dispatch_reduced6(value,10,112,15),0xffffffffu,15);
        state_dispatch_store6(selection,operation == 0x2a ? 0xea4 : 0xea8,bits);
        return 1;
    }
    return 0;
}
