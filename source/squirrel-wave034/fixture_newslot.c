#include "fixture.h"
#include "../squirrel-wave020/lookup_error.h"

SqPrototypeI32 fixture_newslot034(void *vm)
{
    class_fixture034.newslot_calls++;
    SqPrefixObject012 *arguments=sq_lookup_stack020(vm)+sq_lookup_base020(vm);
    if(arguments[0].type==0x0a008000u) {
        SqClassInstance030 *instance=arguments[0].value.reference;
        sq_prefix_assign(instance->values,arguments+2);
    }
    if(class_fixture034.variant==38||class_fixture034.variant==49) {
        const SqPrefixObject012 length={0x05000002u,{.integer=3}};
        sq_prefix_assign(arguments+1,&length);
        return sq_vm_array_native022(vm);
    }
    if(class_fixture034.variant==50) {
        sq_vm_push022(vm,class_fixture034.keys+4);return 1;
    }
    if(class_fixture034.variant==39||class_fixture034.variant==44) {
        sq_lookup_raise_format020(vm,"newslot callback failed");return -1;
    }
    return 0;
}

void fixture_newslots034(void)
{
    SqPrototypeU32 variant=class_fixture034.variant;
    SqPrefixObject012 callable={0x08000200u,{.reference=fixture_native019(2)}};
    fixture_native019(2)->function=fixture_newslot034;fixture_native019(2)->parameter_check=3;
    const SqPrefixObject012 value={0x08002000u,{.reference=fixture_prototype019(0)}};
    if(variant<40||variant==50) {
        SqClass030 *klass=fixture_new_class030(0);class_fixture030.classes[0]=klass;
        klass->common.instance_bytes=8;
        const SqPrefixObject012 class_object={0x08004000u,{.reference=klass}};
        sq_prefix_assign(&class_fixture034.result_owner,&class_object);
        sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys+1,class_fixture034.keys+4,0);
        if(variant!=36)sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.names+13,&callable,0);
        sq_vm_create_instance034(fixture_vm020(),klass,fixture_destination019(),&class_fixture030.constructor);
        class_fixture030.instance=fixture_destination019()->value.reference;
        class_fixture034.result=sq_vm_new_slot034(fixture_vm020(),fixture_destination019(),class_fixture034.keys+1,&value,0);
    } else {
        SqTable019 *table=fixture_table_at020(0x9600),*delegate=fixture_table_at020(0x9700);
        sq_table_initialize019(table,&fixture_shared020()->common,4);table->reference.prefix.references++;
        if(variant!=40) {
            sq_table_initialize019(delegate,&fixture_shared020()->common,4);delegate->reference.prefix.references++;
            sq_table_delegate019(table,delegate);
            if(variant!=42)sq_table_new_slot019(delegate,class_fixture034.names+13,&callable);
            sq_lookup_publish_table_methods020(table,fixture_methods020(),0,0);
        }
        if(variant==43)sq_table_new_slot019(table,class_fixture034.keys+1,class_fixture034.keys+4);
        SqPrefixObject012 self={0x0a000020u,{.reference=table}};
        class_fixture034.result=sq_vm_new_slot034(fixture_vm020(),&self,class_fixture034.keys+1,&value,0);
        SqPrefixObject012 result={0x01000001u,{.reference=0}};
        class_fixture034.results[class_fixture034.result_count++]=sq_table_get019(table,class_fixture034.keys+1,&result);
        sq_prefix_release(result.type,result.value);
    }
}

void fixture_cleanup_newslots034(void)
{
    if(class_fixture034.variant<40||class_fixture034.variant==50)return;
    SqPrefixValue012 table={.reference=fixture_table_at020(0x9600)};
    sq_prefix_release(0x0a000020u,table);
    if(class_fixture034.variant!=40) {
        table.reference=fixture_table_at020(0x9700);sq_prefix_release(0x0a000020u,table);
    }
}
