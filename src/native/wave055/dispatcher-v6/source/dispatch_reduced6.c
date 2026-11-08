#include "dispatch_types6.h"

StateWord055 state_dispatch_reduced6(StateWord055 bits,StateWord055 mantissa,StateWord055 bias,StateWord055 sign_position) {
    StateWord055 magnitude = bits&0x7fffffffu;
    int exponent = magnitude ? (int)(magnitude>>23)-(int)bias : 0;
    StateWord055 sign = (bits>>31)<<sign_position;
    if (exponent < 0)
        return sign;
    return sign | ((bits&0x7fffffu)>>(23-mantissa)) | ((StateWord055)exponent<<mantissa);
}

_Bool state_dispatch_reduced_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    if (operation >= 0x61 && operation <= 0x68) {
        StateWord055 index = operation-0x61;
        for (StateWord055 component = 0; component < 4; component++)
            state_dispatch_store6(selection,0xa64+index*0x70+component*4,state_dispatch_input6(input,component));
        StateWord055 x = state_dispatch_reduced6(state_dispatch_input6(input,0),10,112,15);
        StateWord055 y = state_dispatch_reduced6(state_dispatch_input6(input,1),10,112,15);
        state_dispatch_property6(selection,96+index*11,x|(y<<16),0xffffffffu,15);
        state_dispatch_property6(selection,97+index*11,state_dispatch_reduced6(state_dispatch_input6(input,2),10,112,15),0xffffffffu,15);
        state_dispatch_property6(selection,100+index*11,state_dispatch_float6(input,3)==0.0f,1,1);
        return 1;
    }
    if (operation >= 0xa1 && operation <= 0xb0) {
        _Bool second = operation >= 0xa9;
        StateWord055 index = operation-(second ? 0xa9 : 0xa1);
        StateWord055 bits = state_dispatch_input6(input,0);
        state_dispatch_store6(selection,(second ? 0xa88 : 0xa84)+index*0x70,bits);
        state_dispatch_property6(selection,(second ? 102 : 101)+index*11,state_dispatch_reduced6(bits,12,64,19),0xfffff,7);
        return 1;
    }
    return 0;
}
