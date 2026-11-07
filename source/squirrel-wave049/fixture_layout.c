#include "startup.h"

#define FIELD(name) __builtin_offsetof(SqVmCallFrame022,name)

const SqPrototypeU32 sq_fixture_frame_layout049[]={
    sizeof(SqVmCallFrame022),FIELD(instruction),FIELD(literals),FIELD(closure),FIELD(generator),
    FIELD(traps),FIELD(previous_base),FIELD(previous_top),FIELD(target),FIELD(calls),FIELD(root),
    FIELD(varargs_size),FIELD(varargs_base)
};
