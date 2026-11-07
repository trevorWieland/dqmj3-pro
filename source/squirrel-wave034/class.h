#ifndef DQMJ3_SQUIRREL_CLASS034_H
#define DQMJ3_SQUIRREL_CLASS034_H

#include "../squirrel-wave030/class_call.h"

typedef struct SqClassSharedStorage034 {
    SqClassSharedStorage030 common;
#if __SIZEOF_POINTER__ == 8
    SqTable019 *meta_indices;
#endif
} SqClassSharedStorage034;

void sq_class_bind_meta_indices034(SqPrefixState012 *shared,SqTable019 *table);
SqTable019 *sq_class_meta_indices034(const SqPrefixState012 *shared);
SqPrototypeI32 sq_class_meta_index034(SqPrefixState012 *shared,const SqPrefixObject012 *key);
_Bool sq_class_new_slot034(SqClass030 *klass,SqPrefixState012 *shared,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrototypeU32 raw_static);
_Bool sq_vm_class_create034(void *vm,SqPrefixObject012 *result,SqPrototypeI32 base_index,SqPrototypeU32 attributes_index);
_Bool sq_vm_create_instance034(void *vm,SqClass030 *klass,SqPrefixObject012 *result,SqPrefixObject012 *constructor);
_Bool sq_vm_new_slot034(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrototypeU32 raw_static);
SqClass030 *sq_vm_class_allocate034(void);

_Static_assert(__builtin_offsetof(SqClassSharedStorage034,common)==0,"actual030 shared common first");
_Static_assert(sizeof(void*)!=4||sizeof(SqClassSharedStorage034)==180,"target known shared contract");
#if __SIZEOF_POINTER__ == 8
_Static_assert(__builtin_offsetof(SqClassSharedStorage034,meta_indices)==296,"native named meta-index table tail");
_Static_assert(sizeof(SqClassSharedStorage034)==304,"native complete034 shared provisioner");
#endif

#endif
