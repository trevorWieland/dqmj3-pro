#ifndef SQ_PORTABLE_REFERENCE_PREFIX_H
#define SQ_PORTABLE_REFERENCE_PREFIX_H

#include "../squirrel-wave004/call_views.h"
#include "reference_types.h"

void sq_prefix_finalize012(SqU32 type, void *object);
void sq_prefix_unhandled012(SqU32 type, void *object);

SqU32 sq_prefix_count(const void *object);
void sq_prefix_retain(SqU32 type, SqPrefixValue012 value);
void sq_prefix_release(SqU32 type, SqPrefixValue012 value);
SqPrefixObject012 *sq_prefix_assign(SqPrefixObject012 *destination, const SqPrefixObject012 *source);
void sq_prefix_clear(SqPrefixObject012 *object);
void sq_prefix_scalar(SqPrefixObject012 *object, SqU32 type, SqU32 bits);
void sq_prefix_vector_resize(SqPrefixVector012 *vector, SqU32 requested, const SqPrefixObject012 *fill);
SqPrefixVector012 *sq_prefix_vector_destroy(SqPrefixVector012 *vector);
SqObject *sq_prefix_assign_legacy(SqObject *destination, const SqObject *source);
void sq_prefix_vector_resize_legacy(SqVector *vector, SqU32 requested, const SqObject *fill);
SqVector *sq_prefix_vector_destroy_legacy(SqVector *vector);
void sq_deallocate(void *pointer, SqU32 bytes);

_Static_assert(__builtin_offsetof(SqPrototypePrefix011, vtable) == __builtin_offsetof(SqRef, vtable), "vtable field offset");
_Static_assert(__builtin_offsetof(SqPrototypePrefix011, references) == __builtin_offsetof(SqRef, references), "counter field offset");
_Static_assert(__builtin_offsetof(SqPrototypePrefix011, weak) == __builtin_offsetof(SqRef, weak), "weak field offset");
_Static_assert(sizeof(SqPrototypePrefix011) < sizeof(SqRef), "prefix and collectable are distinct layouts");

_Static_assert(sizeof(SqPrefixObject012) == sizeof(SqObject), "tagged object storage width");
_Static_assert(sizeof(SqPrefixVector012) == sizeof(SqVector), "vector storage width");

#endif
