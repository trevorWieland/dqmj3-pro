#define sq_string_allocate_value015 fixture_string_allocate_saved034
#define sq_table_deallocate019 fixture_table_deallocate_saved034
#define sq_deallocate fixture_deallocate_saved034
#define sq_weak_allocate014 fixture_weak_allocate_saved034
#define sq_weak_deallocate014 fixture_weak_deallocate_saved034
#define sq_string_deallocate_value015 fixture_string_deallocate_saved034
#define sq_prototype_deallocate011 fixture_prototype_deallocate_saved034
#include "../squirrel-wave019/fixture_services.c"
#undef sq_string_allocate_value015
#undef sq_table_deallocate019
#undef sq_deallocate
#undef sq_weak_allocate014
#undef sq_weak_deallocate014
#undef sq_string_deallocate_value015
#undef sq_prototype_deallocate011
#include "fixture.h"

SqPrototypeU32 fixture_string_id034(const void *pointer)
{
    __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)pointer,begin=(__UINTPTR_TYPE__)(table_fixture019.memory+0x3c000);
    if(address>=begin&&address<begin+0x4000&&(address-begin)%0x100==0)return 1+(SqPrototypeU32)((address-begin)/0x100);
    return 0;
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index=table_fixture019.string_allocations;
    if(index<8)return fixture_string_allocate_saved034(bytes);
    if(index>=72||bytes>0x100)sq_class_failure030();
    table_fixture019.string_allocations++;
    class_fixture034.string_bytes[index-8]=bytes;
    return(void*)(table_fixture019.memory+0x3c000+(index-8)*0x100);
}

static void deallocate(void *pointer,SqPrototypeU32 bytes,_Bool table)
{
    if(fixture_owned030(pointer)){sq_class_deallocate030(pointer,bytes);return;}
    if(pointer==fixture_table_at020(0x9500)) {
        if(bytes!=sizeof(SqTable019)||class_fixture034.meta_table_frees++)sq_class_failure030();
        return;
    }
    for(SqPrototypeU32 index=0;index<2;index++)if(pointer==fixture_table_at020(0x9600+index*0x100)) {
        if(bytes!=sizeof(SqTable019)||class_fixture034.table_frees[index]++)sq_class_failure030();
        return;
    }
    SqPrototypeU32 string=fixture_string_id034(pointer);
    if(string) {
        if(class_fixture034.string_bytes[string-1]!=bytes||class_fixture034.string_frees[string-1]++)sq_class_failure030();
        return;
    }
    if(pointer==table_fixture019.memory+0x1d000||pointer==table_fixture019.memory+0x1d800) {
        if(class_fixture034.events==128)sq_class_failure030();
        SqPrototypeU32 *row=class_fixture034.event[class_fixture034.events++];
        row[0]=2;row[1]=(SqPrototypeU32)sq_lookup_top020(fixture_vm020());
        row[2]=(SqPrototypeU32)sq_lookup_base020(fixture_vm020());
        row[3]=(SqPrototypeU32)sq_vm_call_count022(fixture_vm020());
        row[4]=(SqPrototypeU32)sq_vm_native_depth022(fixture_vm020());row[5]=fixture_vm020()->error.type;
        fixture_call_deallocate023(pointer,bytes);return;
    }
    if(table)fixture_table_deallocate_saved034(pointer,bytes);
    else fixture_deallocate_saved034(pointer,bytes);
    if(class_fixture034.variant==45&&pointer==fixture_prototype019(1)&&
            fixture_destination019()->type==0x0a008000u) {
        class_fixture030.instance=fixture_destination019()->value.reference;
        sq_prefix_clear(fixture_destination019());
        class_fixture034.results[class_fixture034.result_count++]=class_fixture030.instance->reference.prefix.references;
    }
    if(class_fixture034.variant==47&&pointer==fixture_prototype019(1)&&fixture_destination019()->type==0x08004000u) {
        class_fixture030.classes[1]=fixture_destination019()->value.reference;
        sq_prefix_assign(fixture_destination019(),&class_fixture034.result_owner);
        class_fixture034.results[class_fixture034.result_count++]=class_fixture030.classes[1]->common.reference.prefix.references;
    }
}

void sq_table_deallocate019(void *pointer,SqPrototypeU32 bytes){deallocate(pointer,bytes,1);}
void sq_deallocate(void *pointer,SqU32 bytes){deallocate(pointer,bytes,0);}
void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes){deallocate(pointer,bytes,0);}
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes){deallocate(pointer,bytes,0);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes)
{if(fixture_owned030(pointer))sq_class_deallocate030(pointer,bytes);else fixture_weak_deallocate_saved034(pointer,bytes);}

