#include "dispatch_types6.h"

void state_dispatch_uniform6(StateWord055 location,const void *input,StateWord055 components,
                             StateWord055 count,StateWord055 transpose,StateWord055 matrix) {
    if (location == 0xffffffffu || count == 0)
        return;
    StateDispatchSelection6 *selection = (StateDispatchSelection6 *)state_apply_globals055.selection->active;
    StateWord055 packing = state_dispatch_metadata6(selection)[(location&0x3ffffu)>>7].packing;
    StateWord055 rows = matrix ? ((packing>>13)&3)+1 : 1;
    StateWord055 geometry = (packing>>10)&1;
    StateWord055 *output = state_dispatch_uniform_words6(selection,geometry);
    StateWord055 first = rows*(location&127)+(packing>>24);
    StateWord055 component = 3-((packing>>11)&3);
    StateWord055 dirty = geometry ? 0x348 : 0x1b4;
    StateApplyContext055 *context = state_apply_context055;
    state_context_store055(context,0,state_context_word055(context,0)|0x10000);
    StateWord055 span = rows*count;
    if (state_signed_word055(span) > 0) {
        for (StateWord055 index = 0; index < span; index++) {
            StateWord055 vector = first+index;
            StateWord055 offset = dirty+(vector/32)*4;
            state_dispatch_store6(selection,offset,state_dispatch_word6(selection,offset)|(1u<<(vector&31)));
        }
    }
    if (state_signed_word055(count) < 1 || state_signed_word055(components) < 1)
        return;
    for (StateWord055 element = 0; element < count; element++) {
        if (!matrix) {
            for (StateWord055 column = 0; column < components; column++)
                output[(first+element)*4+component-column] = state_dispatch_input6(input,element*components+column);
        } else {
            for (StateWord055 row = 0; row < components; row++) {
                for (StateWord055 column = 0; column < components; column++) {
                    StateWord055 destination_row = transpose ? column : row;
                    StateWord055 destination_column = transpose ? row : column;
                    StateWord055 destination = (first+element*rows+destination_row)*4+component-destination_column;
                    output[destination] = state_dispatch_input6(input,(element*components+row)*components+column);
                }
            }
        }
    }
}
