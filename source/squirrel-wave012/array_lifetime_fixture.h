#ifndef DQMJ3_SQUIRREL_ARRAY_LIFETIME_FIXTURE012_H
#define DQMJ3_SQUIRREL_ARRAY_LIFETIME_FIXTURE012_H

#include "array_reference.h"
#include "mixed_lifetime_fixture.h"
#include "../squirrel-wave014/weak_reference.h"

SqU32 fixture_array_bind012(void *arena, SqU32 bytes, const SqPrototypeVTable011 *native,
    const SqPrototypeVTable011 *prototype, const SqPrototypeVTable011 *base,
    const SqPrototypeVTable011 *array, const SqPrototypeVTable011 *weak);
void fixture_array_prepare012(SqU32 variant, SqU32 requested, SqU32 weak_order, SqU32 fail_array);
void fixture_array_run012(SqU32 source);
SqU32 fixture_array_snapshot012(SqU32 *output, SqU32 capacity);

#endif
