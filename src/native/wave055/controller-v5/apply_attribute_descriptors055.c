#include "apply_attributes055.h"

StateWord055 state_attribute_component055(const StateApplyContext055 *context,StateWord055 attribute) {
    return state_context_word055(context,0x45c+attribute*24);
}

StateWord055 state_attribute_width055(const StateApplyContext055 *context,StateWord055 attribute) {
    StateWord055 type = state_context_word055(context,0x460+attribute*24);
    return type == 0x1400 || type == 0x1401 ? 1 : type == 0x1402 ? 2 : type == 0x1406 ? 4 : 0;
}

StateWord055 state_attribute_format055(const StateApplyContext055 *context,StateWord055 attribute) {
    StateWord055 type = state_context_word055(context,0x460+attribute*24);
    StateWord055 code = type == 0x1401 ? 1 : type == 0x1402 ? 2 : type == 0x1406 ? 3 : 0;
    return state_attribute_component055(context,attribute)*4-4 | code;
}

static StateWord055 state_attribute_align055(StateWord055 value,StateWord055 alignment) {
    return (value+alignment-1) & ~(alignment-1);
}

static void state_attribute_nibble055(StateWord055 *low,StateWord055 *high,StateWord055 position,StateWord055 value) {
    if (position < 8)
        *low |= value<<(position*4);
    else
        *high |= value<<((position-8)*4);
}

void state_attribute_descriptors055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateAttributePlan055 *plan) {
    StateWord055 *output = selection->storage+0x94c/4;
    StateWord055 *formats = selection->storage+0x944/4;
    selection->storage[0x93c/4] = 0;
    for (unsigned index = 0; index < 38; index++)
        selection->storage[0x944/4+index] = 0;
    StateWord055 in_group = 0;
    StateWord055 bytes = 0;
    StateWord055 alignment = 1;
    StateWord055 stride = 0;
    StateWord055 buffer_end = 0;
    for (StateWord055 position = 0; position < plan->buffered_count; position++) {
        StateWord055 attribute = plan->buffered[position];
        StateWord055 width = state_attribute_width055(context,attribute);
        StateWord055 components = state_attribute_component055(context,attribute);
        StateWord055 offset = state_context_word055(context,0x6a4+attribute*4)-state_context_word055(context,0x6e4);
        StateWord055 current_stride = state_context_word055(context,0x464+attribute*24);
        state_attribute_nibble055(&formats[0],&formats[1],position,state_attribute_format055(context,attribute));
        if (!current_stride) {
            output[0] = offset;
            output[1] |= position;
            output[2] |= (components*width)<<16 | 0x10000000;
            output += 3;
            selection->storage[0x93c/4]++;
            continue;
        }
        bytes = state_attribute_align055(bytes,width)+components*width;
        if (width > alignment)
            alignment = width;
        if (!in_group) {
            output[0] = offset;
            stride = current_stride;
            buffer_end = current_stride+state_context_word055(context,0x6a4+attribute*4);
        }
        state_attribute_nibble055(&output[1],&output[2],in_group,position);
        in_group++;
        StateWord055 next_offset;
        _Bool finish = position+1 == plan->buffered_count;
        if (!finish) {
            StateWord055 next = plan->buffered[position+1];
            StateWord055 address = state_context_word055(context,0x6a4+attribute*4);
            StateWord055 next_address = state_context_word055(context,0x6a4+next*4);
            finish = next_address <= address || current_stride != state_context_word055(context,0x464+next*24) || buffer_end <= next_address || in_group == 12;
            next_offset = next_address-state_context_word055(context,0x6e4);
        } else {
            next_offset = 0;
        }
        if (finish)
            next_offset = output[0]+stride;
        StateWord055 gap = next_offset-offset-components*width;
        StateWord055 words = gap/4;
        StateWord055 padding = gap/16 + ((words&3) != 0);
        if (12-in_group < padding) {
            state_context_store_byte055(context,0x81c,0);
            break;
        }
        if (words) {
            bytes = state_attribute_align055(bytes,4)+words*4;
            if (words&3) {
                state_attribute_nibble055(&output[1],&output[2],in_group,(words&3)+11);
                in_group++;
                words &= ~3u;
            }
            while (words) {
                state_attribute_nibble055(&output[1],&output[2],in_group,15);
                in_group++;
                words -= 4;
            }
        }
        if (finish) {
            if (state_attribute_align055(bytes,alignment) != stride) {
                state_context_store_byte055(context,0x81c,0);
                break;
            }
            output[2] |= stride<<16 | in_group<<28;
            output += 3;
            selection->storage[0x93c/4]++;
            bytes = 0;
            alignment = 1;
            in_group = 0;
        }
    }
    if (!state_context_byte055(context,0x81c))
        return;
    for (StateWord055 position = 0; position < plan->constant_count; position++)
        selection->storage[0x948/4] |= 0x10000u<<(position+plan->buffered_count);
    if (plan->buffered_count)
        selection->storage[0x948/4] |= (plan->buffered_count+plan->constant_count-1)<<28;
    if (!state_context_byte055(context,0x19) && selection->storage[0x93c/4] == 12)
        state_context_store_byte055(context,0x81c,0);
}
