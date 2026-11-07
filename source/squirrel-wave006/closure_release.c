#include "execute_views.h"

static void destroy_vector(SqVector *vector)
{
    if (!vector->capacity) return;
    for (SqU32 index = 0; index < vector->size; index++)
        sq_execute_release(vector->values[index].type, vector->values[index].value);
    sq_deallocate(vector->values, vector->capacity * sizeof(SqObject));
}

void sq_execute_legacy_closure_release(SqRef *reference)
{
    SqScriptClosure *closure = (SqScriptClosure *)reference;
    if (!(reference->references & 0x80000000u)) {
        if (reference->previous) reference->previous->next = reference->next;
        else closure->shared->chain = reference->next;
        if (reference->next) reference->next->previous = reference->previous;
        reference->next = 0;
        reference->previous = 0;
    }
    destroy_vector(&closure->defaults);
    destroy_vector(&closure->outers);
    sq_execute_release(closure->function.type, closure->function.value);
    sq_execute_release(closure->environment.type, closure->environment.value);
    reference->vtable = &sq_weak_prefix_vtable;
    if (reference->weak) {
        SqWeakObject *weak = reference->weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    sq_deallocate(closure, sizeof(SqScriptClosure));
}
