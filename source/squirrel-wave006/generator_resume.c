#include "execute_views.h"

static void restore_generator_frame(SqCallInfo *destination, const SqCallInfo *saved)
{
    destination->instruction = saved->instruction;
    destination->literals = saved->literals;
    vm_object_assign(&destination->closure, &saved->closure);
    destination->generator = saved->generator;
    destination->traps = saved->traps;
    destination->previous_base = saved->previous_base;
    destination->previous_top = saved->previous_top;
    destination->target = saved->target;
    destination->calls = saved->calls;
    destination->root = saved->root;
    destination->varargs_size = saved->varargs_size;
    destination->varargs_base = saved->varargs_base;
}

_Bool fn_0019e378(SqGenerator *generator, SqExecuteVM *vm, SqI32 target)
{
    SqCallVM *base = &vm->base;
    if (generator->state == 2 || generator->state == 0) {
        sq_execute_error(base, generator->state == 2 ? "resuming dead generator" : "resuming active generator");
        return 0;
    }
    SqU32 size = generator->stack.size;
    SqI32 previous_top = base->frame.top - base->frame.base;
    if (base->call_count == base->allocated_calls) {
        SqCallInfo empty = {0};
        empty.closure.type = 0x01000001u;
        SqI32 allocated = base->allocated_calls * 2;
        fn_0019d408(&base->call_data, (SqU32)allocated, &empty);
        base->call_stack = base->call_data.values;
        base->allocated_calls = allocated;
    }
    SqCallInfo *frame = base->call_stack + base->call_count;
    base->current = frame;
    restore_generator_frame(frame, &generator->saved);
    base->call_count++;
    SqI32 previous_base = base->frame.base;
    base->frame.base = base->frame.top;
    frame->target = target;
    frame->generator = generator;
    frame->varargs_size = (unsigned short)generator->varargs.size;
    for (SqI32 index = 0; index < generator->saved.traps; index++) {
        SqOpaqueVector *traps = &base->traps;
        if (traps->size >= traps->capacity) {
            SqU32 capacity = traps->size ? traps->size * 2 : 4;
            traps->values = sq_reallocate(traps->values, traps->capacity * sizeof(SqTrap), capacity * sizeof(SqTrap));
            traps->capacity = capacity;
        }
        ((SqTrap *)traps->values)[traps->size++] = ((SqTrap *)generator->traps.values)[generator->traps.size - 1];
        generator->traps.size--;
    }
    SqObject null = {0x01000001u, {.reference = 0}};
    for (SqU32 index = 0; index < size; index++) {
        vm_object_assign(base->frame.stack + base->frame.base + index, generator->stack.values + index);
        vm_object_assign(generator->stack.values, &null);
    }
    while (generator->varargs.size) {
        SqVector vector = sq_execute_varargs(vm);
        if (vector.size >= vector.capacity) {
            SqU32 capacity = vector.size ? vector.size * 2 : 4;
            vector.values = sq_reallocate(vector.values, vector.capacity * sizeof(SqObject), capacity * sizeof(SqObject));
            vector.capacity = capacity;
        }
        SqObject *destination = vector.values + vector.size++;
        sq_execute_publish_varargs(vm, vector);
        *destination = generator->varargs.values[generator->varargs.size - 1];
        if (destination->type & 0x08000000u) destination->value.reference->references++;
        generator->varargs.size--;
        SqObject *removed = generator->varargs.values + generator->varargs.size;
        sq_execute_release(removed->type, removed->value);
    }
    frame->varargs_base = (unsigned short)(sq_execute_varargs(vm).size - frame->varargs_size);
    base->frame.top = base->frame.base + (SqI32)size;
    frame->previous_top = previous_top;
    frame->previous_base = base->frame.base - previous_base;
    generator->state = 0;
    if (base->debug_hook.type != 0x01000001u && base->debug_hook.value.reference != frame->closure.value.reference)
        sq_execute_debug(vm, 'c', 0);
    return 1;
}
