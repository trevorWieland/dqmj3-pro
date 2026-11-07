#include "fixture_internal.h"
#include "../squirrel-wave022/vm_call.h"

static _Noreturn void fixture_call_unsupported023(SqPrototypeU32 reason)
{
    lookup_fixture020.fault = reason;
    for (;;) { }
}

_Bool fixture_real_invoke023(void *vm, const SqPrefixObject012 *callable, SqPrototypeI32 arguments,
    SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error)
{
    return sq_vm_call022(vm, callable, arguments, base, destination, raise_error);
}

void *fixture_array_allocate023(SqPrototypeU32 bytes)
{
    if (fixture_variant023 < 200 || bytes != sizeof(SqOpaqueArray012)) fixture_call_unsupported023(96);
    fixture_event020(12, 1, 0);
    return table_fixture019.memory + 0x1d000;
}

void *fixture_vector_reallocate023(void *owner, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    if (fixture_variant023 < 200 || owner || old_bytes || new_bytes != 3 * sizeof(SqPrefixObject012))
        fixture_call_unsupported023(97);
    fixture_event020(13, 0, 3);
    return table_fixture019.memory + 0x1d800;
}

void fixture_call_deallocate023(void *owner, SqPrototypeU32 bytes)
{
    SqPrototypeU32 array = owner == table_fixture019.memory + 0x1d000;
    if (bytes != (array ? sizeof(SqOpaqueArray012) : 3 * sizeof(SqPrefixObject012)))
        fixture_call_unsupported023(98);
    fixture_event020(14, array ? 500 : 501, array ? 1 : 3);
}

void *sq_vm_call_reallocate022(void *owner, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    (void)owner; (void)old_bytes; (void)new_bytes;
    fixture_call_unsupported023(99);
}

_Bool sq_vm_execute022(void *vm, const SqPrefixObject012 *callable, SqPrototypeI32 target,
    SqPrototypeI32 arguments, SqPrototypeI32 base, SqPrefixObject012 *result,
    SqPrototypeU32 raise_error, SqPrototypeU32 execution_type)
{
    (void)vm; (void)callable; (void)target; (void)arguments; (void)base; (void)result;
    (void)raise_error; (void)execution_type;
    fixture_call_unsupported023(100);
}

_Bool sq_vm_create_instance022(void *vm, SqLookupClassStorage020 *klass,
    SqPrefixObject012 *instance, SqPrefixObject012 *constructor)
{
    (void)vm; (void)klass; (void)instance; (void)constructor;
    fixture_call_unsupported023(101);
}

void sq_vm_call_type_error022(void *vm, SqPrototypeI32 index, SqPrototypeI32 mask, SqPrototypeU32 type)
{
    (void)vm; (void)index; (void)mask; (void)type;
    fixture_call_unsupported023(102);
}

_Noreturn void sq_vm_array_failure022(void) { fixture_call_unsupported023(103); }
