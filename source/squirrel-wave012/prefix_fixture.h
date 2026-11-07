#ifndef SQ_PREFIX_FIXTURE012_H
#define SQ_PREFIX_FIXTURE012_H

#include "reference_prefix.h"

typedef struct {
    SqU32 calls;
    SqU32 kind;
    SqU32 released_count;
    SqU32 destination_type;
    SqU32 incoming_count;
    const void *destination;
    const void *incoming;
    void *vector;
    SqU32 action;
    void *spare;
    SqU32 spare_capacity;
} SqPrefixObserver012;

extern SqPrefixObserver012 sq_prefix_observer012;
extern const SqPrototypeVTable011 sq_prefix_weak_vtable012;
#if PREFIX_OPAQUE_FULL012
extern const SqPrototypeVTable011 sq_prefix_full_vtable012;
void sq_prefix_full_bridge012(void *opaque);
#else
extern const SqVTable sq_prefix_full_vtable012;
void sq_prefix_full_bridge012(SqRef *opaque);
#endif
void sq_prefix_weak_bridge012(void *opaque);
void sq_prefix_unhandled012(SqU32 type, void *object);

_Static_assert(sizeof(void *) != 4 || sizeof(SqPrefixObserver012) == 44, "target observer record");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqPrefixObserver012, destination) == 20, "target observed destination");

#endif
