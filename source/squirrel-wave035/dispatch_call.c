#include "exception.h"

_Bool sq_exception_call035(void *vm,const SqInstruction028 *instruction)
{
    SqPrefixObject012 *slot=sq_lookup_stack020(vm)+sq_lookup_base020(vm)+instruction->argument1;
    sq_execute_assign028(sq_execute_temporary028(vm),slot);
    SqPrefixObject012 callable=sq_execute_temporary_value028(vm);sq_prefix_retain(callable.type,callable.value);
    SqPrototypeI32 base=sq_lookup_base020(vm)+instruction->argument2,target=instruction->argument0;
    if(callable.type==0x08000100u) {
        SqScriptClosure017 *script=callable.value.reference;
        if(((SqPrototype011*)script->function.value.reference)->generator)sq_execute_unsupported028(vm,-106);
        _Bool success=sq_execute_start_call028(vm,script,target,instruction->argument3,base,0);
        sq_prefix_release(callable.type,callable.value);return success;
    }
    if(callable.type!=0x08000200u)sq_execute_unsupported028(vm,-107);
    _Bool suspend;
    _Bool success=sq_vm_call_native022(vm,callable.value.reference,instruction->argument3,base,&callable,&suspend);
    if(suspend)sq_execute_unsupported028(vm,-108);
    if(!success){sq_prefix_release(callable.type,callable.value);return 0;}
    if(target!=-1)sq_execute_assign028(sq_lookup_stack020(vm)+sq_lookup_base020(vm)+target,&callable);
    sq_prefix_release(callable.type,callable.value);return 1;
}
