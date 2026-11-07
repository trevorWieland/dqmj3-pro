#include "class_release.h"

static void class_destructor_entry(SqRef *reference)
{
    fn_00666144(reference);
}

const SqVTable sq_class_vtable = {class_destructor_entry, 0, fn_00665ee0};
