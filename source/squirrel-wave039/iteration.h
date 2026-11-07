#ifndef DQMJ3_ITERATION039_H
#define DQMJ3_ITERATION039_H
#include "../squirrel-wave031/execute.h"
#include "../squirrel-wave034/class.h"

enum SqIterationOpcode039 {SQ39_FOREACH=51,SQ39_POSTFOREACH=52};
SqPrototypeI32 sq_string_next039(SqString015 *string,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value);
SqPrototypeI32 sq_table_next039(SqTable019 *table,SqPrototypeU32 raw,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value);
SqPrototypeI32 sq_class_next039(SqClass030 *klass,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value);
_Bool sq_iteration_step039(void *vm,const SqPrefixObject012 *self,SqPrefixObject012 *key,SqPrefixObject012 *value,SqPrefixObject012 *cursor,SqPrototypeI32 key_register,SqPrototypeI32 exit_displacement,SqPrototypeI32 *jump);
_Bool sq_iteration_get039(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,SqPrefixObject012 *value);
_Bool sq_execute039(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 mode);
_Noreturn void sq_iteration_generator_unsupported039(void *generator);
_Noreturn void sq_iteration_failure_unsupported039(void *vm);
#endif
