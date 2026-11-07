#include "fixture.h"
extern void sq_predecessor_prototype_deallocate043(void*,SqPrototypeU32);
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes)
{
    if(iteration_fixture043.mode>=128) {
        if(iteration_fixture043.events>=64){execute_fixture028.fault=4343;return;}
        SqPrefixObject012 *outputs=fixture_outputs043();SqPrototypeU32 *row=iteration_fixture043.event[iteration_fixture043.events++];
        row[0]=fixture_identity043(pointer);row[1]=bytes;row[2]=iteration_fixture043.phase;
        for(SqPrototypeU32 i=0;i<2;i++){SqPrefixObject012 object=outputs[i];row[3+i*3]=object.type;row[4+i*3]=object.type&0x08000000u?fixture_identity043(object.value.reference):object.value.bits;row[5+i*3]=object.type&0x08000000u?sq_prefix_count(object.value.reference):0;}
        if(iteration_fixture043.phase==1&&pointer==fixture_prototype043(0))fixture_mutation043();
        if(pointer==fixture_prototype043(2)||pointer==fixture_prototype043(3))return;
    }
    sq_predecessor_prototype_deallocate043(pointer,bytes);
}

