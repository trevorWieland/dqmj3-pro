#include "apply_attributes055.h"

static StateWord055 state_attribute_address055(const StateApplyContext055 *context,StateWord055 attribute) {
    return state_context_word055(context,0x6a4+attribute*4);
}

static void state_attribute_plan055(StateApplyContext055 *context,const StateApplySelection055 *selection,StateAttributePlan055 *plan) {
    plan->buffered_count = 0;
    plan->constant_count = 0;
    plan->maximum = 0;
    state_context_store_byte055(context,0x81c,1);
    for (unsigned cursor = 16; cursor != 0; cursor--) {
        StateWord055 attribute = cursor-1;
        if (selection->storage[(0x358+attribute*12)/4] == 0xffffffffu)
            continue;
        if (!state_context_byte055(context,0x46d+attribute*24)) {
            plan->constant[plan->constant_count++] = attribute;
            continue;
        }
        StateWord055 address = state_attribute_address055(context,attribute);
        if (!state_attribute_source055(context,attribute))
            state_context_store_byte055(context,0x81c,0);
        else if (address > plan->maximum)
            plan->maximum = address;
        StateWord055 position = 0;
        while (position < plan->buffered_count && state_signed_word055(state_attribute_address055(context,plan->buffered[position])) < state_signed_word055(address))
            position++;
        for (StateWord055 index = plan->buffered_count; index > position; index--)
            plan->buffered[index] = plan->buffered[index-1];
        plan->buffered[position] = attribute;
        plan->buffered_count++;
    }
    if (state_context_byte055(context,0x76c) || plan->buffered_count+plan->constant_count > 12 || !plan->buffered_count)
        state_context_store_byte055(context,0x81c,0);
    if (!plan->buffered_count)
        return;
    StateWord055 base = state_attribute_address055(context,plan->buffered[0]) & ~15u;
    state_context_store055(context,0x6e4,base);
    if (state_context_byte055(context,0x81c)) {
        if (!state_context_byte055(context,0x19)) {
            StateWord055 index_address = state_context_word055(context,0x6a0);
            if (index_address < base)
                base = index_address;
            if (plan->maximum < index_address)
                plan->maximum = index_address;
        }
        if (plan->maximum-base > 0x0fffffffu)
            state_context_store_byte055(context,0x81c,0);
    }
}

static _Bool state_attribute_cache_equal055(const StateApplyContext055 *context,const StateApplySelection055 *selection,const StateAttributePlan055 *plan) {
    if (selection->storage[0x8f4/4] != plan->buffered_count || selection->storage[0x938/4] != plan->constant_count || (state_context_word055(context,4)&0x200))
        return 0;
    for (StateWord055 position = 0; position < plan->buffered_count; position++) {
        StateWord055 attribute = plan->buffered[position];
        if (state_selection_cached_attribute055(selection,position) != attribute)
            return 0;
        StateWord055 delta = state_attribute_address055(context,attribute)-state_attribute_address055(context,plan->buffered[0]);
        if (delta != selection->storage[0x874/4+position]-selection->storage[0x874/4] || state_context_word055(context,0x464+attribute*24) != selection->storage[0x8b4/4+position])
            return 0;
        StateWord055 formats = selection->storage[(position < 8 ? 0x944 : 0x948)/4];
        if ((state_attribute_format055(context,attribute)&255) != ((formats>>((position&7)*4))&15))
            return 0;
    }
    for (StateWord055 position = 0; position < plan->constant_count; position++)
        if (selection->storage[0x8f8/4+position] != plan->constant[position])
            return 0;
    return 1;
}

static void state_attribute_publish055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateAttributePlan055 *plan) {
    state_write055(0x200,39,selection->storage+0x940/4);
    state_apply_pair055(selection->storage[0x9dc/4],0xf02bb);
    state_apply_pair055(selection->storage[0x9e0/4],0xf02bc);
    if (state_selection_mode055(selection)) {
        state_apply_pair055(selection->storage[0x9e4/4],0xf028b);
        state_apply_pair055(selection->storage[0x9e8/4],0xf028c);
    }
    state_context_store055(context,0x820,plan->buffered_count);
    state_context_store055(context,0x824,plan->buffered_count+plan->constant_count);
    for (StateWord055 position = 0; position < plan->buffered_count; position++)
        state_context_store055(context,0x828+position*4,state_selection_cached_attribute055(selection,position));
    for (StateWord055 position = 0; position < plan->constant_count; position++)
        state_context_store055(context,0x828+(position+plan->buffered_count)*4,plan->constant[position]);
}

