#ifndef DQMJ3_SQUIRREL_CLASS_CALL030_H
#define DQMJ3_SQUIRREL_CLASS_CALL030_H

#include "../squirrel-wave022/vm_call.h"

typedef SqPrototypeI32 (*SqClassReleaseHook030)(void *, SqPrototypeI32);

typedef struct SqClass030 {
    SqLookupClassStorage020 common;
} SqClass030;

typedef struct SqClassInstance030 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    SqTable019 *delegate;
    SqClass030 *klass;
    void *user_pointer;
    SqClassReleaseHook030 release_hook;
    SqPrototypeU32 allocation_bytes;
    _Alignas(SqPrefixObject012) SqPrefixObject012 values[];
} SqClassInstance030;

typedef struct SqClassSharedStorage030 {
    SqLookupSharedStorage020 common;
#if __SIZEOF_POINTER__ == 8
    SqPrefixObject012 constructor_name;
#endif
} SqClassSharedStorage030;

extern const SqPrototypeVTable011 sq_class_vtable030;
extern const SqLookupMetaVTable020 sq_class_instance_vtable030;
SqClass030 *sq_class_initialize030(SqClass030 *storage,SqPrefixState012 *shared,SqClass030 *base);
void sq_class_lock030(SqClass030 *klass);
SqClassInstance030 *sq_class_create_instance030(SqClass030 *klass);
SqClassInstance030 *sq_class_instance_initialize030(SqClassInstance030 *storage,SqPrefixState012 *shared,
    SqClass030 *klass,SqPrototypeU32 allocation_bytes);
void sq_class_release030(SqClass030 *klass);
SqClass030 *sq_class_destroy030(SqClass030 *klass);
void sq_class_finalize030(SqClass030 *klass);
void sq_class_instance_release030(SqClassInstance030 *instance);
SqClassInstance030 *sq_class_instance_destroy030(SqClassInstance030 *instance);
_Bool sq_class_instance_meta030(SqClassInstance030 *instance,void *vm,SqPrototypeU32 selector,SqPrefixObject012 *result);
void sq_class_member_resize030(SqLookupMemberVector020 *vector,SqPrototypeU32 requested,const SqLookupMember020 *fill);
SqTable019 *sq_class_table_clone030(SqTable019 *table);
SqPrototypeI32 sq_class_clone_cursor030(const SqPrefixObject012 *cursor);
void sq_class_bind_constructor_name030(SqPrefixState012 *shared,const SqPrefixObject012 *name);
SqPrefixObject012 sq_class_constructor_name030(const SqPrefixState012 *shared);
void *sq_class_allocate030(SqPrototypeU32 bytes);
SqTable019 *sq_class_allocate_table030(void);
void *sq_class_reallocate030(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes);
void sq_class_deallocate030(void *storage,SqPrototypeU32 bytes);
_Noreturn void sq_class_failure030(void);

_Static_assert(__builtin_offsetof(SqClass030,common)==0,"actual named020 class common");
_Static_assert(sizeof(void*)!=4||sizeof(SqClass030)==92,"target complete class size");
_Static_assert(sizeof(void*)!=8||sizeof(SqClass030)==152,"native complete class size");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqClassInstance030,values)==44,"target complete instance header");
_Static_assert(sizeof(void*)!=8||__builtin_offsetof(SqClassInstance030,values)==88,"native complete instance header");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqClassInstance030,release_hook)==36,"target instance hook");
_Static_assert(sizeof(void*)!=8||__builtin_offsetof(SqClassInstance030,release_hook)==72,"native instance hook");
_Static_assert(__builtin_offsetof(SqClassSharedStorage030,common)==0,"actual complete shared020 first member");
_Static_assert(sizeof(void*)!=4||sizeof(SqClassSharedStorage030)==180,"target shared storage contract");
#if __SIZEOF_POINTER__ == 8
_Static_assert(__builtin_offsetof(SqClassSharedStorage030,constructor_name)==280,"native constructor name tail");
#endif
_Static_assert(_Generic(((SqClassInstance030*)0)->release_hook,SqPrototypeI32(*)(void*,SqPrototypeI32):1,default:0),"exact release hook ABI");

#endif
