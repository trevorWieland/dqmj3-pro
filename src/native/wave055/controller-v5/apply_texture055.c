#include "apply_quantize055.h"

static StateWord055 state_texture_cache055(StateApplyContext055 *context,StateWord055 cache,StateWord055 count,StateWord055 first,StateWord055 index,StateWord055 location,_Bool secondary) {
    StateWord055 identity = state_context_word055(context,0x74+index*4);
    StateResource055 *resource = state_resource_lookup055(index);
    StateWord055 pending = state_context_word055(context,count);
    StateWord055 *storage = secondary ? resource->storage_512_c : resource->storage_512_b;
    if (state_context_word055(context,cache) == identity) {
        if (pending) {
            StateWord055 start = state_context_word055(context,first);
            state_apply_pair055(location | start,0xf00af);
            state_write_fixed055(0xb0,pending,storage+start);
            state_context_store055(context,count,0);
        }
        return 0;
    }
    if (pending)
        state_context_store055(context,count,0);
    state_context_store055(context,cache,identity);
    StateWord055 **destination = secondary ? &resource->storage_512_c : &resource->storage_512_b;
    state_table_pack_pair055(resource,destination,secondary ? 16 : 8,0);
    state_apply_pair055(location,0xf00af);
    state_write_fixed055(0xb0,128,*destination);
    return 1;
}

static void state_texture_merge055(StateResource055 *resource,StateWord055 component,StateWord055 *scratch,StateWord055 first,StateWord055 last) {
    const unsigned char *bytes = (const unsigned char *)resource->storage_512_d;
    for (StateWord055 index = first; index <= last; index++) {
        StateWord055 shift = component*8;
        scratch[index] = (scratch[index] & ~(255u<<shift)) | (StateWord055)bytes[index]<<shift;
    }
}

static void state_texture_publish055(StateWord055 *scratch,StateWord055 first,StateWord055 last) {
    if (first < 256 && last >= 256) {
        state_apply_pair055(first | 0x400,0xf00af);
        state_write_fixed055(0xb0,256-first,scratch+first);
        state_apply_pair055(0x500,0xf00af);
        state_write_fixed055(0xb0,last-255,scratch+256);
    } else {
        state_apply_pair055(first < 256 ? first | 0x400 : (first-256) | 0x500,0xf00af);
        state_write_fixed055(0xb0,last-first+1,scratch+first);
    }
}

StateWord055 state_apply_texture_tables055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask) {
    if (!selection->storage[0xe0c/4] || !(state_apply_mask055(mask) & 0x4020))
        return 0;
    StateWord055 uploaded = 0;
    for (StateWord055 slot = 0; slot < 2; slot++) {
        if (slot == 1 && !(selection->storage[0x594/4] & 0x4000))
            break;
        uploaded |= state_texture_cache055(context,0x164+slot*4,0x1e8+slot*4,0x26c+slot*4,selection->storage[0xdf0/4+slot],(slot+2)<<8,0);
    }
    if (selection->storage[0x594/4] & 0x8000)
        uploaded |= state_texture_cache055(context,0x16c,0x1f0,0x274,selection->storage[0xdf8/4],0,1);
    return uploaded;
}

void state_apply_texture_components055(StateApplyContext055 *context,const StateApplySelection055 *selection,StateWord055 *scratch,StateWord055 *uploaded) {
    StateWord055 changed = 0;
    for (StateWord055 component = 0; component < 4; component++)
        if (state_context_word055(context,0x74+selection->storage[0xdfc/4+component]*4) != state_context_word055(context,0x170+component*4))
            changed = 1;
    StateWord055 first = 512;
    StateWord055 last = 0;
    if (!changed) {
        StateWord055 pending = 0;
        for (StateWord055 component = 0; component < 4; component++) {
            StateWord055 count = state_context_word055(context,0x1f4+component*4);
            if (!count)
                continue;
            StateWord055 start = state_context_word055(context,0x278+component*4);
            state_context_store055(context,0x1f4+component*4,0);
            if (start < first)
                first = start;
            if (start+count-1 > last)
                last = start+count-1;
            pending = 1;
        }
        if (!pending)
            return;
    } else {
        first = 0;
        last = 511;
        for (StateWord055 component = 0; component < 4; component++) {
            StateResource055 *resource = state_resource_lookup055(selection->storage[0xdfc/4+component]);
            if (state_context_word055(context,0x1f4+component*4))
                state_context_store055(context,0x1f4+component*4,0);
            state_table_pack_bytes055(resource);
            state_texture_merge055(resource,component,scratch,first,last);
        }
    }
    if (!changed)
        for (StateWord055 component = 0; component < 4; component++)
            state_texture_merge055(state_resource_lookup055(selection->storage[0xdfc/4+component]),component,scratch,first,last);
    state_texture_publish055(scratch,first,last);
    if (changed) {
        *uploaded = 1;
        for (StateWord055 component = 0; component < 4; component++)
            state_context_store055(context,0x170+component*4,state_context_word055(context,0x74+selection->storage[0xdfc/4+component]*4));
    }
}
