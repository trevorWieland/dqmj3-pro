#include "fixture.h"
SqIterationFixture043 iteration_fixture043;
extern void *fixture_original_assign028(void*,const void*);
extern SqPrototypeI32 fixture_original_string_next043(SqString015*,const SqPrefixObject012*,SqPrefixObject012*,SqPrefixObject012*);
extern SqPrototypeI32 fixture_original_table_next043(SqTable019*,SqPrototypeU32,const SqPrefixObject012*,SqPrefixObject012*,SqPrefixObject012*);
extern SqPrototypeI32 fixture_original_class_next043(SqClass030*,const SqPrefixObject012*,SqPrefixObject012*,SqPrefixObject012*);
SqPrefixObject012 *fixture_outputs043(void){return(void*)(execute_fixture028.memory+0x6e000);}
SqPrototype011 *fixture_prototype043(SqPrototypeU32 index)
{return index<2?fixture_extra028(index):(void*)(execute_fixture028.memory+0x60000+(index-2)*0x1000);}
SqPrototypeU32 fixture_identity043(const void *pointer)
{
    for(SqPrototypeU32 i=0;i<4;i++)if(pointer==fixture_prototype043(i))return 3+i;
    if(pointer==execute_fixture028.memory+0x65000)return 20;
    if(pointer==execute_fixture028.memory+0x65100)return 21;
    return fixture_id028(pointer);
}
void fixture_assign043(void *destination,const SqPrefixObject012 *value)
{if(iteration_fixture043.source)sq_prefix_assign(destination,value);else fixture_original_assign028(destination,value);}
void fixture_run043(SqPrototypeU32 cleanup)
{
    if(iteration_fixture043.mode<128){fixture_run039(cleanup);return;}
    SqPrefixObject012 *outputs=fixture_outputs043();iteration_fixture043.phase=1;
    if(iteration_fixture043.mode==128||iteration_fixture043.mode==135) {
        SqString015 *string=fixture_function028()->literals[0].value.reference;
        iteration_fixture043.returned=iteration_fixture043.source?sq_string_next043(string,outputs+2,outputs,outputs+1):fixture_original_string_next043(string,outputs+2,outputs,outputs+1);
    } else if(iteration_fixture043.mode==129||iteration_fixture043.mode==130||iteration_fixture043.mode==136) {
        SqTable019 *table=iteration_fixture043.table_owner.value.reference;SqPrototypeU32 raw=iteration_fixture043.flags&4?0x80000000u:0;
        iteration_fixture043.returned=iteration_fixture043.source?sq_table_next043(table,raw,outputs+2,outputs,outputs+1):fixture_original_table_next043(table,raw,outputs+2,outputs,outputs+1);
    } else {
        SqClass030 *klass=fixture_function028()->literals[0].value.reference;
        iteration_fixture043.returned=iteration_fixture043.source?sq_class_next043(klass,outputs+2,outputs,outputs+1):fixture_original_class_next043(klass,outputs+2,outputs,outputs+1);
    }
    iteration_fixture043.phase=2;
    if(cleanup) {
        SqPrefixObject012 null={0x01000001u,{.reference=0}};
        for(SqPrototypeU32 i=0;i<3;i++)fixture_assign043(outputs+i,&null);
        for(SqPrototypeU32 i=0;i<4;i++)fixture_assign043(iteration_fixture043.owners+i,&null);
        fixture_assign043(&iteration_fixture043.table_owner,&null);fixture_assign043(fixture_result028(),&null);fixture_assign043(sq_execute_temporary028(fixture_vm028()),&null);
        SqPrefixVector012 stack=sq_vm_stack_vector022(fixture_vm028());for(SqPrototypeU32 i=0;i<stack.size;i++)fixture_assign043(stack.values+i,&null);
        SqPrefixObject012 root={0x08000100u,{.reference=fixture_script028()}},function={0x08002000u,{.reference=fixture_function028()}};
        fixture_assign043(&root,&null);fixture_assign043(&function,&null);
    }
}
