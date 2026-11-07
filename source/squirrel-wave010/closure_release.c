#include "closure_release.h"

static void release_object(const SqObject *object)
{
    if (object->type & 0x08000000u) {
        SqRef *reference = object->value.reference;
        reference->references -= 1;
        if (!reference->references)
            reference->vtable->release(reference);
    }
}

void sq_legacy_script_closure_release010(SqRef *reference)
{
    reference->vtable->unknown_0(reference);
    sq_deallocate(reference, sizeof(SqScriptClosure010));
}

SqRef *sq_legacy_script_closure_destroy010(SqRef *reference)
{
    SqScriptClosure010 *closure = (SqScriptClosure010 *)reference;
    reference->vtable = &sq_script_closure_vtable;
    if (!(reference->references & 0x80000000u))
        fn_0024d73c(&closure->shared->chain, reference);
    fn_0077f3f8(&closure->defaults);
    fn_0077f3f8(&closure->outers);
    release_object(&closure->function);
    release_object(&closure->environment);
    reference->vtable = &sq_release007_weak_vtable;
    if (reference->weak) {
        ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u;
        ((SqWeakObject007 *)reference->weak)->object.value.reference = 0;
    }
    return reference;
}
