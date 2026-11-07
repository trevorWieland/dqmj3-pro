#include "fixture.h"
SqPrototypeU32 fixture_snapshot043(SqPrototypeU32 *words,SqPrototypeU32 capacity)
{
    if(iteration_fixture043.mode<128) {
        SqPrototypeU32 count=fixture_snapshot039(words,capacity);if(!count||count+3>=capacity)return 0;words[count++]=0x430043;if(iteration_fixture043.mode==73||iteration_fixture043.mode==74){words[count++]=iteration_fixture043.mode;words[count++]=iteration_fixture043.mutations;}return count;
    }
    if(capacity<64+iteration_fixture043.events*12+iteration_fixture039.events*16+execute_fixture028.events*20+fixture031.events*12)return 0;
    SqPrefixObject012 *outputs=fixture_outputs043();SqPrototypeU32 at=0;
    words[at++]=0x430043;words[at++]=iteration_fixture043.mode;words[at++]=execute_fixture028.fault;words[at++]=(SqPrototypeU32)iteration_fixture043.returned;
    words[at++]=iteration_fixture043.flags;words[at++]=(SqPrototypeU32)iteration_fixture043.cursor;words[at++]=iteration_fixture043.mutations;words[at++]=sizeof(void*);
    for(SqPrototypeU32 i=0;i<3;i++){SqPrefixObject012 object=outputs[i];words[at++]=object.type;words[at++]=object.type&0x08000000u?fixture_identity043(object.value.reference):object.value.bits;words[at++]=object.type&0x08000000u?sq_prefix_count(object.value.reference):0;}
    for(SqPrototypeU32 i=0;i<4;i++)words[at++]=sq_prefix_count(fixture_prototype043(i));
    words[at++]=iteration_fixture043.events;
    for(SqPrototypeU32 i=0;i<iteration_fixture043.events;i++)for(SqPrototypeU32 j=0;j<12;j++)words[at++]=iteration_fixture043.event[i][j];
    words[at++]=iteration_fixture039.events;for(SqPrototypeU32 i=0;i<iteration_fixture039.events;i++)for(SqPrototypeU32 j=0;j<16;j++)words[at++]=iteration_fixture039.event[i][j];
    words[at++]=execute_fixture028.events;for(SqPrototypeU32 i=0;i<execute_fixture028.events;i++)for(SqPrototypeU32 j=0;j<20;j++)words[at++]=execute_fixture028.event[i][j];
    words[at++]=fixture031.events;for(SqPrototypeU32 i=0;i<fixture031.events;i++)for(SqPrototypeU32 j=0;j<12;j++)words[at++]=fixture031.event[i][j];return at;
}
