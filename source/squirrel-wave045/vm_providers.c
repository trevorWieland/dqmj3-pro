#include "initialization.h"

SqPrefixObject012 *sq_lookup_stack020(const void *storage)
{
    const SqVm040 *vm=storage;
    return vm->stack.values;
}

SqPrototypeI32 sq_lookup_top020(const void *storage)
{
    const SqVm040 *vm=storage;
    return vm->top;
}

SqPrototypeI32 sq_lookup_base020(const void *storage)
{
    const SqVm040 *vm=storage;
    return vm->base;
}

SqPrefixState012 *sq_native_creation_shared016(const void *storage)
{
    const SqVm040 *vm=storage;
    return sq_shared_prefix040(vm->shared);
}

void sq_vm_push022(void *storage,const SqPrefixObject012 *object)
{
    SqVm040 *vm=storage;
    SqPrototypeI32 index=vm->top++;
    sq_prefix_assign(vm->stack.values+index,object);
}
