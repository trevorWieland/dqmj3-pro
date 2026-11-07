#ifndef DQMJ3_SQUIRREL_NATIVE_CLOSURE_RELEASE013_H
#define DQMJ3_SQUIRREL_NATIVE_CLOSURE_RELEASE013_H

#include "../squirrel-wave012/reference_types.h"

typedef SqPrototypeI32 (*SqNativeCallable013)(void *);

typedef struct SqNativeClosure013 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqPrototypeI32 parameter_check;
    SqPrefixPodVector012 type_checks;
    SqPrefixVector012 outers;
    SqPrefixObject012 environment;
    SqNativeCallable013 function;
    SqPrefixObject012 name;
} SqNativeClosure013;

extern const SqPrototypeVTable011 sq_native_closure_vtable013;
void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes);
void fn_00299518(SqNativeClosure013 *closure);
SqNativeClosure013 *fn_002995a4(SqNativeClosure013 *closure);

_Static_assert(sizeof(void *) != 4 || sizeof(SqNativeClosure013) == 72, "target native closure allocation");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure013, type_checks) == 28, "target type checks");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure013, outers) == 40, "target captured values");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure013, environment) == 52, "target environment");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure013, function) == 60, "target callable slot");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure013, name) == 64, "target name");

#endif
