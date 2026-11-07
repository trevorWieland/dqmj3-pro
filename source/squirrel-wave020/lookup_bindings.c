#include "lookup.h"

SqPrefixObject012 *sq_lookup_stack020(const void *vm)
{
    SqPrefixObject012 *stack;
    __builtin_memcpy(&stack, (const unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, stack), sizeof(stack));
    return stack;
}

SqPrototypeI32 sq_lookup_top020(const void *vm)
{
    SqPrototypeI32 top;
    __builtin_memcpy(&top, (const unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, top), sizeof(top));
    return top;
}

SqPrototypeI32 sq_lookup_base020(const void *vm)
{
    SqPrototypeI32 base;
    __builtin_memcpy(&base, (const unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, base), sizeof(base));
    return base;
}

SqTable019 *sq_lookup_root020(const void *vm)
{
    SqTable019 *root;
    __builtin_memcpy(&root, (const unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, root), sizeof(root));
    return root;
}

SqLookupSharedStorage020 *sq_lookup_shared020(const void *vm)
{
    return (SqLookupSharedStorage020 *)sq_native_creation_shared016(vm);
}

void sq_lookup_push020(void *vm, const SqPrefixObject012 *value)
{
    SqPrototypeI32 top = sq_lookup_top020(vm), next = top + 1;
    __builtin_memcpy((unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, top), &next, sizeof(next));
    sq_prefix_assign(sq_lookup_stack020(vm) + top, value);
}

void sq_lookup_pop020(void *vm)
{
    SqPrototypeI32 top = sq_lookup_top020(vm) - 1;
    __builtin_memcpy((unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, top), &top, sizeof(top));
    sq_prefix_clear(sq_lookup_stack020(vm) + top);
}

void sq_lookup_assign_unwrapped020(SqPrefixObject012 *destination, SqPrefixObject012 incoming)
{
    if (incoming.type == 0x08010000u) incoming = ((SqWeakReference014 *)incoming.value.reference)->object;
    sq_prefix_assign(destination, &incoming);
}

SqPrototypeI32 sq_lookup_integer020(const SqPrefixObject012 *key)
{
    return key->type == 0x05000004u ? (SqPrototypeI32)key->value.floating : key->value.integer;
}
