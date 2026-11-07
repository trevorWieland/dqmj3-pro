#ifndef DQMJ3_SQUIRREL_LOOKUP020_H
#define DQMJ3_SQUIRREL_LOOKUP020_H

#include "metamethod.h"
#include "../squirrel-wave012/array_reference.h"
#include "../squirrel-wave014/weak_reference.h"
#include "../squirrel-wave015/string.h"

typedef struct SqLookupMember020 {
    SqPrefixObject012 primary, secondary;
} SqLookupMember020;

typedef struct SqLookupMemberVector020 {
    SqLookupMember020 *values;
    SqPrototypeU32 size, capacity;
} SqLookupMemberVector020;

typedef struct SqLookupClassStorage020 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqTable019 *members;
    struct SqLookupClassStorage020 *base;
    SqLookupMemberVector020 members32, members44;
    SqPrefixVector012 values56;
    SqPrefixObject012 attributes;
    void *uninvoked_type_tag;
    SqPrototypeI32 (*uninvoked_release_hook)(void *, SqPrototypeI32);
    unsigned char locked;
    SqPrototypeU32 instance_bytes;
} SqLookupClassStorage020;

typedef struct SqLookupInstanceStorage020 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqTable019 *delegate;
    SqLookupClassStorage020 *klass;
    unsigned char unaccessed_0020[12];
    _Alignas(SqPrefixObject012) SqPrefixObject012 values[];
} SqLookupInstanceStorage020;

typedef struct SqLookupUserdataStorage020 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqTable019 *delegate;
} SqLookupUserdataStorage020;

typedef struct SqLookupSharedStorage020 {
    SqPrefixState012 common;
    unsigned char unaccessed_after_chain[8];
    SqPrefixObject012 default_delegates[10];
    unsigned char unaccessed_00a0[12];
    char *scratch;
    SqPrototypeI32 scratch_capacity;
} SqLookupSharedStorage020;

typedef struct SqLookupVmStorage020 {
    unsigned char unknown_0000[24];
    SqPrefixObject012 *stack;
    unsigned char unknown_to_top[24 - sizeof(SqPrefixObject012 *)];
    SqPrototypeI32 top, base;
    unsigned char unknown_0038[4];
    SqTable019 *root;
    SqPrefixObject012 error;
    unsigned char unknown_to_current[sizeof(void *) == 4 ? 60 : 44];
    unsigned char current_frame[sizeof(void *)];
    unsigned char unknown_after_current[4];
    SqPrefixState012 *shared;
} SqLookupVmStorage020;

_Bool sq_lookup_get020(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw, SqPrototypeU32 rooted);
_Bool sq_lookup_fallback020(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw);
_Bool sq_lookup_meta_call020(void *vm, void *owner, SqPrototypeU32 selector,
    SqPrototypeI32 arguments, SqPrefixObject012 *destination);
_Bool sq_lookup_invoke020(void *vm, const SqPrefixObject012 *callable, SqPrototypeI32 arguments,
    SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error);
SqPrefixObject012 *sq_lookup_stack020(const void *vm);
SqPrototypeI32 sq_lookup_top020(const void *vm);
SqPrototypeI32 sq_lookup_base020(const void *vm);
SqTable019 *sq_lookup_root020(const void *vm);
SqLookupSharedStorage020 *sq_lookup_shared020(const void *vm);
void sq_lookup_push020(void *vm, const SqPrefixObject012 *value);
void sq_lookup_pop020(void *vm);
void sq_lookup_assign_unwrapped020(SqPrefixObject012 *destination, SqPrefixObject012 incoming);
SqPrototypeI32 sq_lookup_integer020(const SqPrefixObject012 *key);

_Static_assert(sizeof(void *) != 4 || sizeof(SqLookupClassStorage020) == 92, "target class read storage");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupClassStorage020, members32) == 32, "class member vector binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupClassStorage020, members44) == 44, "class method vector binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupInstanceStorage020, klass) == 28, "instance class binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupInstanceStorage020, values) == 44, "instance values binding");
_Static_assert(__builtin_offsetof(SqLookupSharedStorage020, common) == 0, "actual named common state member");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupSharedStorage020, default_delegates) == 80, "target default delegates");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupSharedStorage020, scratch) == 172, "target scratch binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupVmStorage020, root) == 60, "target root binding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupVmStorage020, error) == 64, "target error binding");
_Static_assert(__builtin_offsetof(SqLookupVmStorage020, current_frame) == 132, "frozen018 current-frame byte slot");
_Static_assert(__builtin_offsetof(SqLookupVmStorage020, shared) == __builtin_offsetof(SqNativeCreationStorage016, shared), "shared binding compatibility");

#endif
