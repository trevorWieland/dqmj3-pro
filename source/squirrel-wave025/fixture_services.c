#include "fixture.h"

void fixture_record025(void *pointer,SqPrototypeU32 bytes)
{
    SqPrototypeU32 id=fixture_id025(pointer),expected=0;
    if(id>=1&&id<=type_fixture025.allocations) {
        expected=type_fixture025.sizes[id-1];
        if(!type_fixture025.alive[id-1]){type_fixture025.fault=1;return;}
        type_fixture025.alive[id-1]=0;
    } else if(id==1001)expected=sizeof(SqPrototype011);
    else if(id==1002)expected=sizeof(SqNativeClosure013);
    else if(id==1003)expected=type_fixture025.flags&16?8:4;
    else if(id==1004)expected=sizeof(SqWeakReference014);
    if(!expected||expected!=bytes||type_fixture025.frees>=256){type_fixture025.fault=2;return;}
    SqPrefixObject012 error=fixture_vm025()->common.error;SqWeakReference014 *weak=(void*)(type_fixture025.memory+0x14000);
    SqPrototypeU32 *event=type_fixture025.events[type_fixture025.frees++];
    event[0]=id;event[1]=bytes;event[2]=error.type;event[3]=fixture_id025(error.value.reference);
    event[4]=error.type&0x08000000u?sq_prefix_count(error.value.reference):0;
    event[5]=(SqPrototypeU32)fixture_table025()->used;event[6]=(SqPrototypeU32)fixture_shared025()->scratch_capacity;
    event[7]=fixture_old025()->reference.references;event[8]=weak->object.type;event[9]=fixture_id025(weak->object.value.reference);
    event[10]=fixture_native025()->reference.prefix.references;event[11]=type_fixture025.phase;
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index=type_fixture025.allocations++;
    if(index>=256||bytes>512){type_fixture025.fault=3;return 0;}
    type_fixture025.sizes[index]=bytes;type_fixture025.alive[index]=1;
    return(void*)(type_fixture025.memory+0x20000+index*512);
}
SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes)
{(void)bytes;type_fixture025.fault=4;return 0;}
void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
void sq_string_deallocate_buckets015(SqString015 **pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
_Noreturn void sq_string_missing015(void){type_fixture025.fault=5;for(;;){}}

void *sq_lookup_reallocate020(void *old,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    if(new_bytes>4096||type_fixture025.scratch_slot>=16){type_fixture025.fault=6;return 0;}
    unsigned char *next=type_fixture025.memory+0x80000+type_fixture025.scratch_slot++*4096;
    if(old)for(SqPrototypeU32 index=0;index<old_bytes&&index<new_bytes;index++)next[index]=((unsigned char*)old)[index];
    type_fixture025.reallocations++;return next;
}
void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{if(bytes!=sizeof(SqNativeClosure013)){type_fixture025.fault=7;return 0;}return fixture_native025();}
void *sq_native_create_reallocate016(void *old,SqPrototypeU32 a,SqPrototypeU32 b)
{(void)old;(void)a;(void)b;type_fixture025.fault=8;return 0;}
void *sq_reallocate(void *old,SqU32 a,SqU32 b)
{(void)old;(void)a;(void)b;type_fixture025.fault=9;return 0;}
void sq_deallocate(void *pointer,SqU32 bytes){fixture_record025(pointer,bytes);}
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
void *sq_weak_allocate014(SqPrototypeU32 bytes)
{if(bytes!=sizeof(SqWeakReference014)){type_fixture025.fault=10;return 0;}return type_fixture025.memory+0x14000;}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes){fixture_record025(pointer,bytes);}
void *sq_opaque_array_allocate012(SqPrototypeU32 bytes)
{(void)bytes;type_fixture025.fault=11;return 0;}
void *sq_vm_call_reallocate022(void *old,SqPrototypeU32 a,SqPrototypeU32 b)
{(void)old;(void)a;(void)b;type_fixture025.fault=12;return 0;}
_Bool sq_vm_execute022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 args,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise,SqPrototypeU32 mode)
{(void)vm;(void)callable;(void)target;(void)args;(void)base;(void)result;(void)raise;(void)mode;type_fixture025.fault=13;return 0;}
_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *result,SqPrefixObject012 *constructor)
{(void)vm;(void)klass;(void)result;(void)constructor;type_fixture025.fault=14;return 0;}
_Noreturn void sq_vm_array_failure022(void){type_fixture025.fault=15;for(;;){}}
_Noreturn void sq_type_error_format_unsupported025(void){type_fixture025.fault=16;for(;;){}}
_Noreturn void sq_type_error_string_unsupported025(void){type_fixture025.fault=17;for(;;){}}
