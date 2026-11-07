#include "fixture_internal.h"

SqClassFixture030 class_fixture030;

SqPrototypeU32 fixture_identity030(const void *pointer)
{
    if(!pointer)return 0;
    SqPrototypeU32 owned=fixture_owned030(pointer);
    if(owned)return 1000+owned;
    return fixture_id020(pointer);
}

void fixture_event030(SqPrototypeU32 operation,void *pointer,SqPrototypeU32 first,SqPrototypeU32 second)
{
    if(class_fixture030.events==128) { class_fixture030.fault=3;return; }
    SqPrototypeU32 *row=class_fixture030.observations[class_fixture030.events++];
    row[0]=operation;row[1]=fixture_identity030(pointer);row[2]=first;row[3]=second;
    row[4]=(SqPrototypeU32)fixture_vm020()->top;row[5]=(SqPrototypeU32)fixture_vm020()->base;
    row[6]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm020());
    row[7]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm020());
    row[8]=fixture_identity030(fixture_shared020()->common.chain);
    if(class_fixture030.instance) {
        const SqClassInstance030 *instance=class_fixture030.instance;
        row[9]=fixture_identity030(instance->klass);
        row[10]=instance->values[0].type;
        row[11]=fixture_payload019(instance->values[0]);
    }
}

void fixture_prepare030(SqPrototypeU32 variant,SqPrototypeU32 cleanup)
{
    class_fixture030=(SqClassFixture030){0};
    class_fixture030.variant=variant;class_fixture030.cleanup=cleanup;class_fixture030.bump=0x30000;
    class_fixture030.constructor_name.type=0x01000001u;
    class_fixture030.constructor.type=0x01000001u;
    class_fixture030.external.type=0x01000001u;
    class_fixture030.weak.type=0x01000001u;
    fixture_prepare023(200,cleanup);
    SqLookupSharedStorage020 common=*fixture_shared020();
    SqClassSharedStorage030 *shared=(void*)fixture_state019(0);
    *shared=(SqClassSharedStorage030){0};shared->common=common;
}

