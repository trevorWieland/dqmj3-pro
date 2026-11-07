#include "native_closure_release.h"

static void native_destructor_entry(void *opaque)
{
    SqNativeClosure013 *closure = opaque;
    fn_002995a4(closure);
}

static void native_release_entry(void *opaque)
{
    SqNativeClosure013 *closure = opaque;
    fn_00299518(closure);
}

const SqPrototypeVTable011 sq_native_closure_vtable013 = {native_destructor_entry, 0, native_release_entry};
