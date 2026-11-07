#ifndef DQMJ3_SQUIRREL_GENERATOR_STATE046_H
#define DQMJ3_SQUIRREL_GENERATOR_STATE046_H

#include "../squirrel-wave044/generator.h"
#include "../squirrel-wave040/startup.h"

_Bool sq_generator_yield046(SqGenerator044 *generator,SqVm040 *vm);
_Bool sq_generator_resume046(SqGenerator044 *generator,SqVm040 *vm,SqPrototypeI32 target);
void sq_generator_copy_frame046(SqVmCallFrame022 *destination,const SqVmCallFrame022 *source);
void sq_generator_grow_frames046(SqVm040 *vm);
void sq_generator_append_value046(SqPrefixVector012 *vector,const SqPrefixObject012 *value);
void sq_generator_append_trap046(SqTrapVector028 *vector,const SqTrap028 *value);
void sq_generator_raise_literal046(SqVm040 *vm,const char *text);
void sq_generator_debug046(SqVm040 *vm,SqPrototypeI32 event,SqPrototypeI32 line);
_Noreturn void sq_generator_unsupported046(SqPrototypeU32 reason);

_Static_assert(sizeof(void*)!=4||sizeof(SqVm040)==168,"actual generator VM target");
_Static_assert(sizeof(void*)!=8||sizeof(SqVm040)==264,"actual generator VM native");

#endif
