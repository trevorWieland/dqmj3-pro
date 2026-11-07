#include "fixture.h"
#include "../squirrel-wave019/table_internal.h"
extern void *sq_baseline_reallocate031(void*,SqU32,SqU32);
extern void sq_baseline_deallocate031(void*,SqU32);
static void fixture_event031(SqPrototypeU32 kind,SqPrototypeU32 bytes)
{
    if(fixture031.events>=32){execute_fixture028.fault=3131;return;}
    void *vm=fixture_vm028();SqPrototypeU32 *row=fixture031.event[fixture031.events++];SqPrefixObject012 value=sq_lookup_stack020(vm)[4];
    row[0]=kind;row[1]=bytes;row[2]=(SqPrototypeU32)sq_lookup_top020(vm);row[3]=(SqPrototypeU32)sq_lookup_base020(vm);
    row[4]=(SqPrototypeU32)sq_vm_call_count022(vm);row[5]=(SqPrototypeU32)sq_vm_native_depth022(vm);row[6]=value.type;
    row[7]=value.type&0x08000000u?sq_prefix_count(value.value.reference):value.value.bits;
    if(value.type==0x08000040u){SqOpaqueArray012 *array=value.value.reference;row[8]=array->vector.size;row[9]=array->vector.capacity;}
}
void *sq_reallocate(void *old,SqU32 previous,SqU32 next)
{if(fixture031.program>=32)fixture_event031(1,next);return sq_baseline_reallocate031(old,previous,next);}
void *sq_execute_allocate_table031(SqPrototypeU32 bytes)
{if(bytes!=sizeof(SqTable019)){execute_fixture028.fault=3132;return 0;}fixture_event031(2,bytes);return execute_fixture028.memory+0x68000;}
void *sq_table_allocate019(SqPrototypeU32 bytes)
{if(bytes>4096||fixture031.node_allocations>=8){execute_fixture028.fault=3133;return 0;}fixture_event031(3,bytes);return execute_fixture028.memory+0x70000+fixture031.node_allocations++*4096;}
void sq_table_deallocate019(void *pointer,SqPrototypeU32 bytes)
{fixture_event031(pointer==execute_fixture028.memory+0x68000?4:5,bytes);}
_Noreturn void sq_table_invalid019(void){execute_fixture028.fault=3134;for(;;){}}

void sq_deallocate(void *pointer,SqU32 bytes)
{
    if((fixture031.program==33||fixture031.program==50||fixture031.program==51||fixture031.program==41)&&(pointer==execute_fixture028.memory+0x9000||pointer==execute_fixture028.memory+0x17000)) {
        if(bytes!=(fixture031.program==33?8u:4u)*sizeof(SqPrefixObject012)){execute_fixture028.fault=3135;return;}fixture_event031(6,bytes);return;
    }
    sq_baseline_deallocate031(pointer,bytes);
}

void fixture_native_event031(void *vm)
{
    fixture_native_event028(vm);
    if(fixture031.program>=32) {
        fixture_event031(7,0);SqPrototypeU32 *row=fixture031.event[fixture031.events-1];SqPrefixObject012 receiver=sq_lookup_stack020(vm)[sq_lookup_base020(vm)];
        row[10]=receiver.type;row[11]=receiver.type&0x08000000u?sq_prefix_count(receiver.value.reference):receiver.value.bits;
    }
}
