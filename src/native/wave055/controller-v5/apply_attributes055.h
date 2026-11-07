#ifndef DQMJ3_APPLY_ATTRIBUTES055_H
#define DQMJ3_APPLY_ATTRIBUTES055_H
#include "apply_phases055.h"

typedef struct StateAttributePlan055 {
    StateWord055 buffered[16];
    StateWord055 constant[16];
    StateWord055 buffered_count;
    StateWord055 constant_count;
    StateWord055 maximum;
} StateAttributePlan055;

StateWord055 state_attribute_component055(const StateApplyContext055 *context,StateWord055 attribute);
StateWord055 state_attribute_width055(const StateApplyContext055 *context,StateWord055 attribute);
StateWord055 state_attribute_format055(const StateApplyContext055 *context,StateWord055 attribute);
void state_attribute_descriptors055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateAttributePlan055 *plan);
void state_apply_attributes055(StateApplyContext055 *context,StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests);
#endif
