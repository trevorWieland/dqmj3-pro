#include "helpers055.h"

StateIndex055 *state_index055;

StateAddress055 state_reserve055(StateWord055 base,StateWord055 count) {
    StateWord055 *output = state_pair055.cursor;
    StateAddress055 boundary = (StateAddress055)output + ((StateAddress055)count+2u)*4u;
    if ((StateAddress055)state_pair055.limit <= boundary) {
        state_pair055.cursor = state_pair055.limit;
        return base;
    }
    if (!count)
        return base;
    output[0] = 0;
    output[1] = base | ((count-1u) << 20);
    output += 2u+(count & ~1u);
    state_pair055.cursor = output;
    return (StateAddress055)output;
}

StateAddress055 state_write_fixed055(StateWord055 base,StateWord055 count,const StateWord055 *input) {
    StateWord055 *output = state_pair055.cursor;
    StateWord055 needed = (count & ~1u) + ((count >> 7) << 1) + 2u;
    StateAddress055 boundary = (StateAddress055)output + (StateAddress055)needed*4u;
    if ((StateAddress055)state_pair055.limit <= boundary) {
        state_pair055.cursor = state_pair055.limit;
        return (StateAddress055)state_pair055.limit;
    }
    for (StateWord055 offset = 0; offset < count; offset += 128u) {
        StateWord055 block = count-offset;
        if (block > 128u)
            block = 128u;
        *output++ = input[offset];
        *output++ = base | ((block-1u) << 20) | 0xf0000u;
        for (StateWord055 index = 0; index < (block & ~1u); index++)
            *output++ = input[offset+index+1u];
    }
    state_pair055.cursor = output;
    return (StateAddress055)&state_pair055;
}

StateWord055 state_lookup055(StateWord055 index) {
    if (index >= 32u)
        return 0;
    StateValue055 *value = state_index055->objects[index];
    return value ? value->first : 0;
}
