#include "fixture.h"
extern SqClass030 *fixture_original_class_init039(SqClass030*,SqPrefixState012*,SqClass030*);
extern SqTable019 *fixture_original_table_init043(SqTable019*,SqPrefixState012*,SqPrototypeI32);
extern _Bool fixture_original_table_slot043(SqTable019*,const SqPrefixObject012*,const SqPrefixObject012*);
extern _Bool fixture_original_class_slot039(SqClass030*,SqPrefixState012*,const SqPrefixObject012*,const SqPrefixObject012*,SqPrototypeU32);
extern SqWeakReference014 *fixture_original_weak039(SqPrototypePrefix011*,SqPrototypeU32);
void fixture_prepare043(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    iteration_fixture043=(SqIterationFixture043){.mode=mode,.source=source,.flags=flags,.cursor=value};
    if(mode<128){fixture_prepare039(mode==73?65:mode==74?69:mode,value,flags,source);if(mode==73||mode==74)fixture_script_prepare043();return;}
    fixture_prepare039((mode>=131&&mode<=133)||mode==137?69:66,3,0,source);
    SqPrefixObject012 null={0x01000001u,{.reference=0}},*outputs=fixture_outputs043();
    *outputs=outputs[1]=outputs[2]=null;iteration_fixture043.table_owner=null;
    for(SqPrototypeU32 i=0;i<4;i++)iteration_fixture043.owners[i]=null;
    fixture_assign043(outputs,sq_lookup_stack020(fixture_vm028())+4);fixture_assign043(sq_lookup_stack020(fixture_vm028())+4,&null);
    fixture_assign043(outputs+1,fixture_result028());fixture_assign043(fixture_result028(),&null);
    outputs[2]=value<0?null:(SqPrefixObject012){0x05000002u,{.integer=value}};
    if(mode>=135)outputs[2]=(SqPrefixObject012){0x01000008u,{.bits=0}};
    if(mode==134) {
        SqClass030 *klass=sq_class_allocate030(sizeof(*klass));
        if(source)sq_class_initialize030(klass,&fixture_shared028()->common,0);else fixture_original_class_init039(klass,&fixture_shared028()->common,0);
        SqPrefixObject012 owner={0x08004000u,{.reference=klass}};fixture_assign043(fixture_function028()->literals,&owner);
    }
    for(SqPrototypeU32 i=2;i<4;i++) {
        SqPrototype011 *prototype=fixture_prototype043(i);*prototype=(SqPrototype011){0};
        prototype->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};prototype->name=prototype->source_name=null;
        iteration_fixture043.owners[i]=(SqPrefixObject012){0x08002000u,{.reference=prototype}};
    }
    if(flags&1){fixture_assign043(iteration_fixture043.owners,outputs);fixture_assign043(iteration_fixture043.owners+1,outputs+1);}
    if(mode==129||mode==130||mode==136) {
        SqTable019 *table=(void*)(execute_fixture028.memory+0x68000);
        if(source)sq_table_initialize019(table,&fixture_shared028()->common,4);else fixture_original_table_init043(table,&fixture_shared028()->common,4);
        SqPrefixObject012 owner={0x0a000020u,{.reference=table}};fixture_assign043(&iteration_fixture043.table_owner,&owner);
        SqPrefixObject012 incoming=iteration_fixture043.owners[2];
        if(mode==130) {
            SqWeakReference014 *weak=source?fn_00233b7c(&fixture_prototype043(2)->reference,incoming.type):fixture_original_weak039(&fixture_prototype043(2)->reference,incoming.type);
            incoming=(SqPrefixObject012){0x08010000u,{.reference=weak}};
        }
        SqPrefixObject012 *key=fixture_function028()->literals;
        if(source)sq_table_new_slot019(table,key,&incoming);else fixture_original_table_slot043(table,key,&incoming);
    } else if(mode>=131&&mode<=133) {
        SqClass030 *klass=fixture_function028()->literals[0].value.reference;
        SqPrefixObject012 key={0x05000002u,{.integer=mode==132?1:0}},incoming=iteration_fixture043.owners[2];
        if(mode==133||(mode==132&&(flags&16))) {
            SqWeakReference014 *weak=source?fn_00233b7c(&fixture_prototype043(2)->reference,incoming.type):fixture_original_weak039(&fixture_prototype043(2)->reference,incoming.type);
            incoming=(SqPrefixObject012){0x08010000u,{.reference=weak}};
        }
        if(source)sq_class_new_slot034(klass,&fixture_shared028()->common,&key,&incoming,mode==132);
        else fixture_original_class_slot039(klass,&fixture_shared028()->common,&key,&incoming,mode==132);
    }
    if((flags&8)&&(mode==130||mode==133||mode==132))fixture_assign043(iteration_fixture043.owners+2,&null);
}
