#include "execute_views.h"

static void push_vararg(SqExecuteVM *vm, const SqObject *object)
{
    SqVector vector = sq_execute_varargs(vm);
    if (vector.size >= vector.capacity) {
        SqU32 capacity = vector.size ? vector.size * 2 : 4;
        vector.values = sq_reallocate(vector.values, vector.capacity * sizeof(SqObject), capacity * sizeof(SqObject));
        vector.capacity = capacity;
    }
    SqObject *destination = vector.values + vector.size++;
    sq_execute_publish_varargs(vm, vector);
    *destination = *object;
    if (destination->type & 0x08000000u) destination->value.reference->references++;
}

_Bool fn_00199cb8(SqExecuteVM *vm, SqScriptClosure *closure, SqI32 target, SqI32 arguments, SqI32 stack_base, _Bool tail)
{
    SqCallVM *base = &vm->base;
    SqFunction *function = (SqFunction *)closure->function.value.reference;
    SqI32 parameters = function->parameter_count;
    SqI32 new_top = stack_base + function->stack_size;
    SqI32 count = arguments;
    SqObject null = {0x01000001u, {.reference = 0}};
    if (parameters != count) {
        SqI32 defaults = function->default_count;
        SqI32 difference = parameters - count;
        if (defaults && count < parameters && difference <= defaults) {
            for (SqI32 index = defaults - difference; index < defaults; index++)
                vm_object_assign(base->frame.stack + stack_base + count++, closure->defaults.values + index);
        } else if (function->variable_parameters && count >= parameters) {
            for (SqI32 index = 0; index < count - parameters; index++) {
                SqObject *object = base->frame.stack + stack_base + parameters + index;
                push_vararg(vm, object);
                vm_object_assign(object, &null);
            }
        } else {
            sq_call_error(base, "wrong number of parameters");
            return 0;
        }
    }
    if (closure->environment.type == 0x08010000u) {
        SqObject environment;
        __builtin_memcpy(&environment, (unsigned char *)closure->environment.value.reference + sizeof(SqWeakPrefix), sizeof(environment));
        vm_object_assign(base->frame.stack + stack_base, &environment);
    }
    if (!tail) {
        SqCallInfo empty = {0};
        empty.closure.type = 0x01000001u;
        if (base->call_count == base->allocated_calls) {
            SqI32 allocated = base->allocated_calls * 2;
            fn_0019d408(&base->call_data, (SqU32)allocated, &empty);
            base->call_stack = base->call_data.values;
            base->allocated_calls = allocated;
        }
        SqCallInfo *frame = base->call_stack + base->call_count;
        frame->instruction = 0;
        frame->literals = 0;
        vm_object_assign(&frame->closure, &empty.closure);
        frame->generator = 0;
        frame->traps = 0;
        frame->previous_base = stack_base - base->frame.base;
        frame->previous_top = base->frame.top - base->frame.base;
        frame->target = target;
        frame->calls = 1;
        frame->root = 0;
        frame->varargs_size = 0;
        frame->varargs_base = 0;
        base->current = frame;
        base->call_count++;
    } else {
        base->current->calls++;
    }
    SqVector varargs = sq_execute_varargs(vm);
    base->current->varargs_size = (unsigned short)(count - parameters);
    base->current->varargs_base = (unsigned short)(varargs.size - base->current->varargs_size);
    SqObject object = {0x08000100u, {.reference = &closure->reference}};
    vm_object_assign(&base->current->closure, &object);
    base->current->literals = function->literals;
    base->current->instruction = function->instructions;
    SqVector stack = sq_call_stack_vector(base);
    if ((SqU32)new_top + (SqU32)function->stack_size * 2 > stack.size) {
        fn_0019d320(&stack, stack.size + (SqU32)function->stack_size * 2, &null);
        sq_call_publish_stack(base, stack);
    }
    base->frame.top = new_top;
    base->frame.base = stack_base;
    if (base->debug_hook.type != 0x01000001u && base->debug_hook.value.reference != base->current->closure.value.reference)
        sq_execute_debug(vm, 'c', 0);
    return 1;
}
