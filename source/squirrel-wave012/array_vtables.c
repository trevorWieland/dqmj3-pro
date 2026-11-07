#include "array_reference.h"

static void destroy_array(void *object)
{
    sq_opaque_array_destroy012(object);
}

static void release_array(void *object)
{
    sq_opaque_array_release012(object);
}

const SqPrototypeVTable011 sq_opaque_array_vtable012 = {destroy_array, 0, release_array};
