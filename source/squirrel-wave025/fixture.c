#include "fixture.h"
extern void fixture_original_type_error025(void*,SqPrototypeI32,SqPrototypeI32,SqPrototypeU32);
extern SqString015 *fixture_original_string025(SqPrefixState012*,const SqStringByte015*,SqPrototypeI32);
extern void *fixture_original_assign025(void*,const void*);
extern SqWeakReference014 *fixture_original_weak025(SqPrototypePrefix011*,SqPrototypeU32);
extern void fixture_original_register025(void*,SqNativeCallable013,SqPrototypeU32);
extern SqPrototypeU32 fixture_original_call025(void*,const SqPrefixObject012*,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012*,SqPrototypeU32);
SqTypeFixture025 type_fixture025;
SqVmCallStorage022 *fixture_vm025(void){return(void*)(type_fixture025.memory+0x1000);}
SqLookupSharedStorage020 *fixture_shared025(void){return(void*)(type_fixture025.memory+0x3000);}
SqStringTable015 *fixture_table025(void){return(void*)(type_fixture025.memory+0x4000);}
SqPrototype011 *fixture_old025(void){return(void*)(type_fixture025.memory+0x10000);}
SqNativeClosure013 *fixture_native025(void){return(void*)(type_fixture025.memory+0x12000);}

SqPrototypeU32 fixture_id025(const void *pointer)
{
    if(!pointer)return 0;
    __UINTPTR_TYPE__ value=(__UINTPTR_TYPE__)pointer,first=(__UINTPTR_TYPE__)type_fixture025.memory+0x20000;
    if(value>=first&&value<first+256*512&&(value-first)%512==0)return(SqPrototypeU32)((value-first)/512)+1;
    if(pointer==fixture_old025())return 1001;
    if(pointer==fixture_native025())return 1002;
    if(pointer==type_fixture025.memory+0x18000)return 1003;
    if(pointer==type_fixture025.memory+0x14000)return 1004;
    return 0xffffffffu;
}

static void assign(SqPrefixObject012 *destination,const SqPrefixObject012 *value)
{if(type_fixture025.source)sq_prefix_assign(destination,value);else fixture_original_assign025(destination,value);}

static SqPrototypeI32 native(void *vm){(void)vm;type_fixture025.fault=20;return 0;}

SqPrototypeU32 fixture_bind025(void *memory,SqPrototypeU32 bytes)
{if(!memory||bytes<0x100000)return 0;type_fixture025.memory=memory;return 1;}

void fixture_prepare025(SqPrototypeI32 index,SqPrototypeU32 mask,SqPrototypeU32 type,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    unsigned char *memory=type_fixture025.memory;type_fixture025=(SqTypeFixture025){0};type_fixture025.memory=memory;
    for(SqPrototypeU32 offset=0;offset<0x100000;offset++)memory[offset]=0;
    type_fixture025.index=index;type_fixture025.mask=mask;type_fixture025.type=type;type_fixture025.flags=flags;type_fixture025.source=source;
    SqVmCallStorage022 *vm=fixture_vm025();*vm=(SqVmCallStorage022){0};SqLookupSharedStorage020 *shared=fixture_shared025();*shared=(SqLookupSharedStorage020){0};vm->common.shared=&shared->common;
    SqStringTable015 *table=fixture_table025();*table=(SqStringTable015){0};table->buckets=(void*)(memory+0x5000);table->slots=128;sq_string_provision_table015(&shared->common,table);
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};vm->common.error=empty;
    SqPrefixVector012 stack={(void*)(memory+0x8000),32,32};
    for(SqPrototypeU32 i=0;i<32;i++)stack.values[i]=empty;
    sq_vm_publish_stack022(vm,stack);sq_vm_set_top022(vm,5);sq_vm_set_base022(vm,1);
    SqVmCallVector022 calls={(void*)(memory+0xc000),4,4};
    for(SqPrototypeU32 i=0;i<4;i++){calls.values[i]=(SqVmCallFrame022){0};calls.values[i].closure=empty;}
    sq_vm_publish_calls022(vm,calls);sq_vm_set_call_stack022(vm,calls.values);sq_vm_set_allocated_calls022(vm,4);
    SqPrototype011 *old=fixture_old025();*old=(SqPrototype011){0};old->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};old->name=old->source_name=empty;
    vm->common.error=(SqPrefixObject012){0x08002000u,{.reference=old}};
    if(flags&1) {
        const SqStringByte015 *text=(const SqStringByte015*)"null";
        SqString015 *string=source?fn_0019ba68(&shared->common,text,-1):fixture_original_string025(&shared->common,text,-1);
        old->name=(SqPrefixObject012){0x08000010u,{.reference=string}};sq_prefix_retain(old->name.type,old->name.value);
    }
    if(flags&8) {
        const SqStringByte015 *text=(const SqStringByte015*)"prior error";
        SqString015 *string=source?fn_0019ba68(&shared->common,text,-1):fixture_original_string025(&shared->common,text,-1);
        old->reference.references=0;vm->common.error=(SqPrefixObject012){0x08000010u,{.reference=string}};
        sq_prefix_retain(vm->common.error.type,vm->common.error.value);
    }
    if(flags&2) {
        SqPrototypePrefix011 *owner=flags&8?&((SqString015*)vm->common.error.value.reference)->reference:&old->reference;
        SqPrototypeU32 tag=vm->common.error.type;
        SqWeakReference014 *weak=source?fn_00233b7c(owner,tag):fixture_original_weak025(owner,tag);
        weak->prefix.references=1;
    }
}

