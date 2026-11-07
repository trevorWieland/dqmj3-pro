#include "apply_phases055.h"

static void state_apply_value_list055(StateApplySelection055 *selection,const StateWord055 *list) {
    StateSelectionCache055 *cache = state_apply_globals055.selection;
    const unsigned char *formats = (const unsigned char *)selection + 0x426;
    for (StateWord055 cursor = 0; list[cursor] != 189; cursor++) {
        StateWord055 index = list[cursor];
        StateWord055 bit = (StateWord055)1 << (index & 31);
        StateWord055 *dirty = &selection->storage[0x7d8/4+index/32];
        if (!(*dirty & bit))
            continue;
        unsigned format = formats[index];
        if (format) {
            StateWord055 value = selection->storage[0x4e4/4+index];
            if (value != cache->values[index]) {
                state_apply_pair055(value,state_apply_headers055[index] | format<<16);
                cache->values[index] = selection->storage[0x4e4/4+index];
            }
        }
        index = list[cursor];
        selection->storage[0x7d8/4+index/32] &= ~((StateWord055)1 << (index & 31));
    }
}

void state_apply_values055(StateApplySelection055 *selection,StateWord055 requests) {
    if ((requests & 0x20) && (selection->storage[0x624/4] & 7) == 7) {
        StateWord055 value = selection->storage[0x630/4];
        if (((const unsigned char *)selection)[0xe74]) {
            state_apply_globals055.selection->values[83] = value;
            selection->storage[0x7e0/4] &= ~0x80000u;
        } else {
            state_apply_globals055.selection->values[83] = ~value;
            selection->storage[0x7e0/4] |= 0x80000u;
        }
    }
    if (requests & 0x10) {
        state_apply_value_list055(selection,state_apply_globals055.list_primary);
        state_apply_value_list055(selection,state_apply_globals055.list_auxiliary);
    }
    if (requests & 2)
        state_apply_value_list055(selection,state_apply_globals055.list_values);
    if (requests & 0x20)
        state_apply_value_list055(selection,state_apply_globals055.list_remaining);
}
