#include "script_create.h"

static SqPrototypeI32 base(const void *vm)
{
    SqPrototypeI32 index;
    __builtin_memcpy(&index, (const unsigned char *)vm + __builtin_offsetof(SqScriptCreationStorage018, unknown_to_shared), sizeof(index));
    return index;
}

static SqPrefixObject012 *values(const void *vm)
{
    SqPrefixObject012 *objects;
    __builtin_memcpy(&objects, (const unsigned char *)vm + __builtin_offsetof(SqScriptCreationStorage018, stack), sizeof(objects));
    return objects;
}

const SqPrefixObject012 *sq_script_creation_local018(const void *vm, SqPrototypeI32 index)
{
    return values(vm) + base(vm) + index;
}

const SqPrefixObject012 *sq_script_creation_parent_outer018(const void *vm, SqPrototypeI32 index)
{
    const void *frame;
    SqPrefixObject012 caller;
    __builtin_memcpy(&frame, (const unsigned char *)vm + __builtin_offsetof(SqScriptCreationStorage018, unknown_to_shared) + 80, sizeof(frame));
    __builtin_memcpy(&caller, (const unsigned char *)frame + __builtin_offsetof(SqScriptCallStorage018, closure), sizeof(caller));
    SqScriptClosure017 *parent = caller.value.reference;
    return parent->outers.values + index;
}
