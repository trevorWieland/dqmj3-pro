#include "fixture_internal.h"

static void *allocate(SqPrototypeU32 bytes,SqPrototypeU32 kind)
{
    SqClassFixture030 *fixture=&class_fixture030;
    if(!bytes||fixture->allocations==48||fixture->bump<0x30000||fixture->bump+bytes>0x34000) {
        fixture->fault=1;sq_class_failure030();
    }
    unsigned char *pointer=table_fixture019.memory+fixture->bump;
    fixture->bump=(fixture->bump+bytes+255)&~255u;
    for(SqPrototypeU32 index=0;index<bytes;index++)pointer[index]=0xa5;
    fixture->blocks[fixture->allocations++]=(SqClassAllocation030){pointer,bytes,kind,0};
    fixture_event030(1,pointer,bytes,kind);
    return pointer;
}

SqClass030 *fixture_new_class030(SqClass030 *base)
{
    SqClass030 *klass=allocate(sizeof(SqClass030),1);
    return sq_class_initialize030(klass,&fixture_shared020()->common,base);
}

void *sq_class_allocate030(SqPrototypeU32 bytes)
{
    void *result=allocate(bytes,2);
    SqClass030 *klass=class_fixture030.classes[0];
    if(class_fixture030.variant==17)klass->common.instance_bytes=4;
    if(class_fixture030.variant==18)klass->common.shared=fixture_state019(1);
    return result;
}
SqTable019 *sq_class_allocate_table030(void) { return allocate(sizeof(SqTable019),3); }
void *sq_weak_allocate014(SqPrototypeU32 bytes) { return allocate(bytes,5); }

void *sq_class_reallocate030(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    void *result=allocate(new_bytes,4);
    for(SqPrototypeU32 index=0;index<old_bytes && index<new_bytes;index++)
        ((unsigned char*)result)[index]=((const unsigned char*)storage)[index];
    if(storage) {
        SqPrototypeU32 id=fixture_owned030(storage);
        if(!id||class_fixture030.blocks[id-1].bytes!=old_bytes||class_fixture030.blocks[id-1].frees++) {
            class_fixture030.fault=7;sq_class_failure030();
        }
    }
    fixture_event030(2,storage,old_bytes,new_bytes);
    return result;
}

SqPrototypeU32 fixture_owned030(const void *pointer)
{
    for(SqPrototypeU32 index=0;index<class_fixture030.allocations;index++)
        if(class_fixture030.blocks[index].pointer==pointer)return index+1;
    return 0;
}

void sq_class_deallocate030(void *pointer,SqPrototypeU32 bytes)
{
    SqPrototypeU32 id=fixture_owned030(pointer);
    if(!id||class_fixture030.blocks[id-1].bytes!=bytes||class_fixture030.blocks[id-1].frees++) {
        class_fixture030.fault=2;sq_class_failure030();
    }
    fixture_event030(3,pointer,bytes,0);
}

_Noreturn void sq_class_failure030(void)
{
    if(!class_fixture030.fault)class_fixture030.fault=99;
    for(;;) { }
}
