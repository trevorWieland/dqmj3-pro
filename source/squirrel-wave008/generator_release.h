#ifndef DQMJ3_SQUIRREL_GENERATOR_RELEASE008_H
#define DQMJ3_SQUIRREL_GENERATOR_RELEASE008_H

#include "../squirrel-wave004/call_views.h"
#include "../squirrel-wave007/array_release.h"

typedef struct {
    SqI32 stack_base;
    SqI32 stack_top;
    void *instruction;
    SqI32 target;
} SqGeneratorTrap008;

typedef struct {
    SqRef reference;
    SqState *shared;
    SqObject closure;
    SqVector stack;
    SqVector varargs;
    SqCallInfo saved;
    SqOpaqueVector traps;
    unsigned char state;
} SqGenerator008;

extern const SqVTable sq_generator_vtable;
void fn_00202dcc(SqRef *reference);
SqRef *fn_00202e68(SqRef *reference);

_Static_assert(sizeof(void *) != 4 || sizeof(SqGenerator008) == 120, "target generator allocation");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqGenerator008, saved.closure) == 64, "target saved closure");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqGenerator008, traps) == 104, "target trap storage");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqGenerator008, state) == 116, "target generator state byte");
_Static_assert(sizeof(void *) != 4 || sizeof(SqGeneratorTrap008) == 16, "target plain trap record stride");

#endif
