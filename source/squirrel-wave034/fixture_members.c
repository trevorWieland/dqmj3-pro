#include "fixture.h"

void fixture_observe_allocation034(void)
{
    SqClass030 *klass=class_fixture034.active_class;
    if(!klass)return;
    if(class_fixture034.events==128)sq_class_failure030();
    SqPrefixObject012 descriptor={0x01000001u,{.reference=0}};
    sq_table_get019(klass->common.members,class_fixture034.active_key,&descriptor);
    SqPrototypeU32 *row=class_fixture034.event[class_fixture034.events++];
    row[0]=1;row[1]=descriptor.type;row[2]=descriptor.value.bits;
    row[3]=klass->common.members32.size;row[4]=klass->common.members44.size;
    sq_prefix_release(descriptor.type,descriptor.value);
}

static void fixture_define034(SqClass030 *klass,const SqPrefixObject012 *key,const SqPrefixObject012 *value,SqPrototypeU32 flag)
{
    class_fixture034.active_class=klass;class_fixture034.active_key=key;
    class_fixture034.result=sq_class_new_slot034(klass,&fixture_shared020()->common,key,value,flag);
    class_fixture034.results[class_fixture034.result_count++]=class_fixture034.result;
    class_fixture034.active_class=0;class_fixture034.active_key=0;
}

void fixture_members034(SqClass030 *klass)
{
    SqPrototypeU32 variant=class_fixture034.variant;
    SqPrefixObject012 integer={0x05000002u,{.integer=42}},prototype={0x08002000u,{.reference=fixture_prototype019(0)}};
    SqPrefixObject012 native={0x08000200u,{.reference=fixture_native019(2)}};
    SqPrefixObject012 script={0x08000100u,{.reference=fixture_script019(0)}};
    if(variant==1)klass->common.locked=1;
    if(variant<2)fixture_define034(klass,&integer,&prototype,0);
    else if(variant==2) {
        fixture_define034(klass,class_fixture034.keys+1,class_fixture034.keys+4,0);
        fixture_define034(klass,class_fixture034.keys+1,&prototype,0);
    } else if(variant==3||variant==11)fixture_define034(klass,class_fixture034.keys+2,&integer,variant==3?1:0x100);
    else if(variant==4)fixture_define034(klass,class_fixture034.keys,&native,0);
    else if(variant==5) {
        fixture_define034(klass,class_fixture034.keys+2,&native,0);
        fixture_define034(klass,class_fixture034.keys+2,&script,0);
    } else if(variant==6) {
        fixture_define034(klass,class_fixture034.keys+2,&native,0);
        fixture_define034(klass,class_fixture034.keys+2,&integer,0);
    } else if(variant==7) {
        fixture_define034(klass,class_fixture034.keys+1,&integer,0);
        fixture_define034(klass,class_fixture034.keys+1,&native,1);
    } else if(variant==8||variant==9)fixture_define034(klass,class_fixture034.names+(variant==8?17:13),&native,0);
    else if(variant==10)fixture_define034(klass,class_fixture034.names+13,&integer,0);
    else if(variant==12) {
        for(SqPrototypeI32 index=0;index<10;index++) {
            SqPrefixObject012 key={0x05000002u,{.integer=index}};
            fixture_define034(klass,&key,&prototype,0);
        }
    } else if(variant==13) {
        fixture_define034(klass,class_fixture034.keys+1,&prototype,0);
        fixture_define034(klass,class_fixture034.keys+1,&klass->common.members32.values[0].primary,0);
    } else if(variant>=14&&variant<=17) {
        const SqPrefixObject012 null={0x01000001u,{.reference=0}};
        SqPrefixObject012 self={0x08004000u,{.reference=klass}};
        if(variant==15)klass->common.locked=1;
        if(variant==16)self=integer;
        class_fixture034.result=sq_vm_new_slot034(fixture_vm020(),&self,
            variant==17?&null:class_fixture034.keys+1,&prototype,0);
    } else if(variant==18)
        class_fixture034.result=(SqPrototypeU32)sq_class_meta_index034(&fixture_shared020()->common,&integer);
    else if(variant==19)
        class_fixture034.result=(SqPrototypeU32)sq_class_meta_index034(&fixture_shared020()->common,class_fixture034.keys+2);
}
