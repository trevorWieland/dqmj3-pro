#include "fixture.h"
extern SqWeakReference014 *fixture_original_weak022(SqPrototypePrefix011 *,SqPrototypeU32);
extern void *fixture_original_assign022(void *,const void *);
static SqPrototypeU32 native_profile022;
void fixture_native_profile_prepare022(SqPrototypeU32 profile)
{fixture_prepare022(5,profile==14?0:1,0);native_profile022=profile;}
void fixture_native_profile_call022(SqPrototypeU32 source)
{
    SqNativeClosure013 *native=(void*)(call_fixture022.memory+0x20000);
    call_fixture022.source=source;
    if(native_profile022==0)native->parameter_check=2;
    if(native_profile022==1)native->parameter_check=-2;
    if(native_profile022==2)native->parameter_check=(-2147483647-1);
    if((native_profile022>=3&&native_profile022<=5)||native_profile022==13) {
        SqPrototypeI32 *masks=(void*)(call_fixture022.memory+0x2b000);
        masks[0]=native_profile022==13?2:native_profile022==3?-1:0x01000001;masks[1]=0x05000002;
        native->type_checks.values=masks;native->type_checks.size=native_profile022==5||native_profile022==13?1:2;native->type_checks.capacity=2;
    }
    if(native_profile022==6)sq_vm_set_native_depth022(fixture_vm022(),99);
    if(native_profile022==7||native_profile022==8||native_profile022==12) {
        SqPrototype011 *owner=fixture_prototype022(1);
        SqWeakReference014 *weak=source?fn_00233b7c(&owner->reference,0x08002000u):fixture_original_weak022(&owner->reference,0x08002000u);
        SqPrefixObject012 environment={0x08010000u,{.reference=weak}};
        if(source)sq_prefix_assign(&native->environment,&environment);else fixture_original_assign022(&native->environment,&environment);
        if(native_profile022==8) {
            SqPrefixObject012 empty={0x01000001u,{.reference=0}};
            if(source)sq_prefix_assign(fixture_result022(),&empty);else fixture_original_assign022(fixture_result022(),&empty);
        }
    }
    if(native_profile022==9||native_profile022==10||native_profile022==14) {
        SqPrefixObject012 *length=sq_lookup_stack020(fixture_vm022())+4;
        length->type=0x05000004u;length->value.floating=native_profile022==10?5.5f:5.0f;
    }
    if(native_profile022==12) {
        SqPrototype011 *previous=(void*)(call_fixture022.memory+0x3a000);*previous=(SqPrototype011){0};
        previous->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};
        previous->source_name.type=previous->name.type=0x01000001u;
        sq_lookup_stack020(fixture_vm022())[3]=(SqPrefixObject012){0x08002000u,{.reference=previous}};
    }
    fixture_call022(source);
}
SqPrototypeU32 fixture_native_profile_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot022(output,capacity);
    if(!count||capacity<count+10)return 0;
    SqPrefixObject012 receiver=sq_lookup_stack020(fixture_vm022())[3];
    SqWeakReference014 *weak=(void*)(call_fixture022.memory+0x2f000);
    output[count++]=native_profile022;output[count++]=receiver.type;output[count++]=fixture_payload022(receiver);
    output[count++]=weak->prefix.references;output[count++]=weak->object.type;output[count++]=fixture_payload022(weak->object);
    output[count++]=call_fixture022.type_error_visits;output[count++]=call_fixture022.type_error_index;
    output[count++]=call_fixture022.type_error_mask;output[count++]=call_fixture022.type_error_type;
    return count;
}
