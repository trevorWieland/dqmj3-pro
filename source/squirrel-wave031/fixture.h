#ifndef DQMJ3_EXECUTE_FIXTURE031_H
#define DQMJ3_EXECUTE_FIXTURE031_H
#include "execute.h"
#include "../squirrel-wave028/fixture.h"

typedef struct SqFixture031 { SqPrototypeU32 program;SqPrototypeI32 value;SqPrototypeU32 events,node_allocations,event[32][12]; } SqFixture031;
extern SqFixture031 fixture031;
SqScriptClosure017 *fixture_child031(void);
SqPrototype011 *fixture_child_function031(void);
void fixture_prepare031(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run031(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot031(SqPrototypeU32 *words,SqPrototypeU32 capacity);
#endif
