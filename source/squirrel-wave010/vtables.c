#include "closure_release.h"

static void closure_destructor_entry(SqRef *reference)
{
    sq_legacy_script_closure_destroy010(reference);
}

const SqVTable sq_script_closure_vtable = {closure_destructor_entry, 0, sq_legacy_script_closure_release010};
