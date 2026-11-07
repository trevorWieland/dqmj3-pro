#include "fixture.h"

SqPrototypeI32 fixture_constructor034(void *vm)
{
    class_fixture034.native_calls++;
    return fixture_native_constructor030(vm);
}

void fixture_construct034(void)
{
    SqPrototypeU32 variant=class_fixture034.variant;
    SqClass030 *klass=fixture_new_class030(0);class_fixture030.classes[0]=klass;
    SqPrefixObject012 class_object={0x08004000u,{.reference=klass}};
    sq_prefix_assign(&class_fixture034.result_owner,&class_object);
    klass->common.instance_bytes=8;
    if(!sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys+1,class_fixture034.keys+4,0))
        sq_class_failure030();
    SqNativeClosure013 *native=fixture_native019(2);
    native->function=fixture_constructor034;native->parameter_check=1;
    SqPrefixObject012 constructor={0x08000200u,{.reference=native}};
    if(variant>=29&&variant<=31) {
        SqPrefixObject012 scalar={0x05000002u,{.integer=0}};
        if(!sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys,&scalar,0))sq_class_failure030();
        if(variant>=30) {
            SqWeakReference014 *weak=fn_00233b7c(&native->reference.prefix,0x08000200u);
            constructor=(SqPrefixObject012){0x08010000u,{.reference=weak}};
        }
    }
    if(variant==32||variant==33)constructor=fixture_script034(1,variant==33);
    if(!sq_class_new_slot034(klass,&fixture_shared020()->common,class_fixture034.keys,&constructor,0))sq_class_failure030();
    if(variant==31)sq_prefix_clear(fixture_array020()->vector.values);
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    fixture_stack034(0,&null);sq_vm_set_top022(fixture_vm020(),1);
    class_fixture034.result=sq_vm_call022(fixture_vm020(),&class_object,1,0,fixture_destination019(),0);
    if(fixture_destination019()->type==0x0a008000u)class_fixture030.instance=fixture_destination019()->value.reference;
}
