#ifndef DQMJ3_SQUIRREL_WEAK_FIXTURE014_H
#define DQMJ3_SQUIRREL_WEAK_FIXTURE014_H

#include "weak_reference.h"
#include "../squirrel-wave013/native_closure_release.h"

typedef struct WeakObservation014 { SqPrototypeU32 words[16]; } WeakObservation014;
typedef struct WeakFixture014 {
    unsigned char *memory;
    SqPrototypeU32 bytes, variant, root, count, overflow, allocations, returned, owner_dead, next_allocation;
    const SqPrototypeVTable011 *weak_table, *prototype_table, *native_table, *base_table;
    WeakObservation014 observations[64];
} WeakFixture014;
extern WeakFixture014 weak_fixture014;
extern const SqPrototypeVTable011 weak_alternate_table014;
SqPrototype011 *fixture_prototype(void);
SqNativeClosure013 *fixture_native(void);
SqPrototypePrefix011 *fixture_owner(void);
SqPrefixState012 *fixture_shared(void);
SqWeakReference014 *fixture_weak(SqPrototypeU32 index);
SqPrototypeU32 fixture_identity(const void *pointer);
SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table);
SqPrototypeU32 fixture_payload(const SqPrototypeObject011 *object);
void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 size);

#endif
