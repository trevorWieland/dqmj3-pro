#include "apply_controller055.h"

STATE_API055 void state_apply_controller055(const StateWord055 *mask,StateWord055 requests) {
    StateApplyContext055 *context = state_apply_context055;
    state_apply_scissor055(context,mask,requests);
    StateApplySelection055 *selection = state_apply_globals055.selection->active;
    if (!selection)
        return;
    state_apply_stage055(context,selection,requests);
    state_apply_program055(selection,mask,requests);
    state_apply_constants055(selection,mask,requests);
    state_apply_attributes055(context,selection,mask,requests);
    state_apply_invalidate055(context,selection,requests);
    state_apply_uniforms055(selection,requests);
    state_apply_range055(context,selection,mask,requests);
    state_apply_values055(selection,requests);
    StateWord055 scratch[513];
    for (unsigned index = 0; index < 513; index++)
        scratch[index] = 0;
    StateWord055 uploaded = state_apply_lighting_tables055(context,selection,mask,requests);
    state_apply_remaining_tables055(context,selection,mask,requests,uploaded,scratch);
    state_apply_footer055(context,selection,mask,requests);
}

