#include "contract_fixture.h"
#include "../squirrel-wave015/string.h"

extern void fixture_original_register022(void *,SqNativeCallable013,SqPrototypeU32);
extern SqPrototypeU32 fixture_original_call022(void *,const SqPrefixObject012 *,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012 *,SqPrototypeU32);
extern SqPrototypeI32 fixture_original_array022(void *);
extern void *fixture_original_assign022(void *,const void *);

SqCallFixture022 call_fixture022;
SqVmCallStorage022 *fixture_vm022(void){return (void*)(call_fixture022.memory+0x1000);}
SqLookupSharedStorage020 *fixture_shared022(void){return (void*)(call_fixture022.memory+0x3000);}
SqPrototype011 *fixture_prototype022(SqPrototypeU32 index){return (void*)(call_fixture022.memory+0x24000+index*0x1000);}
SqPrefixObject012 *fixture_result022(void){return (void*)(call_fixture022.memory+0x29000);}

SqPrototypeU32 fixture_identity022(const void *pointer)
{
    if(!pointer)return 0;
    const SqPrototypeU32 offsets[]={0x20000,0x21000,0x24000,0x25000,0x2a000,0x22000,0x5000,0x8000,0xc000,0xd000};
    for(SqPrototypeU32 index=0;index<sizeof(offsets)/sizeof(offsets[0]);index++)
        if(pointer==call_fixture022.memory+offsets[index])return index+1;
    if(pointer==call_fixture022.memory+0x2c000)return 11;
    if(pointer==call_fixture022.memory+0x2e000)return 12;
    if(pointer==call_fixture022.memory+0x26000)return 13;
    if(pointer==call_fixture022.memory+0x32000)return 14;
    if(pointer==call_fixture022.memory+0x2f000)return 15;
    if(pointer==call_fixture022.memory+0x2b000)return 16;
    if(pointer==call_fixture022.memory+0x3a000)return 17;
    return 0xffffffffu;
}

SqPrototypeU32 fixture_payload022(SqPrefixObject012 object)
{
    if(object.type&0x08000000u)return fixture_identity022(object.value.reference);
    SqPrototypeU32 bits;__builtin_memcpy(&bits,&object.value,4);return bits;
}

SqPrototypeU32 fixture_bind022(void *memory,SqPrototypeU32 bytes,const SqPrototypeVTable011 *prototype_vtable,
    const SqPrototypeVTable011 *native_vtable,const SqPrototypeVTable011 *array_vtable,const SqPrototypeVTable011 *base_vtable)
{
    if(!memory||bytes<0x40000)return 0;
    call_fixture022.memory=memory;call_fixture022.prototype_vtable=prototype_vtable;
    call_fixture022.native_vtable=native_vtable;call_fixture022.array_vtable=array_vtable;call_fixture022.base_vtable=base_vtable;
    return 1;
}

void fixture_prepare022(SqPrototypeU32 length,SqPrototypeU32 captures,SqPrototypeU32 flags)
{
    for(SqPrototypeU32 index=0;index<0x40000;index++)call_fixture022.memory[index]=0;
    call_fixture022.fault=call_fixture022.event_count=call_fixture022.native_allocations=call_fixture022.array_allocations=0;
    call_fixture022.reallocations=call_fixture022.returned=0;
    call_fixture022.error_mode=call_fixture022.string_allocations=call_fixture022.string_bytes=call_fixture022.scratch_bytes=0;
    call_fixture022.type_error_visits=call_fixture022.type_error_index=call_fixture022.type_error_mask=call_fixture022.type_error_type=0;
    fixture_contract_reset022();
    call_fixture022.array_length=length;call_fixture022.captures=captures;
    SqVmCallStorage022 *vm=fixture_vm022();*vm=(SqVmCallStorage022){0};
    SqLookupSharedStorage020 *shared=fixture_shared022();*shared=(SqLookupSharedStorage020){0};
    vm->common.shared=&shared->common;
    SqStringTable015 *strings=(void*)(call_fixture022.memory+0x3800);
    *strings=(SqStringTable015){0};strings->buckets=(void*)(call_fixture022.memory+0x3c00);strings->slots=4;
    sq_string_provision_table015(&shared->common,strings);
    SqPrefixVector012 stack={(void*)(call_fixture022.memory+0x5000),(flags&1)?10:32,(flags&1)?16:32};
    sq_vm_publish_stack022(vm,stack);
    for(SqPrototypeU32 index=0;index<32;index++)stack.values[index]=(SqPrefixObject012){0x01000001u,{.reference=0}};
    vm->common.top=8;vm->common.base=1;vm->common.error.type=0x01000001u;
    for(SqPrototypeU32 index=0;index<2;index++) {
        SqPrototype011 *object=fixture_prototype022(index);*object=(SqPrototype011){0};
        object->reference=(SqPrototypePrefix011){call_fixture022.prototype_vtable,1,0};
        object->name.type=object->source_name.type=0x01000001u;
    }
    for(SqPrototypeU32 index=0;index<captures;index++) {
        stack.values[8-captures+index]=(SqPrefixObject012){0x08002000u,{.reference=fixture_prototype022(0)}};
        if(index)fixture_prototype022(0)->reference.references++;
    }
    if(!captures)fixture_prototype022(0)->reference.references=0;
    *fixture_result022()=(SqPrefixObject012){0x08002000u,{.reference=fixture_prototype022(1)}};
    stack.values[4]=(SqPrefixObject012){0x05000002u,{.integer=(SqPrototypeI32)length}};
    SqVmCallVector022 calls={(void*)(call_fixture022.memory+0xc000),4,4};
    for(SqPrototypeU32 index=0;index<4;index++) {
        calls.values[index]=(SqVmCallFrame022){0};calls.values[index].closure.type=0x01000001u;
    }
    sq_vm_publish_calls022(vm,calls);sq_vm_set_call_stack022(vm,calls.values);
    sq_vm_set_allocated_calls022(vm,4);sq_vm_set_call_count022(vm,(flags&2)?4:0);
    sq_vm_set_current022(vm,(flags&2)?calls.values+3:0);
}

