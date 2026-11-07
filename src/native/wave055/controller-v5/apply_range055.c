#include "apply_phases055.h"

static float state_range_float055(StateWord055 value) {
    float result;
    unsigned char *bytes = (unsigned char *)&result;
    for (unsigned index = 0; index < 4; index++)
        bytes[index] = (unsigned char)(value >> (index*8));
    return result;
}

static StateWord055 state_range_bits055(float value) {
    const unsigned char *bytes = (const unsigned char *)&value;
    return (StateWord055)bytes[0] | (StateWord055)bytes[1]<<8 |
           (StateWord055)bytes[2]<<16 | (StateWord055)bytes[3]<<24;
}

static StateWord055 state_range_pack055(StateWord055 bits) {
    StateWord055 sign = bits >> 31;
    StateWord055 magnitude = bits & 0x7fffffffu;
    int exponent = magnitude ? (int)((bits >> 23) & 255)-64 : 0;
    if (exponent < 0)
        return sign << 23;
    return ((bits >> 7) & 0xffffu) | (StateWord055)exponent<<16 | sign<<23;
}

static void state_range_value055(StateApplyContext055 *context,StateApplySelection055 *selection,StateWord055 index,StateWord055 value) {
    ((unsigned char *)selection)[0x426+index] |= 15;
    StateWord055 *current = &selection->storage[0x4e4/4+index];
    unsigned forced = state_context_byte055(context,12);
    if (forced || *current != value) {
        *current = value;
        selection->storage[0x7d8/4] |= (StateWord055)1 << index;
        state_context_store055(context,0,state_context_word055(context,0) | 0x80000);
        if (forced)
            state_apply_globals055.selection->values[index] = ~*current;
    }
}

void state_apply_range055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 0x400) || !(state_apply_mask055(mask) & 4))
        return;
    float override = state_range_float055(selection->storage[0xe4c/4]);
    float base;
    float range;
    if (override == 0.0f) {
        base = state_range_float055(state_context_word055(context,0x4c));
        range = base-state_range_float055(state_context_word055(context,0x50));
    } else {
        base = 0.0f;
        range = -override;
    }
    if (state_context_byte055(context,0x54)) {
        float offset = state_range_float055(state_context_word055(context,0x44));
        if (offset != 0.0f) {
            float unit = state_context_word055(context,0x68c) ? 1.0f/16777215.0f : 1.0f/65535.0f;
            float bias = offset*unit;
            base = base+bias;
        }
    }
    StateWord055 packed_range = state_range_pack055(state_range_bits055(range));
    StateWord055 packed_base = base == 0.0f ? 0 : state_range_pack055(state_range_bits055(base));
    state_range_value055(context,selection,23,packed_range);
    state_range_value055(context,selection,24,packed_base);
}
