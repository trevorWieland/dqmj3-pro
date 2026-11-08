#include "dispatch_types6.h"

void state_dispatch_property6(StateDispatchSelection6 *selection,StateWord055 identifier,StateWord055 value,
                               StateWord055 mask,unsigned char format) {
    StateWord055 format_offset = 0x426+identifier;
    StateWord055 format_word = state_dispatch_word6(selection,format_offset&~3u);
    state_dispatch_store6(selection,format_offset&~3u,format_word|((StateWord055)format<<((format_offset&3)*8)));
    StateWord055 offset = 0x4e4+identifier*4;
    StateWord055 old = state_dispatch_word6(selection,offset);
    _Bool forced = state_context_byte055(state_apply_context055,12) != 0;
    if (forced || (old&mask) != (value&mask)) {
        StateWord055 merged = (old&~mask)|(value&mask);
        StateWord055 dirty = 0x7d8+(identifier/32)*4;
        state_dispatch_store6(selection,offset,merged);
        state_dispatch_store6(selection,dirty,state_dispatch_word6(selection,dirty)|(1u<<(identifier&31)));
        state_context_store055(state_apply_context055,0,state_context_word055(state_apply_context055,0)|0x80000);
        if (forced)
            state_apply_globals055.selection->values[identifier] = ~merged;
    }
}

static StateWord055 truncated_half6(StateWord055 bits) {
    return state_dispatch_reduced6(bits,10,112,15);
}

StateWord055 state_dispatch_unsigned_float6(float value) {
    if (!(value >= 0.0f))
        return 0;
    if (value >= 4294967296.0f)
        return 0xffffffffu;
    return (StateWord055)value;
}

float state_dispatch_float6(const void *input,StateWord055 index) {
    StateWord055 bits = state_dispatch_input6(input,index);
    float value;
    const unsigned char *source = (const unsigned char *)&bits;
    unsigned char *destination = (unsigned char *)&value;
    for (unsigned byte = 0; byte < 4; byte++)
        destination[byte] = source[byte];
    return value;
}

static StateWord055 color_byte6(const void *input,StateWord055 index) {
    return state_dispatch_unsigned_float6(state_dispatch_float6(input,index)*255.0f+0.5f);
}

static void remember6(StateDispatchSelection6 *selection,StateWord055 offset,const void *input,StateWord055 count) {
    for (StateWord055 index = 0; index < count; index++)
        state_dispatch_store6(selection,offset+index*4,state_dispatch_input6(input,index));
}

StateWord055 state_dispatch_color6(const void *input,StateWord055 count) {
    StateWord055 result = 0;
    for (StateWord055 index = 0; index < count; index++)
        result |= color_byte6(input,index)<<(index*8);
    return result;
}

_Bool state_dispatch_property_component6(StateWord055 location,const void *input,StateWord055 components,
                                         StateWord055 count,StateWord055 transpose,StateWord055 matrix) {
    (void)components;
    (void)transpose;
    (void)matrix;
    if (location == 0xffffffffu || count == 0)
        return 1;
    StateDispatchSelection6 *selection = (StateDispatchSelection6 *)state_apply_globals055.selection->active;
    StateWord055 operation = (location&0x3ffffu)>>2;
    if (state_dispatch_light6(selection,operation,input))
        return 1;
    if (state_dispatch_reduced_property6(selection,operation,input))
        return 1;
    if (state_dispatch_fixed_property6(selection,operation,input))
        return 1;
    if (state_dispatch_enum_property6(selection,operation,input))
        return 1;
    if (state_dispatch_scalar_property6(selection,operation,input))
        return 1;
    if (state_dispatch_global_property6(selection,operation,input))
        return 1;
    if (operation == 2) {
        remember6(selection,0xe48,input,1);
        return 1;
    }
    if (operation == 0x13) {
        StateWord055 packed = truncated_half6(state_dispatch_input6(input,0));
        remember6(selection,0xe10,input,1);
        state_dispatch_property6(selection,44,(packed&255)<<20,0xff00000,12);
        state_dispatch_property6(selection,48,((packed>>8)&255)<<19,0x7f80000,12);
        return 1;
    }
    if (operation >= 0x114 && operation <= 0x119) {
        float input_value = state_dispatch_float6(input,0);
        if (input_value >= 1.0f && input_value < 5.0f) {
            StateWord055 value = (StateWord055)input_value;
            if (value != 3)
                state_dispatch_property6(selection,54+(operation-0x114)*5,(value>>1)<<16,0x30000,4);
        }
        return 1;
    }
    if (operation >= 0x11a && operation <= 0x11f) {
        StateWord055 index = operation-0x11a;
        remember6(selection,0xeac+index*16,input,4);
        state_dispatch_property6(selection,53+index*5,state_dispatch_color6(input,4),0xffffffffu,15);
        return 1;
    }
    if (operation == 0x120 || operation == 0x126 || operation == 0x27) {
        StateWord055 channels = operation == 0x120 ? 4 : 3;
        StateWord055 identifier = operation == 0x120 ? 84 : operation == 0x126 ? 81 : 85;
        StateWord055 backup = operation == 0x120 ? 0xf0c : operation == 0x126 ? 0xe68 : 0xe84;
        if (operation != 0x27)
            remember6(selection,backup,input,channels);
        state_dispatch_property6(selection,identifier,state_dispatch_color6(input,channels),operation == 0x27 ? 0xffffffu : 0xffffffffu,operation == 0x27 ? 7 : 15);
        if (operation == 0x27)
            remember6(selection,backup,input,channels);
        return 1;
    }
    return 0;
}
