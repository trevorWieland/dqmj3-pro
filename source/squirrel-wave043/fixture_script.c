#include "fixture.h"
extern void fixture_original_register028(void*,SqNativeCallable013,SqPrototypeU32);
extern _Bool fixture_original_table_set043(SqTable019*,const SqPrefixObject012*,const SqPrefixObject012*);
extern _Bool fixture_original_class_slot039(SqClass030*,SqPrefixState012*,const SqPrefixObject012*,const SqPrefixObject012*,SqPrototypeU32);
SqPrototypeI32 fixture_script_observer043(void *vm)
{
    SqPrototypeI32 result=fixture_iteration_observer039(vm);
    if(!iteration_fixture043.mutations) {
        iteration_fixture043.mutations++;
        SqPrefixObject012 key={0x05000002u,{.integer=1}},value={0x05000002u,{.integer=99}};
        SqPrefixObject012 receiver=sq_lookup_stack020(vm)[sq_lookup_base020(vm)-sq_vm_current022(vm)->previous_base+1];
        if(iteration_fixture043.mode==73) {
            if(iteration_fixture043.source)sq_table_set019(receiver.value.reference,&key,&value);
            else fixture_original_table_set043(receiver.value.reference,&key,&value);
        } else {
            if(iteration_fixture043.source)sq_class_new_slot034(receiver.value.reference,&fixture_shared028()->common,&key,&value,1);
            else fixture_original_class_slot039(receiver.value.reference,&fixture_shared028()->common,&key,&value,1);
        }
    }
    return result;
}
void fixture_script_prepare043(void)
{
    void *vm=fixture_vm028();
    if(iteration_fixture043.source)fn_00176fc8(vm,fixture_script_observer043,0);
    else fixture_original_register028(vm,fixture_script_observer043,0);
    SqPrefixObject012 *created=sq_lookup_stack020(vm)+sq_lookup_top020(vm)-1,null={0x01000001u,{.reference=0}};
    fixture_assign043(fixture_function028()->literals+3,created);fixture_assign043(created,&null);sq_vm_set_top022(vm,8);
}
