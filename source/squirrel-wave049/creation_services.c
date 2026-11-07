#include "startup.h"

void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{
    return sq_startup_allocate045(bytes,_Alignof(SqNativeClosure013));
}

void *sq_native_create_reallocate016(void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    return sq_startup_resize045(pointer,old_bytes,new_bytes,_Alignof(SqPrefixObject012));
}

SqPrefixObject012 *sq_native_creation_top016(const void *storage)
{
    const SqVm040 *vm=storage;
    return vm->stack.values+vm->top-1;
}

void sq_native_creation_pop016(void *storage)
{
    SqVm040 *vm=storage;
    sq_prefix_clear(vm->stack.values+--vm->top);
}

void sq_native_creation_push016(void *storage,const SqPrefixObject012 *object)
{
    sq_vm_push022(storage,object);
}

void sq_lookup_push020(void *storage,const SqPrefixObject012 *object)
{
    sq_vm_push022(storage,object);
}
