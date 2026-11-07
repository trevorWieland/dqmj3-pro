#include "fixture.h"

SqClassFixture034 class_fixture034;

#ifdef _WIN32
__declspec(dllexport)
#endif
void fixture_prepare034(SqPrototypeU32 variant,SqPrototypeU32 cleanup)
{
    class_fixture034=(SqClassFixture034){0};class_fixture034.variant=variant;
    class_fixture034.result_owner.type=class_fixture034.temporary.type=0x01000001u;
    fixture_prepare030(0,cleanup);
    SqClassSharedStorage034 *shared=(void*)fixture_state019(0);
    SqClassSharedStorage030 common=shared->common;
    *shared=(SqClassSharedStorage034){0};shared->common=common;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_execute034(void)
{
    fixture_setup020();fixture_call_initialize023();
    fixture_names034();
    SqClass030 *klass=0;
    if(class_fixture034.variant>=49)fixture_newslots034();
    else if(class_fixture034.variant>=47)fixture_class_temp034();
    else if(class_fixture034.variant>=45)fixture_factory034();
    else if(class_fixture034.variant>=36)fixture_newslots034();
    else if(class_fixture034.variant>=28&&class_fixture034.variant<=33)fixture_construct034();
    else if(class_fixture034.variant>=20)fixture_controller034();
    else {
        klass=fixture_new_class030(0);
        class_fixture030.classes[0]=klass;klass->common.reference.prefix.references++;
        fixture_members034(klass);
    }
    if(class_fixture030.cleanup) {
        if(klass){SqPrefixValue012 owner={.reference=klass};sq_prefix_release(0x08004000u,owner);}
        else {
            sq_prefix_clear(fixture_destination019());
            fixture_cleanup_stack034();sq_prefix_clear(&class_fixture034.result_owner);
            sq_prefix_clear(&class_fixture034.temporary);
            if((class_fixture034.variant>=36&&class_fixture034.variant<45)||class_fixture034.variant>=49)
                fixture_cleanup_newslots034();
        }
        sq_prefix_clear(&fixture_vm020()->error);
        fixture_cleanup_names034();
    }
    fixture_check_graph030();return !class_fixture030.fault;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_snapshot034(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot030(output,capacity);
    output[count++]=0x340340;
    output[count++]=class_fixture034.result;
    output[count++]=class_fixture034.inherited_calls;
    output[count++]=class_fixture034.native_calls;
    output[count++]=class_fixture034.newslot_calls;
    output[count++]=class_fixture034.table_frees[0];output[count++]=class_fixture034.table_frees[1];
    output[count++]=class_fixture034.result_count;
    for(SqPrototypeU32 index=0;index<class_fixture034.result_count;index++)output[count++]=class_fixture034.results[index];
    output[count++]=table_fixture019.string_allocations;
    output[count++]=class_fixture034.meta_table_frees;
    for(SqPrototypeU32 index=8;index<table_fixture019.string_allocations;index++) {
        output[count++]=class_fixture034.string_bytes[index-8];output[count++]=class_fixture034.string_frees[index-8];
    }
    output[count++]=class_fixture034.events;
    for(SqPrototypeU32 index=0;index<class_fixture034.events;index++)
        for(SqPrototypeU32 column=0;column<6;column++)output[count++]=class_fixture034.event[index][column];
    return count;
}
