#include "execute.h"
#include "../squirrel-wave020/lookup_error.h"
const SqPrefixObject012 *sq_capture_local047(const void *opaque,SqPrototypeI32 index)
{const SqVm040 *vm=opaque;return vm->stack.values+vm->base+index;}
const SqPrefixObject012 *sq_capture_parent_outer047(const void *opaque,SqPrototypeI32 index)
{const SqVm040 *vm=opaque;const SqScriptClosure017 *parent=vm->current->closure.value.reference;return parent->outers.values+index;}
_Bool sq_capture_lookup047(void *vm,const SqPrefixObject012 *receiver,const SqPrefixObject012 *key,SqPrefixObject012 *result,SqPrototypeU32 raw,SqPrototypeU32 rooted)
{return sq_lookup_get020(vm,receiver,key,result,raw,rooted);}
void sq_capture_index_error047(void *vm,const SqPrefixObject012 *key)
{sq_lookup_index_error047(vm,key);}
_Bool sq_execute_capture047(SqVm040 *vm,const SqInstruction028 *instruction)
{
    const SqScriptClosure017 *parent=vm->current->closure.value.reference;
    const SqPrototype011 *function=parent->function.value.reference;
    SqPrototype011 *child=function->functions[instruction->argument1].value.reference;
    return sq_script_create041(vm,vm->stack.values+vm->base+instruction->argument0,child);
}
_Bool sq_execute_closure047(void *vm,const SqInstruction028 *instruction)
{return sq_execute_capture047(vm,instruction);}