static void state_attribute_reuse055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateAttributePlan055 *plan,_Bool same_selection) {
    StateWord055 old_base = state_context_word055(context,0x6e4);
    StateWord055 base = old_base;
    StateWord055 index_address = state_context_word055(context,0x6a0);
    if (!state_context_byte055(context,0x19) && state_signed_word055(index_address) < state_signed_word055(base))
        base = index_address & ~15u;
    StateWord055 delta = state_attribute_address055(context,plan->buffered[0])-base;
    _Bool changed = old_base != base || ((const unsigned char *)selection)[0x425] || delta != selection->storage[0x94c/4];
    if (changed) {
        for (StateWord055 index = 1; index < selection->storage[0x93c/4]; index++)
            selection->storage[(0x94c+index*12)/4] = selection->storage[(0x94c+index*12)/4]-selection->storage[0x94c/4]+delta;
        selection->storage[0x94c/4] = delta;
        if (old_base == base)
            ((unsigned char *)selection)[0x425] = 0;
    }
    state_context_store055(context,0x6e4,base);
    selection->storage[0x940/4] = base>>3;
    if (changed || !same_selection) {
        if (same_selection)
            state_write055(0x200,selection->storage[0x93c/4]*3+1,selection->storage+0x940/4);
        else
            state_attribute_publish055(context,selection,plan);
    } else {
        state_apply_pair055(base>>3,0xf0200);
    }
}

static StateWord055 state_attribute_signed_base055(StateWord055 value) {
    return value>>3 | (value&0x80000000u ? 0xe0000000u : 0);
}

static void state_attribute_rebuild055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateAttributePlan055 *plan) {
    state_selection_store_attributes055(selection,plan->buffered,plan->buffered_count);
    for (StateWord055 position = 0; position < plan->buffered_count; position++) {
        StateWord055 attribute = plan->buffered[position];
        selection->storage[0x874/4+position] = state_attribute_address055(context,attribute);
        selection->storage[0x8b4/4+position] = state_context_word055(context,0x464+attribute*24);
    }
    for (StateWord055 position = 0; position < plan->constant_count; position++)
        selection->storage[0x8f8/4+position] = plan->constant[position];
    selection->storage[0x8f4/4] = plan->buffered_count;
    selection->storage[0x938/4] = plan->constant_count;
    if (!state_context_word055(context,0x5d8) && !state_context_byte055(context,0x19))
        state_context_store_byte055(context,0x81c,0);
    if (!state_context_byte055(context,0x19)) {
        StateWord055 address = state_context_word055(context,0x6a0);
        StateWord055 base = state_context_word055(context,0x6e4);
        if (state_signed_word055(address) < state_signed_word055(base))
            state_context_store055(context,0x6e4,address & ~15u);
        ((unsigned char *)selection)[0x425] = state_signed_word055(address) < state_signed_word055(base);
    } else {
        ((unsigned char *)selection)[0x425] = 0;
    }
    selection->storage[0x940/4] = state_attribute_signed_base055(state_context_word055(context,0x6e4));
    if (state_context_byte055(context,0x81c))
        state_attribute_descriptors055(context,selection,plan);
    selection->storage[0x9dc/4] = 0;
    selection->storage[0x9e0/4] = 0;
    selection->storage[0x9e4/4] = 0x76543210;
    selection->storage[0x9e8/4] = 0xfedcba98;
    for (StateWord055 position = 0; position < plan->buffered_count+plan->constant_count; position++) {
        StateWord055 attribute = position < plan->buffered_count ? plan->buffered[position] : plan->constant[position-plan->buffered_count];
        StateWord055 offset = position < 8 ? 0x9dc/4 : 0x9e0/4;
        selection->storage[offset] |= (selection->storage[(0x358+attribute*12)/4]&15)<<((position&7)*4);
    }
    state_attribute_publish055(context,selection,plan);
}

void state_apply_attributes055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 0x200) || !(state_apply_mask055(mask) & 0x8042))
        return;
    _Bool same_selection = state_apply_globals055.selection->attribute_active == selection;
    state_apply_globals055.selection->attribute_active = selection;
    StateAttributePlan055 plan;
    state_attribute_plan055(context,selection,&plan);
    if (state_attribute_cache_equal055(context,selection,&plan) && state_context_byte055(context,0x81c))
        state_attribute_reuse055(context,selection,&plan,same_selection);
    else
        state_attribute_rebuild055(context,selection,&plan);
    if (!state_context_byte055(context,0x81c) || !(state_apply_mask055(mask)&0x80c2))
        return;
    StateWord055 count = state_context_word055(context,0x824);
    for (StateWord055 position = state_context_word055(context,0x820); position < count; position++) {
        StateWord055 attribute = state_context_word055(context,0x828+position*4);
        state_apply_pair055(position,0xf0232);
        for (StateWord055 component = 0; component < 3; component++)
            state_apply_pair055(state_context_word055(context,0x398+attribute*12+component*4),0xf0233+component);
    }
}
