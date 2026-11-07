#include "capture.h"

_Bool sq_vm_execute022(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type)
{
    return sq_execute041(vm,closure,target,arguments,base,result,raise_error,(SqPrototypeI32)execution_type);
}
