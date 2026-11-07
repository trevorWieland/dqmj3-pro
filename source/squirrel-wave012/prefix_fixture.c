#include "prefix_fixture.h"

SqPrefixObserver012 sq_prefix_observer012;

static void observe(SqU32 kind, SqU32 count)
{
    sq_prefix_observer012.calls++;
    sq_prefix_observer012.kind = kind;
    sq_prefix_observer012.released_count = count;
    __builtin_memcpy(&sq_prefix_observer012.destination_type, sq_prefix_observer012.destination, sizeof(SqU32));
    sq_prefix_observer012.incoming_count = sq_prefix_observer012.incoming ? sq_prefix_count(sq_prefix_observer012.incoming) : 0;
    if (sq_prefix_observer012.action == 1) {
        SqU32 size = 1;
        __builtin_memcpy((unsigned char *)sq_prefix_observer012.vector + __builtin_offsetof(SqVector, size), &size, sizeof(size));
    } else if (sq_prefix_observer012.action == 2) {
        SqU32 size = 4;
        __builtin_memcpy(sq_prefix_observer012.vector, &sq_prefix_observer012.spare, sizeof(void *));
        __builtin_memcpy((unsigned char *)sq_prefix_observer012.vector + __builtin_offsetof(SqVector, size), &size, sizeof(size));
        __builtin_memcpy((unsigned char *)sq_prefix_observer012.vector + __builtin_offsetof(SqVector, capacity),
                         &sq_prefix_observer012.spare_capacity, sizeof(SqU32));
    }
    sq_prefix_observer012.action = 0;
}

void sq_prefix_weak_bridge012(void *opaque)
{
    SqPrototypePrefix011 *actual = opaque;
    observe(1, actual->references);
}

#if PREFIX_OPAQUE_FULL012
void sq_prefix_full_bridge012(void *opaque)
{
    SqPrefixCollectable012 *actual = opaque;
    observe(2, actual->prefix.references);
}
#else
void sq_prefix_full_bridge012(SqRef *opaque)
{
    SqRef *actual = opaque;
    observe(2, actual->references);
}
#endif

const SqPrototypeVTable011 sq_prefix_weak_vtable012 = {0, 0, sq_prefix_weak_bridge012};
#if PREFIX_OPAQUE_FULL012
const SqPrototypeVTable011 sq_prefix_full_vtable012 = {0, 0, sq_prefix_full_bridge012};
#else
const SqVTable sq_prefix_full_vtable012 = {0, 0, sq_prefix_full_bridge012};
#endif
