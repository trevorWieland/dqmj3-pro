#include "class.h"
#include "../squirrel-wave011/prototype_internal.h"
#include "../squirrel-wave019/table_internal.h"

void sq_class_bind_meta_indices034(SqPrefixState012 *shared,SqTable019 *table)
{
#if __SIZEOF_POINTER__ == 4
    __builtin_memcpy(shared->unknown_0000+8,&table,sizeof(table));
#else
    SqClassSharedStorage034 *storage=(void*)shared;
    storage->meta_indices=table;
#endif
}

SqTable019 *sq_class_meta_indices034(const SqPrefixState012 *shared)
{
    SqTable019 *table;
#if __SIZEOF_POINTER__ == 4
    __builtin_memcpy(&table,shared->unknown_0000+8,sizeof(table));
#else
    const SqClassSharedStorage034 *storage=(const void*)shared;
    table=storage->meta_indices;
#endif
    return table;
}

SqPrototypeI32 sq_class_meta_index034(SqPrefixState012 *shared,const SqPrefixObject012 *key)
{
    if(key->type!=0x08000010u)return -1;
    SqPrefixObject012 index={0x01000001u,{.reference=0}};
    _Bool found=sq_table_get019(sq_class_meta_indices034(shared),key,&index);
    SqPrototypeI32 result=index.value.integer;
    sq_prefix_release(index.type,index.value);
    return found?result:-1;
}
