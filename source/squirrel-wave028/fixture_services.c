#include "fixture.h"
#include "../squirrel-wave025/type_error.h"

void fixture_record028(void *pointer,SqPrototypeU32 bytes)
{
    SqPrototypeU32 id=fixture_id028(pointer),expected=0;
    if(id==1)expected=sizeof(SqScriptClosure017);else if(id==2)expected=execute_fixture028.prototype_bytes;
    else if(id==3||id==4)expected=sizeof(SqPrototype011);else if(id==5)expected=sizeof(SqPrefixObject012);else if(id==10)expected=sizeof(SqNativeClosure013);else if(id==11)expected=sizeof(SqOpaqueArray012);else if(id==12)expected=execute_fixture028.value*sizeof(SqPrefixObject012);else if(id==13)expected=sq_string_allocation_bytes015((SqPrototypeU32)((SqString015*)pointer)->length);
    if(!expected||bytes!=expected||execute_fixture028.events>=128){execute_fixture028.fault=1;return;}
    void *vm=fixture_vm028();SqVmCallFrame022 *frame=sq_vm_current022(vm);SqPrefixObject012 temporary=sq_execute_temporary_value028(vm);
    SqPrototypeU32 *event=execute_fixture028.event[execute_fixture028.events++];
    event[0]=id;event[1]=bytes;event[2]=(SqPrototypeU32)sq_lookup_top020(vm);event[3]=(SqPrototypeU32)sq_lookup_base020(vm);
    event[4]=(SqPrototypeU32)sq_vm_call_count022(vm);event[5]=(SqPrototypeU32)sq_vm_native_depth022(vm);
    event[6]=frame?(SqPrototypeU32)(frame-sq_vm_call_stack022(vm))+1:0;event[7]=frame?frame->closure.type:0;
    event[8]=frame&&frame->closure.type&0x08000000u?sq_prefix_count(frame->closure.value.reference):0;
    event[9]=temporary.type;event[10]=temporary.type&0x08000000u?fixture_id028(temporary.value.reference):temporary.value.bits;
    event[11]=temporary.type&0x08000000u?sq_prefix_count(temporary.value.reference):0;
    event[12]=fixture_script028()->reference.prefix.references;event[13]=fixture_function028()->reference.references;
    event[14]=fixture_extra028(0)->reference.references;event[15]=fixture_result028()->type;
    event[16]=sq_lookup_stack020(vm)[4].type;event[17]=sq_lookup_stack020(vm)[4].type&0x08000000u?fixture_id028(sq_lookup_stack020(vm)[4].value.reference):sq_lookup_stack020(vm)[4].value.bits;
    event[18]=fixture_extra028(1)->reference.references;event[19]=0;
}
static void *reallocate(void *old,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes,SqPrototypeU32 kind)
{
    if(new_bytes>4096||old_bytes>new_bytes){execute_fixture028.fault=2;return 0;}
    unsigned char *next=execute_fixture028.memory+(kind?0xd000:old?0x9000:0x17000);
    if(old)for(SqPrototypeU32 i=0;i<old_bytes;i++)next[i]=((unsigned char*)old)[i];execute_fixture028.reallocations++;return next;
}
void *sq_reallocate(void *old,SqU32 a,SqU32 b){return reallocate(old,a,b,0);}
void *sq_vm_call_reallocate022(void *old,SqPrototypeU32 a,SqPrototypeU32 b){return reallocate(old,a,b,1);}
void sq_deallocate(void *pointer,SqU32 bytes){fixture_record028(pointer,bytes);}
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void *sq_weak_allocate014(SqPrototypeU32 bytes){(void)bytes;execute_fixture028.fault=3;return 0;}
void *sq_native_create_allocate016(SqPrototypeU32 bytes){if(bytes!=sizeof(SqNativeClosure013))execute_fixture028.fault=4;return execute_fixture028.memory+0x12000;}
void *sq_native_create_reallocate016(void *old,SqPrototypeU32 a,SqPrototypeU32 b){(void)old;(void)a;(void)b;execute_fixture028.fault=5;return 0;}
void *sq_opaque_array_allocate012(SqPrototypeU32 bytes){if(bytes!=sizeof(SqOpaqueArray012))execute_fixture028.fault=6;return execute_fixture028.memory+0x16000;}
SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes){if(bytes>512)execute_fixture028.fault=7;return(void*)(execute_fixture028.memory+0x50000);}
SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes){(void)bytes;execute_fixture028.fault=8;return 0;}
void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void sq_string_deallocate_buckets015(SqString015 **pointer,SqPrototypeU32 bytes){fixture_record028(pointer,bytes);}
void *sq_lookup_reallocate020(void *old,SqPrototypeU32 a,SqPrototypeU32 b){if(b>512)execute_fixture028.fault=9;unsigned char *next=execute_fixture028.memory+0x6000;if(old)for(SqPrototypeU32 i=0;i<a&&i<b;i++)next[i]=((unsigned char*)old)[i];execute_fixture028.reallocations++;return next;}
_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *instance,SqPrefixObject012 *constructor)
{(void)vm;(void)klass;(void)instance;(void)constructor;execute_fixture028.fault=10;return 0;}
void sq_execute_debug028(void *vm,SqPrototypeI32 event,SqPrototypeI32 line){(void)vm;(void)event;(void)line;execute_fixture028.fault=11;}
void sq_execute_error_handler028(void *vm,const SqPrefixObject012 *error){(void)error;SqPrefixObject012 handler=sq_execute_error_handler_value028(vm);if(handler.type!=0x01000001u)execute_fixture028.fault=12;}
_Noreturn void sq_execute_unsupported028(void *vm,SqPrototypeI32 reason){(void)vm;execute_fixture028.fault=(SqPrototypeU32)reason;for(;;){}}
_Noreturn void sq_vm_array_failure022(void){execute_fixture028.fault=13;for(;;){}}
_Noreturn void sq_string_missing015(void){execute_fixture028.fault=14;for(;;){}}
_Noreturn void sq_type_error_format_unsupported025(void){execute_fixture028.fault=15;for(;;){}}
_Noreturn void sq_type_error_string_unsupported025(void){execute_fixture028.fault=16;for(;;){}}

void fixture_native_event028(void *vm)
{
    SqPrototypeU32 *event=execute_fixture028.event[execute_fixture028.events++];event[0]=100;event[1]=0;
    event[2]=(SqPrototypeU32)sq_lookup_top020(vm);event[3]=(SqPrototypeU32)sq_lookup_base020(vm);event[4]=(SqPrototypeU32)sq_vm_call_count022(vm);
    event[5]=(SqPrototypeU32)sq_vm_native_depth022(vm);event[6]=(SqPrototypeU32)(sq_vm_current022(vm)-sq_vm_call_stack022(vm))+1;
    event[7]=sq_vm_current022(vm)->closure.type;event[8]=sq_prefix_count(sq_vm_current022(vm)->closure.value.reference);
}
