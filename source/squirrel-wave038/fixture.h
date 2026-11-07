#ifndef DQMJ3_CAPTURE_FIXTURE038_H
#define DQMJ3_CAPTURE_FIXTURE038_H
#include "capture.h"
#include "../squirrel-wave034/fixture.h"

typedef struct SqCaptureFixture038 {
    SqPrototypeU32 variant,cleanup,result,parent_calls,child_calls,observations[128],observation_count;
    SqPrefixObject012 parent,child,result_value,value,default_value,anchor;
    SqPrototype011 *parent_function,*child_function;
    SqPrototypeU32 meta_calls,meta_function,meta_references,meta_outers,meta_defaults;
} SqCaptureFixture038;
void fixture_prepare034(SqPrototypeU32 variant,SqPrototypeU32 cleanup);
extern SqCaptureFixture038 capture_fixture038;
void *fixture_prototype_allocate038(SqPrototypeU32 bytes);
SqPrototype011 *fixture_prototype038(SqPrototypeI32 instructions,SqPrototypeI32 literals,
    SqPrototypeI32 parameters,SqPrototypeI32 functions,SqPrototypeI32 outers,SqPrototypeI32 defaults);
void fixture_instruction038(SqPrototype011 *function,SqPrototypeU32 index,SqPrototypeU32 opcode,
    SqPrototypeU32 argument0,SqPrototypeI32 argument1,SqPrototypeU32 argument2,SqPrototypeU32 argument3);
void fixture_capture_program038(void);
void fixture_capture_observe038(SqPrototypeU32 stage);
SqPrototypeU32 fixture_capture_identity038(const void *pointer);
#endif
