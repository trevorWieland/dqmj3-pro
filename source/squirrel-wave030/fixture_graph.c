#include "fixture_internal.h"

static SqPrototypeU32 payload(SqPrefixObject012 object)
{
    return object.type&0x08000000u?fixture_identity030(object.value.reference):object.value.bits;
}

void fixture_check_graph030(void)
{
    SqPrototypeU32 *flags=class_fixture030.graph_flags;
    for(SqPrototypeU32 index=0;index<6;index++)flags[index]=1;
    SqPrefixCollectable012 *previous=0,*node=fixture_shared020()->common.chain;
    SqPrototypeU32 count=0;
    while(node) {
        __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)node,start=(__UINTPTR_TYPE__)table_fixture019.memory;
        if(address<start||address+sizeof(*node)>start+0x40000||++count>64) { flags[0]=0;break; }
        if(node->previous!=previous)flags[0]=0;
        previous=node;node=node->next;
    }
    for(SqPrototypeU32 index=0;index<3;index++) {
        SqClass030 *klass=class_fixture030.classes[index];
        if(!klass)continue;
        SqPrototypeU32 id=fixture_owned030(klass);
        if(!id||class_fixture030.blocks[id-1].bytes!=sizeof(*klass))flags[1]=0;
        if(klass->common.shared!=&fixture_shared020()->common)flags[1]=0;
        if(klass->common.members&&(!fixture_owned030(klass->common.members)||
                klass->common.members->shared!=klass->common.shared))flags[2]=0;
        if(klass->common.base&&klass->common.members==klass->common.base->members)flags[2]=0;
    }
    SqClassInstance030 *instance=class_fixture030.instance;
    if(instance) {
        SqPrototypeU32 id=fixture_owned030(instance);
        if(!id||class_fixture030.blocks[id-1].bytes!=instance->allocation_bytes)flags[3]=0;
        if(instance->shared!=&fixture_shared020()->common)flags[3]=0;
        if(instance->klass) {
            SqPrototypeU32 fields=instance->klass->common.members32.size;
            SqPrototypeU32 count=fields?fields:1;
            SqPrototypeU32 extra=class_fixture030.variant==17?8:instance->klass->common.instance_bytes;
            SqPrototypeU32 bytes=__builtin_offsetof(SqClassInstance030,values)+count*sizeof(SqPrefixObject012)+extra;
            if(bytes!=instance->allocation_bytes)flags[4]=0;
            void *user=instance->klass->common.instance_bytes?(unsigned char*)instance+bytes-instance->klass->common.instance_bytes:0;
            if(user!=instance->user_pointer)flags[4]=0;
            if(instance->delegate!=instance->klass->common.members)flags[4]=0;
        }
        if(sizeof(void*)==8&&(__UINTPTR_TYPE__)instance<=0xffffffffu)flags[5]=0;
        if(class_fixture030.constructor_calls&&instance->user_pointer) {
            SqPrototypeU32 extra=class_fixture030.variant==17?4:8;
            for(SqPrototypeU32 index=0;index<extra;index++)
                if(((const unsigned char*)instance->user_pointer)[index]!=(unsigned char)(0x51+index))flags[5]=0;
        }
    }
}

SqPrototypeU32 fixture_graph_snapshot030(SqPrototypeU32 *output)
{
    SqPrototypeU32 at=0;
    output[at++]=0x300300;output[at++]=sizeof(void*);
    output[at++]=sizeof(SqClass030);output[at++]=__builtin_offsetof(SqClassInstance030,values);
    for(SqPrototypeU32 index=0;index<6;index++)output[at++]=class_fixture030.graph_flags[index];
    for(SqPrototypeU32 index=0;index<3;index++) {
        const SqClass030 *klass=class_fixture030.classes[index];
        output[at++]=fixture_identity030(klass);
        if(!klass)continue;
        const SqLookupClassStorage020 *common=&klass->common;
        output[at++]=common->reference.prefix.references;output[at++]=common->locked;
        output[at++]=fixture_identity030(common->base);output[at++]=fixture_identity030(common->members);
        const SqLookupMemberVector020 *vectors[]={&common->members32,&common->members44};
        for(SqPrototypeU32 group=0;group<2;group++) {
            const SqLookupMemberVector020 *vector=vectors[group];
            output[at++]=vector->size;output[at++]=vector->capacity;
            for(SqPrototypeU32 item=0;item<vector->size;item++) {
                const SqLookupMember020 *member=vector->values+item;
                output[at++]=member->primary.type;output[at++]=payload(member->primary);
                output[at++]=member->secondary.type;output[at++]=payload(member->secondary);
            }
        }
        output[at++]=common->values56.size;output[at++]=common->values56.capacity;
        for(SqPrototypeU32 item=0;item<common->values56.size;item++) {
            output[at++]=common->values56.values[item].type;output[at++]=payload(common->values56.values[item]);
        }
        output[at++]=common->attributes.type;output[at++]=payload(common->attributes);
    }
    const SqClassInstance030 *instance=class_fixture030.instance;
    output[at++]=fixture_identity030(instance);
    if(instance) {
        output[at++]=instance->reference.prefix.references;output[at++]=fixture_identity030(instance->klass);
        output[at++]=fixture_identity030(instance->delegate);output[at++]=instance->allocation_bytes;
        __UINT64_TYPE__ pointer=(__UINTPTR_TYPE__)instance->user_pointer;
        output[at++]=(SqPrototypeU32)pointer;output[at++]=(SqPrototypeU32)(pointer>>32);
        SqPrototypeU32 fields=instance->klass?instance->klass->common.members32.size:0;
        output[at++]=fields;
        for(SqPrototypeU32 index=0;index<fields;index++) {
            output[at++]=instance->values[index].type;output[at++]=payload(instance->values[index]);
        }
    }
    output[at++]=class_fixture030.meta_result;output[at++]=class_fixture030.constructor.type;
    output[at++]=payload(class_fixture030.constructor);
    SqPrefixObject012 error=fixture_vm020()->error;
    output[at++]=error.type;output[at++]=payload(error);
    if(error.type==0x08000010u) {
        const SqString015 *text=error.value.reference;
        output[at++]=(SqPrototypeU32)text->length;
        for(SqPrototypeI32 index=0;index<=text->length;index++)output[at++]=(unsigned char)text->value[index];
    } else output[at++]=0;
    return at;
}
