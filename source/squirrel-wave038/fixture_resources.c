#include "../squirrel-wave034/fixture_services.c"
#include "capture.h"

void *sq_script_create_allocate038(SqPrototypeU32 bytes)
{
    if(bytes!=sizeof(SqScriptClosure017))sq_class_failure030();
    return fixture_allocate034(bytes,6);
}

void *sq_script_create_reallocate038(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    return fixture_class_reallocate_saved034(storage,previous,next);
}

void *fixture_prototype_allocate038(SqPrototypeU32 bytes)
{
    return fixture_allocate034(bytes,7);
}
