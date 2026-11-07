#include "reference_prefix.h"

void sq_prefix_finalize012(SqU32 type, void *object)
{
    if (type == 0x08002000u) {
        const SqPrototypeVTable011 *vtable;
        __builtin_memcpy(&vtable, object, sizeof(vtable));
        vtable->release(object);
    } else if (type == 0x08000040u) {
        const SqVTable *vtable;
        __builtin_memcpy(&vtable, object, sizeof(vtable));
        vtable->release((SqRef *)object);
    } else {
        sq_prefix_unhandled012(type, object);
    }
}
