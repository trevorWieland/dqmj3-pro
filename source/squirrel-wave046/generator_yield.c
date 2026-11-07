#include "generator_state.h"

_Bool sq_generator_yield046(SqGenerator044 *generator,SqVm040 *vm)
{
    if(generator->state==1) {
        sq_generator_raise_literal046(vm,"internal vm error, yielding dead generator");return 0;
    }
    if(generator->state==2) {
        sq_generator_raise_literal046(vm,"internal vm error, yielding a dead generator");return 0;
    }
    SqPrototypeI32 count=vm->top-vm->base;
    SqVmCallFrame022 *frame=vm->current;sq_generator_copy_frame046(&generator->saved,frame);
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    sq_prefix_vector_resize(&generator->stack,(SqPrototypeU32)count,&null);
    for(SqPrototypeI32 index=0;index<count;index++) {
        sq_prefix_assign(generator->stack.values+index,vm->stack.values+vm->base+index);
        sq_prefix_assign(vm->stack.values+vm->base+index,&null);
    }
    SqPrototypeI32 varargs=vm->current->varargs_size,base=vm->current->varargs_base;
    for(SqPrototypeI32 index=varargs-1;index>=0;index--)
        sq_generator_append_value046(&generator->varargs,vm->varargs.values+base+index);
    generator->saved.generator=0;
    for(SqPrototypeI32 index=0;index<generator->saved.traps;index++) {
        sq_generator_append_trap046(&generator->traps,vm->traps.values+vm->traps.size-1);
        vm->traps.size--;
    }
    generator->state=1;return 1;
}
