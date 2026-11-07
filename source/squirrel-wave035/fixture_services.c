#include "fixture.h"

void *sq_exception_reallocate035(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    if(next>4096||fixture035.allocations>=4){execute_fixture028.fault=3535;return 0;}
    SqPrototypeU32 *row=fixture035.event[fixture035.events++];SqTrapVector028 traps=sq_exception_traps035(fixture_vm028());
    row[0]=1;row[1]=previous;row[2]=next;row[3]=traps.size;row[4]=traps.capacity;
    row[5]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());row[6]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());row[7]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());
    row[8]=sq_vm_current022(fixture_vm028())?(SqPrototypeU32)sq_vm_current022(fixture_vm028())->traps:0;
    unsigned char *result=execute_fixture028.memory+0x80000+fixture035.allocations++*4096;
    if(old)for(SqPrototypeU32 i=0;i<previous;i++)result[i]=((unsigned char*)old)[i];return result;
}
_Noreturn void sq_exception_generator_unsupported035(void *generator)
{(void)generator;execute_fixture028.fault=3536;for(;;){}}

extern void *sq_baseline_create_allocate035(SqPrototypeU32 bytes);
void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{
    if(fixture035.program<64)return sq_baseline_create_allocate035(bytes);
    if(bytes!=sizeof(SqNativeClosure013)||fixture035.allocations>=4){execute_fixture028.fault=3537;return 0;}
    return execute_fixture028.memory+0x12000;
}
void fixture_event035(SqPrototypeU32 kind)
{
    if(fixture035.events>=64){execute_fixture028.fault=3538;return;}
    void *vm=fixture_vm028();SqPrototypeU32 *row=fixture035.event[fixture035.events++];SqPrefixObject012 error=sq_exception_error035(vm),temporary=sq_execute_temporary_value028(vm);
    row[0]=kind;row[1]=(SqPrototypeU32)sq_lookup_top020(vm);row[2]=(SqPrototypeU32)sq_lookup_base020(vm);row[3]=(SqPrototypeU32)sq_vm_call_count022(vm);row[4]=(SqPrototypeU32)sq_vm_native_depth022(vm);
    row[5]=error.type;row[6]=error.type&0x08000000u?fixture_id028(error.value.reference):error.value.bits;row[7]=error.type&0x08000000u?sq_prefix_count(error.value.reference):0;
    row[8]=temporary.type;row[9]=temporary.type&0x08000000u?fixture_id028(temporary.value.reference):temporary.value.bits;row[10]=temporary.type&0x08000000u?sq_prefix_count(temporary.value.reference):0;
    SqPrefixObject012 receiver=sq_lookup_stack020(vm)[sq_lookup_base020(vm)],argument=sq_lookup_stack020(vm)[sq_lookup_base020(vm)+1];
    row[11]=receiver.type;row[12]=argument.type;row[13]=argument.type&0x08000000u?fixture_id028(argument.value.reference):argument.value.bits;row[14]=sq_exception_traps035(vm).size;row[15]=sq_exception_notify035(vm);
}
