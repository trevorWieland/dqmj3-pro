#include "fixture.h"
SqFixture031 fixture031;
extern SqString015 *fixture_original_string031(SqPrefixState012*,const SqStringByte015*,SqPrototypeI32);
SqScriptClosure017 *fixture_child031(void){return(void*)(execute_fixture028.memory+0x60000);}
SqPrototype011 *fixture_child_function031(void){return(void*)(execute_fixture028.memory+0x61000);}
static void instruction(SqPrototype011 *function,SqPrototypeU32 position,SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{function->instructions[position]=(SqInstruction028){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};}
static void program(SqPrototype011 *function,SqPrototypeI32 count)
{
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};function->instruction_count=count;
    function->literals=(void*)(function->instructions+count);function->parameters=function->literals+function->literal_count;
    for(SqPrototypeI32 i=0;i<function->literal_count;i++)function->literals[i]=empty;
    for(SqPrototypeI32 i=0;i<function->parameter_count;i++)function->parameters[i]=empty;
}
void fixture_prepare031(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    fixture031=(SqFixture031){.program=mode,.value=value};
    if(mode<32){fixture_prepare028(mode,value,flags,source);return;}
    fixture_prepare028(mode==36||mode==37?8:0,value,flags,source);execute_fixture028.mode=mode;
    if(mode==35||mode==36||mode==37) {
        SqPrototype011 *function=fixture_function028();SqPrefixObject012 native=function->literals[0];program(function,mode==35?8:10);
        SqPrefixObject012 key={0x05000002u,{.integer=1}};
        if(mode==35||mode==37) {
            const SqStringByte015 *name=(const SqStringByte015*)(mode==35?"score":"method");
            SqString015 *string=source?fn_0019ba68(&fixture_shared028()->common,name,-1):fixture_original_string031(&fixture_shared028()->common,name,-1);
            key=(SqPrefixObject012){0x08000010u,{.reference=string}};sq_prefix_retain(key.type,key.value);
        }
        function->literals[1]=key;
        if(mode==35) {
            instruction(function,0,30,1,0,0,0);instruction(function,1,SQ28_LOAD,2,1,0,0);instruction(function,2,SQ28_LOADINT,3,value,0,0);
            instruction(function,3,11,3,1,2,3);instruction(function,4,SQ28_LOADINT,3,value+7,0,0);instruction(function,5,13,3,1,2,3);
            instruction(function,6,9,4,1,1,0);instruction(function,7,SQ28_RETURN,1,4,0,0);
        } else {
            function->literals[0]=native;function->literals[2]=(SqPrefixObject012){0x05000002u,{.integer=0}};
            instruction(function,0,30,1,0,0,0);instruction(function,1,SQ28_LOAD,2,1,0,0);instruction(function,2,SQ28_LOAD,3,0,0,0);
            instruction(function,3,11,3,1,2,3);instruction(function,4,mode==37?8:7,4,mode==37?1:2,1,5);
            instruction(function,5,SQ28_LOADINT,6,value,0,0);instruction(function,6,SQ28_CALL,3,4,5,2);
            instruction(function,7,SQ28_LOADINT,2,0,0,0);instruction(function,8,mode==37?9:14,4,mode==37?2:3,mode==37?3:2,0);instruction(function,9,SQ28_RETURN,1,4,0,0);
        }
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==38||mode==42||mode==43||mode==44||mode==45||mode==46) {
        SqPrototypeI32 operation=mode==38?5:mode==42?4:mode==43?6:mode==44?0:mode==45?2:3;SqPrototype011 *function=fixture_function028();program(function,8);
        instruction(function,0,SQ28_LOADINT,1,(-2147483647-1)+1,0,0);instruction(function,1,SQ28_LOADINT,2,value,0,0);instruction(function,2,18,3,2,1,operation);
        instruction(function,3,47,4,3,0,0);instruction(function,4,45,3,4,0,0);instruction(function,5,SQ28_LOADINT,2,1,0,0);
        instruction(function,6,SQ28_ARITH,3,2,3,'*');instruction(function,7,SQ28_RETURN,1,3,0,0);
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==47||mode==48||mode==49) {
        SqPrototype011 *function=fixture_function028();program(function,5);
        if(mode==47) {
            function->literals[0]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(0)}};fixture_extra028(0)->reference.references++;
            function->literals[1]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(1)}};fixture_extra028(1)->reference.references++;
            instruction(function,0,SQ28_LOAD,1,0,0,0);instruction(function,1,SQ28_LOAD,2,1,0,0);
        } else {
            instruction(function,0,SQ28_LOADFLOAT,1,value,0,0);instruction(function,1,SQ28_LOADFLOAT,2,mode==48?value^(SqPrototypeI32)0x80000000u:value,0,0);
        }
        instruction(function,2,15,3,1,1,0);instruction(function,3,16,4,2,1,0);instruction(function,4,SQ28_RETURN,1,4,0,0);
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==50||mode==51) {
        SqPrototype011 *function=fixture_function028();
        if(mode==50) {
            program(function,7);execute_fixture028.value=4;
            function->literals[1]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(1)}};fixture_extra028(1)->reference.references++;
            instruction(function,0,31,1,4,0,0);instruction(function,1,32,1,1,0,1);instruction(function,2,32,1,1,0,1);
            instruction(function,3,SQ28_LOADINT,2,0,0,0);instruction(function,4,14,4,1,2,0);instruction(function,5,SQ28_MOVE,3,4,0,0);instruction(function,6,SQ28_RETURN,1,4,0,0);
        } else {
            program(function,13);execute_fixture028.value=4;
            instruction(function,0,30,1,0,0,0);instruction(function,1,31,2,4,0,0);instruction(function,2,SQ28_LOADINT,3,1,0,0);
            instruction(function,3,11,4,1,3,2);instruction(function,4,14,4,1,3,0);instruction(function,5,SQ28_LOADNULLS,2,1,0,0);instruction(function,6,SQ28_LOADNULLS,4,1,0,0);
            instruction(function,7,SQ28_LOADNULLS,5,1,0,0);instruction(function,8,13,5,1,3,5);instruction(function,9,SQ28_LOADINT,2,value,0,0);
            instruction(function,10,13,2,1,3,2);instruction(function,11,14,4,1,3,0);instruction(function,12,SQ28_RETURN,1,4,0,0);
        }
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==41) {
        SqPrototype011 *function=fixture_function028();program(function,6);execute_fixture028.value=4;
        instruction(function,0,31,1,4,0,0);instruction(function,1,SQ28_LOADINT,2,42,0,0);instruction(function,2,32,1,2,0,0);
        instruction(function,3,SQ28_LOADINT,2,value,0,0);instruction(function,4,41,3,1,2,0);instruction(function,5,SQ28_RETURN,1,3,0,0);
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==39) {
        SqPrototype011 *function=fixture_function028();program(function,7);
        instruction(function,0,SQ28_LOADINT,1,value,0,0);instruction(function,1,SQ28_LOADINT,2,-1,0,0);instruction(function,2,40,3,2,1,3);
        instruction(function,3,15,4,2,1,0);instruction(function,4,16,5,2,1,0);instruction(function,5,SQ28_NOT,5,5,0,0);instruction(function,6,SQ28_RETURN,1,3,0,0);
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==40) {
        SqPrototype011 *function=fixture_function028();program(function,8);
        instruction(function,0,SQ28_LOADFLOAT,1,value,0,0);instruction(function,1,SQ28_LOADINT,2,2,0,0);instruction(function,2,SQ28_ARITH,3,2,1,'*');
        instruction(function,3,45,4,3,0,0);instruction(function,4,SQ28_ARITH,3,1,4,'+');instruction(function,5,SQ28_MOVE,2,3,0,0);
        instruction(function,6,15,4,2,3,0);instruction(function,7,SQ28_RETURN,1,3,0,0);
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    if(mode==33||mode==34) {
        SqPrototype011 *function=fixture_function028();
        if(mode==33) {
            program(function,16);execute_fixture028.value=8;instruction(function,0,31,1,0,0,0);
            for(SqPrototypeI32 i=0;i<5;i++){instruction(function,1+i*2,SQ28_LOADINT,2,value+i,0,0);instruction(function,2+i*2,32,1,2,0,0);}
            instruction(function,11,SQ28_LOADINT,2,2,0,0);instruction(function,12,SQ28_LOADINT,3,value*2,0,0);
            instruction(function,13,13,3,1,2,3);instruction(function,14,14,4,1,2,0);instruction(function,15,SQ28_RETURN,1,4,0,0);
        } else {
            program(function,8);instruction(function,0,30,1,0,0,0);instruction(function,1,SQ28_LOADINT,2,1,0,0);
            instruction(function,2,SQ28_LOADINT,3,value,0,0);instruction(function,3,11,3,1,2,3);instruction(function,4,SQ28_LOADINT,3,value+7,0,0);
            instruction(function,5,13,3,1,2,3);instruction(function,6,14,4,1,2,0);instruction(function,7,SQ28_RETURN,1,4,0,0);
        }
        execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);return;
    }
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};SqPrototype011 *function=fixture_function028();program(function,5);
    SqPrototype011 *child_function=fixture_child_function031();*child_function=(SqPrototype011){0};
    child_function->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,2,0};child_function->source_name=child_function->name=empty;
    child_function->stack_size=8;child_function->parameter_count=1;program(child_function,4);
    instruction(child_function,0,SQ28_LOADINT,1,value,0,0);instruction(child_function,1,SQ28_LOADINT,2,1,0,0);
    instruction(child_function,2,SQ28_ARITH,3,2,1,'+');instruction(child_function,3,SQ28_RETURN,1,3,0,0);
    SqScriptClosure017 *child=fixture_child031();*child=(SqScriptClosure017){0};child->reference.prefix=(SqPrototypePrefix011){&sq_script_closure_vtable017,2,0};
    child->shared=&fixture_shared028()->common;child->environment=empty;child->function=(SqPrefixObject012){0x08002000u,{.reference=child_function}};
    child->reference.next=&fixture_script028()->reference;fixture_script028()->reference.previous=&child->reference;child->shared->chain=&child->reference;
    function->literals[0]=(SqPrefixObject012){0x08000100u,{.reference=child}};
    instruction(function,0,SQ28_LOAD,1,0,0,0);instruction(function,1,SQ28_LOADNULLS,2,1,0,0);
    instruction(function,2,SQ28_CALL,4,1,2,1);instruction(function,3,SQ28_MOVE,3,4,0,0);instruction(function,4,SQ28_RETURN,1,3,0,0);
    execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);
}
void fixture_run031(SqPrototypeU32 cleanup){fixture_run028(cleanup);}
SqPrototypeU32 fixture_snapshot031(SqPrototypeU32 *words,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot028(words,capacity);if(!count||capacity<count+8+fixture031.events*12)return 0;
    words[count++]=fixture031.program;words[count++]=fixture031.program==32?fixture_child031()->reference.prefix.references:0;
    words[count++]=fixture031.program==32?fixture_child_function031()->reference.references:0;
    words[count++]=fixture031.program==32?fixture_child031()->reference.previous!=0:0;
    words[count++]=fixture031.program==32?fixture_child031()->reference.next!=0:0;
    words[count++]=fixture031.program==32?fixture_child031()->shared->chain==&fixture_child031()->reference:0;
    words[count++]=fixture031.events;words[count++]=fixture031.node_allocations;
    for(SqPrototypeU32 i=0;i<fixture031.events;i++)for(SqPrototypeU32 j=0;j<12;j++)words[count++]=fixture031.event[i][j];return count;
}
