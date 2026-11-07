#ifndef DQMJ3_SQUIRREL_SCRIPT_CREATE018_H
#define DQMJ3_SQUIRREL_SCRIPT_CREATE018_H

#include "../squirrel-wave017/script_closure.h"
#include "../squirrel-wave016/native_create.h"

typedef SqNativeCreationStorage016 SqScriptCreationStorage018;
typedef struct SqScriptCallStorage018 {
    unsigned char unknown_0000[8];
    SqPrefixObject012 closure;
} SqScriptCallStorage018;

void *sq_script_create_allocate018(SqPrototypeU32 bytes);
void *sq_script_create_reallocate018(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes);
const SqPrefixObject012 *sq_script_creation_local018(const void *vm, SqPrototypeI32 index);
const SqPrefixObject012 *sq_script_creation_parent_outer018(const void *vm, SqPrototypeI32 index);
_Bool sq_script_creation_lookup018(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw, SqPrototypeU32 rooted);
void sq_script_creation_index_error018(void *vm, const SqPrefixObject012 *key);
_Bool sq_script_create018(void *vm, SqPrefixObject012 *destination, SqPrototype011 *function);

_Static_assert(__builtin_offsetof(SqScriptCreationStorage018, unknown_to_shared) == 52, "reserved base storage begins at 52");
_Static_assert(sizeof(((SqScriptCreationStorage018 *)0)->unknown_to_shared) >= 80 + sizeof(void *), "reserved current-frame pointer storage");
_Static_assert(__builtin_offsetof(SqScriptCallStorage018, closure) == 8, "measured parent closure object binding");

#endif
