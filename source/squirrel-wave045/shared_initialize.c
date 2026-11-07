#include "initialization.h"

static SqPrefixVector012 *empty_vector(void)
{
    SqPrefixVector012 *vector=sq_startup_allocate045(sizeof(*vector),_Alignof(SqPrefixVector012));
    if (vector) {
        vector->values=0;
        vector->size=0;
        vector->capacity=0;
    }
    return vector;
}

static SqPrefixObject012 string_object(SqSharedState040 *shared,const char *name)
{
    SqString015 *string=fn_0019ba68(sq_shared_prefix040(shared),(const SqStringByte015*)name,-1);
    SqPrefixObject012 object={0x08000010u,{.reference=string}};
    sq_prefix_retain(object.type,object.value);
    return object;
}

static SqPrefixObject012 table_object(SqSharedState040 *shared,SqPrototypeI32 requested)
{
    SqTable019 *table=sq_startup_allocate045(sizeof(*table),_Alignof(SqTable019));
    sq_table_initialize019(table,sq_shared_prefix040(shared),requested);
    table->delegate=0;
    SqPrefixObject012 object={0x0a000020u,{.reference=table}};
    sq_prefix_retain(object.type,object.value);
    return object;
}

void fn_0014a6a0(SqSharedState040 *shared)
{
    static const char *const types[]={"null","table","array","closure","string","userdata","integer","float",
        "userpointer","function","generator","thread","class","instance","bool"};
    static const char *const methods[]={"_add","_sub","_mul","_div","_unm","_modulo","_set","_get","_typeof",
        "_nexti","_cmp","_call","_cloned","_newslot","_delslot","_tostring","_newmember","_inherited"};
    static const SqPrototypeU32 delegate_slots[]={0,1,2,3,5,4,6,7,8,9};
    SqLookupSharedStorage020 *lookup=&shared->common.common.common;
    lookup->scratch=0;
    lookup->scratch_capacity=0;
    lookup->common.chain=0;
    SqStringTable015 *strings=sq_startup_allocate045(sizeof(*strings),_Alignof(SqStringTable015));
    sq_startup_set_strings045(shared,strings);
    if (strings) {
        strings->slots=4;
        strings->buckets=sq_startup_allocate045(4*sizeof(*strings->buckets),_Alignof(SqString015*));
        for (SqPrototypeU32 index=0;index<4;index++)
            strings->buckets[index]=0;
        strings->used=0;
    }
    SqPrefixVector012 *meta_names=empty_vector();
    sq_startup_set_vector045(shared,SQ_STARTUP_METAMETHOD_NAMES045,meta_names);
    SqPrefixVector012 *type_names=empty_vector();
    sq_startup_set_vector045(shared,SQ_STARTUP_TYPE_NAMES045,type_names);
    SqPrefixVector012 *auxiliary=empty_vector();
    sq_startup_set_vector045(shared,SQ_STARTUP_AUXILIARY045,auxiliary);
    SqPrefixObject012 meta=table_object(shared,17);
    sq_startup_assign_meta045(shared,&meta);
    sq_prefix_release(meta.type,meta.value);
    for (SqPrototypeU32 index=0;index<15;index++) {
        SqPrefixObject012 object=string_object(shared,types[index]);
        fn_001688cc(type_names,&object);
        sq_prefix_release(object.type,object.value);
    }
    for (SqPrototypeU32 index=0;index<18;index++) {
        SqPrefixObject012 object=string_object(shared,methods[index]);
        fn_001688cc(meta_names,&object);
        sq_prefix_release(object.type,object.value);
        SqPrefixObject012 integer={0x05000002u,{.integer=(SqPrototypeI32)(meta_names->size-1)}};
        SqPrefixObject012 map=sq_startup_meta045(shared);
        sq_table_new_slot019(map.value.reference,meta_names->values+meta_names->size-1,&integer);
    }
    SqPrefixObject012 name=string_object(shared,"constructor");
    sq_prefix_assign(sq_startup_constructor_name045(shared),&name);
    sq_prefix_release(name.type,name.value);
    SqPrefixObject012 registry=table_object(shared,0);
    sq_prefix_assign(sq_shared_registry040(shared),&registry);
    sq_prefix_release(registry.type,registry.value);
    SqPrefixObject012 constants=table_object(shared,0);
    sq_prefix_assign(sq_shared_constants040(shared),&constants);
    sq_prefix_release(constants.type,constants.value);
    for (SqPrototypeU32 index=0;index<10;index++) {
        SqTable019 *table=fn_00159264(shared,sq_startup_default_methods045[index]);
        SqPrefixObject012 delegate={0x0a000020u,{.reference=table}};
        sq_prefix_retain(delegate.type,delegate.value);
        sq_prefix_assign(lookup->default_delegates+delegate_slots[index],&delegate);
        sq_prefix_release(delegate.type,delegate.value);
    }
}
