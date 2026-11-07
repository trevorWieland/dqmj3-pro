#ifndef DQMJ3_SQUIRREL_WAVE004_CALL_FIXTURE_H
#define DQMJ3_SQUIRREL_WAVE004_CALL_FIXTURE_H

#include "call_views.h"

typedef struct {
    SqRef *node;
    SqI32 top;
    SqI32 base;
    SqI32 calls;
    SqI32 native;
    SqU32 result_type;
    SqU32 result_references;
} SqReleaseEvent;

typedef struct {
    SqCallVM *vm;
    SqObject *result;
    SqI32 return_code;
    SqObject returned;
    SqU32 visits;
    SqI32 top;
    SqI32 base;
    SqI32 calls;
    SqI32 native;
    SqU32 closure_references;
    SqI32 previous_base;
    SqI32 previous_top;
    SqI32 frame_calls;
    SqObject receiver;
    SqObject outer;
    SqU32 release_count;
    SqReleaseEvent releases[8];
} SqCallFixture;

SqI32 sq_wave004_native(SqCallVM *vm);
void sq_wave004_release(SqRef *node);

#endif
