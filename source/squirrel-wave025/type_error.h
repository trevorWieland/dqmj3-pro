#ifndef DQMJ3_SQUIRREL_TYPE_ERROR025_H
#define DQMJ3_SQUIRREL_TYPE_ERROR025_H
#include "../squirrel-wave022/vm_call.h"
#include "../squirrel-wave020/lookup_error.h"

void sq_native_type_error025(void *vm,SqPrototypeI32 index,SqPrototypeI32 mask,SqPrototypeU32 actual_type);
_Bool sq_string_concat025(void *vm,const SqPrefixObject012 *left,const SqPrefixObject012 *right,SqPrefixObject012 *destination);
void sq_type_error_string025(void *vm,const SqPrefixObject012 *input,SqPrefixObject012 *destination);
_Noreturn void sq_type_error_format_unsupported025(void);
_Noreturn void sq_type_error_string_unsupported025(void);
#endif
