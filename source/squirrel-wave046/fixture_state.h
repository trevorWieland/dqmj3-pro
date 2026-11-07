#ifndef DQMJ3_SQUIRREL_GENERATOR_FIXTURE046_H
#define DQMJ3_SQUIRREL_GENERATOR_FIXTURE046_H

#include "generator_state.h"
#include "../squirrel-wave044/fixture.h"

#if defined(_WIN32)
#define SQ_GENERATOR_EXPORT046 __declspec(dllexport)
#else
#define SQ_GENERATOR_EXPORT046
#endif

typedef struct SqGeneratorFixture046 {
    SqVm040 *vm;
    SqPrototypeU32 profile,cleanup,mode,result,fault;
    SqPrototypeU32 reallocations,reallocation[64][4];
    SqPrototypeU32 observations,observation[128][12];
} SqGeneratorFixture046;

extern SqGeneratorFixture046 generator_fixture046;
SQ_GENERATOR_EXPORT046 void fixture_prepare046(SqPrototypeU32 profile,SqPrototypeU32 cleanup);
SQ_GENERATOR_EXPORT046 SqPrototypeU32 fixture_execute046(void);
SQ_GENERATOR_EXPORT046 SqPrototypeU32 fixture_snapshot046(SqPrototypeU32 *out,SqPrototypeU32 capacity);
void fixture_clear046(void);
void fixture_observe_free046(SqPrototypeU32 identity);

#endif
