#include "script_create.h"

static void link_closure(SqPrefixState012 *state, SqScriptClosure017 *closure)
{
    closure->reference.previous = 0;
    closure->reference.next = state->chain;
    if (state->chain) state->chain->previous = &closure->reference;
    state->chain = &closure->reference;
}

static void reserve(SqPrefixVector012 *vector, SqPrototypeU32 capacity)
{
    SqPrefixObject012 *values = sq_script_create_reallocate018(vector->values,
        vector->capacity * sizeof(*values), capacity * sizeof(*values));
    vector->capacity = capacity;
    vector->values = values;
}

static void append(SqPrefixVector012 *vector, const SqPrefixObject012 *incoming)
{
    if (vector->capacity <= vector->size) {
        SqPrototypeU32 capacity = vector->size ? vector->size * 2 : 4;
        vector->values = sq_script_create_reallocate018(vector->values,
            vector->capacity * sizeof(SqPrefixObject012), capacity * sizeof(SqPrefixObject012));
        vector->capacity = capacity;
    }
    SqPrefixObject012 *slot = vector->values + vector->size++;
    *slot = *incoming;
    sq_prefix_retain(slot->type, slot->value);
}

_Bool sq_script_create018(void *vm, SqPrefixObject012 *destination, SqPrototype011 *function)
{
    SqPrefixState012 *state = sq_native_creation_shared016(vm);
    SqScriptClosure017 *closure = sq_script_create_allocate018(sizeof(*closure));
    if (closure) {
        closure->reference.prefix.references = 0;
        closure->reference.prefix.vtable = &sq_script_closure_vtable017;
        closure->reference.prefix.weak = 0;
        closure->environment = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        closure->function = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        closure->outers = (SqPrefixVector012){0, 0, 0};
        closure->defaults = (SqPrefixVector012){0, 0, 0};
        SqPrefixObject012 prototype = {0x08002000u, {.reference = function}};
        sq_prefix_retain(prototype.type, prototype.value);
        sq_prefix_assign(&closure->function, &prototype);
        sq_prefix_release(prototype.type, prototype.value);
        closure->shared = state;
        closure->reference.next = closure->reference.previous = 0;
        link_closure(state, closure);
    }
    SqPrototypeI32 outer_count = function->outer_count;
    if (outer_count) {
        reserve(&closure->outers, (SqPrototypeU32)outer_count);
        for (SqPrototypeI32 index = 0; index < outer_count; ++index) {
            SqPrototypeOuter011 *outer = function->outers + index;
            switch ((unsigned char)outer->kind) {
            case 0: {
                const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, outer->source.value.integer);
                append(&closure->outers, incoming);
                break;
            }
            case 1: {
                SqPrefixObject012 empty = {0x01000001u, {.reference = 0}};
                append(&closure->outers, &empty);
                const SqPrefixObject012 *receiver = sq_script_creation_local018(vm, 0);
                if (!sq_script_creation_lookup018(vm, receiver, &outer->source,
                        closure->outers.values + closure->outers.size - 1, 0, 1)) {
                    sq_script_creation_index_error018(vm, &outer->source);
                    return 0;
                }
                break;
            }
            case 2: {
                const SqPrefixObject012 *incoming = sq_script_creation_parent_outer018(vm, outer->source.value.integer);
                append(&closure->outers, incoming);
                break;
            }
            }
        }
    }
    SqPrototypeI32 default_count = function->default_count;
    if (default_count) {
        reserve(&closure->defaults, (SqPrototypeU32)default_count);
        for (SqPrototypeI32 index = 0; index < default_count; ++index) {
            const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, function->defaults[index]);
            append(&closure->defaults, incoming);
        }
    }
    SqPrefixObject012 temporary = {0x08000100u, {.reference = closure}};
    sq_prefix_retain(temporary.type, temporary.value);
    sq_prefix_assign(destination, &temporary);
    sq_prefix_release(temporary.type, temporary.value);
    return 1;
}
