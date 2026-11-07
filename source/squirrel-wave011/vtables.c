#include "prototype_release.h"

static void prototype_destructor_entry(void *opaque)
{
    SqPrototype011 *prototype = opaque;
    fn_00299424(prototype);
}

static void prototype_release_entry(void *opaque)
{
    SqPrototype011 *prototype = opaque;
    fn_00299114(prototype);
}

const SqPrototypeVTable011 sq_prototype_vtable011 = {prototype_destructor_entry, 0, prototype_release_entry};
const SqPrototypeVTable011 sq_prototype_base_vtable011 = {0, 0, 0};
