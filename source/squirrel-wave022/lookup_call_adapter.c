#include "vm_call.h"

_Bool sq_lookup_invoke020(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error)
{ return sq_vm_call022(vm,callable,arguments,base,result,raise_error); }
