#include "apply_quantize055.h"

void state_apply_texture_components055(StateApplyContext055 *,const StateApplySelection055 *,StateWord055 *,StateWord055 *);

static StateWord055 state_apply_fog_table055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask) {
    if (!(selection->storage[0x624/4] & 7) || !(state_apply_mask055(mask) & 0x4010))
        return 0;
    StateWord055 index = selection->storage[0xe64/4];
    StateWord055 identity = state_context_word055(context,0x74+index*4);
    StateResource055 *resource = state_resource_lookup055(index);
    StateWord055 pending = state_context_word055(context,0x204);
    if (state_context_word055(context,0x180) == identity) {
        if (pending) {
            StateWord055 first = state_context_word055(context,0x288);
            state_apply_pair055(first,0xf00e6);
            state_write_fixed055(0xe8,pending,resource->storage_512_a+first);
            state_context_store055(context,0x204,0);
        }
        return 0;
    }
    if (pending)
        state_context_store055(context,0x204,0);
    state_context_store055(context,0x180,identity);
    state_table_pack_pair055(resource,&resource->storage_512_a,2,1);
    state_apply_pair055(0,0xf00e6);
    state_write_fixed055(0xe8,128,resource->storage_512_a);
    return 1;
}

static void state_apply_small_components055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 uploaded,StateWord055 *scratch) {
    if ((selection->storage[0x624/4] & 7) != 7 || !(state_apply_mask055(mask) & 0x2004000))
        return;
    StateWord055 changed = 0;
    for (StateWord055 component = 0; component < 3; component++)
        if (state_context_word055(context,0x74+selection->storage[0xe78/4+component]*4) != state_context_word055(context,0x184+component*4))
            changed = 1;
    if (!changed)
        return;
    for (StateWord055 index = 2; index < 18; index++)
        scratch[index] = 0;
    for (StateWord055 component = 0; component < 3; component++) {
        StateResource055 *resource = state_resource_lookup055(selection->storage[0xe78/4+component]);
        state_table_pack_components055(resource);
        for (StateWord055 index = 0; index < 8; index++) {
            scratch[index+2] |= resource->storage_64[index+8]<<(component*8);
            scratch[index+10] |= resource->storage_64[index]<<(component*8);
        }
    }
    if (!uploaded)
        state_reserve055(0xc0,45);
    state_apply_pair055(0,0xf0123);
    state_write_fixed055(0x124,16,scratch+2);
    state_apply_pair055(0,0x100);
    for (StateWord055 component = 0; component < 3; component++)
        state_context_store055(context,0x184+component*4,state_context_word055(context,0x74+selection->storage[0xe78/4+component]*4));
}

void state_apply_remaining_tables055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests,StateWord055 uploaded,StateWord055 *scratch) {
    if (!(requests & 64))
        return;
    uploaded |= state_apply_texture_tables055(context,selection,mask);
    if (selection->storage[0xe0c/4] && (state_apply_mask055(mask) & 0x4020))
        state_apply_texture_components055(context,selection,scratch,&uploaded);
    uploaded |= state_apply_fog_table055(context,selection,mask);
    state_apply_small_components055(context,selection,mask,uploaded,scratch);
}
