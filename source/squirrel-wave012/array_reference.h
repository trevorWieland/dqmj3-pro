#ifndef DQMJ3_SQUIRREL_ARRAY_REFERENCE012_H
#define DQMJ3_SQUIRREL_ARRAY_REFERENCE012_H

#include "reference_prefix.h"

typedef struct SqOpaqueArray012 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqPrefixVector012 vector;
} SqOpaqueArray012;

extern const SqPrototypeVTable011 sq_opaque_array_vtable012;
void *sq_opaque_array_allocate012(SqPrototypeU32 bytes);
SqOpaqueArray012 *sq_opaque_array_create012(SqPrefixState012 *state, SqPrototypeU32 requested);
void sq_opaque_array_release012(SqOpaqueArray012 *array);
SqOpaqueArray012 *sq_opaque_array_destroy012(SqOpaqueArray012 *array);
void sq_prefix_chain_unlink012(SqPrefixCollectable012 **head, SqPrefixCollectable012 *object);

_Static_assert(sizeof(void *) != 4 || sizeof(SqOpaqueArray012) == 36, "Target array allocation");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqOpaqueArray012, vector) == 24, "Target array values");

#endif
