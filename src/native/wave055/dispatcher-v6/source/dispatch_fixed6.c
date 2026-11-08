#include "dispatch_types6.h"

static StateWord055 signed_fixed6(StateWord055 bits,float bias,float scale,float span,float maximum,float center) {
    if (!(bits&0x7fffffffu) || (bits&0x7f800000u)==0x7f800000u)
        return 0;
    float value = (state_dispatch_float6(&bits,0)+bias)*scale;
    if (value < 0.0f)
        value = 0.0f;
    else if (value >= span)
        value = maximum;
    return state_dispatch_unsigned_float6(value >= center ? value-center : value+center);
}

_Bool state_dispatch_fixed_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    if (operation == 0x15 || operation == 0x16) {
        StateWord055 first = state_dispatch_reduced6(state_dispatch_input6(input,0),10,112,15);
        StateWord055 second = state_dispatch_reduced6(state_dispatch_input6(input,1),10,112,15);
        StateWord055 third = signed_fixed6(state_dispatch_input6(input,2),8.0f,4096.0f,65536.0f,65535.0f,32768.0f);
        state_dispatch_property6(selection,operation == 0x15 ? 45 : 46,third|(second<<16),0xffffffffu,15);
        state_dispatch_property6(selection,47,operation == 0x15 ? first : first<<16,operation == 0x15 ? 0xffff : 0xffff0000u,operation == 0x15 ? 3 : 12);
        for (StateWord055 component = 0; component < 3; component++)
            state_dispatch_store6(selection,(operation == 0x15 ? 0xe14 : 0xe20)+component*4,state_dispatch_input6(input,component));
        return 1;
    }
    if (operation >= 0x69 && operation <= 0x70) {
        StateWord055 index = operation-0x69;
        StateWord055 packed[3];
        for (StateWord055 component = 0; component < 3; component++) {
            StateWord055 bits = state_dispatch_input6(input,component);
            state_dispatch_store6(selection,0xa74+index*0x70+component*4,bits);
            packed[component] = signed_fixed6(bits^0x80000000u,2.0f,2048.0f,8192.0f,8191.0f,4096.0f);
        }
        state_dispatch_property6(selection,98+index*11,packed[0]|(packed[1]<<16),0xffffffffu,15);
        state_dispatch_property6(selection,99+index*11,packed[2],0xffffffffu,15);
        return 1;
    }
    return 0;
}
