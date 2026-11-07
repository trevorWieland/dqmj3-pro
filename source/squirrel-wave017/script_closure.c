#include "script_closure.h"
#include "../squirrel-wave011/prototype_internal.h"

static void unlink_collectable(SqPrefixState012 *shared, SqPrefixCollectable012 *closure)
{
    if (closure->previous) closure->previous->next = closure->next;
    else shared->chain = closure->next;
    if (closure->next) closure->next->previous = closure->previous;
    closure->next = closure->previous = 0;
}

static void destroy_values(SqPrefixVector012 *vector)
{
    if (vector->capacity) {
        for (SqPrototypeU32 index = 0; index < vector->size; ++index)
            release_object(vector->values + index);
        sq_script_closure_deallocate017(vector->values, vector->capacity * sizeof(SqPrefixObject012));
    }
}

void sq_script_closure_release017(SqScriptClosure017 *closure)
{
    closure->reference.prefix.vtable->destroy(closure);
    sq_script_closure_deallocate017(closure, sizeof(SqScriptClosure017));
}

SqScriptClosure017 *sq_script_closure_destroy017(SqScriptClosure017 *closure)
{
    closure->reference.prefix.vtable = &sq_script_closure_vtable017;
    if (!(closure->reference.prefix.references & 0x80000000u))
        unlink_collectable(closure->shared, &closure->reference);
    destroy_values(&closure->defaults);
    destroy_values(&closure->outers);
    release_object(&closure->function);
    release_object(&closure->environment);
    closure->reference.prefix.vtable = &sq_prototype_base_vtable011;
    if (closure->reference.prefix.weak) {
        SqPrototypeWeak011 *weak = closure->reference.prefix.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return closure;
}
