#include "dispatch_types6.h"

static float selected_float6(const StateDispatchSelection6 *selection,StateWord055 offset) {
    StateWord055 bits = state_dispatch_word6(selection,offset);
    return state_dispatch_float6(&bits,0);
}

static void combined6(StateDispatchSelection6 *selection) {
    StateWord055 packed = 0;
    for (StateWord055 component = 0; component < 3; component++) {
        float value = selected_float6(selection,0xde0+component*4)+
                      selected_float6(selection,0xa10+component*4)*selected_float6(selection,0xda0+component*4);
        packed |= state_dispatch_clamped_component6(value)<<((2-component)*10);
    }
    state_dispatch_property6(selection,180,packed,0xffffffffu,15);
}

_Bool state_dispatch_global_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input) {
    if (operation == 0x33 || operation == 0x34) {
        StateWord055 offset = operation == 0x33 ? 0xa10 : 0xde0;
        for (StateWord055 component = 0; component < 4; component++)
            state_dispatch_store6(selection,offset+component*4,state_dispatch_input6(input,component));
        combined6(selection);
        return 1;
    }
    if (operation >= 0x35 && operation <= 0x38) {
        static const StateWord055 identifier[] = {95,94,92,93};
        StateWord055 group = operation-0x35;
        _Bool changed = 0;
        for (StateWord055 component = 0; component < 4; component++) {
            StateWord055 offset = 0xda0+group*16+component*4;
            if (selected_float6(selection,offset) != state_dispatch_float6(input,component))
                changed = 1;
            state_dispatch_store6(selection,offset,state_dispatch_input6(input,component));
        }
        if (changed) {
            for (StateWord055 index = 0; index < 8; index++) {
                StateWord055 values[3];
                for (StateWord055 component = 0; component < 3; component++)
                    values[component] = state_dispatch_word6(selection,0xa24+group*16+index*0x70+component*4);
                StateWord055 packed = state_dispatch_scaled_color6(selection,group,values);
                state_dispatch_property6(selection,identifier[group]+index*11,packed,0xffffffffu,15);
            }
            if (group == 0)
                combined6(selection);
        }
        return 1;
    }
    return 0;
}
