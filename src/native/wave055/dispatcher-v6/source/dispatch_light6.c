#include "dispatch_types6.h"

StateWord055 state_dispatch_clamped_component6(float value) {
    StateWord055 bits;
    unsigned char *destination = (unsigned char *)&bits;
    const unsigned char *source = (const unsigned char *)&value;
    for (unsigned byte = 0; byte < 4; byte++)
        destination[byte] = source[byte];
    if (bits > 0x3f800000u && bits < 0x80000000u)
        value = 1.0f;
    return state_dispatch_unsigned_float6(value*255.0f+0.5f);
}

StateWord055 state_dispatch_scaled_color6(const StateDispatchSelection6 *selection,StateWord055 group,const void *input) {
    StateWord055 packed = 0;
    for (StateWord055 component = 0; component < 3; component++) {
        float value = state_dispatch_float6(input,component);
        if (group != 3 || (state_dispatch_word6(selection,0x9ec)&255)) {
            StateWord055 scale_bits = state_dispatch_word6(selection,0xda0+group*16+component*4);
            value *= state_dispatch_float6(&scale_bits,0);
        }
        packed |= state_dispatch_clamped_component6(value)<<((2-component)*10);
    }
    return packed;
}

_Bool state_dispatch_light6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    if (operation < 0x41 || operation > 0x60)
        return 0;
    StateWord055 group = (operation-0x41)/8;
    StateWord055 index = (operation-0x41)%8;
    static const StateWord055 identifier[] = {95,94,92,93};
    StateWord055 backup = 0xa24+group*16+index*0x70;
    for (StateWord055 component = 0; component < 4; component++)
        state_dispatch_store6(selection,backup+component*4,state_dispatch_input6(input,component));
    state_dispatch_property6(selection,identifier[group]+index*11,state_dispatch_scaled_color6(selection,group,input),0xffffffffu,15);
    return 1;
}
