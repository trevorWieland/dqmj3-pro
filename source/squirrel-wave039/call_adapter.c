#include "iteration.h"

_Bool sq_vm_execute022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type)
{SqPrototypeI32 mode;__builtin_memcpy(&mode,&execution_type,4);return sq_execute039(vm,callable,target,arguments,base,result,raise_error,mode);}
