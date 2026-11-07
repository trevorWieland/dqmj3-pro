#include "array_release.h"

static void array_destructor_entry(SqRef *reference)
{
    fn_00665c60(reference);
}

const SqVTable sq_array_vtable = {array_destructor_entry, 0, fn_00665bd4};
const SqVTable sq_release007_weak_vtable = {0, 0, 0};
