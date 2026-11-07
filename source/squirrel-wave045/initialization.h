#ifndef DQMJ3_SQUIRREL_INITIALIZATION045_H
#define DQMJ3_SQUIRREL_INITIALIZATION045_H

#include "../squirrel-wave040/startup.h"
#include "../squirrel-wave019/table_internal.h"

typedef struct SqStartupMemory045 {
    void *context;
    void *(*allocate)(void *,SqPrototypeU32,SqPrototypeU32);
    void *(*resize)(void *,void *,SqPrototypeU32,SqPrototypeU32,SqPrototypeU32);
    void (*release)(void *,void *,SqPrototypeU32);
} SqStartupMemory045;

typedef struct SqNativeRegistration045 {
    const SqStringByte015 *name;
    SqNativeCallable013 function;
    SqPrototypeI32 parameter_check;
    const SqStringByte015 *type_mask;
} SqNativeRegistration045;

typedef enum SqStartupVectorRole045 {
    SQ_STARTUP_METAMETHOD_NAMES045,SQ_STARTUP_TYPE_NAMES045,SQ_STARTUP_AUXILIARY045
} SqStartupVectorRole045;

_Bool sq_startup_bind_memory045(const SqStartupMemory045 *memory);
void *sq_startup_allocate045(SqPrototypeU32 bytes,SqPrototypeU32 alignment);
void *sq_startup_resize045(void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes,SqPrototypeU32 alignment);
void sq_startup_release045(void *pointer,SqPrototypeU32 bytes);
SqSharedState040 *sq_startup_full_shared045(SqPrefixState012 *prefix);
SqPrefixVector012 *sq_startup_metamethod_names045(SqSharedState040 *shared);
SqPrefixVector012 *sq_startup_type_names045(SqSharedState040 *shared);
SqPrefixVector012 *sq_startup_auxiliary_vector045(SqSharedState040 *shared);
SqStringTable015 *sq_startup_strings045(const SqSharedState040 *shared);
SqPrefixObject012 *sq_startup_constructor_name045(SqSharedState040 *shared);
void sq_startup_set_strings045(SqSharedState040 *shared,SqStringTable015 *strings);
void sq_startup_set_vector045(SqSharedState040 *shared,SqStartupVectorRole045 role,SqPrefixVector012 *vector);
void sq_startup_assign_meta045(SqSharedState040 *shared,const SqPrefixObject012 *object);
SqPrefixObject012 sq_startup_meta045(const SqSharedState040 *shared);
_Bool fn_0017875c(SqPrefixPodVector012 *vector,const SqStringByte015 *input);
void fn_001688cc(SqPrefixVector012 *vector,const SqPrefixObject012 *incoming);
SqTable019 *fn_00159264(SqSharedState040 *shared,const SqNativeRegistration045 *methods);
void fn_0014a6a0(SqSharedState040 *shared);
SqPrototypeI32 sq_startup_require_engine045(void *vm,SqPrototypeU32 identity);
extern const SqNativeRegistration045 *const sq_startup_default_methods045[10];
extern const SqNativeRegistration045 sq_startup_base_methods045[];

_Static_assert(sizeof(void*)!=4||sizeof(SqNativeRegistration045)==16,"target four-word registration record");
_Static_assert(sizeof(void*)!=8||sizeof(SqNativeRegistration045)==32,"native typed registration record");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,system_strings)==0,"measured target metamethod-name vector");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,meta_methods)==12,"measured target type-name vector");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,type_names)==16,"measured target empty auxiliary vector");
#if __SIZEOF_POINTER__ == 8
_Static_assert(__builtin_offsetof(SqSharedState040,fields.system_strings)==304,"native metamethod-name vector storage");
_Static_assert(__builtin_offsetof(SqSharedState040,fields.meta_methods)==312,"native type-name vector storage");
_Static_assert(__builtin_offsetof(SqSharedState040,fields.type_names)==320,"native auxiliary vector storage");
#endif
#endif
