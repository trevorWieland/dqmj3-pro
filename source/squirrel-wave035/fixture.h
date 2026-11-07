#ifndef DQMJ3_EXCEPTION_FIXTURE035_H
#define DQMJ3_EXCEPTION_FIXTURE035_H
#include "exception.h"
#include "../squirrel-wave031/fixture.h"

typedef struct SqFixture035 { SqPrototypeU32 program;SqPrototypeI32 value;SqPrototypeU32 flags,source,events,allocations;SqPrototypeU32 event[64][16];SqPrefixObject012 root_owner; } SqFixture035;
extern SqFixture035 fixture035;
void fixture_prepare035(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
SqPrototypeI32 fixture_handler035(void *vm);
void fixture_event035(SqPrototypeU32 kind);
void fixture_run035(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot035(SqPrototypeU32 *words,SqPrototypeU32 capacity);
#endif
