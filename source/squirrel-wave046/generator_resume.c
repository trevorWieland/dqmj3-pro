#include "generator_state.h"

_Bool sq_generator_resume046(SqGenerator044 *generator,SqVm040 *vm,SqPrototypeI32 target)
{
    SqPrototypeI32 count=(SqPrototypeI32)generator->stack.size;
    if(generator->state==2) {sq_generator_raise_literal046(vm,"resuming dead generator");return 0;}
    if(generator->state==0) {sq_generator_raise_literal046(vm,"resuming active generator");return 0;}
    SqPrototypeI32 previous_top=vm->top-vm->base;
    if(vm->call_count==vm->allocated_calls)sq_generator_grow_frames046(vm);
    vm->current=vm->call_stack+vm->call_count;
    sq_generator_copy_frame046(vm->current,&generator->saved);
    vm->call_count++;
    SqPrototypeI32 previous_base=vm->base;vm->base=vm->top;
    vm->current->target=target;vm->current->generator=generator;
    vm->current->varargs_size=(unsigned short)generator->varargs.size;
    for(SqPrototypeI32 index=0;index<generator->saved.traps;index++) {
        sq_generator_append_trap046(&vm->traps,generator->traps.values+generator->traps.size-1);
        generator->traps.size--;
    }
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    for(SqPrototypeI32 index=0;index<count;index++) {
        sq_prefix_assign(vm->stack.values+vm->base+index,generator->stack.values+index);
        sq_prefix_assign(generator->stack.values,&null);
    }
    while(generator->varargs.size) {
        sq_generator_append_value046(&vm->varargs,generator->varargs.values+generator->varargs.size-1);
        generator->varargs.size--;
        SqPrefixObject012 *slot=generator->varargs.values+generator->varargs.size;
        sq_prefix_release(slot->type,slot->value);
    }
    vm->current->varargs_base=(unsigned short)(vm->varargs.size-vm->current->varargs_size);
    vm->top=vm->base+count;vm->current->previous_top=previous_top;
    vm->current->previous_base=vm->base-previous_base;generator->state=0;
    if(vm->debug_hook.type!=0x01000001u&&vm->debug_hook.value.reference!=vm->current->closure.value.reference)
        sq_generator_debug046(vm,99,0);
    return 1;
}
