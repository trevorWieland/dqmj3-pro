#ifndef DQMJ3_ITERATION_FIXTURE039_H
#define DQMJ3_ITERATION_FIXTURE039_H
#include "iteration.h"
#include "../squirrel-wave031/fixture.h"
typedef struct SqIterationFixture039 {SqPrototypeU32 mode,source;SqPrototypeI32 value;SqPrototypeU32 native_allocations;SqPrototypeU32 class_allocations;void *class_blocks[16];SqPrototypeU32 class_bytes[16];SqPrototypeU32 weak_allocations;SqPrototypeU32 events;SqPrototypeU32 event[64][16];} SqIterationFixture039;
SqPrototypeI32 fixture_iteration_observer039(void *vm);
extern SqIterationFixture039 iteration_fixture039;
void fixture_class_prepare039(SqPrototype011 *function);
void fixture_prepare039(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run039(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot039(SqPrototypeU32 *output,SqPrototypeU32 capacity);
#endif
