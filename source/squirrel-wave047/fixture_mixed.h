#ifndef DQMJ3_MIXED047_H
#define DQMJ3_MIXED047_H
#include "fixture_api.h"
#include "../squirrel-wave043/fixture.h"
typedef struct SqMixedFixture047 {SqPrototypeU32 variant,source,cleanup,events,event[64][8];SqPrototypeI32 value;SqPrototypeU32 child_bytes;} SqMixedFixture047;
extern SqMixedFixture047 mixed047;
void fixture_prepare047(SqPrototypeU32 variant,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run047(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot047(SqPrototypeU32 *words,SqPrototypeU32 capacity);
void fixture_lifetime047(void *pointer,SqPrototypeU32 bytes,SqPrototypeU32 kind);
SqPrototype011 *fixture_nested047(void);
#endif
