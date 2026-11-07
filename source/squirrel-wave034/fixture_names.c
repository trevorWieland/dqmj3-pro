#include "fixture.h"

void fixture_names034(void)
{
    const char *names[]={"_add","_sub","_mul","_div","_unm","_modulo","_set","_get","_typeof",
        "_nexti","_cmp","_call","_cloned","_newslot","_delslot","_tostring","_newmember","_inherited"};
    SqPrefixState012 *shared=&fixture_shared020()->common;
    SqTable019 *indices=fixture_table_at020(0x9500);
    sq_table_initialize019(indices,shared,32);indices->reference.prefix.references++;
    sq_class_bind_meta_indices034(shared,indices);
    class_fixture034.meta_names=(SqPrefixVector012){class_fixture034.names,18,18};
    sq_lookup_bind_names020(shared,&class_fixture034.meta_names);
    for(SqPrototypeU32 index=0;index<18;index++) {
        SqString015 *string=fn_0019ba68(shared,(const SqStringByte015*)names[index],-1);
        SqPrefixObject012 key={0x08000010u,{.reference=string}},value={0x05000002u,{.integer=(SqPrototypeI32)index}};
        class_fixture034.names[index]=(SqPrefixObject012){0x01000001u,{.reference=0}};
        sq_prefix_assign(class_fixture034.names+index,&key);
        sq_table_new_slot019(indices,&key,&value);
        class_fixture034.results[class_fixture034.result_count++]=(SqPrototypeU32)sq_class_meta_index034(shared,&key);
    }
    const char *keys[]={"constructor","field","method","extra","attribute"};
    for(SqPrototypeU32 index=0;index<5;index++) {
        SqString015 *string=fn_0019ba68(shared,(const SqStringByte015*)keys[index],-1);
        SqPrefixObject012 key={0x08000010u,{.reference=string}};
        class_fixture034.keys[index]=(SqPrefixObject012){0x01000001u,{.reference=0}};
        sq_prefix_assign(class_fixture034.keys+index,&key);
    }
    sq_class_bind_constructor_name030(shared,class_fixture034.keys);
}

void fixture_cleanup_names034(void)
{
    for(SqPrototypeU32 index=0;index<18;index++)sq_prefix_clear(class_fixture034.names+index);
    for(SqPrototypeU32 index=0;index<5;index++)sq_prefix_clear(class_fixture034.keys+index);
    SqPrefixValue012 table={.reference=sq_class_meta_indices034(&fixture_shared020()->common)};
    sq_prefix_release(0x0a000020u,table);
}
