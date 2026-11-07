#include "apply_phases055.h"

void state_apply_footer055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 0x800))
        return;
    StateWord055 mode = selection->storage[0xe38/4];
    if (!(state_apply_mask055(mask) & 0x100) && mode == state_context_word055(context,0x644))
        return;
    StateWord055 channels = state_context_byte055(context,0x654) |
                            (StateWord055)state_context_byte055(context,0x655)<<1 |
                            (StateWord055)state_context_byte055(context,0x656)<<2 |
                            (StateWord055)state_context_byte055(context,0x657)<<3;
    state_context_store055(context,0x644,mode);
    state_apply_pair055(1,0xf0111);
    state_apply_pair055(1,0xf0110);
    if (mode == 0x6048 || mode == 0x6051) {
        state_apply_pair055(15,0xf0113);
        state_apply_pair055(15,0xf0112);
        state_apply_pair055(mode == 0x6051 ? 3 : 0,0xf0114);
        state_apply_pair055(0,0xf0115);
        return;
    }
    if (mode != 0x6030)
        return;
    unsigned color_write = channels && (state_context_word055(context,0x688) == 1 ||
                           state_context_byte055(context,0x64c) || channels != 15 || state_context_byte055(context,0x64d));
    unsigned color_read = channels != 0;
    unsigned first_enabled = state_context_byte055(context,0x64b) != 0;
    unsigned first_write = first_enabled && state_context_byte055(context,0x658);
    unsigned second_enabled = state_context_byte055(context,0x64a) != 0;
    unsigned second_write = second_enabled && state_context_word055(context,0x65c);
    state_apply_pair055(color_write ? 15 : 0,0xf0112);
    state_apply_pair055(color_read ? 15 : 0,0xf0113);
    state_apply_pair055((first_enabled && (first_write || color_read) ? 2u : 0u) |
                       (second_enabled && (second_write || color_read) ? 1u : 0u),0xf0114);
    state_apply_pair055((first_write ? 2u : 0u) | (second_write ? 1u : 0u),0xf0115);
}
