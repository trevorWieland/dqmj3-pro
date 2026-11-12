#include "vm_views.h"

void fn_00173d1c(VmStackView *vm, const VmObject *value)
{
    VmObject *destination = vm->stack + vm->top;
    vm->top++;
    vm_object_assign(destination, value);
}
