#include "state055.h"

STATE_API055 StatePair055 state_pair055;

STATE_API055 StateWord055 state_write055(StateWord055 base,StateWord055 count,const StateWord055 *input)
{
    StateWord055 *output = state_pair055.cursor;
    StateWord055 needed = (count & ~1u) + ((count >> 7) << 1) + 2u;
    StateAddress055 boundary = (StateAddress055)output + (StateAddress055)needed * 4u;
    if ((StateAddress055)state_pair055.limit <= boundary) {
        state_pair055.cursor = state_pair055.limit;
        return base;
    }
    for (StateWord055 offset = 0; offset < count; offset += 128u) {
        StateWord055 block = count-offset;
        if (block > 128u) block = 128u;
        StateWord055 first = input[offset];
        *output++ = first;
        *output++ = (base+offset) | ((block-1u) << 20) | 0x800f0000u;
        for (StateWord055 index = 0; index < (block >> 1) * 2u; index++)
            *output++ = input[offset+index+1u];
    }
    state_pair055.cursor = output;
    return base;
}
