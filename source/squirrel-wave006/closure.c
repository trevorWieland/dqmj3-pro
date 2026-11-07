#include "execute_views.h"

static void reserve(SqVector *vector, SqU32 capacity)
{
    vector->values = sq_reallocate(vector->values, vector->capacity * sizeof(SqObject), capacity * sizeof(SqObject));
    vector->capacity = capacity;
}

static void append(SqVector *vector, const SqObject *source)
{
    SqObject *destination = vector->values + vector->size++;
    *destination = *source;
    if (destination->type & 0x08000000u) destination->value.reference->references++;
}

_Bool fn_00196b08(SqExecuteVM *vm, SqObject *destination, SqFunction *function)
{
    SqScriptClosure *closure = sq_allocate(sizeof(SqScriptClosure));
    if (!closure) sq_execute_unsupported(vm, -480);
    *closure = (SqScriptClosure){0};
    closure->reference.vtable = &sq_script_closure_vtable;
    closure->shared = vm->base.shared;
    closure->environment.type = 0x01000001u;
    closure->function = (SqObject){0x08002000u, {.reference = (SqRef *)function}};
    function->reference.references++;
    fn_0019e8c4(&closure->shared->chain, &closure->reference);
    if (function->outer_count) {
        reserve(&closure->outers, (SqU32)function->outer_count);
        SqOuterDescriptor *descriptors = function->outers;
        for (SqI32 index = 0; index < function->outer_count; index++) {
            SqOuterDescriptor *outer = descriptors + index;
            switch (outer->kind & 255) {
            case 0:
                append(&closure->outers, vm->base.frame.stack + vm->base.frame.base + outer->source.value.integer);
                break;
            case 1: {
                SqObject null = {0x01000001u, {.reference = 0}};
                append(&closure->outers, &null);
                if (!fn_00198578(vm, vm->base.frame.stack + vm->base.frame.base, &outer->source,
                                 closure->outers.values + closure->outers.size - 1, 0, 1))
                    sq_execute_unsupported(vm, -481);
                break;
            }
            case 2: {
                SqScriptClosure *parent = (SqScriptClosure *)vm->base.current->closure.value.reference;
                append(&closure->outers, parent->outers.values + outer->source.value.integer);
                break;
            }
            }
        }
    }
    if (function->default_count) {
        reserve(&closure->defaults, (SqU32)function->default_count);
        for (SqI32 index = 0; index < function->default_count; index++)
            append(&closure->defaults, vm->base.frame.stack + vm->base.frame.base + function->defaults[index]);
    }
    SqObject object = {0x08000100u, {.reference = &closure->reference}};
    closure->reference.references++;
    fn_0019e864(destination, &object);
    sq_execute_release(object.type, object.value);
    return 1;
}
