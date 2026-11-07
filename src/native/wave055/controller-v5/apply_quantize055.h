#ifndef DQMJ3_TABLE_QUANTIZE055_H
#define DQMJ3_TABLE_QUANTIZE055_H
#include "apply_tables055.h"

StateWord055 state_table_truncate055(float value);
StateWord055 state_table_positive055(float value,float scale,StateWord055 maximum);
StateWord055 state_table_signed055(float value,float bias,float scale,StateWord055 center,StateWord055 maximum);
void state_table_pack_pair055(StateResource055 *resource,StateWord055 **storage,StateWord055 flag,_Bool fog);
void state_table_pack_bytes055(StateResource055 *resource);
void state_table_pack_components055(StateResource055 *resource);
StateWord055 state_apply_texture_tables055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask);
void state_apply_remaining_tables055(StateApplyContext055 *context,const StateApplySelection055 *selection,const StateWord055 *mask,StateWord055 requests,StateWord055 uploaded,StateWord055 *scratch);
#endif
