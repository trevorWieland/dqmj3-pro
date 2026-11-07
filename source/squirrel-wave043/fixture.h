#ifndef DQMJ3_ITERATION_FIXTURE043_H
#define DQMJ3_ITERATION_FIXTURE043_H
#include "iteration.h"
#include "../squirrel-wave039/fixture.h"
#include "../squirrel-wave019/table_internal.h"
typedef struct SqIterationFixture043 {
    SqPrototypeU32 mode,source,flags,phase,events,mutations;SqPrototypeI32 cursor,returned;
    SqPrefixObject012 table_owner,owners[4];SqPrototypeU32 event[64][12];
} SqIterationFixture043;
extern SqIterationFixture043 iteration_fixture043;
SqPrefixObject012 *fixture_outputs043(void);
SqPrototype011 *fixture_prototype043(SqPrototypeU32 index);
SqPrototypeU32 fixture_identity043(const void *pointer);
void fixture_assign043(void *destination,const SqPrefixObject012 *value);
void fixture_script_prepare043(void);
SqPrototypeI32 fixture_script_observer043(void*);
void fixture_mutation043(void);
void fixture_prepare043(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run043(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot043(SqPrototypeU32 *output,SqPrototypeU32 capacity);
#endif
