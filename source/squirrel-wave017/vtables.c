#include "script_closure.h"

static void script_destroy_entry(void *opaque)
{
    SqScriptClosure017 *closure = opaque;
    sq_script_closure_destroy017(closure);
}

static void script_release_entry(void *opaque)
{
    SqScriptClosure017 *closure = opaque;
    sq_script_closure_release017(closure);
}

const SqPrototypeVTable011 sq_script_closure_vtable017 = {script_destroy_entry, 0, script_release_entry};
