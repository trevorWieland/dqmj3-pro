#ifndef DQMJ3_SQUIRREL_WAVE005_DISPATCH_VIEWS_H
#define DQMJ3_SQUIRREL_WAVE005_DISPATCH_VIEWS_H

#include "../squirrel-wave004/call_fixture.h"

typedef struct {
    SqCallFixture native;
    SqObject requested_result;
    SqObject constructor;
    SqObject instance;
    SqU32 execute_success;
    SqU32 execute_visits;
    SqU32 class_visits;
    SqI32 target;
    SqI32 arguments;
    SqI32 base;
    SqU32 raise_error;
    SqI32 execution_type;
    SqU32 callable_type;
    SqRef *callable_reference;
    SqI32 native_depth;
    SqI32 top;
    SqI32 frame_base;
    SqU32 result_is_outer;
    SqRef *class_reference;
} SqDispatchFixture;

_Static_assert(sizeof(void *) != 4 || sizeof(SqCallFixture) == 300, "Original fixture prefix");
_Static_assert(sizeof(SqU32) == 4, "Raw SQBool transport width");

_Bool fn_0017ffac(SqCallVM *vm, const SqObject *callable, SqI32 arguments,
                  SqI32 base, SqObject *result, SqU32 raise_error);
_Bool sq_execute_service(SqCallVM *vm, const SqObject *callable, SqI32 target,
                         SqI32 arguments, SqI32 base, SqObject *result,
                         SqU32 raise_error, SqI32 execution_type);
_Bool sq_class_service(SqCallVM *vm, SqRef *the_class, SqObject *instance, SqObject *constructor);

#endif
