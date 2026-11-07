#include "fixture.h"

#define OFF(type,member) __builtin_offsetof(type,member)
#if __SIZEOF_POINTER__ == 4
#define STATE(name) OFF(SqSharedState040,target.name)
#define META_TYPE OFF(SqSharedState040,target.meta_map.type)
#define META_VALUE OFF(SqSharedState040,target.meta_map.value)
#define CTOR_NAME OFF(SqSharedState040,target.constructor_name)
#else
#define STATE(name) OFF(SqSharedState040,fields.name)
#define META_TYPE OFF(SqSharedState040,fields.meta_map_type)
#define META_VALUE OFF(SqSharedState040,common.meta_indices)
#define CTOR_NAME OFF(SqSharedState040,common.common.constructor_name)
#endif

const SqPrototypeU32 sq_startup_layout040[]={
    sizeof(void*),sizeof(SqSharedState040),sizeof(SqVm040),sizeof(SqStartupInitialRefs040),
    sizeof(SqStartupRefNode040),sizeof(SqStartupRefTable040),sizeof(SqPrefixCollectable012),
    META_TYPE,META_VALUE,STATE(references),STATE(registry),STATE(constants),CTOR_NAME,STATE(special),
    OFF(SqSharedState040,common.common.common.default_delegates),OFF(SqSharedState040,common.common.common.common.chain),
    STATE(callback_00a0),STATE(callback_00a4),STATE(flag_00a8),STATE(flag_00a9),
    STATE(system_strings),STATE(meta_methods),STATE(type_names),STATE(strings),
    OFF(SqSharedState040,common.common.common.scratch),OFF(SqSharedState040,common.common.common.scratch_capacity),
    OFF(SqVm040,unwritten_0014),OFF(SqVm040,stack),OFF(SqVm040,varargs),OFF(SqVm040,top),OFF(SqVm040,base),
    OFF(SqVm040,root),OFF(SqVm040,error),OFF(SqVm040,error_handler),OFF(SqVm040,debug_hook),OFF(SqVm040,temporary),
    OFF(SqVm040,call_stack),OFF(SqVm040,call_count),OFF(SqVm040,allocated_calls),OFF(SqVm040,calls),OFF(SqVm040,traps),
    OFF(SqVm040,current),OFF(SqVm040,foreign),OFF(SqVm040,shared),OFF(SqVm040,native_depth),
    OFF(SqVm040,suspended),OFF(SqVm040,suspended_root),OFF(SqVm040,suspended_target),OFF(SqVm040,suspended_traps),
    OFF(SqVm040,suspended_varargs_size),OFF(SqVm040,suspended_varargs_base),
    OFF(SqStartupRefNode040,object),OFF(SqStartupRefNode040,references),OFF(SqStartupRefNode040,next),
    OFF(SqStartupRefTable040,capacity),OFF(SqStartupRefTable040,used),OFF(SqStartupRefTable040,nodes),
    OFF(SqStartupRefTable040,free),OFF(SqStartupRefTable040,storage),
    sizeof(SqPrefixObject012),OFF(SqPrefixObject012,value),sizeof(SqStartupServices040),
    sizeof(SqStartupFixtureHeap040),OFF(SqStartupFixtureHeap040,memory),OFF(SqStartupFixtureHeap040,capacity),
    OFF(SqStartupFixtureHeap040,used),OFF(SqStartupFixtureHeap040,allocations),OFF(SqStartupFixtureHeap040,entries),
    sizeof(SqStartupFixtureAllocation040),OFF(SqStartupFixtureAllocation040,bytes),OFF(SqStartupFixtureAllocation040,alignment),
    OFF(SqPrefixCollectable012,prefix.references),OFF(SqPrefixCollectable012,prefix.weak),
    OFF(SqPrefixCollectable012,next),OFF(SqPrefixCollectable012,previous)
};
