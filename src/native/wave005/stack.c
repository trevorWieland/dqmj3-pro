#include "vm_views.h"

VmI32 fn_00157ff4(const VmStackView *vm)
{
    return vm->top - vm->base;
}

VmObject *vm_stack_at(const VmStackView *vm, VmI32 index)
{
    return vm->stack + index;
}
