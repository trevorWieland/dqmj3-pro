#ifndef DQMJ3_DISPATCH_TYPES6_H
#define DQMJ3_DISPATCH_TYPES6_H
#include "../../controller-v5/source/apply_bindings055.h"

typedef struct StateUniformInfo6 {
    StateWord055 opaque[2];
    StateWord055 packing;
} StateUniformInfo6;

typedef struct StateDispatchSelection6 {
    StateApplySelection055 common;
    StateWord055 scalar_tail[(0xf1c-0xe84)/4];
#if __SIZEOF_POINTER__ > 4
    const StateUniformInfo6 *native_metadata;
    StateWord055 *mutable_uniforms[2];
#endif
} StateDispatchSelection6;

StateWord055 state_dispatch_word6(const StateDispatchSelection6 *selection,StateWord055 offset);
void state_dispatch_store6(StateDispatchSelection6 *selection,StateWord055 offset,StateWord055 value);
const StateUniformInfo6 *state_dispatch_metadata6(const StateDispatchSelection6 *selection);
StateWord055 *state_dispatch_uniform_words6(StateDispatchSelection6 *selection,StateWord055 geometry);
StateWord055 state_dispatch_input6(const void *input,StateWord055 index);
float state_dispatch_float6(const void *input,StateWord055 index);
StateWord055 state_dispatch_unsigned_float6(float value);
_Bool state_dispatch_light6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
StateWord055 state_dispatch_reduced6(StateWord055 bits,StateWord055 mantissa,StateWord055 bias,StateWord055 sign_position);
_Bool state_dispatch_reduced_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
_Bool state_dispatch_fixed_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
_Bool state_dispatch_enum_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
_Bool state_dispatch_scalar_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
StateWord055 state_dispatch_color6(const void *input,StateWord055 count);
StateWord055 state_dispatch_clamped_component6(float value);
StateWord055 state_dispatch_bits6(float value);
StateWord055 state_dispatch_scaled_color6(const StateDispatchSelection6 *selection,StateWord055 group,const void *input);
_Bool state_dispatch_global_property6(StateDispatchSelection6 *selection,StateWord055 operation,const void *input);
void state_dispatch_property6(StateDispatchSelection6 *selection,StateWord055 identifier,StateWord055 value,
                               StateWord055 mask,unsigned char format);
STATE_API055 _Bool state_dispatch_property_component6(StateWord055 location,const void *input,StateWord055 components,
                                                      StateWord055 count,StateWord055 transpose,StateWord055 matrix);
STATE_API055 void state_dispatch_uniform6(StateWord055 location,const void *input,StateWord055 components,
                                         StateWord055 count,StateWord055 transpose,StateWord055 matrix);
STATE_API055 void state_dispatch6(StateWord055 location,const void *input,StateWord055 components,
                                 StateWord055 count,StateWord055 transpose,StateWord055 matrix);

_Static_assert(sizeof(StateUniformInfo6)==12,"measured descriptor stride");
_Static_assert(sizeof(float)==4 && __FLT_RADIX__==2 && __FLT_MANT_DIG__==24,"binary32 arithmetic profile");
_Static_assert(__builtin_offsetof(StateUniformInfo6,packing)==8,"measured packing word");
_Static_assert(__builtin_offsetof(StateDispatchSelection6,common)==0,"genuine frozen first member");
_Static_assert(__builtin_offsetof(StateDispatchSelection6,scalar_tail)==(__SIZEOF_POINTER__==4?0xe84:0xfb0),"separate scalar tail");
_Static_assert(sizeof(StateDispatchSelection6)==(__SIZEOF_POINTER__==4?0xf1c:0x1060),"bounded successor storage");
#endif
