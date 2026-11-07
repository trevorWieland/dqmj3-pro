#include "capture.h"
#include "../squirrel-wave020/lookup_error.h"

const SqPrefixObject012 *sq_capture_local041(const void *vm,SqPrototypeI32 index)
{
    return sq_lookup_stack020(vm)+sq_lookup_base020(vm)+index;
}

const SqPrefixObject012 *sq_capture_parent_outer041(const void *vm,SqPrototypeI32 index)
{
    const SqVmCallFrame022 *frame=sq_vm_current022(vm);
    const SqScriptClosure017 *parent=frame->closure.value.reference;
    return parent->outers.values+index;
}

_Bool sq_capture_lookup041(void *vm,const SqPrefixObject012 *receiver,const SqPrefixObject012 *key,
    SqPrefixObject012 *result,SqPrototypeU32 raw,SqPrototypeU32 rooted)
{
    return sq_lookup_get020(vm,receiver,key,result,raw,rooted);
}

void sq_capture_index_error041(void *vm,const SqPrefixObject012 *key)
{
    sq_lookup_index_error020(vm,key);
}

_Bool sq_execute_closure041(void *vm,const SqInstruction028 *instruction)
{
    const SqScriptClosure017 *parent=sq_vm_current022(vm)->closure.value.reference;
    const SqPrototype011 *function=parent->function.value.reference;
    SqPrototype011 *child=function->functions[instruction->argument1].value.reference;
    SqPrefixObject012 *destination=sq_lookup_stack020(vm)+sq_lookup_base020(vm)+instruction->argument0;
    return sq_script_create041(vm,destination,child);
}
