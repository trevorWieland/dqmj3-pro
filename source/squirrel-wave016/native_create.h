#ifndef DQMJ3_SQUIRREL_NATIVE_CREATE016_H
#define DQMJ3_SQUIRREL_NATIVE_CREATE016_H

#include "../squirrel-wave013/native_closure_release.h"
#include "../squirrel-wave012/reference_prefix.h"

typedef struct {
    unsigned char unknown_0000[24];
    SqPrefixObject012 *stack;
    unsigned char unknown_to_top[24 - sizeof(SqPrefixObject012 *)];
    SqPrototypeI32 top;
    unsigned char unknown_to_shared[88];
    SqPrefixState012 *shared;
} SqNativeCreationStorage016;

_Static_assert(__builtin_offsetof(SqNativeCreationStorage016, stack) == 24, "Measured stack pointer binding");
_Static_assert(__builtin_offsetof(SqNativeCreationStorage016, top) == 48, "Measured top binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeCreationStorage016, shared) == 140, "Measured target shared binding");

void *sq_native_create_allocate016(SqPrototypeU32 bytes);
void *sq_native_create_reallocate016(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes);
SqPrefixState012 *sq_native_creation_shared016(const void *vm);
SqPrefixObject012 *sq_native_creation_top016(const void *vm);
void sq_native_creation_pop016(void *vm);
void sq_native_creation_push016(void *vm, const SqPrefixObject012 *object);
void fn_00176fc8(void *vm, SqNativeCallable013 function, SqPrototypeU32 free_variables);

#endif
