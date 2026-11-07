#include "native_create.h"

static void link_closure(SqPrefixState012 *state, SqNativeClosure013 *closure)
{
    closure->reference.previous = 0;
    closure->reference.next = state->chain;
    if (state->chain) state->chain->previous = &closure->reference;
    state->chain = &closure->reference;
}

static void append_outer(SqPrefixVector012 *vector, const SqPrefixObject012 *incoming)
{
    if (vector->capacity <= vector->size) {
        SqPrototypeU32 capacity = vector->size ? vector->size * 2 : 4;
        SqPrefixObject012 *values = sq_native_create_reallocate016(vector->values,
            vector->capacity * sizeof(*values), capacity * sizeof(*values));
        vector->values = values;
        vector->capacity = capacity;
    }
    SqPrefixObject012 *destination = vector->values + vector->size;
    vector->size++;
    *destination = *incoming;
    sq_prefix_retain(destination->type, destination->value);
}

void fn_00176fc8(void *vm, SqNativeCallable013 function, SqPrototypeU32 free_variables)
{
    SqPrefixState012 *state = sq_native_creation_shared016(vm);
    SqNativeClosure013 *closure = sq_native_create_allocate016(sizeof(*closure));
    closure->reference.prefix.vtable = &sq_native_closure_vtable013;
    closure->reference.prefix.references = 0;
    closure->reference.prefix.weak = 0;
    closure->type_checks.values = 0;
    closure->type_checks.size = 0;
    closure->type_checks.capacity = 0;
    closure->outers.values = 0;
    closure->outers.size = 0;
    closure->outers.capacity = 0;
    closure->environment.type = 0x01000001u;
    closure->environment.value.reference = 0;
    closure->name.type = 0x01000001u;
    closure->name.value.reference = 0;
    closure->function = function;
    closure->shared = state;
    closure->reference.next = 0;
    closure->reference.previous = 0;
    link_closure(state, closure);
    closure->parameter_check = 0;
    for (SqPrototypeU32 index = 0; index < free_variables; index++) {
        const SqPrefixObject012 *incoming = sq_native_creation_top016(vm);
        append_outer(&closure->outers, incoming);
        sq_native_creation_pop016(vm);
    }
    SqPrefixObject012 temporary;
    temporary.type = 0x08000200u;
    temporary.value.reference = closure;
    sq_prefix_retain(temporary.type, temporary.value);
    sq_native_creation_push016(vm, &temporary);
    sq_prefix_release(temporary.type, temporary.value);
}
