#include "fixture.h"

void *fixture_allocate044(SqPrototypeU32 bytes,SqPrototypeU32 kind)
{
    SqGeneratorFixture044 *fixture=&generator_fixture044;
    if(!bytes||fixture->blocks==64||fixture->bump+bytes>0x40000){fixture->fault=1;sq_generator_assert044();}
    void *pointer=fixture->memory+fixture->bump;
    fixture->bump=(fixture->bump+bytes+255)&~255u;
    for(SqPrototypeU32 i=0;i<bytes;i++)((unsigned char*)pointer)[i]=0xa5;
    fixture->block[fixture->blocks++]=(SqGeneratorBlock044){pointer,bytes,kind,0};
    return pointer;
}

SqPrototypeU32 fixture_identity044(const void *pointer)
{
    if(!pointer)return 0;
    if(pointer==fixture_shared044())return 1;
    for(SqPrototypeU32 i=0;i<generator_fixture044.blocks;i++)
        if(generator_fixture044.block[i].pointer==pointer)return 100+i;
    return 0xffffffffu;
}

void fixture_deallocate044(void *pointer,SqPrototypeU32 bytes)
{
    SqGeneratorFixture044 *fixture=&generator_fixture044;SqPrototypeU32 id=fixture_identity044(pointer);
    if(id<100||id>=100+fixture->blocks||fixture->block[id-100].bytes!=bytes||fixture->block[id-100].frees++) {
        fixture->fault=2;sq_generator_assert044();
    }
    if(fixture->events==128){fixture->fault=3;sq_generator_assert044();}
    SqPrototypeU32 *event=fixture->event[fixture->events++];
    event[0]=id;event[1]=bytes;event[2]=fixture->block[id-100].kind;
    event[3]=fixture->generator?fixture_identity044(fixture_shared044()->chain):0;
    event[4]=fixture->weak.type==0x08010000u?((SqWeakReference014*)fixture->weak.value.reference)->object.type:0;
    event[5]=fixture->generator?fixture->generator->reference.prefix.references:0;
}

void *sq_generator_allocate044(SqPrototypeU32 bytes)
{return generator_fixture044.variant==12?0:fixture_allocate044(bytes,6);}
void sq_generator_deallocate044(void *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
void *sq_reallocate(void *storage,SqU32 previous,SqU32 next)
{
    void *out=fixture_allocate044(next,7);
    for(SqPrototypeU32 i=0;i<previous&&i<next;i++)((unsigned char*)out)[i]=((const unsigned char*)storage)[i];
    if(storage)fixture_deallocate044(storage,previous);
    return out;
}
void sq_deallocate(void *pointer,SqU32 bytes){fixture_deallocate044(pointer,bytes);}
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
void sq_native_closure_deallocate013(void *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
void *sq_weak_allocate014(SqPrototypeU32 bytes){return fixture_allocate044(bytes,5);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes){return fixture_allocate044(bytes,4);}
SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes){return fixture_allocate044(bytes,10);}
void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
void sq_string_deallocate_buckets015(SqString015 **pointer,SqPrototypeU32 bytes){fixture_deallocate044(pointer,bytes);}
_Noreturn void sq_generator_assert044(void){for(;;){}}
_Noreturn void sq_string_missing015(void){generator_fixture044.fault=4;sq_generator_assert044();}
