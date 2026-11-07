#include "apply_tables055.h"

static StateWord055 state_lighting_cache055(StateApplyContext055 *context,StateWord055 slot,StateWord055 identity,
                                          StateWord055 identity_base,StateWord055 count_base,StateWord055 first_base,
                                          StateWord055 location,StateResource055 *resource) {
    StateWord055 pending = state_context_word055(context,count_base+slot*4);
    if (state_context_word055(context,identity_base+slot*4) == identity) {
        if (pending) {
            StateWord055 first = state_context_word055(context,first_base+slot*4);
            state_apply_pair055(location | first,0xf01c5);
            state_write_fixed055(0x1c8,pending,resource->storage_1024+first);
            state_context_store055(context,count_base+slot*4,0);
        }
        return 0;
    }
    if (pending)
        state_context_store055(context,count_base+slot*4,0);
    state_context_store055(context,identity_base+slot*4,identity);
    state_table_pack12_055(resource);
    state_apply_pair055(location,0xf01c5);
    state_write_fixed055(0x1c8,256,resource->storage_1024);
    return 1;
}

StateWord055 state_apply_lighting_tables055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 0x40) || !(selection->storage[0x590/4] & 1) || !(state_apply_mask055(mask) & 0x4008))
        return 0;
    StateWord055 uploaded = 0;
    for (StateWord055 slot = 0; slot < 6; slot++) {
        if (!((selection->storage[0xa0c/4] >> slot) & 1))
            continue;
        StateWord055 mapped_slot = slot+(slot >= 2);
        if ((selection->storage[0x7c0/4] >> (16+mapped_slot)) & 1)
            continue;
        StateWord055 index = selection->storage[0x9f4/4+slot];
        if (index == 0xffffffffu)
            break;
        StateWord055 identity = state_context_word055(context,0x74+index*4);
        if (!identity)
            break;
        StateResource055 *resource = state_resource_lookup055(index);
        if (!resource)
            break;
        uploaded |= state_lighting_cache055(context,slot,identity,0x10c,0x190,0x214,mapped_slot<<8,resource);
    }
    for (StateWord055 slot = 0; slot < 8; slot++) {
        const unsigned char *bytes = (const unsigned char *)selection;
        if (!bytes[0xa20+slot*112])
            continue;
        if ((selection->storage[0xa0c/4] & 0x40) && !((selection->storage[0x7c0/4] >> (slot+8)) & 1)) {
            StateWord055 index = selection->storage[(0xa80+slot*112)/4];
            StateWord055 identity = state_context_word055(context,0x74+index*4);
            StateResource055 *resource = state_resource_lookup055(index);
            uploaded |= state_lighting_cache055(context,slot,identity,0x124,0x1a8,0x22c,0x800+(slot<<8),resource);
        }
        if ((selection->storage[0x7c0/4] >> (slot+24)) & 1)
            continue;
        StateWord055 index = selection->storage[(0xa8c+slot*112)/4];
        StateWord055 identity = state_context_word055(context,0x74+index*4);
        StateResource055 *resource = state_resource_lookup055(index);
        uploaded |= state_lighting_cache055(context,slot,identity,0x144,0x1c8,0x24c,0x1000+(slot<<8),resource);
    }
    return uploaded;
}
