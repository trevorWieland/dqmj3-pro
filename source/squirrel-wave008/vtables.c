#include "generator_release.h"

static void generator_destructor_entry(SqRef *reference)
{
    fn_00202e68(reference);
}

const SqVTable sq_generator_vtable = {generator_destructor_entry, 0, fn_00202dcc};
