#include "call_views.h"

static void clear_object(SqObject *object)
{
    SqRef *reference = object->value.reference;
    SqU32 type = object->type;
    object->type = 0x01000001u;
    object->value.reference = 0;
    if ((type & 0x08000000u) && --reference->references == 0) {
        reference->vtable->release(reference);
    }
}

static void pop_call(SqCallVM *vm)
{
    vm->call_count--;
    clear_object(&vm->current->closure);
    vm->current = vm->call_count ? vm->call_stack + vm->call_count - 1 : 0;
}

_Bool fn_00196f6c(SqCallVM *vm, SqNativeClosure *closure, SqI32 arguments,
                  SqI32 base, SqObject *result, _Bool *suspend)
{
    if (vm->native_calls > 99) {
        sq_call_error(vm, "Native stack overflow");
        return 0;
    }
    SqI32 check = closure->parameter_check;
    if ((check > 0 && check != arguments) || (check < 0 && arguments < -check)) {
        sq_call_error(vm, "wrong number of parameters");
        return 0;
    }
    const SqI32 *masks = closure->type_checks.values;
    for (SqI32 index = 0; index < arguments && (SqU32)index < closure->type_checks.size; index++) {
        SqU32 type = vm->frame.stack[base + index].type;
        if (masks[index] != -1 && !(type & (SqU32)masks[index])) {
            sq_call_type_error(vm, index, masks[index], type);
            return 0;
        }
    }
    vm->native_calls++;
    SqVector stack = sq_call_stack_vector(vm);
    if (vm->frame.top + 10 > (SqI32)stack.size) {
        SqObject null = {0x01000001u, {.bits = 0}};
        fn_0019d320(&stack, stack.size + 20, &null);
        sq_call_publish_stack(vm, stack);
    }
    SqI32 old_top = vm->frame.top;
    SqI32 old_base = vm->frame.base;
    vm->frame.top = base + arguments;
    SqCallInfo local = {0};
    local.closure.type = 0x01000001u;
    SqObject owner = {0x08000200u, {.reference = &closure->reference}};
    fn_0019e864(&local.closure, &owner);
    local.previous_base = base - old_base;
    local.previous_top = old_top - old_base;
    local.calls = 1;
    if (vm->call_count == vm->allocated_calls) {
        SqCallInfo empty = {0};
        empty.closure.type = 0x01000001u;
        SqI32 allocated = vm->allocated_calls * 2;
        fn_0019d408(&vm->call_data, (SqU32)allocated, &empty);
        vm->call_stack = vm->call_data.values;
        vm->allocated_calls = allocated;
    }
    vm->current = vm->call_stack + vm->call_count;
    vm->current->instruction = local.instruction;
    vm->current->literals = local.literals;
    fn_0019e864(&vm->current->closure, &local.closure);
    vm->current->generator = local.generator;
    vm->current->traps = local.traps;
    vm->current->previous_base = local.previous_base;
    vm->current->previous_top = local.previous_top;
    vm->current->target = local.target;
    vm->current->calls = local.calls;
    vm->current->root = local.root;
    vm->current->varargs_size = local.varargs_size;
    vm->current->varargs_base = local.varargs_base;
    vm->call_count++;
    vm->frame.base = base;
    for (SqU32 index = 0; index < closure->outers.size; index++) {
        fn_00173d1c(&vm->frame, closure->outers.values + index);
    }
    if (closure->environment.type == 0x08010000u) {
        SqObject environment;
        __builtin_memcpy(&environment, (unsigned char *)closure->environment.value.reference + sizeof(SqWeakPrefix), sizeof(environment));
        fn_0019e864(vm->frame.stack + base, &environment);
    }
    SqI32 returned = closure->function(vm);
    vm->native_calls--;
    *suspend = returned == -666;
    if (returned < 0 && !*suspend) {
        vm->frame.base = old_base;
        vm->frame.top = old_top;
        pop_call(vm);
        fn_00198230(vm, &vm->last_error);
        clear_object(&local.closure);
        return 0;
    }
    if (returned) {
        SqObject *top = vm->frame.stack + vm->frame.top - 1;
        fn_0019e864(result, top);
        clear_object(top);
    } else {
        SqObject null = {0x01000001u, {.bits = 0}};
        fn_0019e864(result, &null);
    }
    vm->frame.base = old_base;
    vm->frame.top = old_top;
    pop_call(vm);
    clear_object(&local.closure);
    return 1;
}
