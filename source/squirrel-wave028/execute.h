#ifndef DQMJ3_SQUIRREL_EXECUTE028_H
#define DQMJ3_SQUIRREL_EXECUTE028_H
#include "../squirrel-wave022/vm_call.h"
#include "../squirrel-wave017/script_closure.h"

typedef SqPrototypeInstruction011 SqInstruction028;
typedef struct SqTrap028 {
    SqPrototypeI32 base,top;
    const SqInstruction028 *instruction;
    SqPrototypeI32 target;
} SqTrap028;
typedef struct SqTrapVector028 { SqTrap028 *values;SqPrototypeU32 size,capacity; } SqTrapVector028;
typedef struct SqExecuteStorage028 {
    SqVmCallStorage022 common;
    SqPrototypeU32 suspended,suspended_root;
    SqPrototypeI32 suspended_target,suspended_traps;
    unsigned short suspended_varargs_size,suspended_varargs_base;
#if __SIZEOF_POINTER__ == 8
    SqPrefixObject012 error_handler,debug_hook,temporary;
    SqPrefixVector012 varargs;
    SqTrapVector028 traps;
#endif
} SqExecuteStorage028;

enum SqOpcode028 { SQ28_LINE=0,SQ28_LOAD=1,SQ28_LOADINT=2,SQ28_LOADFLOAT=3,SQ28_DLOAD=4,SQ28_CALL=6,
    SQ28_MOVE=10,SQ28_ARITH=17,SQ28_RETURN=19,SQ28_LOADNULLS=20,SQ28_LOADROOT=21,SQ28_LOADBOOL=22,
    SQ28_DMOVE=23,SQ28_JUMP=24,SQ28_JNZ=25,SQ28_JZ=26,SQ28_LOADFREE=27,SQ28_VARGC=28,
    SQ28_AND=43,SQ28_OR=44,SQ28_NOT=46 };

void sq_execute_assign028(void *destination,const SqPrefixObject012 *source);
void sq_execute_clear028(void *object);
void sq_execute_scalar028(void *object,SqPrototypeU32 type,SqPrototypeU32 bits);
void *sq_execute_temporary028(void *vm);
SqPrefixObject012 sq_execute_temporary_value028(const void *vm);
SqPrefixObject012 sq_execute_debug_value028(const void *vm);
SqPrefixObject012 sq_execute_error_handler_value028(const void *vm);
void *sq_execute_debug_slot028(void *vm);
void *sq_execute_error_handler_slot028(void *vm);
SqPrefixObject012 sq_execute_root_value028(const void *vm);
SqPrefixVector012 sq_execute_varargs028(const void *vm);
void sq_execute_publish_varargs028(void *vm,SqPrefixVector012 vector);
void sq_execute_clear_stack028(void *vm,SqPrototypeI32 old_top);
_Bool sq_execute_false028(const SqPrefixObject012 *value);
_Bool sq_execute_start_call028(void *vm,SqScriptClosure017 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,_Bool tail);
_Bool sq_execute_return028(void *vm,SqPrototypeI32 argument0,SqPrototypeI32 argument1,void *result);
void sq_execute_pop_varargs028(void *vm,const unsigned short *varargs);
_Bool sq_execute_arithmetic028(void *vm,SqPrototypeI32 operation,void *destination,const SqPrefixObject012 *left,const SqPrefixObject012 *right);
_Bool sq_execute_call028(void *vm,const SqInstruction028 *instruction);
_Bool sq_execute028(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 execution_type);
void sq_execute_debug028(void *vm,SqPrototypeI32 event,SqPrototypeI32 line);
void sq_execute_error_handler028(void *vm,const SqPrefixObject012 *error);
_Noreturn void sq_execute_unsupported028(void *vm,SqPrototypeI32 reason);

_Static_assert(sizeof(SqInstruction028)==8,"actual script instruction stride");
_Static_assert(__builtin_offsetof(SqExecuteStorage028,common)==0,"exact022 common first");
_Static_assert(sizeof(void*)!=4||sizeof(SqExecuteStorage028)==168,"target Execute prefix extent");
#endif
