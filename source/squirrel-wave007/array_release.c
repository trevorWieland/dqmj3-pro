#include "array_release.h"

void fn_00665bd4(SqRef *reference)
{
    reference->vtable->unknown_0(reference);
    sq_deallocate(reference, sizeof(SqArray));
}

SqRef *fn_00665c60(SqRef *reference)
{
    SqArray *array = (SqArray *)reference;
    reference->vtable = &sq_array_vtable;
    if (!(reference->references & 0x80000000u))
        fn_0024d73c(&array->shared->chain, reference);
    fn_0077f3f8(&array->vector);
    reference->vtable = &sq_release007_weak_vtable;
    if (reference->weak) {
        ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u;
        ((SqWeakObject007 *)reference->weak)->object.value.reference = 0;
    }
    return reference;
}
