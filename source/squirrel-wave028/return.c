#include "execute.h"

void sq_execute_pop_varargs028(void *vm,const unsigned short *varargs)
{
    for(SqPrototypeI32 index=0;index<varargs[0];index++) {
        SqPrefixVector012 vector=sq_execute_varargs028(vm);vector.size--;sq_execute_publish_varargs028(vm,vector);
        SqPrefixObject012 value=vector.values[vector.size];sq_prefix_release(value.type,value.value);
    }
}

_Bool sq_execute_return028(void *vm,SqPrototypeI32 argument0,SqPrototypeI32 argument1,void *result)
{
    SqVmCallFrame022 *frame=sq_vm_current022(vm);SqPrefixObject012 debug=sq_execute_debug_value028(vm);
    if(debug.type!=0x01000001u&&debug.value.reference!=frame->closure.value.reference)
        for(SqPrototypeI32 index=0;index<frame->calls;index++)sq_execute_debug028(vm,'r',0);
    SqPrototypeI32 old_base=sq_lookup_base020(vm),old_top=sq_lookup_top020(vm),target=frame->target,root=frame->root;
    SqPrototypeI32 base=old_base-frame->previous_base;sq_vm_set_base022(vm,base);sq_vm_set_top022(vm,base+frame->previous_top);
    if(frame->varargs_size)sq_execute_pop_varargs028(vm,&frame->varargs_size);
    SqPrototypeI32 count=sq_vm_call_count022(vm)-1;sq_vm_set_call_count022(vm,count);sq_execute_clear028(&frame->closure);
    sq_vm_set_current022(vm,count?sq_vm_call_stack022(vm)+count-1:0);
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    const SqPrefixObject012 *value=argument0!=255?sq_lookup_stack020(vm)+old_base+argument1:&empty;
    if(root)sq_execute_assign028(result,value);else if(target!=-1)sq_execute_assign028(sq_lookup_stack020(vm)+base+target,value);
    sq_execute_clear_stack028(vm,old_top);
    if(old_base<sq_lookup_base020(vm))sq_execute_unsupported028(vm,-2);
    return root!=0;
}
