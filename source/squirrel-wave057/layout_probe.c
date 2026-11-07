#include "../../source/squirrel-wave045/initialization.h"
#include "../../source/squirrel-wave028/execute.h"

#define OFF(type,field) __builtin_offsetof(type,field)

const SqPrototypeU32 compose057_layout[]={
    sizeof(void*),sizeof(SqVm040),sizeof(SqSharedState040),sizeof(SqPrefixState012),
    sizeof(SqPrefixObject012),sizeof(SqVmCallFrame022),OFF(SqVm040,stack),
    OFF(SqVm040,shared),OFF(SqPrefixState012,chain),
    OFF(SqSharedState040,common.common.common.scratch),
    OFF(SqSharedState040,common.common.common.default_delegates),
#if __SIZEOF_POINTER__ == 4
    OFF(SqSharedState040,target.system_strings),OFF(SqSharedState040,target.strings),
#else
    OFF(SqSharedState040,fields.system_strings),OFF(SqSharedState040,fields.strings),
#endif
    OFF(SqSharedState040,common.common.common.common.unknown_0000),
    OFF(SqSharedState040,common.common.common.common.unknown_0000)+20
};

const SqPrototypeU32 compose_trap_layout057[]={
    sizeof(SqTrap028),OFF(SqTrap028,base),OFF(SqTrap028,top),
    OFF(SqTrap028,instruction),OFF(SqTrap028,target)
};
