#ifndef DQMJ3_SQUIRREL_NATIVE_FIXTURE013_H
#define DQMJ3_SQUIRREL_NATIVE_FIXTURE013_H

#include "native_closure_release.h"

typedef struct { SqPrototypeU32 words[16]; } NativeObservation013;
typedef struct {
    unsigned char *memory;
    SqPrototypeU32 bytes, variant, count, overflow, callable_count;
    const SqPrototypeVTable011 *native_table, *prototype_table, *base_table;
    NativeObservation013 observations[128];
} NativeFixture013;

extern NativeFixture013 native_fixture013;
extern const SqPrototypeVTable011 native_observer_table013, native_alternate_table013;
SqNativeClosure013 *fixture_native(SqPrototypeU32 index);
SqPrototype011 *fixture_prototype(SqPrototypeU32 index);
SqPrototypePrefix011 *fixture_reference(SqPrototypeU32 index);
SqPrefixCollectable012 *fixture_link(SqPrototypeU32 index);
SqPrototypeWeak011 *fixture_weak(SqPrototypeU32 index);
SqPrefixState012 *fixture_shared(void);
SqPrefixObject012 *fixture_values(SqPrototypeU32 index);
SqPrototypeI32 *fixture_masks(SqPrototypeU32 index);
SqPrototypeU32 fixture_identity(const void *pointer);
SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table);
SqPrototypeU32 fixture_payload(const SqPrefixObject012 *object);
void fixture_set_reference(SqPrefixObject012 *object, void *reference);
void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 references);
SqPrototypeI32 fixture_callable(void *opaque);
SqPrototypeI32 fixture_other_callable(void *opaque);

#endif
