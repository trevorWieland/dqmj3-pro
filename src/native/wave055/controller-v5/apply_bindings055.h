#ifndef DQMJ3_APPLY_BINDINGS055_H
#define DQMJ3_APPLY_BINDINGS055_H
#include "apply_types055.h"

STATE_API055 void state_apply_reset_defaults055(void);
StateWord055 state_context_word055(const StateApplyContext055 *context,StateWord055 offset);
void state_context_store055(StateApplyContext055 *context,StateWord055 offset,StateWord055 value);
unsigned char state_context_byte055(const StateApplyContext055 *context,StateWord055 offset);
void state_context_store_byte055(StateApplyContext055 *context,StateWord055 offset,unsigned char value);
const StateWord055 *state_attribute_source055(const StateApplyContext055 *context,StateWord055 index);
const StateShaderStreams055 *state_selection_shader055(const StateApplySelection055 *selection);
StateWord055 state_selection_cached_attribute055(const StateApplySelection055 *selection,StateWord055 position);
void state_selection_store_attributes055(StateApplySelection055 *selection,const StateWord055 *attributes,StateWord055 count);
const StateWord055 *state_selection_cached_constants055(const StateApplySelection055 *selection);
const StateWord055 *state_selection_uniforms055(const StateApplySelection055 *selection,StateWord055 geometry);
StateWord055 state_apply_mask055(const StateWord055 *mask);
StateWord055 state_selection_record055(const StateApplySelection055 *selection,StateWord055 geometry);
unsigned char state_selection_mode055(const StateApplySelection055 *selection);
int state_signed_word055(StateWord055 value);
void state_apply_pair055(StateWord055 value,StateWord055 header);

#endif
