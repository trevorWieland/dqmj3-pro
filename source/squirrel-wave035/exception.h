#ifndef DQMJ3_EXCEPTION035_H
#define DQMJ3_EXCEPTION035_H
#include "../squirrel-wave031/execute.h"

enum SqExceptionOpcode035 {SQ35_PUSHTRAP=56,SQ35_POPTRAP=57,SQ35_THROW=58};

typedef struct SqExceptionState035 { SqPrototypeI32 active_traps;SqPrototypeU32 raise_error; } SqExceptionState035;
SqTrapVector028 sq_exception_traps035(const void *vm);
void sq_exception_publish_traps035(void *vm,SqTrapVector028 vector);
SqPrototypeU32 sq_exception_notify035(const void *vm);
void sq_exception_set_notify035(void *vm,SqPrototypeU32 value);
void *sq_exception_error_slot035(void *vm);
SqPrefixObject012 sq_exception_error035(const void *vm);
void sq_exception_handler035(void *vm,const void *error);
void sq_exception_push035(void *vm,const SqInstruction028 *instruction,SqExceptionState035 *state);
void sq_exception_pop035(void *vm,SqPrototypeI32 count,SqExceptionState035 *state);
_Bool sq_exception_unwind035(void *vm,SqExceptionState035 *state);
_Bool sq_exception_call035(void *vm,const SqInstruction028 *instruction);
_Bool sq_execute035(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 mode);
void *sq_exception_reallocate035(void *old,SqPrototypeU32 previous,SqPrototypeU32 next);
_Noreturn void sq_exception_generator_unsupported035(void *generator);
#endif
