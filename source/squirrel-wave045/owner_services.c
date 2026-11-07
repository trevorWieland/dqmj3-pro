#include "initialization.h"

const SqPrototypeVTable011 sq_prototype_base_vtable011={0,0,0};

void *sq_table_allocate019(SqPrototypeU32 bytes)
{
    return sq_startup_allocate045(bytes,_Alignof(SqTableNode019));
}

void sq_table_deallocate019(void *pointer,SqPrototypeU32 bytes)
{
    sq_startup_release045(pointer,bytes);
}

void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes)
{
    sq_startup_release045(pointer,bytes);
}

void *sq_opaque_array_allocate012(SqPrototypeU32 bytes)
{
    return sq_startup_allocate045(bytes,_Alignof(SqOpaqueArray012));
}

void *sq_reallocate(void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    return sq_startup_resize045(pointer,old_bytes,new_bytes,_Alignof(SqPrefixObject012));
}

void sq_deallocate(void *pointer,SqPrototypeU32 bytes)
{
    sq_startup_release045(pointer,bytes);
}

void *sq_vm_call_reallocate022(void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    return sq_startup_resize045(pointer,old_bytes,new_bytes,_Alignof(SqVmCallFrame022));
}

_Noreturn void sq_table_invalid019(void)
{
    __builtin_trap();
}

_Noreturn void sq_vm_array_failure022(void)
{
    __builtin_trap();
}
