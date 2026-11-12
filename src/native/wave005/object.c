#include "vm_views.h"

VmObject *vm_object_assign(VmObject *destination, const VmObject *source)
{
    VmValue incoming = source->value;
    VmU32 previous_type = destination->type;
    VmRefNode *previous = destination->value.reference;
    destination->value = incoming;
    destination->type = source->type;
    if (destination->type & 0x08000000u) {
        incoming.reference->references++;
    }
    if ((previous_type & 0x08000000u) && --previous->references == 0) {
        previous->vtable->release(previous);
    }
    return destination;
}
