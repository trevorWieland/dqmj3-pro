#include "lookup_error.h"

char *sq_lookup_scratch020(SqPrefixState012 *shared, SqPrototypeI32 requested)
{
    SqLookupSharedStorage020 *storage = (SqLookupSharedStorage020 *)shared;
    if (requested > 0) {
        SqPrototypeI32 capacity = storage->scratch_capacity;
        if (capacity < requested) {
            SqPrototypeI32 next = requested + requested / 2;
            char *buffer = sq_lookup_reallocate020(storage->scratch, (SqPrototypeU32)capacity, (SqPrototypeU32)next);
            storage->scratch = buffer;
            storage->scratch_capacity = next;
        } else if (capacity >= requested * 32) {
            SqPrototypeI32 next = capacity / 2;
            char *buffer = sq_lookup_reallocate020(storage->scratch, (SqPrototypeU32)capacity, (SqPrototypeU32)next);
            storage->scratch = buffer;
            storage->scratch_capacity = next;
        }
    }
    return storage->scratch;
}
