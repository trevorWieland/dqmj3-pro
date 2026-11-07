#include "exception.h"

void sq_exception_handler035(void *vm,const void *error)
{
    SqPrefixObject012 handler=sq_execute_error_handler_value028(vm);
    if(handler.type==0x01000001u)return;
    SqPrefixObject012 discarded={0x01000001u,{.reference=0}},root=sq_execute_root_value028(vm),argument;
    sq_vm_push022(vm,&root);__builtin_memcpy(&argument,error,sizeof(argument));sq_vm_push022(vm,&argument);
    handler=sq_execute_error_handler_value028(vm);
    sq_vm_call022(vm,&handler,2,sq_lookup_top020(vm)-2,&discarded,0);
    for(SqPrototypeI32 index=0;index<2;index++) {
        SqPrototypeI32 top=sq_lookup_top020(vm)-1;sq_vm_set_top022(vm,top);sq_execute_clear028(sq_lookup_stack020(vm)+top);
    }
    sq_prefix_release(discarded.type,discarded.value);
}
void sq_execute_error_handler028(void *vm,const SqPrefixObject012 *error)
{sq_exception_handler035(vm,error);}
