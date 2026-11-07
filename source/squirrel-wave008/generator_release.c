#include "generator_release.h"

static void release_object(SqObject *object)
{
    if (object->type & 0x08000000u) {
        SqRef *reference = object->value.reference;
        reference->references -= 1;
        if (!reference->references)
            reference->vtable->release(reference);
    }
}

void fn_00202dcc(SqRef *reference)
{
    reference->vtable->unknown_0(reference);
    sq_deallocate(reference, sizeof(SqGenerator008));
}

SqRef *fn_00202e68(SqRef *reference)
{
    SqGenerator008 *generator = (SqGenerator008 *)reference;
    reference->vtable = &sq_generator_vtable;
    if (!(reference->references & 0x80000000u))
        fn_0024d73c(&generator->shared->chain, reference);
    if (generator->traps.capacity)
        sq_deallocate(generator->traps.values, generator->traps.capacity * sizeof(SqGeneratorTrap008));
    release_object(&generator->saved.closure);
    fn_0077f3f8(&generator->varargs);
    fn_0077f3f8(&generator->stack);
    release_object(&generator->closure);
    reference->vtable = &sq_release007_weak_vtable;
    if (reference->weak) {
        ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u;
        ((SqWeakObject007 *)reference->weak)->object.value.reference = 0;
    }
    return reference;
}
