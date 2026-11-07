#ifndef DQMJ3_SQUIRREL_CAPTURE041_H
#define DQMJ3_SQUIRREL_CAPTURE041_H
#include "../squirrel-wave031/execute.h"
#include "../squirrel-wave034/class.h"

_Bool sq_script_create041(void *vm,SqPrefixObject012 *destination,SqPrototype011 *function);
void *sq_script_create_allocate041(SqPrototypeU32 bytes);
void *sq_script_create_reallocate041(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes);
const SqPrefixObject012 *sq_capture_local041(const void *vm,SqPrototypeI32 index);
const SqPrefixObject012 *sq_capture_parent_outer041(const void *vm,SqPrototypeI32 index);
_Bool sq_capture_lookup041(void *vm,const SqPrefixObject012 *receiver,const SqPrefixObject012 *key,
    SqPrefixObject012 *result,SqPrototypeU32 raw,SqPrototypeU32 rooted);
void sq_capture_index_error041(void *vm,const SqPrefixObject012 *key);
_Bool sq_execute_closure041(void *vm,const SqInstruction028 *instruction);
_Bool sq_execute041(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 execution_type);

_Noreturn void sq_capture_assert041(SqPrototypeU32 reason);
_Noreturn void sq_capture_storage_fault041(SqPrototypeU32 reason);
#endif
