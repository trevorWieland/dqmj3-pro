#include "fixture.h"
#include "../squirrel-wave020/lookup_error.h"

void fixture_stack034(SqPrototypeU32 index,const SqPrefixObject012 *value)
{
    SqPrefixObject012 *slot=sq_lookup_stack020(fixture_vm020())+index;
    SqPrototypeU32 bit=1u<<index;
    if(!(class_fixture034.stack_owner_mask&bit)) {
        sq_prefix_retain(slot->type,slot->value);
        class_fixture034.stack_owner_mask|=bit;
    }
    sq_prefix_assign(slot,value);
}

void fixture_cleanup_stack034(void)
{
    for(SqPrototypeU32 index=0;index<16;index++)
        if(class_fixture034.stack_owner_mask&(1u<<index))sq_prefix_clear(sq_lookup_stack020(fixture_vm020())+index);
    class_fixture034.stack_owner_mask=0;
}

SqPrototypeI32 fixture_inherited034(void *vm)
{
    SqPrefixObject012 *arguments=sq_lookup_stack020(vm)+sq_lookup_base020(vm);
    if(arguments[0].type!=0x08004000u)sq_class_failure030();
    class_fixture030.classes[1]=arguments[0].value.reference;
    class_fixture034.inherited_calls++;
    if(class_fixture034.variant==25)return sq_vm_array_native022(vm);
    if(class_fixture034.variant==26) {
        sq_lookup_raise_format020(vm,"inherited callback failed");return -1;
    }
    if(class_fixture034.variant==27) {
        SqClass030 *replacement=fixture_new_class030(0);
        class_fixture030.classes[2]=replacement;
        SqPrefixObject012 value={0x08004000u,{.reference=replacement}};
        sq_prefix_assign(fixture_destination019(),&value);
    }
    return 0;
}

void fixture_controller034(void)
{
    SqPrototypeU32 variant=class_fixture034.variant;
    SqPrototypeI32 base_index=-1;
    SqPrototypeU32 attributes_index=255;
    const SqPrefixObject012 integer={0x05000002u,{.integer=3}};
    if(variant==22) {
        fixture_stack034(0,&integer);base_index=0;
    } else if(variant>=23) {
        SqClass030 *base=fixture_new_class030(0);class_fixture030.classes[0]=base;
        SqPrefixObject012 object={0x08004000u,{.reference=base}};
        sq_prefix_assign(&class_fixture034.result_owner,&object);
        fixture_stack034(0,&object);base_index=0;
        if(variant>=24) {
            SqNativeClosure013 *native=fixture_native019(2);
            native->function=fixture_inherited034;native->parameter_check=2;
            SqPrefixObject012 callable={0x08000200u,{.reference=native}};
            if(variant==34||variant==35)callable=fixture_script034(2,variant==35);
            if(!sq_class_new_slot034(base,&fixture_shared020()->common,class_fixture034.names+17,&callable,0))sq_class_failure030();
        }
    }
    if(variant==21||variant>=24) {
        fixture_stack034(1,variant==25?&integer:class_fixture034.keys+4);attributes_index=1;
    }
    sq_vm_set_top022(fixture_vm020(),4);
    class_fixture034.result=sq_vm_class_create034(fixture_vm020(),fixture_destination019(),base_index,attributes_index);
    if(class_fixture034.result&&fixture_destination019()->type==0x08004000u) {
        SqClass030 *klass=fixture_destination019()->value.reference;
        if(!class_fixture030.classes[0])class_fixture030.classes[0]=klass;
        else if(!class_fixture030.classes[1])class_fixture030.classes[1]=klass;
    }
}
