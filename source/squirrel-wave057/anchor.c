#include "../../source/squirrel-wave049/startup.h"
#include "../../source/squirrel-wave047/execute.h"

SqVm040 *sq_compose_factory057(SqPrototypeU32 stack_size)
{
    return fn_00146994(stack_size);
}

_Bool sq_compose_execute057(SqVm040 *vm,const SqPrefixObject012 *closure,
    SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result)
{
    return sq_execute047(vm,closure,0,arguments,base,result,1,0);
}
