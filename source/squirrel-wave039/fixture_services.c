#include "fixture.h"
_Noreturn void sq_iteration_generator_unsupported039(void *generator){(void)generator;execute_fixture028.fault=3952;for(;;){}}
_Noreturn void sq_iteration_failure_unsupported039(void *vm){(void)vm;execute_fixture028.fault=3951;for(;;){}}
_Noreturn void sq_class_failure030(void){execute_fixture028.fault=3930;for(;;){}}
SqTable019 *sq_class_allocate_table030(void){return sq_table_allocate019(sizeof(SqTable019));}

extern void *sq_baseline_weak_allocate039(SqPrototypeU32 bytes);
extern void sq_baseline_weak_deallocate039(void *pointer,SqPrototypeU32 bytes);
void *sq_weak_allocate014(SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode<64)return sq_baseline_weak_allocate039(bytes);
    if(bytes!=sizeof(SqWeakReference014)||iteration_fixture039.weak_allocations>=2){execute_fixture028.fault=3914;return 0;}
    return execute_fixture028.memory+0x65000+iteration_fixture039.weak_allocations++*0x100;
}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode<64){sq_baseline_weak_deallocate039(pointer,bytes);return;}
    if((pointer!=execute_fixture028.memory+0x65000&&pointer!=execute_fixture028.memory+0x65100)||bytes!=sizeof(SqWeakReference014)||iteration_fixture039.events>=64){execute_fixture028.fault=3915;return;}
    SqPrototypeU32 *event=iteration_fixture039.event[iteration_fixture039.events++];event[0]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());event[1]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());event[2]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());event[3]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm028());
    event[13]=bytes;event[14]=pointer==execute_fixture028.memory+0x65000?1:2;event[15]=14;
}

extern void sq_predecessor_deallocate039(void *pointer,SqPrototypeU32 bytes);
void sq_deallocate(void *pointer,SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode>=64&&(pointer==execute_fixture028.memory+0x9000||pointer==execute_fixture028.memory+0x17000)) {
        if(bytes!=4*sizeof(SqPrefixObject012)||iteration_fixture039.events>=64){execute_fixture028.fault=3916;return;}
        SqPrototypeU32 *event=iteration_fixture039.event[iteration_fixture039.events++];event[0]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());event[1]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());event[2]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());event[3]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm028());event[13]=bytes;event[15]=6;return;
    }
    sq_predecessor_deallocate039(pointer,bytes);
}

void *sq_class_allocate030(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index=iteration_fixture039.class_allocations;
    if(index>=16||bytes>4096){execute_fixture028.fault=3931;return 0;}
    void *block=execute_fixture028.memory+0x80000+index*4096;
    iteration_fixture039.class_blocks[index]=block;iteration_fixture039.class_bytes[index]=bytes;iteration_fixture039.class_allocations++;return block;
}
void *sq_class_reallocate030(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    void *block=sq_class_allocate030(next);
    if(old)for(SqPrototypeU32 i=0;i<previous&&i<next;i++)((unsigned char*)block)[i]=((unsigned char*)old)[i];return block;
}
void sq_class_deallocate030(void *pointer,SqPrototypeU32 bytes)
{
    SqPrototypeU32 index=0;for(;index<iteration_fixture039.class_allocations;index++)if(iteration_fixture039.class_blocks[index]==pointer)break;
    if(index==iteration_fixture039.class_allocations||iteration_fixture039.class_bytes[index]!=bytes||iteration_fixture039.events>=64){execute_fixture028.fault=3932;return;}
    SqPrototypeU32 *row=iteration_fixture039.event[iteration_fixture039.events++];row[0]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());row[1]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());row[2]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());row[3]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm028());row[13]=bytes;row[14]=index;row[15]=30;
}

extern void *sq_baseline_native_allocate039(SqPrototypeU32 bytes);
extern void sq_baseline_native_deallocate039(void *pointer,SqPrototypeU32 bytes);
void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode<64)return sq_baseline_native_allocate039(bytes);
    if(bytes!=sizeof(SqNativeClosure013)||iteration_fixture039.native_allocations>=2){execute_fixture028.fault=3913;return 0;}
    return execute_fixture028.memory+0x12000+iteration_fixture039.native_allocations++*0x1000;
}
void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode<64){sq_baseline_native_deallocate039(pointer,bytes);return;}
    if((pointer!=execute_fixture028.memory+0x12000&&pointer!=execute_fixture028.memory+0x13000)||bytes!=sizeof(SqNativeClosure013)||iteration_fixture039.events>=64){execute_fixture028.fault=3917;return;}
    SqPrototypeU32 *row=iteration_fixture039.event[iteration_fixture039.events++];row[0]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());row[1]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());row[2]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());row[3]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm028());row[13]=bytes;row[14]=pointer==execute_fixture028.memory+0x12000?1:2;row[15]=13;
}

extern void sq_baseline_prototype_deallocate039(void *pointer,SqPrototypeU32 bytes);
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes)
{
    if(iteration_fixture039.mode==71||iteration_fixture039.mode==72) {
        if(pointer==fixture_extra028(1)&&iteration_fixture039.events<64) {
            SqPrefixObject012 key=sq_lookup_stack020(fixture_vm028())[5];SqPrototypeU32 *row=iteration_fixture039.event[iteration_fixture039.events++];
            row[0]=(SqPrototypeU32)sq_lookup_top020(fixture_vm028());row[1]=(SqPrototypeU32)sq_lookup_base020(fixture_vm028());row[2]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm028());row[3]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm028());row[4]=key.type;row[5]=key.type&0x08000000u?fixture_id028(key.value.reference):key.value.bits;row[6]=key.type&0x08000000u?sq_prefix_count(key.value.reference):0;row[13]=bytes;row[14]=4;row[15]=11;
        }
    }
    sq_baseline_prototype_deallocate039(pointer,bytes);
}
