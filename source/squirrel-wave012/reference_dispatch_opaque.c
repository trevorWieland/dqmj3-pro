#include "reference_prefix.h"

void sq_prefix_finalize012(SqU32 type, void *object)
{
    (void)type;
    const SqPrototypeVTable011 *vtable;
    __builtin_memcpy(&vtable, object, sizeof(vtable));
    vtable->release(object);
}
