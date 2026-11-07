#ifndef DQMJ3_SQUIRREL_STRING_FIXTURE015_H
#define DQMJ3_SQUIRREL_STRING_FIXTURE015_H

#include "string.h"
#include "../squirrel-wave014/weak_reference.h"

typedef struct StringObservation015 { SqPrototypeU32 words[20]; } StringObservation015;
typedef struct StringFixture015 {
    unsigned char *memory;
    SqPrototypeU32 bytes, variant, root, count, overflow, returned, value_allocations, bucket_allocations, weak_allocations;
    SqPrototypeU32 next_value, current_value, target_value, input_length, disposed_values;
    SqPrototypeI32 request_length;
    const SqPrototypeVTable011 *string_vtable, *weak_vtable, *base_vtable;
    StringObservation015 observations[64];
} StringFixture015;
extern StringFixture015 string_fixture015;
extern const SqPrototypeVTable011 string_alternate_vtable015;
SqPrefixState012 *fixture_state(SqPrototypeU32 index);
SqStringTable015 *fixture_table(void);
SqString015 **fixture_buckets(SqPrototypeU32 index);
SqString015 *fixture_string(SqPrototypeU32 index);
SqWeakReference014 *fixture_weak(SqPrototypeU32 index);
SqStringByte015 *fixture_input(void);
SqPrototypeU32 fixture_identity(const void *pointer);
SqPrototypeU32 fixture_vtable_identity(const SqPrototypeVTable011 *table);
SqPrototypeU32 fixture_first_bytes(const SqStringByte015 *bytes);
SqPrototypeU32 fixture_hash(const SqStringByte015 *input, SqPrototypeU32 length);
void fixture_record(SqPrototypeU32 operation, const void *object, SqPrototypeU32 size);

#endif