SqPrototypeU32 fixture_execute030(void)
{
    fixture_setup020();
    fixture_call_initialize023();
    if(class_fixture030.variant==26) {
        const SqPrefixObject012 null={0x01000001u,{.reference=0}};
        if(sq_class_clone_cursor030(&null)!=0)class_fixture030.fault=11;
    }
    SqClass030 *klass=fixture_new_class030(0);
    class_fixture030.classes[0]=klass;
    klass->common.reference.prefix.references++;
    if(class_fixture030.variant) {
        SqString015 *name=fn_0019ba68(&fixture_shared020()->common,(const SqStringByte015*)"constructor",-1);
        SqPrefixObject012 value={0x08000010u,{.reference=name}};
        sq_prefix_assign(&class_fixture030.constructor_name,&value);
        sq_class_bind_constructor_name030(&fixture_shared020()->common,&value);
        SqPrototypeU32 fields=class_fixture030.variant==2?0:
            (class_fixture030.variant==5||class_fixture030.variant==6||class_fixture030.variant==15?3:2);
        fixture_define030(klass,fields,class_fixture030.variant>=3&&class_fixture030.variant!=26);
        if(class_fixture030.variant==16) {
            SqLookupMember020 fill={{0x08002000u,{.reference=fixture_prototype019(0)}},class_fixture030.constructor_name};
            sq_class_member_resize030(&klass->common.members32,5,&fill);
            sq_class_member_resize030(&klass->common.members32,2,&fill);
        }
        if(class_fixture030.variant==22) {
            SqString015 *string=fn_0019ba68(&fixture_shared020()->common,(const SqStringByte015*)"removed member",-1);
            SqString015 *attribute=fn_0019ba68(&fixture_shared020()->common,(const SqStringByte015*)"removed attribute",-1);
            SqLookupMember020 fill={{0x08000010u,{.reference=string}},{0x08000010u,{.reference=attribute}}};
            sq_class_member_resize030(&klass->common.members32,3,&fill);
            sq_class_member_resize030(&klass->common.members32,2,&fill);
        }
        if(class_fixture030.variant==18) {
            SqClassSharedStorage030 *alternate=(void*)fixture_state019(1);
            SqPrefixState012 state=alternate->common.common;
            *alternate=(SqClassSharedStorage030){0};alternate->common.common=state;
        }
        sq_prefix_clear(fixture_array020()->vector.values);
        if(class_fixture030.variant==6)sq_prefix_clear(klass->common.values56.values+15);
        if(class_fixture030.variant==1||class_fixture030.variant==4||class_fixture030.variant==19||class_fixture030.variant==21||class_fixture030.variant==25) {
            klass=fixture_new_class030(klass);class_fixture030.classes[1]=klass;
            klass->common.reference.prefix.references++;
            if(class_fixture030.variant==19) {
                klass=fixture_new_class030(klass);class_fixture030.classes[2]=klass;
                klass->common.reference.prefix.references++;
            }
        }
        if(class_fixture030.variant>=2) {
            klass->common.instance_bytes=8;
            SqPrefixObject012 callable={0x08004000u,{.reference=klass}};
            if(class_fixture030.variant>=3)
                sq_prefix_retain(fixture_vm020()->stack[0].type,fixture_vm020()->stack[0].value);
            SqPrototypeI32 arguments=1;
            if(class_fixture030.variant==7) {
                arguments=2;
                fixture_native019(2)->parameter_check=2;
                fixture_vm020()->stack[1]=(SqPrefixObject012){0x05000002u,{.integer=3}};
            }
            if(class_fixture030.variant==9)fixture_native019(2)->parameter_check=2;
            if(class_fixture030.variant==20) {
                SqPrefixObject012 old={0x08002000u,{.reference=fixture_prototype019(1)}};
                sq_prefix_assign(&fixture_vm020()->error,&old);
            }
            if(class_fixture030.variant==26)
                class_fixture030.call_result=sq_vm_create_instance022(fixture_vm020(),&klass->common,
                    fixture_destination019(),&class_fixture030.constructor);
            else class_fixture030.call_result=sq_vm_call022(fixture_vm020(),&callable,arguments,0,fixture_destination019(),0);
            if(fixture_destination019()->type==0x0a008000u)
                class_fixture030.instance=fixture_destination019()->value.reference;
            fixture_attach_weak030();
            if(class_fixture030.instance&&class_fixture030.instance->klass)
                class_fixture030.meta_result=sq_class_instance_meta030(class_fixture030.instance,fixture_vm020(),15,&class_fixture030.constructor);
            if(class_fixture030.variant==23)fixture_generic_clone030();
        }
    }
    if(class_fixture030.cleanup) {
        if(class_fixture030.variant==24)sq_prefix_clear(&class_fixture030.constructor);
        if(class_fixture030.variant==12||class_fixture030.variant==14)sq_prefix_clear(&class_fixture030.weak);
        if(class_fixture030.variant>=2) {
            for(SqPrototypeU32 index=0;index<3;index++) {
                SqClass030 *owner=class_fixture030.classes[index];
                if(owner) { SqPrefixValue012 value={.reference=owner};sq_prefix_release(0x08004000u,value); }
            }
            sq_prefix_clear(fixture_destination019());
            if(class_fixture030.variant>=3)sq_prefix_clear(fixture_vm020()->stack);
            if(class_fixture030.variant==10) {
                fixture_event030(6,class_fixture030.instance,class_fixture030.instance->reference.prefix.references,
                    class_fixture030.blocks[fixture_owned030(class_fixture030.instance)-1].frees);
                sq_prefix_clear(&class_fixture030.external);
            }
        } else {
            SqPrefixValue012 value={.reference=klass};sq_prefix_release(0x08004000u,value);
            if(class_fixture030.classes[1]) {
                value.reference=class_fixture030.classes[0];sq_prefix_release(0x08004000u,value);
            }
        }
        sq_prefix_clear(&class_fixture030.constructor_name);
        sq_prefix_clear(&class_fixture030.weak);
        sq_prefix_clear(&fixture_vm020()->error);
        sq_prefix_clear(&class_fixture030.constructor);
        sq_prefix_clear(&class_fixture030.external);
    }
    fixture_check_graph030();
    return !class_fixture030.fault;
}

SqPrototypeU32 fixture_snapshot030(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    if(capacity<4096)return 0;
    SqPrototypeU32 at=0;
    output[at++]=1;output[at++]=0;output[at++]=0;
    output[at++]=class_fixture030.fault;output[at++]=table_fixture019.fault;
    output[at++]=class_fixture030.allocations;output[at++]=class_fixture030.events;
    output[at++]=class_fixture030.call_result;output[at++]=class_fixture030.constructor_calls;
    output[at++]=class_fixture030.instance_hooks;
    output[at++]=class_fixture030.class_hooks;
    for(SqPrototypeU32 index=0;index<class_fixture030.allocations;index++) {
        const SqClassAllocation030 *allocation=class_fixture030.blocks+index;
        output[at++]=allocation->bytes;output[at++]=allocation->kind;output[at++]=allocation->frees;
    }
    for(SqPrototypeU32 index=0;index<class_fixture030.events;index++)
        for(SqPrototypeU32 column=0;column<12;column++)output[at++]=class_fixture030.observations[index][column];
    at+=fixture_graph_snapshot030(output+at);
    return at;
}
