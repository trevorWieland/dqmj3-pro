#include "weak_reference.h"

static void weak_destroy_entry(void *opaque)
{
    SqWeakReference014 *weak = opaque;
    fn_006a77c0(weak);
}

static void weak_release_entry(void *opaque)
{
    SqWeakReference014 *weak = opaque;
    fn_006a7780(weak);
}

const SqPrototypeVTable011 sq_weak_vtable014 = {weak_destroy_entry, 0, weak_release_entry};
