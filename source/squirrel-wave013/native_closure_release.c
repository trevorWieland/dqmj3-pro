#include "native_closure_release.h"
#include "../squirrel-wave011/prototype_internal.h"

static void unlink_collectable(SqPrefixState012 *shared, SqPrefixCollectable012 *node)
{
    if (node->previous) node->previous->next = node->next;
    else shared->chain = node->next;
    if (node->next) node->next->previous = node->previous;
    node->next = node->previous = 0;
}

static void destroy_outers(SqPrefixVector012 *vector)
{
    if (vector->capacity) {
        for (SqPrototypeU32 index = 0; index < vector->size; ++index)
            release_object(vector->values + index);
        sq_native_closure_deallocate013(vector->values, vector->capacity * sizeof(SqPrefixObject012));
    }
}

void fn_00299518(SqNativeClosure013 *closure)
{
    closure->reference.prefix.vtable->destroy(closure);
    sq_native_closure_deallocate013(closure, sizeof(SqNativeClosure013));
}

SqNativeClosure013 *fn_002995a4(SqNativeClosure013 *closure)
{
    closure->reference.prefix.vtable = &sq_native_closure_vtable013;
    if (!(closure->reference.prefix.references & 0x80000000u))
        unlink_collectable(closure->shared, &closure->reference);
    release_object(&closure->name);
    release_object(&closure->environment);
    destroy_outers(&closure->outers);
    if (closure->type_checks.capacity)
        sq_native_closure_deallocate013(closure->type_checks.values, closure->type_checks.capacity * sizeof(SqPrototypeI32));
    closure->reference.prefix.vtable = &sq_prototype_base_vtable011;
    if (closure->reference.prefix.weak) {
        SqPrototypeWeak011 *weak = closure->reference.prefix.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return closure;
}
