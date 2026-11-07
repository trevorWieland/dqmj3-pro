#include "string.h"

static void string_destroy_entry(void *opaque)
{
    SqString015 *string = opaque;
    fn_0068f564(string);
}

static void string_release_entry(void *opaque)
{
    SqString015 *string = opaque;
    fn_0024d9cc(string);
}

const SqPrototypeVTable011 sq_string_vtable015 = {string_destroy_entry, 0, string_release_entry};