void fixture_register022(SqPrototypeU32 source)
{
    call_fixture022.source=source;call_fixture022.phase=1;
    if(source)fn_00176fc8(fixture_vm022(),fixture_array_callback022,call_fixture022.captures);
    else fixture_original_register022(fixture_vm022(),fixture_array_callback022,call_fixture022.captures);
}

void fixture_call022(SqPrototypeU32 source)
{
    call_fixture022.source=source;call_fixture022.phase=2;
    SqVmCallStorage022 *vm=fixture_vm022();
    const SqPrefixObject012 *callable=sq_lookup_stack020(vm)+sq_lookup_top020(vm)-1;
    call_fixture022.returned=source?sq_vm_call022(vm,callable,2,3,fixture_result022(),0xffffffffu):
        fixture_original_call022(vm,callable,2,3,fixture_result022(),0xffffffffu);
}

SqPrototypeI32 fixture_array_callback022(void *vm)
{
    return fixture_native_dispatch022(vm);
}

void fixture_cleanup022(SqPrototypeU32 source)
{
    call_fixture022.phase=3;
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    if(source)sq_prefix_assign(fixture_result022(),&empty);else fixture_original_assign022(fixture_result022(),&empty);
    SqPrefixObject012 *stack=sq_lookup_stack020(fixture_vm022());
    for(SqPrototypeU32 index=0;index<sq_vm_stack_vector022(fixture_vm022()).size;index++) {
        if(source)sq_prefix_assign(stack+index,&empty);else fixture_original_assign022(stack+index,&empty);
    }
}

SqPrototypeU32 fixture_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 observed_length=call_fixture022.array_allocations?call_fixture022.array_length:0;
    if(capacity<30+call_fixture022.event_count*12+observed_length*3)return 0;
    SqPrototypeU32 cursor=0;SqVmCallStorage022 *vm=fixture_vm022();
    output[cursor++]=call_fixture022.fault;output[cursor++]=call_fixture022.returned;
    output[cursor++]=(SqPrototypeU32)sq_lookup_top020(vm);output[cursor++]=(SqPrototypeU32)sq_lookup_base020(vm);
    output[cursor++]=(SqPrototypeU32)sq_vm_call_count022(vm);output[cursor++]=(SqPrototypeU32)sq_vm_native_depth022(vm);
    output[cursor++]=fixture_result022()->type;output[cursor++]=fixture_payload022(*fixture_result022());
    output[cursor++]=fixture_result022()->type&0x08000000u?sq_prefix_count(fixture_result022()->value.reference):0;
    output[cursor++]=sq_prefix_count(call_fixture022.memory+0x20000);
    output[cursor++]=fixture_prototype022(0)->reference.references;
    output[cursor++]=fixture_prototype022(1)->reference.references;
    output[cursor++]=call_fixture022.native_allocations;output[cursor++]=call_fixture022.array_allocations;
    output[cursor++]=call_fixture022.reallocations;output[cursor++]=call_fixture022.event_count;
    output[cursor++]=sizeof(SqVmCallFrame022);output[cursor++]=sizeof(SqVmCallStorage022);
    output[cursor++]=fixture_identity022(fixture_shared022()->common.chain);
    output[cursor++]=sizeof(void*);
    SqOpaqueArray012 *array=(void*)(call_fixture022.memory+0x21000);
    SqNativeClosure013 *native=(void*)(call_fixture022.memory+0x20000);
    output[cursor++]=array->vector.size;output[cursor++]=array->vector.capacity;
    output[cursor++]=observed_length;output[cursor++]=sq_prefix_count(array);
    output[cursor++]=array->reference.prefix.vtable==call_fixture022.base_vtable;
    output[cursor++]=native->reference.prefix.vtable==call_fixture022.base_vtable;
    SqVmCallFrame022 *current=sq_vm_current022(vm);
    output[cursor++]=current?(SqPrototypeU32)(current-sq_vm_call_stack022(vm))+1:0;
    __UINTPTR_TYPE__ callable=0;
    __builtin_memcpy(&callable,&native->function,sizeof(callable));
    output[cursor++]=(SqPrototypeU32)callable;
    output[cursor++]=sizeof(callable)==8?(SqPrototypeU32)((unsigned long long)callable>>32):0;
    output[cursor++]=sq_vm_stack_vector022(vm).size;
    for(SqPrototypeU32 index=0;index<call_fixture022.event_count;index++)
        for(SqPrototypeU32 field=0;field<12;field++)output[cursor++]=call_fixture022.events[index][field];
    for(SqPrototypeU32 index=0;index<observed_length;index++) {
        SqPrefixObject012 value=array->vector.values[index];
        output[cursor++]=value.type;output[cursor++]=fixture_payload022(value);
        output[cursor++]=value.type&0x08000000u?sq_prefix_count(value.value.reference):0;
    }
    return cursor;
}
