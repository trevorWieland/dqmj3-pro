#include "fixture.h"

void fixture_class_temp034(void)
{
    fixture_stack034(1,class_fixture034.keys+4);sq_vm_set_top022(fixture_vm020(),4);
    SqPrefixObject012 *destination=fixture_destination019();
    if(class_fixture034.variant==47) {
        SqClass030 *replacement=fixture_new_class030(0);class_fixture030.classes[0]=replacement;
        const SqPrefixObject012 owner={0x08004000u,{.reference=replacement}};
        sq_prefix_assign(&class_fixture034.result_owner,&owner);
    } else destination=sq_lookup_stack020(fixture_vm020())+1;
    class_fixture034.result=sq_vm_class_create034(fixture_vm020(),destination,-1,1);
    if(class_fixture034.variant==48)class_fixture030.classes[0]=destination->value.reference;
}
