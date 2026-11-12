#include "vm_views.h"


/* vm_stack_push -- 0x00173d1c, 36 bytes, ARM, 59 call sites, draft.
 *
 * Appends `value` at vm->top and increments top, assigning through
 * vm_object_assign so the pushed value's reference is counted.
 *
 * Evidence: the reconstructed body; call sites are the VM's push helpers.
 */
void vm_stack_push(VmStackView *vm, const VmObject *value)
{
    VmObject *destination = vm->stack + vm->top;
    vm->top++;
    vm_object_assign(destination, value);
}
