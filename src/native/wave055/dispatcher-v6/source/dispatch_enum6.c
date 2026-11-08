#include "dispatch_types6.h"

_Bool state_dispatch_enum_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    if (operation >= 0x10e && operation <= 0x113) {
        float value = state_dispatch_float6(input,0);
        if (value >= 1.0f && value < 5.0f) {
            StateWord055 integer = (StateWord055)value;
            if (integer != 3)
                state_dispatch_property6(selection,54+(operation-0x10e)*5,integer>>1,3,1);
        }
        return 1;
    }
    if (operation >= 0xcf && operation <= 0xd5) {
        static const float lower[] = {0.25f,0.5f,1.0f,2.0f,4.0f,8.0f};
        static const StateWord055 code[] = {6,7,0,1,2,3};
        float value = state_dispatch_float6(input,0);
        for (StateWord055 index = 0; index < 6; index++) {
            if (value >= lower[index] && value < lower[index]+0.25f) {
                StateWord055 shift = (operation-0xcf)*4;
                state_dispatch_property6(selection,187,code[index]<<shift,15u<<shift,(unsigned char)(1u<<(shift/8)));
                break;
            }
        }
        return 1;
    }
    return 0;
}
