#include "generator_state.h"

void sq_generator_copy_frame046(SqVmCallFrame022 *destination,const SqVmCallFrame022 *source)
{
    destination->instruction=source->instruction;destination->literals=source->literals;
    sq_prefix_assign(&destination->closure,&source->closure);
    destination->generator=source->generator;destination->traps=source->traps;
    destination->previous_base=source->previous_base;destination->previous_top=source->previous_top;
    destination->target=source->target;destination->calls=source->calls;destination->root=source->root;
    destination->varargs_size=source->varargs_size;destination->varargs_base=source->varargs_base;
}

void sq_generator_append_value046(SqPrefixVector012 *vector,const SqPrefixObject012 *value)
{
    if(vector->capacity<=vector->size) {
        SqPrototypeU32 capacity=vector->size?vector->size*2:4;
        vector->values=sq_reallocate(vector->values,vector->capacity*sizeof(*vector->values),capacity*sizeof(*vector->values));
        vector->capacity=capacity;
    }
    SqPrefixObject012 *slot=vector->values+vector->size++;
    *slot=*value;sq_prefix_retain(slot->type,slot->value);
}

void sq_generator_append_trap046(SqTrapVector028 *vector,const SqTrap028 *value)
{
    if(vector->capacity<=vector->size) {
        SqPrototypeU32 capacity=vector->size?vector->size*2:4;
        vector->values=sq_reallocate(vector->values,vector->capacity*sizeof(*vector->values),capacity*sizeof(*vector->values));
        vector->capacity=capacity;
    }
    vector->values[vector->size++]=*value;
}

static void initialize(SqVmCallFrame022 *frame)
{
    frame->instruction=0;frame->literals=0;frame->closure=(SqPrefixObject012){0x01000001u,{.reference=0}};
    frame->generator=0;frame->traps=0;frame->previous_base=0;frame->previous_top=0;
    frame->target=0;frame->calls=0;frame->root=0;frame->varargs_size=0;frame->varargs_base=0;
}

void sq_generator_grow_frames046(SqVm040 *vm)
{
    SqPrototypeU32 requested=(SqPrototypeU32)vm->allocated_calls*2;
    SqVmCallVector022 *vector=&vm->calls;
    if(vector->capacity<requested) {
        SqPrototypeU32 capacity=requested?requested:4;
        vector->values=sq_reallocate(vector->values,vector->capacity*sizeof(*vector->values),capacity*sizeof(*vector->values));
        vector->capacity=capacity;
    }
    while(vector->size<requested)initialize(vector->values+vector->size++);
    if(vector->size>requested) {
        for(SqPrototypeU32 index=requested;index<vector->size;index++) {
            SqPrefixObject012 *closure=&vector->values[index].closure;
            sq_prefix_release(closure->type,closure->value);
        }
        vector->size=requested;
    }
    vm->call_stack=vector->values;vm->allocated_calls=(SqPrototypeI32)requested;
}
