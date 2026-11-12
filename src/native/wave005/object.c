#include "vm_views.h"


/* vm_object_assign -- 0x0019e864, 96 bytes, ARM, 214 call sites, byte-identical.
 *
 * Assigns one VM object to another with reference counting: copies the 8-byte
 * value, increments the incoming reference when the 0x08000000 tag is set,
 * decrements the previous one and calls its release operation at zero.
 *
 * Evidence: the reconstructed body against VmObject; the report credits it, and
 * the call sites are the VM's own value moves and stack pushes.
 */
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
