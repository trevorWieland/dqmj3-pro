#include "exception.h"

static void pop_frame(void *vm)
{
    SqPrototypeI32 count=sq_vm_call_count022(vm)-1;sq_vm_set_call_count022(vm,count);sq_execute_clear028(&sq_vm_current022(vm)->closure);
    sq_vm_set_current022(vm,count?sq_vm_call_stack022(vm)+count-1:0);
}
static void clean_frame(void *vm)
{
    SqVmCallFrame022 *frame=sq_vm_current022(vm);
    if(frame->generator)sq_exception_generator_unsupported035(frame->generator);
    if(frame->varargs_size)sq_execute_pop_varargs028(vm,&frame->varargs_size);
    pop_frame(vm);
}
_Bool sq_exception_unwind035(void *vm,SqExceptionState035 *state)
{
    SqPrefixObject012 error=sq_exception_error035(vm);sq_prefix_retain(error.type,error.value);
    SqPrototypeI32 old_top=sq_lookup_top020(vm);
    if(sq_vm_current022(vm)) {
        if(sq_exception_notify035(vm))sq_exception_handler035(vm,&error);
        if(state->active_traps) {
            SqPrototypeI32 unwound=0;
            while(sq_vm_current022(vm)) {
                SqVmCallFrame022 *frame=sq_vm_current022(vm);
                if(frame->traps>0) {
                    SqTrapVector028 vector=sq_exception_traps035(vm);const SqTrap028 *record=vector.values+vector.size-1;
                    frame->instruction=record->instruction;sq_vm_set_top022(vm,record->top);sq_vm_set_base022(vm,record->base);
                    sq_execute_assign028(sq_lookup_stack020(vm)+record->base+record->target,&error);
                    vector=sq_exception_traps035(vm);vector.size--;sq_exception_publish_traps035(vm,vector);state->active_traps--;sq_vm_current022(vm)->traps--;
                    sq_execute_clear_stack028(vm,old_top);sq_prefix_release(error.type,error.value);return 1;
                }
                if(frame->closure.type!=0x08000100u&&unwound)break;
                clean_frame(vm);unwound++;
            }
        } else if(state->raise_error&&!sq_exception_notify035(vm))sq_exception_handler035(vm,&error);
        while(sq_vm_current022(vm)) {
            SqVmCallFrame022 *frame=sq_vm_current022(vm);SqPrototypeI32 root=frame->root;
            if(frame->generator)sq_exception_generator_unsupported035(frame->generator);
            SqPrototypeI32 base=sq_lookup_base020(vm)-frame->previous_base;sq_vm_set_base022(vm,base);sq_vm_set_top022(vm,base+frame->previous_top);
            if(frame->varargs_size)sq_execute_pop_varargs028(vm,&frame->varargs_size);
            pop_frame(vm);
            if((sq_vm_current022(vm)&&sq_vm_current022(vm)->closure.type!=0x08000100u)||root)break;
        }
        sq_execute_clear_stack028(vm,old_top);
    }
    sq_execute_assign028(sq_exception_error_slot035(vm),&error);sq_prefix_release(error.type,error.value);return 0;
}
