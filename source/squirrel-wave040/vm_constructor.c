#include "startup.h"

SqVm040 *fn_0015467c(SqVm040 *vm,SqSharedState040 *shared)
{
    const SqStartupServices040 *services=sq_startup_services040();
    vm->reference.prefix.references=0;
    vm->reference.prefix.weak=0;
    vm->reference.prefix.vtable=services->vm_operations;
    vm->stack.values=0;
    vm->stack.size=0;
    vm->stack.capacity=0;
    vm->varargs.values=0;
    vm->varargs.size=0;
    vm->varargs.capacity=0;
    sq_startup_null040(&vm->root);
    sq_startup_null040(&vm->error);
    sq_startup_null040(&vm->error_handler);
    sq_startup_null040(&vm->debug_hook);
    sq_startup_null040(&vm->temporary);
    vm->calls.values=0;
    vm->calls.size=0;
    vm->calls.capacity=0;
    vm->traps.values=0;
    vm->traps.size=0;
    vm->traps.capacity=0;
    vm->suspended_varargs_size=0;
    vm->suspended_varargs_base=0;
    vm->suspended_target=-1;
    vm->suspended=0;
    vm->suspended_traps=-1;
    vm->suspended_root=0;
    vm->foreign=0;
    vm->shared=shared;
    vm->native_depth=0;
    sq_prefix_assign(&vm->error,services->live_null_template);
    sq_prefix_assign(&vm->error_handler,services->live_null_template);
    sq_prefix_assign(&vm->debug_hook,services->live_null_template);
    vm->current=0;
    vm->reference.next=0;
    vm->shared=shared;
    vm->reference.previous=0;
    SqPrefixState012 *prefix=sq_shared_prefix040(shared);
    vm->reference.next=prefix->chain;
    if (prefix->chain)
        prefix->chain->previous=&vm->reference;
    prefix->chain=&vm->reference;
    return vm;
}
