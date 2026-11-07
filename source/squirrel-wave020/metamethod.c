#include "metamethod.h"

void sq_lookup_bind_names020(SqPrefixState012 *shared, SqPrefixVector012 *names)
{
    __builtin_memcpy(shared->unknown_0000, &names, sizeof(names));
}

SqPrefixVector012 *sq_lookup_names020(const SqPrefixState012 *shared)
{
    SqPrefixVector012 *names;
    __builtin_memcpy(&names, shared->unknown_0000, sizeof(names));
    return names;
}

_Bool sq_lookup_table_meta020(SqTable019 *table, void *vm, SqPrototypeU32 selector, SqPrefixObject012 *destination)
{
    SqTable019 *delegate = table->delegate;
    if (!delegate) return 0;
    SqPrefixState012 *shared = sq_native_creation_shared016(vm);
    SqPrefixVector012 *names = sq_lookup_names020(shared);
    return sq_table_get019(delegate, names->values + selector, destination);
}
