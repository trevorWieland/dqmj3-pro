#include "fixture_internal.h"

static _Bool fixture_instance_method023(void *owner, void *vm, SqPrototypeU32 selector,
    SqPrefixObject012 *destination)
{
    return sq_instance_get_meta023(owner, vm, selector, destination);
}

void fixture_publish_instance023(void)
{
    SqLookupInstanceStorage020 *instance = fixture_instance020();
    SqLookupMetaVTable020 *storage = (void *)(table_fixture019.memory + 0x28100);
    storage->prefix = *instance->reference.prefix.vtable;
    storage->uninvoked_slot3 = storage->uninvoked_slot4 = 0;
    storage->get_method = fixture_instance_method023;
    instance->reference.prefix.vtable = &storage->prefix;
}