void fixture_run025(SqPrototypeU32 cleanup)
{
    SqVmCallStorage022 *vm=fixture_vm025();type_fixture025.phase=1;
    if(type_fixture025.flags&4) {
        if(type_fixture025.source)fn_00176fc8(vm,native,0);else fixture_original_register025(vm,native,0);
        SqNativeClosure013 *closure=fixture_native025();closure->parameter_check=2;
        closure->type_checks.values=type_fixture025.memory+0x18000;
        SqPrototypeU32 argument=(type_fixture025.flags&16)?1:0;closure->type_checks.size=closure->type_checks.capacity=argument+1;
        SqPrototypeI32 *masks=closure->type_checks.values;masks[0]=-1;
        __builtin_memcpy(masks+argument,&type_fixture025.mask,4);
        if(type_fixture025.type==0x08010000u) {
            SqPrefixObject012 weak={0x08010000u,{.reference=type_fixture025.memory+0x14000}};
            assign(sq_lookup_stack020(vm)+3+argument,&weak);
        } else sq_lookup_stack020(vm)[3+argument]=(SqPrefixObject012){type_fixture025.type,{.integer=3}};
        SqPrefixObject012 *result=(void*)(type_fixture025.memory+0x19000);*result=(SqPrefixObject012){0x01000001u,{.reference=0}};
        const SqPrefixObject012 *callable=sq_lookup_stack020(vm)+5;
        type_fixture025.returned=type_fixture025.source?sq_vm_call022(vm,callable,2,3,result,0):fixture_original_call025(vm,callable,2,3,result,0);
    } else {
        if(type_fixture025.source)sq_native_type_error025(vm,type_fixture025.index,(SqPrototypeI32)type_fixture025.mask,type_fixture025.type);
        else fixture_original_type_error025(vm,type_fixture025.index,(SqPrototypeI32)type_fixture025.mask,type_fixture025.type);
        type_fixture025.returned=1;
    }
    if(vm->common.error.type==0x08000010u)type_fixture025.last_error=vm->common.error.value.reference;
    if(cleanup) {
        SqPrefixObject012 empty={0x01000001u,{.reference=0}};assign(&vm->common.error,&empty);
        if(type_fixture025.flags&4)for(SqPrototypeU32 i=0;i<32;i++)assign(sq_lookup_stack020(vm)+i,&empty);
        if(type_fixture025.flags&2) {
            SqPrefixObject012 weak={0x08010000u,{.reference=type_fixture025.memory+0x14000}};assign(&weak,&empty);
        }
    }
}

SqPrototypeU32 fixture_snapshot025(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqVmCallStorage022 *vm=fixture_vm025();SqPrefixObject012 error=vm->common.error;
    SqString015 *string=type_fixture025.last_error;SqPrototypeU32 length=string?(SqPrototypeU32)string->length:0;
    SqWeakReference014 *weak=(void*)(type_fixture025.memory+0x14000);
    SqPrototypeU32 header[]={type_fixture025.fault,type_fixture025.returned,type_fixture025.flags,error.type,fixture_id025(error.value.reference),
      error.type&0x08000000u?sq_prefix_count(error.value.reference):0,length,string?string->hash:0,(SqPrototypeU32)fixture_table025()->used,
      type_fixture025.allocations,type_fixture025.frees,type_fixture025.reallocations,(SqPrototypeU32)fixture_shared025()->scratch_capacity,
      fixture_old025()->reference.references,weak->prefix.references,weak->object.type,fixture_id025(weak->object.value.reference),
      fixture_native025()->reference.prefix.references,(SqPrototypeU32)sq_lookup_top020(vm),(SqPrototypeU32)sq_lookup_base020(vm),
      (SqPrototypeU32)sq_vm_call_count022(vm),(SqPrototypeU32)sq_vm_native_depth022(vm),sizeof(void*),sizeof(*vm)};
    SqPrototypeU32 needed=24+length+1+type_fixture025.allocations*6+type_fixture025.frees*12;
    if(capacity<needed)return 0;SqPrototypeU32 count=0;
    for(SqPrototypeU32 i=0;i<24;i++)output[count++]=header[i];
    for(SqPrototypeU32 i=0;i<=length;i++)output[count++]=string?(unsigned char)string->value[i]:0;
    for(SqPrototypeU32 i=0;i<type_fixture025.allocations;i++) {
        SqString015 *value=(void*)(type_fixture025.memory+0x20000+i*512);
        output[count++]=i+1;output[count++]=type_fixture025.sizes[i];output[count++]=type_fixture025.alive[i];
        output[count++]=value->reference.references;output[count++]=(SqPrototypeU32)value->length;output[count++]=value->hash;
    }
    for(SqPrototypeU32 i=0;i<type_fixture025.frees;i++)for(SqPrototypeU32 j=0;j<12;j++)output[count++]=type_fixture025.events[i][j];
    return count;
}
