#ifndef DQMJ3_SQUIRREL_WAVE006_EXECUTE_FIXTURE_H
#define DQMJ3_SQUIRREL_WAVE006_EXECUTE_FIXTURE_H

#include "execute_views.h"

typedef struct {
    SqI32 event;
    SqI32 line;
    SqI32 top;
    SqI32 base;
    SqI32 native_calls;
    SqI32 call_count;
} SqDebugEvent;

typedef struct {
    SqCallFixture native;
    SqU32 unsupported_count;
    SqI32 unsupported_reason;
    SqU32 debug_count;
    SqDebugEvent debug[16];
    SqU32 release_varargs_sizes[8];
    SqU32 error_handler_count;
    SqU32 error_handler_type;
    SqU32 error_handler_value;
} SqExecuteFixture;

void sq_execute_stop(SqI32 reason) __attribute__((noreturn));
void sq_wave006_release(SqRef *node);

#endif
