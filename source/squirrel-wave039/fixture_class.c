#include "fixture.h"
extern void fixture_original_register028(void*,SqNativeCallable013,SqPrototypeU32);
extern void *fixture_original_assign028(void*,const void*);
extern void fixture_original_push039(void*,const SqPrefixObject012*);
extern SqClassInstance030 *fixture_original_instance039(SqClass030*);
extern SqClass030 *fixture_original_class_init039(SqClass030*,SqPrefixState012*,SqClass030*);
extern _Bool fixture_original_class_slot039(SqClass030*,SqPrefixState012*,const SqPrefixObject012*,const SqPrefixObject012*,SqPrototypeU32);
static SqPrototypeI32 fixture_next_key039(void *vm)
{
    SqPrefixObject012 cursor=sq_lookup_stack020(vm)[sq_lookup_base020(vm)+1],next={0x01000001u,{.reference=0}};
    if(cursor.type==0x01000001u)next=(SqPrefixObject012){0x05000002u,{.integer=0}};
    else if(cursor.type==0x05000002u&&cursor.value.integer==0)next=(SqPrefixObject012){0x05000002u,{.integer=1}};
    if(iteration_fixture039.source)sq_vm_push022(vm,&next);else fixture_original_push039(vm,&next);return 1;
}
void fixture_class_prepare039(SqPrototype011 *function)
{
    SqClass030 *klass=sq_class_allocate030(sizeof(*klass));SqPrefixState012 *shared=&fixture_shared028()->common;
    if(iteration_fixture039.source)sq_class_initialize030(klass,shared,0);else fixture_original_class_init039(klass,shared,0);
    for(SqPrototypeI32 i=0;i<2;i++) {
        SqPrefixObject012 key={0x05000002u,{.integer=i}},value={0x05000002u,{.integer=iteration_fixture039.value+i}};
        if(iteration_fixture039.source)sq_class_new_slot034(klass,shared,&key,&value,iteration_fixture039.mode==70?0:(SqPrototypeU32)i);
        else fixture_original_class_slot039(klass,shared,&key,&value,iteration_fixture039.mode==70?0:(SqPrototypeU32)i);
    }
    SqPrefixObject012 object={0x08004000u,{.reference=klass}};
    if(iteration_fixture039.mode==70) {
        void *vm=fixture_vm028();
        if(iteration_fixture039.source)fn_00176fc8(vm,fixture_next_key039,0);else fixture_original_register028(vm,fixture_next_key039,0);
        SqPrefixObject012 *created=sq_lookup_stack020(vm)+sq_lookup_top020(vm)-1,null={0x01000001u,{.reference=0}};
        if(iteration_fixture039.source){sq_prefix_assign(klass->common.values56.values+9,created);sq_prefix_clear(created);}
        else{fixture_original_assign028(klass->common.values56.values+9,created);fixture_original_assign028(created,&null);}
        sq_vm_set_top022(vm,8);
        SqClassInstance030 *instance=iteration_fixture039.source?sq_class_create_instance030(klass):fixture_original_instance039(klass);
        for(SqPrototypeU32 index=0;index<2;index++)sq_prefix_scalar(instance->values+index,0x05000002u,(SqPrototypeU32)(iteration_fixture039.value+7+(SqPrototypeI32)index));
        object=(SqPrefixObject012){0x0a008000u,{.reference=instance}};
    }sq_prefix_assign(function->literals,&object);
}
