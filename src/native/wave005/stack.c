#include "vm_views.h"


/* vm_stack_count -- 0x00157ff4, 16 bytes, ARM, 46 call sites, byte-identical.
 *
 * Returns top - base: the number of live slots in the VM stack view.
 */
VmI32 vm_stack_count(const VmStackView *vm)
{
    return vm->top - vm->base;
}

/* vm_stack_at -- 0x00173d40, 12 bytes, ARM, 60 call sites, byte-identical.
 *
 * Returns the stack slot at `index`; no bounds check, as in the original.
 */
VmObject *vm_stack_at(const VmStackView *vm, VmI32 index)
{
    return vm->stack + index;
}
