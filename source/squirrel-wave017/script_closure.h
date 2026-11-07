#ifndef DQMJ3_SQUIRREL_SCRIPT_CLOSURE017_H
#define DQMJ3_SQUIRREL_SCRIPT_CLOSURE017_H

#include "../squirrel-wave012/reference_types.h"

typedef struct SqScriptClosure017 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqPrefixObject012 environment;
    SqPrefixObject012 function;
    SqPrefixVector012 outers;
    SqPrefixVector012 defaults;
} SqScriptClosure017;

extern const SqPrototypeVTable011 sq_script_closure_vtable017;
void sq_script_closure_deallocate017(void *pointer, SqPrototypeU32 bytes);
void sq_script_closure_release017(SqScriptClosure017 *closure);
SqScriptClosure017 *sq_script_closure_destroy017(SqScriptClosure017 *closure);

_Static_assert(sizeof(void *) != 4 || sizeof(SqScriptClosure017) == 64, "original script allocation");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure017, environment) == 24, "original environment");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure017, function) == 32, "actual prototype object");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure017, outers) == 40, "original outers");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure017, defaults) == 52, "original defaults");
_Static_assert(sizeof(void *) != 8 || sizeof(SqScriptClosure017) == 112, "native script allocation");

#endif
