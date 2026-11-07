#include "class.h"
#include "../squirrel-wave030/class_internal.h"

static void append(SqLookupMemberVector020 *vector,const SqLookupMember020 *member)
{
    if(vector->capacity<=vector->size) {
        SqPrototypeU32 capacity=vector->size?vector->size*2:4;
        vector->values=sq_class_reallocate030(vector->values,vector->capacity*sizeof(*member),capacity*sizeof(*member));
        vector->capacity=capacity;
    }
    SqLookupMember020 *destination=vector->values+vector->size++;
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    *destination=(SqLookupMember020){null,null};
    sq_prefix_assign(&destination->primary,&member->primary);
    sq_prefix_assign(&destination->secondary,&member->secondary);
}

static void create(SqClass030 *klass,SqLookupMemberVector020 *vector,SqPrototypeU32 flag,
    const SqPrefixObject012 *key,const SqPrefixObject012 *value)
{
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    SqLookupMember020 temporary={null,null};
    sq_prefix_assign(&temporary.primary,value);
    SqPrefixObject012 descriptor={0x05000002u,{.bits=flag|vector->size}};
    sq_table_new_slot019(klass->common.members,key,&descriptor);
    sq_prefix_release(descriptor.type,descriptor.value);
    append(vector,&temporary);
    sq_class_release_member030(&temporary);
}

_Bool sq_class_new_slot034(SqClass030 *klass,SqPrefixState012 *shared,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrototypeU32 raw_static)
{
    if(klass->common.locked)return 0;
    SqPrefixObject012 previous={0x01000001u,{.reference=0}};
    _Bool found=sq_table_get019(klass->common.members,key,&previous);
    SqPrototypeU32 descriptor=previous.value.bits;
    if(found&&(descriptor&0x02000000u)) {
        sq_prefix_assign(&klass->common.members32.values[descriptor&0x00ffffffu].primary,value);
        sq_prefix_release(previous.type,previous.value);
        return 1;
    }
    _Bool closure=value->type==0x08000100u||value->type==0x08000200u;
    if(closure||raw_static) {
        SqPrototypeI32 index=closure?sq_class_meta_index034(shared,key):-1;
        if(index!=-1)sq_prefix_assign(klass->common.values56.values+index,value);
        else if(previous.type==0x01000001u)create(klass,&klass->common.members44,0x01000000u,key,value);
        else sq_prefix_assign(&klass->common.members44.values[descriptor&0x00ffffffu].primary,value);
    } else create(klass,&klass->common.members32,0x02000000u,key,value);
    sq_prefix_release(previous.type,previous.value);
    return 1;
}
