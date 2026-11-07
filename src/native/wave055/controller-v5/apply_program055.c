#include "apply_phases055.h"

void state_apply_scissor055(StateApplyContext055 *context,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 0x1000) || !(state_apply_mask055(mask) & 0x200))
        return;
    StateWord055 left = 0;
    StateWord055 top = 0;
    StateWord055 right;
    StateWord055 bottom;
    StateWord055 mode = 0;
    StateWord055 width = state_context_word055(context,0x698);
    StateWord055 height = state_context_word055(context,0x69c);
    if (!state_context_byte055(context,0x648)) {
        right = width-1;
        bottom = height-1;
    } else {
        left = state_context_word055(context,0x5e4);
        top = state_context_word055(context,0x5e8);
        right = left+state_context_word055(context,0x5ec)-1;
        bottom = top+state_context_word055(context,0x5f0)-1;
        if (state_signed_word055(left) >= state_signed_word055(width))
            left = width-1;
        else if (state_signed_word055(left) < 0)
            left = 0;
        if (state_signed_word055(top) >= state_signed_word055(height))
            top = height-1;
        else if (state_signed_word055(top) < 0)
            top = 0;
        if (state_signed_word055(right) > state_signed_word055(width))
            right = width-1;
        else if (state_signed_word055(right) < 0)
            right = 0;
        if (state_signed_word055(bottom) > state_signed_word055(height))
            bottom = height-1;
        else if (state_signed_word055(bottom) < 0)
            bottom = 0;
        mode = 3;
    }
    state_apply_pair055(mode,0xf0065);
    state_apply_pair055(left | top<<16,0xf0066);
    state_apply_pair055(right | bottom<<16,0xf0067);
}

void state_apply_stage055(StateApplyContext055 *context,const StateApplySelection055 *selection,StateWord055 requests) {
    StateWord055 mode = state_selection_mode055(selection) != 0;
    if (!(requests & 4) || (mode == state_apply_globals055.stage_mode && !(state_context_word055(context,4) & 4)))
        return;
    state_reserve055(0x251,10);
    state_reserve055(0x200,30);
    state_apply_pair055(mode ? 2 : 0,0x10229);
    state_reserve055(0x200,30);
    state_apply_globals055.stage_mode = mode;
    state_apply_pair055(mode ? 1 : 0,0x10244);
}

void state_apply_program055(const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if ((requests & 1) && (state_apply_mask055(mask) & 0x100000)) {
        const StateShaderStreams055 *shader = state_selection_shader055(selection);
        if (state_selection_mode055(selection)) {
            state_apply_pair055(0,0xf029b);
            state_write_fixed055(0x29c,shader->program_count,shader->program_words);
            state_apply_pair055(1,0xf028f);
            state_apply_pair055(0,0xf02a5);
            state_write_fixed055(0x2a6,shader->operand_count,shader->operand_words);
        } else if (shader->program_count > 512) {
            state_apply_pair055(512,0xf029b);
            state_write_fixed055(0x29c,shader->program_count-512,shader->program_words+512);
            state_apply_pair055(1,0xf028f);
        }
        state_apply_pair055(0,0xf02cb);
        StateWord055 count = shader->program_count;
        if (count > 512)
            count = 512;
        state_write_fixed055(0x2cc,count,shader->program_words);
        state_apply_pair055(1,0xf02bf);
        state_apply_pair055(0,0xf02d5);
        state_write_fixed055(0x2d6,shader->operand_count,shader->operand_words);
    }
    if (requests & 4) {
        if (state_selection_mode055(selection) && (state_apply_mask055(mask) & 0x800000)) {
            for (StateWord055 index = 1; index <= 8; index++)
                state_apply_globals055.selection->values[index] = ~selection->storage[0x4e4/4+index];
        }
        if (state_apply_mask055(mask) & 0x1000000) {
            for (StateWord055 index = 9; index <= 16; index++)
                state_apply_globals055.selection->values[index] = ~selection->storage[0x4e4/4+index];
        }
    }
}

void state_apply_constants055(const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests) {
    if (!(requests & 8) || !(state_apply_mask055(mask) & 0x600000))
        return;
    if (state_selection_mode055(selection) && (state_apply_mask055(mask) & 0x400000)) {
        const StateShaderRecord055 *record = &state_selection_shader055(selection)->records[state_selection_record055(selection,1)];
        for (StateWord055 index = 0; index < record->constant_count; index++)
            state_write055(0x290,4,record->constants+index*4);
    }
    if (state_apply_mask055(mask) & 0x200000) {
        const StateShaderRecord055 *record = &state_selection_shader055(selection)->records[state_selection_record055(selection,0)];
        for (StateWord055 index = 0; index < record->constant_count; index++)
            state_write055(0x2c0,4,record->constants+index*4);
    }
}
