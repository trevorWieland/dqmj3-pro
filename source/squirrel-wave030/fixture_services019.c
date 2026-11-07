#define sq_string_allocate_value015 fixture_allocate_string019_saved030
#define sq_table_deallocate019 fixture_table_deallocate019_saved030
#define sq_deallocate fixture_deallocate019_saved030
#define sq_weak_allocate014 fixture_weak_allocate019_saved030
#define sq_weak_deallocate014 fixture_weak_deallocate019_saved030
#define sq_string_deallocate_value015 fixture_string_deallocate019_saved030
#define sq_prototype_deallocate011 fixture_prototype_deallocate019_saved030
#include "../squirrel-wave019/fixture_services.c"
#undef sq_string_allocate_value015
#undef sq_table_deallocate019
#undef sq_deallocate
#undef sq_weak_allocate014
#undef sq_weak_deallocate014
#undef sq_string_deallocate_value015
#undef sq_prototype_deallocate011
#include "fixture_internal.h"

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{ return fixture_allocate_string019_saved030(bytes); }

static void deallocate(void *pointer,SqPrototypeU32 bytes,_Bool table)
{
    if(fixture_owned030(pointer)) { sq_class_deallocate030(pointer,bytes);return; }
    if(pointer==table_fixture019.memory+0x1d000||pointer==table_fixture019.memory+0x1d800) {
        fixture_call_deallocate023(pointer,bytes);return;
    }
    __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)pointer;
    __UINTPTR_TYPE__ begin=(__UINTPTR_TYPE__)(table_fixture019.memory+0x4000);
    if(address>=begin&&address<begin+0x2000&&(address-begin)%0x400==0) {
        const SqString015 *string=pointer;
        fixture_event030(8,pointer,string->length,string->reference.references);
    }
    if(table)fixture_table_deallocate019_saved030(pointer,bytes);
    else fixture_deallocate019_saved030(pointer,bytes);
    if(class_fixture030.variant==26&&pointer==fixture_prototype019(1)&&
            fixture_destination019()->type==0x0a008000u) {
        class_fixture030.instance=fixture_destination019()->value.reference;
        sq_prefix_clear(fixture_destination019());
        fixture_event030(10,class_fixture030.instance,class_fixture030.instance->reference.prefix.references,0);
    }
}

void sq_table_deallocate019(void *pointer,SqPrototypeU32 bytes) { deallocate(pointer,bytes,1); }
void sq_deallocate(void *pointer,SqU32 bytes) { deallocate(pointer,bytes,0); }
void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes) { deallocate(pointer,bytes,0); }
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes) { deallocate(pointer,bytes,0); }
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes)
{
    if(fixture_owned030(pointer))sq_class_deallocate030(pointer,bytes);
    else fixture_weak_deallocate019_saved030(pointer,bytes);
}
