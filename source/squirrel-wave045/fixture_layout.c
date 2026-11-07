#include "fixture.h"

#define AT(type,field) __builtin_offsetof(type,field)
const SqPrototypeU32 sq_fixture_layout045[]={
    sizeof(void*),sizeof(SqFixtureHeap045),sizeof(SqAllocation045),sizeof(SqHeapEvent045),
    AT(SqFixtureHeap045,memory),AT(SqFixtureHeap045,capacity),AT(SqFixtureHeap045,used),
    AT(SqFixtureHeap045,allocations),AT(SqFixtureHeap045,events),AT(SqFixtureHeap045,fail_ordinal),
    AT(SqFixtureHeap045,entries),AT(SqFixtureHeap045,records),AT(SqAllocation045,memory),
    AT(SqAllocation045,bytes),AT(SqAllocation045,alignment),AT(SqAllocation045,active),
    sizeof(SqPrefixPodVector012),AT(SqPrefixPodVector012,values),AT(SqPrefixPodVector012,size),AT(SqPrefixPodVector012,capacity),
    sizeof(SqTable019),AT(SqTable019,shared),AT(SqTable019,delegate),AT(SqTable019,first_free),AT(SqTable019,nodes),
    AT(SqTable019,node_count),AT(SqTable019,used),sizeof(SqTableNode019),AT(SqTableNode019,value),
    AT(SqTableNode019,key),AT(SqTableNode019,next),sizeof(SqString015),AT(SqString015,shared),AT(SqString015,next),
    AT(SqString015,length),AT(SqString015,hash),AT(SqString015,value),sizeof(SqStringTable015),
    AT(SqStringTable015,buckets),AT(SqStringTable015,slots),AT(SqStringTable015,used),sizeof(SqNativeClosure013),
    AT(SqNativeClosure013,shared),AT(SqNativeClosure013,parameter_check),AT(SqNativeClosure013,type_checks),
    AT(SqNativeClosure013,outers),AT(SqNativeClosure013,environment),AT(SqNativeClosure013,function),AT(SqNativeClosure013,name)
};
