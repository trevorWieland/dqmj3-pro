#include "fixture.h"
SqIterationFixture039 iteration_fixture039;
extern SqWeakReference014 *fixture_original_weak039(SqPrototypePrefix011*,SqPrototypeU32);
extern void fixture_original_register028(void*,SqNativeCallable013,SqPrototypeU32);
extern void *fixture_original_assign028(void*,const void*);
extern SqString015 *fixture_original_string031(SqPrefixState012*,const SqStringByte015*,SqPrototypeI32);
SqPrototypeI32 fixture_iteration_observer039(void *vm)
{
    if(iteration_fixture039.events>=64){execute_fixture028.fault=3939;return 0;}
    SqPrototypeU32 *event=iteration_fixture039.event[iteration_fixture039.events++];SqPrefixObject012 *arguments=sq_lookup_stack020(vm)+sq_lookup_base020(vm);
    event[0]=(SqPrototypeU32)sq_lookup_top020(vm);event[1]=(SqPrototypeU32)sq_lookup_base020(vm);event[2]=(SqPrototypeU32)sq_vm_call_count022(vm);event[3]=(SqPrototypeU32)sq_vm_native_depth022(vm);
    for(SqPrototypeU32 i=0;i<3;i++){SqPrefixObject012 object=arguments[i];event[4+i*3]=object.type;event[5+i*3]=object.type&0x08000000u?fixture_id028(object.value.reference):object.value.bits;event[6+i*3]=object.type&0x08000000u?sq_prefix_count(object.value.reference):0;}
    event[13]=sq_vm_current022(vm)->closure.type;event[14]=sq_prefix_count(sq_vm_current022(vm)->closure.value.reference);return 0;
}
static void assign(void *destination,const SqPrefixObject012 *value)
{if(iteration_fixture039.source)sq_execute_assign028(destination,value);else fixture_original_assign028(destination,value);}
static void instruction(SqPrototype011 *function,SqPrototypeU32 position,SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{function->instructions[position]=(SqInstruction028){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};}
static void program(SqPrototype011 *function,SqPrototypeI32 count)
{
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};function->instruction_count=count;
    function->literals=(void*)(function->instructions+count);function->parameters=function->literals+function->literal_count;
    for(SqPrototypeI32 i=0;i<function->literal_count;i++)function->literals[i]=empty;
    for(SqPrototypeI32 i=0;i<function->parameter_count;i++)function->parameters[i]=empty;
}
void fixture_prepare039(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    iteration_fixture039=(SqIterationFixture039){.mode=mode,.source=source,.value=value};
    if(mode<64){fixture_prepare031(mode,value,flags,source);return;}
    fixture_prepare031(0,value,flags,source);execute_fixture028.mode=mode;
    SqPrototype011 *function=fixture_function028();SqPrototypeI32 count=mode==64||mode==67||mode==68||mode==71?16:mode==65||mode==72?19:11;program(function,count);
    SqPrototypeI32 offset=mode==64||mode==67||mode==68||mode==71?6:mode==65||mode==72?9:0;
    if(mode==67||mode==68) {
        for(SqPrototypeU32 i=0;i<2;i++) {
            SqPrototype011 *owner=fixture_extra028(i);SqPrefixObject012 object={0x08002000u,{.reference=owner}};
            if(mode==68) {
                SqWeakReference014 *weak=source?fn_00233b7c(&owner->reference,object.type):fixture_original_weak039(&owner->reference,object.type);
                object=(SqPrefixObject012){0x08010000u,{.reference=weak}};
            }
            assign(function->literals+i,&object);
        }
        if(mode==68){SqPrefixObject012 owner={0x08002000u,{.reference=fixture_extra028(0)}};assign(function->literals+2,&owner);}
        instruction(function,0,31,1,0,0,0);
        for(SqPrototypeI32 i=0;i<2;i++){instruction(function,(SqPrototypeU32)(1+i*2),SQ28_LOAD,3,i,0,0);instruction(function,(SqPrototypeU32)(2+i*2),32,1,3,0,0);}
        instruction(function,5,SQ28_MOVE,1,1,0,0);
    } else if(mode==64||mode==71) {
        instruction(function,0,31,1,0,0,0);
        for(SqPrototypeI32 i=0;i<2;i++){instruction(function,(SqPrototypeU32)(1+i*2),SQ28_LOADINT,3,value+i,0,0);instruction(function,(SqPrototypeU32)(2+i*2),32,1,3,0,0);}
        instruction(function,5,SQ28_MOVE,1,1,0,0);
    } else if(mode==65||mode==72) {
        instruction(function,0,30,1,0,0,0);
        for(SqPrototypeI32 i=0;i<2;i++) {
            instruction(function,(SqPrototypeU32)(1+i*3),SQ28_LOADINT,2,i,0,0);instruction(function,(SqPrototypeU32)(2+i*3),SQ28_LOADINT,3,value+i,0,0);instruction(function,(SqPrototypeU32)(3+i*3),11,3,1,2,3);
        }
        if(mode==72){instruction(function,7,SQ28_MOVE,2,7,0,0);instruction(function,8,SQ28_LOADNULLS,7,1,0,0);}
        else{instruction(function,7,SQ28_MOVE,1,1,0,0);instruction(function,8,SQ28_MOVE,1,1,0,0);}
    } else if(mode==69||mode==70) {
        fixture_class_prepare039(function);instruction(function,0,SQ28_LOAD,1,0,0,0);offset=1;
    } else {
        const SqStringByte015 bytes[]={65,-128,-1,0};SqString015 *text=source?fn_0019ba68(&fixture_shared028()->common,bytes,3):fixture_original_string031(&fixture_shared028()->common,bytes,3);
        function->literals[0]=(SqPrefixObject012){0x08000010u,{.reference=text}};sq_prefix_retain(0x08000010u,function->literals[0].value);
        instruction(function,0,SQ28_LOAD,1,0,0,0);offset=1;
    }
    if(mode==71||mode==72) {
        SqPrefixObject012 null={0x01000001u,{.reference=0}};
        assign(sq_lookup_stack020(fixture_vm028())+(mode==72?10:5),fixture_result028());assign(fixture_result028(),&null);
    }
    if(source)fn_00176fc8(fixture_vm028(),fixture_iteration_observer039,0);else fixture_original_register028(fixture_vm028(),fixture_iteration_observer039,0);
    SqPrefixObject012 *created=sq_lookup_stack020(fixture_vm028())+sq_lookup_top020(fixture_vm028())-1,empty={0x01000001u,{.reference=0}};
    assign(function->literals+3,created);assign(created,&empty);sq_vm_set_top022(fixture_vm028(),8);
    instruction(function,(SqPrototypeU32)offset,SQ28_LOADNULLS,mode==71||mode==72?3:2,mode==71||mode==72?2:3,0,0);instruction(function,(SqPrototypeU32)(offset+1),SQ28_LOADINT,5,0,0,0);
    instruction(function,(SqPrototypeU32)(offset+2),SQ28_LOAD,6,3,0,0);
    instruction(function,(SqPrototypeU32)(offset+3),SQ39_FOREACH,1,4,2,0);instruction(function,(SqPrototypeU32)(offset+4),SQ39_POSTFOREACH,1,4,0,0);
    instruction(function,(SqPrototypeU32)(offset+5),SQ28_CALL,7,6,2,3);
    if(mode==67||mode==68)instruction(function,(SqPrototypeU32)(offset+6),SQ28_MOVE,5,3,0,0);
    else instruction(function,(SqPrototypeU32)(offset+6),SQ28_ARITH,5,3,5,'+');instruction(function,(SqPrototypeU32)(offset+7),SQ28_JUMP,0,-5,0,0);
    instruction(function,(SqPrototypeU32)(offset+8),SQ28_RETURN,1,5,0,0);instruction(function,(SqPrototypeU32)(offset+9),SQ28_RETURN,1,5,0,0);
    execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);execute_fixture028.instruction_count=(SqPrototypeU32)function->instruction_count;
}
void fixture_run039(SqPrototypeU32 cleanup){fixture_run031(cleanup);}
SqPrototypeU32 fixture_snapshot039(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot031(output,capacity);
    if(!count||capacity<count+1+iteration_fixture039.events*16)return 0;
    output[count++]=iteration_fixture039.events;
    for(SqPrototypeU32 i=0;i<iteration_fixture039.events;i++)for(SqPrototypeU32 j=0;j<16;j++)output[count++]=iteration_fixture039.event[i][j];return count;
}
