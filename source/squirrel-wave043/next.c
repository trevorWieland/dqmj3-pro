#include "iteration.h"

SqPrototypeI32 sq_string_next043(SqString015 *string,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value)
{
    SqPrototypeI32 position=sq_class_clone_cursor030(cursor);
    if(string->length<=position)return -1;
    sq_prefix_scalar(key,0x05000002u,(SqPrototypeU32)position);
    SqPrototypeI32 character=string->value[position];
    sq_prefix_scalar(value,0x05000002u,(SqPrototypeU32)character);
    return position+1;
}
SqPrototypeI32 sq_table_next043(SqTable019 *table,SqPrototypeU32 raw,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value)
{
    SqPrototypeI32 position=sq_class_clone_cursor030(cursor),count=table->node_count;
    SqTableNode019 *nodes=table->nodes;
    for(;position<count;position++) {
        SqTableNode019 *node=nodes+position;
        if(node->key.type==0x01000001u)continue;
        sq_prefix_assign(key,&node->key);
        SqPrefixObject012 incoming=node->value;
        if(!raw&&incoming.type==0x08010000u)incoming=((SqWeakReference014*)incoming.value.reference)->object;
        sq_prefix_assign(value,&incoming);return position+1;
    }
    return -1;
}
SqPrototypeI32 sq_class_next043(SqClass030 *klass,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value)
{
    SqPrefixObject012 descriptor={0x01000001u,{.reference=0}};
    SqPrototypeI32 next=sq_table_next043(klass->common.members,0,cursor,key,&descriptor);
    if(next!=-1) {
        SqPrototypeU32 bits=descriptor.value.bits,index=bits&0x00ffffffu;
        if(bits&0x01000000u)sq_prefix_assign(value,&klass->common.members44.values[index].primary);
        else {
            SqPrefixObject012 incoming=klass->common.members32.values[index].primary;
            if(incoming.type==0x08010000u)incoming=((SqWeakReference014*)incoming.value.reference)->object;
            sq_prefix_assign(value,&incoming);
        }
    }
    sq_prefix_release(descriptor.type,descriptor.value);return next;
}
