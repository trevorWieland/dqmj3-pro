#include "native_create.h"

static SqPrototypeI32 current_top(const void *vm)
{
    SqPrototypeI32 top;
    __builtin_memcpy(&top, (const unsigned char *)vm + __builtin_offsetof(SqNativeCreationStorage016, top), sizeof(top));
    return top;
}

static SqPrefixObject012 *values(const void *vm)
{
    SqPrefixObject012 *objects;
    __builtin_memcpy(&objects, (const unsigned char *)vm + __builtin_offsetof(SqNativeCreationStorage016, stack), sizeof(objects));
    return objects;
}

static void publish_top(void *vm, SqPrototypeI32 top)
{
    __builtin_memcpy((unsigned char *)vm + __builtin_offsetof(SqNativeCreationStorage016, top), &top, sizeof(top));
}

SqPrefixState012 *sq_native_creation_shared016(const void *vm)
{
    SqPrefixState012 *state;
    __builtin_memcpy(&state, (const unsigned char *)vm + __builtin_offsetof(SqNativeCreationStorage016, shared), sizeof(state));
    return state;
}

SqPrefixObject012 *sq_native_creation_top016(const void *vm)
{
    return values(vm) + current_top(vm) - 1;
}

void sq_native_creation_pop016(void *vm)
{
    SqPrototypeI32 top = current_top(vm) - 1;
    publish_top(vm, top);
    SqPrefixObject012 empty;
    empty.type = 0x01000001u;
    empty.value.reference = 0;
    sq_prefix_assign(values(vm) + top, &empty);
}

void sq_native_creation_push016(void *vm, const SqPrefixObject012 *object)
{
    SqPrototypeI32 top = current_top(vm);
    SqPrefixObject012 *destination = values(vm) + top;
    publish_top(vm, top + 1);
    sq_prefix_assign(destination, object);
}
