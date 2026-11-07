#include "apply_phases055.h"

static void state_apply_invalidate_list055(StateApplySelection055 *selection,const StateWord055 *list) {
    unsigned char *bytes = (unsigned char *)selection;
    for (StateWord055 position = 0; list[position] != 189; position++) {
        StateWord055 index = list[position];
        if (!bytes[0x426+index])
            continue;
        state_apply_globals055.selection->values[index] = ~selection->storage[0x4e4/4+index];
        selection->storage[0x7d8/4+index/32] |= 1u<<(index&31);
    }
}

void state_apply_invalidate055(StateApplyContext055 *context,StateApplySelection055 *selection,StateWord055 requests) {
    StateWord055 invalidate = state_context_word055(context,4) & requests;
    if (invalidate & 16) {
        for (unsigned index = 0; index < 3; index++)
            selection->storage[0x1b4/4+index] = 0xffffffffu;
        state_apply_invalidate_list055(selection,state_apply_globals055.list_auxiliary);
        if (state_selection_mode055(selection)) {
            for (unsigned index = 0; index < 3; index++)
                selection->storage[0x348/4+index] = 0xffffffffu;
            state_apply_invalidate_list055(selection,state_apply_globals055.list_primary);
        }
    }
    if (invalidate & 32)
        state_apply_invalidate_list055(selection,state_apply_globals055.list_remaining);
    if (invalidate & 2)
        state_apply_invalidate_list055(selection,state_apply_globals055.list_values);
}

static void state_apply_uniform_group055(StateApplySelection055 *selection,StateWord055 geometry) {
    StateWord055 dirty_offset = geometry ? 0x348/4 : 0x1b4/4;
    StateWord055 count = selection->storage[(geometry ? 0x344 : 0x1b0)/4];
    StateWord055 map_offset = (geometry ? 0x1c4 : 0x30)/4;
    const StateWord055 *source = state_selection_uniforms055(selection,geometry);
    if (!source)
        return;
    StateWord055 start = 0;
    StateWord055 run = 0;
    StateWord055 mapped = 0;
    for (StateWord055 index = 0; index < count; index++) {
        if (!(selection->storage[dirty_offset+index/32] & (1u<<(index&31))))
            continue;
        StateWord055 current = selection->storage[map_offset+index];
        if (run && current-mapped != run) {
            state_apply_pair055(mapped | 0x80000000u,geometry ? 0xf0290 : 0xf02c0);
            state_write_fixed055(geometry ? 0x291 : 0x2c1,run*4,source+start*4);
            run = 0;
        }
        if (!run) {
            start = index;
            mapped = current;
        }
        run++;
    }
    if (run) {
        state_apply_pair055(mapped | 0x80000000u,geometry ? 0xf0290 : 0xf02c0);
        state_write_fixed055(geometry ? 0x291 : 0x2c1,run*4,source+start*4);
    }
}

void state_apply_uniforms055(StateApplySelection055 *selection,StateWord055 requests) {
    if (!(requests & 16))
        return;
    StateWord055 any = 0;
    for (unsigned index = 0; index < 3; index++)
        any |= selection->storage[0x1b4/4+index] | selection->storage[0x348/4+index];
    if (!any)
        return;
    state_apply_uniform_group055(selection,1);
    state_apply_uniform_group055(selection,0);
    for (unsigned index = 0; index < 3; index++) {
        selection->storage[0x1b4/4+index] = 0;
        selection->storage[0x348/4+index] = 0;
    }
}
