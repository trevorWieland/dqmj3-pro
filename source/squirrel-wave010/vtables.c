#include "closure_release.h"

static void closure_destructor_entry(SqRef *reference)
{
    fn_006a769c(reference);
}

const SqVTable sq_script_closure_vtable = {closure_destructor_entry, 0, fn_006a7610};
