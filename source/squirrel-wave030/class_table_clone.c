#include "class_internal.h"

SqPrototypeI32 sq_class_clone_cursor030(const SqPrefixObject012 *cursor)
{
    if(cursor->type==0x01000001u)return 0;
    if(cursor->type==0x05000002u)return cursor->value.integer;
    sq_class_failure030();
}

SqTable019 *sq_class_table_clone030(SqTable019 *table)
{
    SqPrefixState012 *shared=table->shared;
    SqPrototypeI32 capacity=table->node_count;
    SqTable019 *copy=sq_class_allocate_table030();
    if(!copy)sq_class_failure030();
    sq_table_initialize019(copy,shared,capacity);
    copy->delegate=0;
    SqPrefixObject012 key={0x01000001u,{.reference=0}};
    SqPrefixObject012 value={0x01000001u,{.reference=0}};
    SqPrototypeI32 cursor=0;
    for(;;) {
        SqPrefixObject012 position={0x05000002u,{.integer=cursor}};
        SqPrototypeI32 index=sq_class_clone_cursor030(&position);
        cursor=-1;
        for(;index<table->node_count;index++) {
            SqTableNode019 *node=table->nodes+index;
            if(node->key.type==0x01000001u)continue;
            sq_prefix_assign(&key,&node->key);
            sq_prefix_assign(&value,&node->value);
            cursor=index+1;
            break;
        }
        sq_prefix_release(position.type,position.value);
        if(cursor==-1)break;
        sq_table_new_slot019(copy,&key,&value);
    }
    sq_table_delegate019(copy,table->delegate);
    sq_prefix_release(value.type,value.value);
    sq_prefix_release(key.type,key.value);
    return copy;
}
