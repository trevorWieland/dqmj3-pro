#ifndef DQMJ3_EXECUTE047_H
#define DQMJ3_EXECUTE047_H
#include "binding_names.h"
#include "../squirrel-wave040/startup.h"
#include "../squirrel-wave035/exception.h"
#include "../squirrel-wave041/capture.h"
#include "../squirrel-wave043/iteration.h"

_Bool sq_execute047(SqVm040 *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 execution_type);
_Bool sq_vm_call_native047(SqVm040 *vm,SqNativeClosure013 *closure,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,_Bool *suspend);
SqSharedState040 *sq_execution_shared047(const void *vm);
SqPrefixObject012 *sq_execution_error047(void *vm);
_Bool sq_execute_capture047(SqVm040 *vm,const SqInstruction028 *instruction);
#endif
