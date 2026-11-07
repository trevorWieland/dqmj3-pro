#include "execute.h"

static void append_vararg(void *vm,const SqPrefixObject012 *value)
{
    SqPrefixVector012 vector=sq_execute_varargs028(vm);
    if(vector.size>=vector.capacity) {
        SqPrototypeU32 capacity=vector.size?vector.size*2:4;
        vector.values=sq_reallocate(vector.values,vector.capacity*sizeof(*vector.values),capacity*sizeof(*vector.values));vector.capacity=capacity;
    }
    SqPrefixObject012 *slot=vector.values+vector.size++;sq_execute_publish_varargs028(vm,vector);*slot=*value;sq_prefix_retain(slot->type,slot->value);
}

_Bool sq_execute_start_call028(void *vm,SqScriptClosure017 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,_Bool tail)
{
    SqPrototype011 *function=closure->function.value.reference;
    SqPrototypeI32 parameters=function->parameter_count,new_top=base+function->stack_size,count=arguments;
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    if(parameters!=count) {
        SqPrototypeI32 defaults=function->default_count,difference=parameters-count;
        if(defaults&&count<parameters&&difference<=defaults) {
            for(SqPrototypeI32 index=defaults-difference;index<defaults;index++)sq_execute_assign028(sq_lookup_stack020(vm)+base+count++,closure->defaults.values+index);
        } else if(function->variable_parameters&&count>=parameters) {
            for(SqPrototypeI32 index=0;index<count-parameters;index++) {
                SqPrefixObject012 *slot=sq_lookup_stack020(vm)+base+parameters+index;append_vararg(vm,slot);sq_execute_clear028(slot);
            }
        } else {sq_vm_call_error022(vm,"wrong number of parameters");return 0;}
    }
    if(closure->environment.type==0x08010000u) {
        const SqWeakReference014 *weak=closure->environment.value.reference;sq_execute_assign028(sq_lookup_stack020(vm)+base,&weak->object);
    }
    if(!tail) {
        SqVmCallFrame022 fill={0};fill.closure=empty;
        if(sq_vm_call_count022(vm)==sq_vm_allocated_calls022(vm)) {
            SqPrototypeI32 next=sq_vm_allocated_calls022(vm)*2;SqVmCallVector022 vector=sq_vm_call_vector022(vm);
            sq_vm_call_frames_resize022(&vector,(SqPrototypeU32)next,&fill);sq_vm_publish_calls022(vm,vector);sq_vm_set_call_stack022(vm,vector.values);sq_vm_set_allocated_calls022(vm,next);
        }
        SqVmCallFrame022 *frame=sq_vm_call_stack022(vm)+sq_vm_call_count022(vm);
        frame->instruction=0;frame->literals=0;sq_execute_assign028(&frame->closure,&empty);frame->generator=0;frame->traps=0;
        frame->previous_base=base-sq_lookup_base020(vm);frame->previous_top=sq_lookup_top020(vm)-sq_lookup_base020(vm);
        frame->target=target;frame->calls=1;frame->root=0;frame->varargs_size=frame->varargs_base=0;
        sq_vm_set_current022(vm,frame);sq_vm_set_call_count022(vm,sq_vm_call_count022(vm)+1);
    } else sq_vm_current022(vm)->calls++;
    SqVmCallFrame022 *frame=sq_vm_current022(vm);SqPrefixVector012 varargs=sq_execute_varargs028(vm);
    frame->varargs_size=(unsigned short)(count-parameters);frame->varargs_base=(unsigned short)(varargs.size-frame->varargs_size);
    SqPrefixObject012 object={0x08000100u,{.reference=closure}};sq_execute_assign028(&frame->closure,&object);
    frame->literals=function->literals;frame->instruction=function->instructions;
    SqPrefixVector012 stack=sq_vm_stack_vector022(vm);
    if((SqPrototypeU32)new_top+(SqPrototypeU32)function->stack_size*2>stack.size) {
        sq_prefix_vector_resize(&stack,stack.size+(SqPrototypeU32)function->stack_size*2,&empty);sq_vm_publish_stack022(vm,stack);
    }
    sq_vm_set_top022(vm,new_top);sq_vm_set_base022(vm,base);
    SqPrefixObject012 debug=sq_execute_debug_value028(vm);
    if(debug.type!=0x01000001u&&debug.value.reference!=frame->closure.value.reference)sq_execute_debug028(vm,'c',0);
    return 1;
}
