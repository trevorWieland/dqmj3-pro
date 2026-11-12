#include "execute_views.h"

static void push_generator_value(SqVector *vector, const SqObject *object)
{
    if (vector->size >= vector->capacity) {
        SqU32 capacity = vector->size ? vector->size * 2 : 4;
        vector->values = sq_reallocate(vector->values, vector->capacity * sizeof(SqObject), capacity * sizeof(SqObject));
        vector->capacity = capacity;
    }
    SqObject *destination = vector->values + vector->size++;
    *destination = *object;
    if (object->type & 0x08000000u) object->value.reference->references++;
}

SqGenerator *fn_00192b9c(SqState *shared, SqScriptClosure *closure)
{
    SqGenerator *generator = sq_allocate(sizeof(SqGenerator));
    if (!generator) return 0;
    generator->reference = (SqRef){&sq_generator_vtable, 0, 0, 0, 0};
    generator->closure = (SqObject){0x01000001u, {.reference = 0}};
    generator->stack = (SqVector){0};
    generator->varargs = (SqVector){0};
    generator->saved = (SqCallInfo){0};
    generator->saved.closure.type = 0x01000001u;
    generator->traps = (SqOpaqueVector){0};
    SqObject object = {0x08000100u, {.reference = &closure->reference}};
    object.value.reference->references++;
    vm_object_assign(&generator->closure, &object);
    sq_execute_release(object.type, object.value);
    generator->shared = shared;
    generator->state = 0;
    fn_0019e8c4(&shared->chain, &generator->reference);
    return generator;
}

_Bool fn_0019289c(SqGenerator *generator, SqExecuteVM *vm)
{
    SqCallVM *base = &vm->base;
    if (generator->state == 1 || generator->state == 2) {
        sq_execute_error(base, generator->state == 1 ? "internal vm error, yielding dead generator" : "internal vm error, yielding a dead generator");
        return 0;
    }
    SqI32 size = base->frame.top - base->frame.base;
    SqCallInfo *frame = base->current;
    generator->saved.instruction = frame->instruction;
    generator->saved.literals = frame->literals;
    vm_object_assign(&generator->saved.closure, &frame->closure);
    generator->saved.generator = frame->generator;
    generator->saved.traps = frame->traps;
    generator->saved.previous_base = frame->previous_base;
    generator->saved.previous_top = frame->previous_top;
    generator->saved.target = frame->target;
    generator->saved.calls = frame->calls;
    generator->saved.root = frame->root;
    generator->saved.varargs_size = frame->varargs_size;
    generator->saved.varargs_base = frame->varargs_base;
    SqObject null = {0x01000001u, {.reference = 0}};
    fn_0019d320(&generator->stack, (SqU32)size, &null);
    for (SqI32 index = 0; index < size; index++) {
        SqObject *slot = base->frame.stack + base->frame.base + index;
        vm_object_assign(generator->stack.values + index, slot);
        vm_object_assign(slot, &null);
    }
    SqVector varargs = sq_execute_varargs(vm);
    for (SqI32 index = (SqI32)frame->varargs_size - 1; index >= 0; index--)
        push_generator_value(&generator->varargs, varargs.values + frame->varargs_base + index);
    generator->saved.generator = 0;
    for (SqI32 index = 0; index < generator->saved.traps; index++) {
        SqOpaqueVector *traps = &generator->traps;
        if (traps->size >= traps->capacity) {
            SqU32 capacity = traps->size ? traps->size * 2 : 4;
            traps->values = sq_reallocate(traps->values, traps->capacity * sizeof(SqTrap), capacity * sizeof(SqTrap));
            traps->capacity = capacity;
        }
        ((SqTrap *)traps->values)[traps->size++] = ((SqTrap *)base->traps.values)[base->traps.size - 1];
        base->traps.size--;
    }
    generator->state = 1;
    return 1;
}
