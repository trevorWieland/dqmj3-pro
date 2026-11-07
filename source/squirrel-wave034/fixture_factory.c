#include "fixture.h"

void fixture_factory034(void)
{
    SqClass030 *klass=fixture_new_class030(0);class_fixture030.classes[0]=klass;
    SqPrefixObject012 class_object={0x08004000u,{.reference=klass}};
    sq_prefix_assign(&class_fixture034.result_owner,&class_object);
    klass->common.instance_bytes=8;
    sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys+1,class_fixture034.keys+4,0);
    if(class_fixture034.variant==46) {
        SqPrefixObject012 native={0x08000200u,{.reference=fixture_native019(2)}};
        sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys,&native,0);
    }
    class_fixture034.result=sq_vm_create_instance034(fixture_vm020(),klass,fixture_destination019(),
        class_fixture034.variant==46?fixture_destination019():&class_fixture030.constructor);
    for(SqPrototypeU32 index=0;index<class_fixture030.allocations;index++)
        if(class_fixture030.blocks[index].kind==2)class_fixture030.instance=class_fixture030.blocks[index].pointer;
}
