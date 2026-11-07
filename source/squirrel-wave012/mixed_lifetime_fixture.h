#ifndef SQ_MIXED_LIFETIME_FIXTURE012_H
#define SQ_MIXED_LIFETIME_FIXTURE012_H

#include "reference_prefix.h"
#include "../squirrel-wave013/native_closure_release.h"

SqU32 fixture_mixed_bind012(void *arena, SqU32 bytes, const SqPrototypeVTable011 *native,
                          const SqPrototypeVTable011 *prototype, const SqPrototypeVTable011 *base);
SqNativeClosure013 *fixture_mixed_prepare012(SqU32 variant, SqU32 operation);
void fixture_mixed_source012(SqU32 operation);
void fixture_mixed_original012(SqU32 operation);
SqU32 fixture_mixed_snapshot012(SqU32 *output, SqU32 capacity);

#endif
