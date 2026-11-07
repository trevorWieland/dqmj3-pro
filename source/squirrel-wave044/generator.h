#ifndef DQMJ3_GENERATOR044_H
#define DQMJ3_GENERATOR044_H
#include "../squirrel-wave028/execute.h"

typedef struct SqVm040 SqVm040;

typedef struct SqGenerator044 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqPrefixObject012 closure;
    SqPrefixVector012 stack,varargs;
    SqVmCallFrame022 saved;
    SqTrapVector028 traps;
    unsigned char state;
} SqGenerator044;

extern const SqPrototypeVTable011 sq_generator_vtable044;
SqGenerator044 *sq_generator_create044(SqPrefixState012 *shared,SqScriptClosure017 *closure);
void sq_generator_release044(SqGenerator044 *generator);
SqGenerator044 *sq_generator_destroy044(SqGenerator044 *generator);
_Bool sq_generator_yield044(SqGenerator044 *generator,SqVm040 *vm);
_Bool sq_generator_resume044(SqGenerator044 *generator,SqVm040 *vm,SqPrototypeI32 target);
void *sq_generator_allocate044(SqPrototypeU32 bytes);
void sq_generator_deallocate044(void *pointer,SqPrototypeU32 bytes);
_Noreturn void sq_generator_assert044(void);

_Static_assert(sizeof(void*)!=4||sizeof(SqGenerator044)==120,"target generator allocation");
_Static_assert(sizeof(void*)!=8||sizeof(SqGenerator044)==192,"native opaque generator allocation");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqGenerator044,saved.closure)==64,"target saved closure");
_Static_assert(sizeof(void*)!=8||__builtin_offsetof(SqGenerator044,saved.closure)==112,"native exact022 saved closure");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqGenerator044,state)==116,"target state byte");
_Static_assert(sizeof(void*)!=8||__builtin_offsetof(SqGenerator044,state)==184,"native state byte");
#endif
