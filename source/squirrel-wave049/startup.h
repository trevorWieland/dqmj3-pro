#ifndef DQMJ3_SQUIRREL_STARTUP049_H
#define DQMJ3_SQUIRREL_STARTUP049_H

#include "../squirrel-wave045/initialization.h"
#include "source_symbols.h"

SqVm040 *fn_00146994(SqPrototypeU32 stack_size);
_Bool fn_001544a0(SqVm040 *vm,const SqVm040 *parent,SqPrototypeU32 stack_size);
void fn_00158fd0(SqVm040 *vm);
void fn_00158128(SqVm040 *vm,const SqStringByte015 *string,SqPrototypeI32 length);
void fn_001580cc(SqVm040 *vm,SqPrototypeI32 value);
SqPrototypeI32 fn_001581d0(SqVm040 *vm,const SqStringByte015 *message);
void fn_00173d14(SqVm040 *vm);
void fn_00173cb8(SqVm040 *vm,SqPrototypeI32 count);
void fn_00173cd0(SqVm040 *vm,SqPrototypeI32 count);
SqPrefixObject012 *sq_startup_absolute049(SqVm040 *vm,SqPrototypeI32 index);
SqPrefixObject012 *sq_startup_relative049(SqVm040 *vm,SqPrototypeI32 index);
SqPrototypeI32 fn_00166f0c(SqVm040 *vm,SqPrototypeI32 index,SqPrototypeU32 static_slot);
SqPrototypeI32 fn_00177160(SqVm040 *vm,SqPrototypeI32 index,const SqStringByte015 *name);
SqPrototypeI32 fn_00177270(SqVm040 *vm,SqPrototypeI32 parameters,const SqStringByte015 *mask);
void sq_startup_formatted_error049(SqVm040 *vm,const char *message);
_Noreturn void sq_startup_assert049(void);

#endif
