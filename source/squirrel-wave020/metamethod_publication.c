#include "metamethod.h"

static _Bool table_method(void *owner, void *vm, SqPrototypeU32 selector, SqPrefixObject012 *destination)
{
    return sq_lookup_table_meta020((SqTable019 *)owner, vm, selector, destination);
}

void sq_lookup_publish_table_methods020(SqTable019 *table, SqLookupMetaVTable020 *storage,
    SqLookupPublicationObserver020 observer, void *context)
{
    storage->prefix = *table->reference.prefix.vtable;
    storage->uninvoked_slot3 = 0;
    storage->uninvoked_slot4 = 0;
    storage->get_method = table_method;
    table->reference.prefix.vtable = &storage->prefix;
    if (observer) observer(context, table, storage);
}
