#include "lookup.h"

_Bool sq_lookup_meta_call020(void *vm, void *owner, SqPrototypeU32 selector,
    SqPrototypeI32 arguments, SqPrefixObject012 *destination)
{
    const SqPrototypeVTable011 *prefix;
    __builtin_memcpy(&prefix, owner, sizeof(prefix));
    const SqLookupMetaVTable020 *methods = (const SqLookupMetaVTable020 *)prefix;
    SqPrefixObject012 callable = {0x01000001u, {.reference = 0}};
    _Bool success = methods->get_method(owner, vm, selector, &callable);
    if (success) success = sq_lookup_invoke020(vm, &callable, arguments,
        sq_lookup_top020(vm) - arguments, destination, 0);
    for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);
    sq_prefix_release(callable.type, callable.value);
    return success;
}
