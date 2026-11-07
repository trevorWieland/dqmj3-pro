#ifndef DQMJ3_SQUIRREL_CLOSURE_RELEASE010_H
#define DQMJ3_SQUIRREL_CLOSURE_RELEASE010_H

#include "../squirrel-wave008/generator_release.h"

typedef struct SqScriptClosure010 {
    SqRef reference;
    SqState *shared;
    SqObject environment;
    SqObject function;
    SqVector outers;
    SqVector defaults;
} SqScriptClosure010;

extern const SqVTable sq_script_closure_vtable;
void fn_006a7610(SqRef *reference);
SqRef *fn_006a769c(SqRef *reference);

_Static_assert(sizeof(void *) != 4 || sizeof(SqScriptClosure010) == 64, "target closure allocation");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure010, environment) == 24, "target environment");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure010, function) == 32, "target prototype object");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure010, outers) == 40, "target outer vector");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure010, defaults) == 52, "target default vector");

#endif
