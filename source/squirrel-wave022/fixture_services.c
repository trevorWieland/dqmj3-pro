#include "contract_fixture.h"
#include "../squirrel-wave020/lookup_error.h"

static void record(void *pointer,SqPrototypeU32 bytes)
{
    SqPrototypeU32 id=fixture_identity022(pointer),expected=0;
    if(id==1)expected=sizeof(SqNativeClosure013);
    if(id==2)expected=sizeof(SqOpaqueArray012);
    if(id==11)expected=sizeof(SqScriptClosure017);
    if(id==13)expected=call_fixture022.string_bytes;
    if(id==15)expected=sizeof(SqWeakReference014);
    if(id==16)expected=2*sizeof(SqPrototypeI32);
    if(id==3||id==4||id==17)expected=sizeof(SqPrototype011);
    if(id==5)expected=4*sizeof(SqPrefixObject012);
    if(id==6)expected=call_fixture022.array_length*sizeof(SqPrefixObject012);
    if(id==7)expected=32*sizeof(SqPrefixObject012);
    if(id==9)expected=4*sizeof(SqVmCallFrame022);
    if(!expected||expected!=bytes||call_fixture022.event_count>=128){call_fixture022.fault=1;return;}
    SqPrototypeU32 *event=call_fixture022.events[call_fixture022.event_count++];
    SqVmCallStorage022 *vm=fixture_vm022();SqPrefixObject012 result=*fixture_result022();
    event[0]=id;event[1]=bytes;event[2]=(SqPrototypeU32)sq_lookup_top020(vm);event[3]=(SqPrototypeU32)sq_lookup_base020(vm);
    event[4]=(SqPrototypeU32)sq_vm_call_count022(vm);event[5]=(SqPrototypeU32)sq_vm_native_depth022(vm);
    event[6]=result.type;event[7]=fixture_payload022(result);
    event[8]=result.type&0x08000000u?sq_prefix_count(result.value.reference):0;
    SqVmCallFrame022 *current=sq_vm_current022(vm);
    event[9]=current?(current->closure.type&0x08000000u?fixture_payload022(current->closure):0x80000000u):0;
    event[10]=sq_prefix_count(call_fixture022.memory+0x20000);
    event[11]=sq_prefix_count(call_fixture022.memory+0x21000);
}

void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{
    if(bytes!=sizeof(SqNativeClosure013)||call_fixture022.native_allocations++){call_fixture022.fault=2;return 0;}
    return call_fixture022.memory+0x20000;
}

void *sq_opaque_array_allocate012(SqPrototypeU32 bytes)
{
    if(bytes!=sizeof(SqOpaqueArray012)||call_fixture022.array_allocations++){call_fixture022.fault=3;return 0;}
    return call_fixture022.memory+0x21000;
}

void *sq_vm_call_reallocate022(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    unsigned char *memory=call_fixture022.memory;void *result=0;
    if(call_fixture022.phase==1 && !storage && old_bytes==0 && new_bytes==4*sizeof(SqPrefixObject012))result=memory+0x2a000;
    else if(storage==memory+0x5000 && old_bytes==16*sizeof(SqPrefixObject012) && new_bytes==30*sizeof(SqPrefixObject012))result=memory+0x8000;
    else if(storage==memory+0xc000 && old_bytes==4*sizeof(SqVmCallFrame022) && new_bytes==8*sizeof(SqVmCallFrame022))result=memory+0xd000;
    else if(!storage && old_bytes==0 && new_bytes==call_fixture022.array_length*sizeof(SqPrefixObject012))result=memory+0x22000;
    if(!result||!new_bytes){call_fixture022.fault=4;return 0;}
    for(SqPrototypeU32 index=0;index<old_bytes && index<new_bytes;index++)((unsigned char*)result)[index]=((const unsigned char*)storage)[index];
    call_fixture022.reallocations++;
    return result;
}

void *sq_native_create_reallocate016(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{return sq_vm_call_reallocate022(storage,old_bytes,new_bytes);}
void *sq_reallocate(void *storage,SqU32 old_bytes,SqU32 new_bytes)
{return sq_vm_call_reallocate022(storage,old_bytes,new_bytes);}
void sq_deallocate(void *pointer,SqU32 bytes){record(pointer,bytes);}
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes){record(pointer,bytes);}
void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes){record(pointer,bytes);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes){record(pointer,bytes);}
void *sq_weak_allocate014(SqPrototypeU32 bytes){if(bytes!=sizeof(SqWeakReference014)){call_fixture022.fault=5;return 0;}return call_fixture022.memory+0x2f000;}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes){record(pointer,bytes);}
void sq_vm_call_type_error022(void *vm,SqPrototypeI32 index,SqPrototypeI32 mask,SqPrototypeU32 type)
{if(vm!=fixture_vm022()){call_fixture022.fault=7;return;}call_fixture022.type_error_visits++;call_fixture022.type_error_index=(SqPrototypeU32)index;call_fixture022.type_error_mask=(SqPrototypeU32)mask;call_fixture022.type_error_type=type;}
_Bool sq_vm_execute022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type)
{return fixture_execute_contract022(vm,callable,target,arguments,base,result,raise_error,execution_type);}
_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *instance,SqPrefixObject012 *constructor)
{return fixture_class_contract022(vm,klass,instance,constructor);}
_Noreturn void sq_vm_array_failure022(void){for(;;){}}
