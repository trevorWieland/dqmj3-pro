#ifndef DQMJ3_EXECUTE031_H
#define DQMJ3_EXECUTE031_H
#include "../squirrel-wave028/execute.h"

_Bool sq_execute031(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 execution_type);
void *sq_execute_allocate_table031(SqPrototypeU32 bytes);
_Bool sq_execute_numbers031(void *vm,const SqInstruction028 *instruction);
_Bool sq_execute_arithmetic031(void *vm,SqPrototypeI32 operation,void *destination,const SqPrefixObject012 *left,const SqPrefixObject012 *right);
_Bool sq_execute_collections031(void *vm,const SqInstruction028 *instruction);
_Bool sq_execute_extension031(void *vm,const SqInstruction028 *instruction);
#endif
