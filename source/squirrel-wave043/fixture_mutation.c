#include "fixture.h"
extern _Bool fixture_original_table_set043(SqTable019*,const SqPrefixObject012*,const SqPrefixObject012*);
extern _Bool fixture_original_class_slot039(SqClass030*,SqPrefixState012*,const SqPrefixObject012*,const SqPrefixObject012*,SqPrototypeU32);
extern SqWeakReference014 *fixture_original_weak039(SqPrototypePrefix011*,SqPrototypeU32);
void fixture_mutation043(void)
{
    if(!(iteration_fixture043.flags&2)||iteration_fixture043.mutations)return;
    iteration_fixture043.mutations++;
    SqPrefixObject012 incoming=iteration_fixture043.owners[3];
    if(iteration_fixture043.mode==128) {
        SqPrefixObject012 null={0x01000001u,{.reference=0}};
        fixture_assign043(fixture_outputs043()+1,&incoming);fixture_assign043(iteration_fixture043.owners+3,&null);return;
    }
    if(iteration_fixture043.mode==130||iteration_fixture043.mode==133||(iteration_fixture043.mode==132&&(iteration_fixture043.flags&16))) {
        SqWeakReference014 *weak=iteration_fixture043.source?fn_00233b7c(&fixture_prototype043(3)->reference,incoming.type):fixture_original_weak039(&fixture_prototype043(3)->reference,incoming.type);
        incoming=(SqPrefixObject012){0x08010000u,{.reference=weak}};
    }
    if(iteration_fixture043.mode==129||iteration_fixture043.mode==130) {
        SqTable019 *table=iteration_fixture043.table_owner.value.reference;
        const SqPrefixObject012 *key=fixture_function028()->literals;
        if(iteration_fixture043.source)sq_table_set019(table,key,&incoming);else fixture_original_table_set043(table,key,&incoming);
    } else {
        SqClass030 *klass=fixture_function028()->literals[0].value.reference;
        SqPrefixObject012 key={0x05000002u,{.integer=iteration_fixture043.mode==132?1:0}};
        if(iteration_fixture043.source)sq_class_new_slot034(klass,&fixture_shared028()->common,&key,&incoming,iteration_fixture043.mode==132);
        else fixture_original_class_slot039(klass,&fixture_shared028()->common,&key,&incoming,iteration_fixture043.mode==132);
    }
}
