#ifndef DQMJ3_APPLY_PHASES055_H
#define DQMJ3_APPLY_PHASES055_H
#include "apply_bindings055.h"
#include "helpers055.h"

void state_apply_scissor055(StateApplyContext055 *context,const StateWord055 *mask,StateWord055 requests);
void state_apply_stage055(StateApplyContext055 *context,const StateApplySelection055 *selection,StateWord055 requests);
void state_apply_program055(const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests);
void state_apply_constants055(const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests);

void state_apply_invalidate055(StateApplyContext055 *context,StateApplySelection055 *selection,StateWord055 requests);
void state_apply_uniforms055(StateApplySelection055 *selection,StateWord055 requests);
void state_apply_values055(StateApplySelection055 *selection,StateWord055 requests);

void state_apply_range055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests);

void state_apply_footer055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests);

#endif
