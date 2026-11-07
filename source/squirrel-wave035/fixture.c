#include "fixture.h"
SqFixture035 fixture035;
extern SqPrototypeU32 fixture_original_execute028(void*,const SqPrefixObject012*,SqPrototypeI32,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012*,SqPrototypeU32,SqPrototypeI32);
extern SqPrototypeU32 fixture_original_call028(void*,const SqPrefixObject012*,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012*,SqPrototypeU32);
extern void fixture_original_register028(void*,SqNativeCallable013,SqPrototypeU32);
extern void *fixture_original_assign028(void*,const void*);
extern void fixture_original_raise035(void*,const SqPrefixObject012*);
extern void fixture_original_push035(void*,const SqPrefixObject012*);
extern SqPrototypeI32 fixture_original_array028(void*);
static void assign(void *destination,const SqPrefixObject012 *value)
{if(fixture035.source)sq_execute_assign028(destination,value);else fixture_original_assign028(destination,value);}
SqPrototypeI32 fixture_handler035(void *vm)
{
    fixture_event035(2);
    SqPrototypeU32 mode=fixture035.program;SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    if(mode==72) {
        assign(&fixture035.root_owner,&empty);SqPrefixObject012 error={0x05000002u,{.integer=fixture035.value}};
        if(fixture035.source)sq_vm_raise_object022(vm,&error);else fixture_original_raise035(vm,&error);
        fixture_event035(3);return -1;
    }
    if(mode==76)assign(sq_execute_error_handler_slot028(vm),&empty);
    if(mode==75||mode==79) {
        SqPrefixObject012 replacement={0x08002000u,{.reference=fixture_extra028(1)}};
        if(fixture035.source)sq_vm_raise_object022(vm,&replacement);else fixture_original_raise035(vm,&replacement);
        fixture_event035(3);return -1;
    }
    if(mode==74||mode==76) {
        SqPrototypeI32 result=fixture035.source?sq_vm_array_native022(vm):fixture_original_array028(vm);fixture_event035(3);return result;
    }
    fixture_event035(3);return 0;
}
static void instruction(SqPrototype011 *function,SqPrototypeU32 position,SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{function->instructions[position]=(SqInstruction028){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};}
static void program(SqPrototype011 *function,SqPrototypeI32 count)
{
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};function->instruction_count=count;
    function->literals=(void*)(function->instructions+count);function->parameters=function->literals+function->literal_count;
    for(SqPrototypeI32 i=0;i<function->literal_count;i++)function->literals[i]=empty;
    for(SqPrototypeI32 i=0;i<function->parameter_count;i++)function->parameters[i]=empty;
}
void fixture_prepare035(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    fixture035=(SqFixture035){.program=mode,.value=value,.flags=flags,.source=source};
    if(mode<64){fixture_prepare031(mode,value,flags,source);return;}
    fixture_prepare031(mode==67||mode==77||mode==78?32:0,value,0,source);execute_fixture028.mode=mode;
    fixture035.root_owner=(SqPrefixObject012){0x08000100u,{.reference=fixture_script028()}};
    SqPrototype011 *function=fixture_function028();SqPrefixObject012 child=function->literals[0];program(function,mode==67||mode==70||mode==71?8:mode==68?5:mode==69||mode==80?2:mode==64||mode==79?6:4);execute_fixture028.instruction_count=(SqPrototypeU32)function->instruction_count;
    sq_exception_set_notify035(fixture_vm028(),flags&1);
    if(mode>=72&&mode!=77&&mode!=78) {
        if(source)fn_00176fc8(fixture_vm028(),fixture_handler035,0);else fixture_original_register028(fixture_vm028(),fixture_handler035,0);
        SqPrefixObject012 *created=sq_lookup_stack020(fixture_vm028())+sq_lookup_top020(fixture_vm028())-1;assign(mode==72?(void*)function->literals:sq_execute_error_handler_slot028(fixture_vm028()),created);
        SqPrefixObject012 empty={0x01000001u,{.reference=0}};assign(created,&empty);sq_vm_set_top022(fixture_vm028(),8);
    }
    if(mode==68||mode==69) {
        SqPrefixObject012 outside={0x08002000u,{.reference=fixture_extra028(1)}};assign(sq_lookup_stack020(fixture_vm028())+11,&outside);
    }
    if(mode==77||mode==78) {
        SqScriptClosure017 *handler=fixture_child031();SqPrototype011 *callee=fixture_child_function031();
        callee->parameter_count=2;program(callee,mode==77?1:2);
        if(mode==77)instruction(callee,0,SQ28_RETURN,1,1,0,0);
        else{instruction(callee,0,SQ28_LOADINT,1,-17,0,0);instruction(callee,1,SQ35_THROW,1,0,0,0);}
        SqPrefixObject012 object={0x08000100u,{.reference=handler}};assign(sq_execute_error_handler_slot028(fixture_vm028()),&object);
    }
    if(mode==64||mode==79) {
        instruction(function,0,SQ35_PUSHTRAP,3,3,0,0);instruction(function,1,SQ28_LOADINT,1,value,0,0);instruction(function,2,SQ35_THROW,1,0,0,0);
        instruction(function,3,SQ28_LOADINT,4,-1,0,0);instruction(function,4,SQ28_MOVE,4,3,0,0);instruction(function,5,SQ28_RETURN,1,4,0,0);
    } else if(mode==68) {
        instruction(function,0,SQ35_PUSHTRAP,3,2,0,0);instruction(function,1,SQ35_THROW,1,0,0,0);instruction(function,2,SQ28_LOADINT,4,-99,0,0);instruction(function,3,SQ28_MOVE,4,3,0,0);instruction(function,4,SQ28_RETURN,1,4,0,0);
    } else if(mode==69||mode==80) {
        instruction(function,0,SQ35_THROW,1,0,0,0);instruction(function,1,SQ28_RETURN,1,1,0,0);
    } else if(mode==70) {
        for(SqPrototypeI32 i=0;i<5;i++)instruction(function,(SqPrototypeU32)i,SQ35_PUSHTRAP,3,5-i,0,0);
        instruction(function,5,SQ35_POPTRAP,5,0,0,0);instruction(function,6,SQ28_LOADINT,1,value,0,0);instruction(function,7,SQ28_RETURN,1,1,0,0);
    } else if(mode==71) {
        instruction(function,0,SQ35_PUSHTRAP,4,6,0,0);instruction(function,1,SQ35_PUSHTRAP,3,3,0,0);instruction(function,2,SQ28_LOADINT,1,value,0,0);instruction(function,3,SQ35_THROW,1,0,0,0);
        instruction(function,4,SQ28_LOADINT,4,-99,0,0);instruction(function,5,SQ28_MOVE,4,3,0,0);instruction(function,6,SQ35_POPTRAP,1,0,0,0);instruction(function,7,SQ28_RETURN,1,4,0,0);
    } else if(mode==72) {
        instruction(function,0,SQ28_LOAD,1,0,0,0);instruction(function,1,SQ28_LOADNULLS,2,1,0,0);
        instruction(function,2,SQ28_CALL,3,1,2,1);instruction(function,3,SQ28_RETURN,1,3,0,0);
    } else if(mode==65||mode>=73) {
        instruction(function,0,SQ28_LOADINT,1,value,0,0);instruction(function,1,SQ35_THROW,1,0,0,0);instruction(function,2,SQ28_LOADINT,4,-1,0,0);instruction(function,3,SQ28_RETURN,1,4,0,0);
    } else if(mode==66) {
        instruction(function,0,SQ35_PUSHTRAP,3,1,0,0);instruction(function,1,SQ35_POPTRAP,1,0,0,0);instruction(function,2,SQ28_LOADINT,4,value,0,0);instruction(function,3,SQ28_RETURN,1,4,0,0);
    } else if(mode==67) {
        function->literals[0]=child;SqPrototype011 *callee=fixture_child_function031();
        instruction(callee,0,SQ28_LOADINT,1,value,0,0);instruction(callee,1,SQ35_THROW,1,0,0,0);instruction(callee,2,SQ28_LOADINT,2,-99,0,0);instruction(callee,3,SQ28_RETURN,1,2,0,0);
        instruction(function,0,SQ35_PUSHTRAP,4,5,0,0);instruction(function,1,SQ28_LOAD,1,0,0,0);instruction(function,2,SQ28_LOADNULLS,2,1,0,0);
        instruction(function,3,SQ28_CALL,3,1,2,1);instruction(function,4,SQ35_POPTRAP,1,0,0,0);instruction(function,5,SQ28_JUMP,0,1,0,0);
        instruction(function,6,SQ28_MOVE,3,4,0,0);instruction(function,7,SQ28_RETURN,1,3,0,0);
    }
    execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);
}
void fixture_run035(SqPrototypeU32 cleanup)
{
    if(fixture035.program<64){fixture_run031(cleanup);return;}
    SqPrefixObject012 callable={0x08000100u,{.reference=fixture_script028()}},empty={0x01000001u,{.reference=0}};void *vm=fixture_vm028();
    SqPrototypeU32 raise_error=fixture035.flags&2?0:fixture035.flags&4?0x80000000u:0xffffffffu;
    if(fixture035.flags&8)execute_fixture028.returned=fixture035.source?sq_vm_call022(vm,&callable,1,3,fixture_result028(),raise_error):fixture_original_call028(vm,&callable,1,3,fixture_result028(),raise_error);
    else execute_fixture028.returned=fixture035.source?sq_execute035(vm,&callable,0,1,3,fixture_result028(),raise_error,0):fixture_original_execute028(vm,&callable,0,1,3,fixture_result028(),raise_error,0);
    if(cleanup) {
        assign(fixture_result028(),&empty);assign(sq_execute_temporary028(vm),&empty);
        SqPrefixVector012 stack=sq_vm_stack_vector022(vm);for(SqPrototypeU32 i=0;i<stack.size;i++)assign(stack.values+i,&empty);
        assign(&fixture035.root_owner,&empty);SqPrefixObject012 owner={0x08002000u,{.reference=fixture_function028()}};assign(&owner,&empty);
        assign(sq_exception_error_slot035(vm),&empty);assign(sq_execute_error_handler_slot028(vm),&empty);
    }
}
SqPrototypeU32 fixture_snapshot035(SqPrototypeU32 *words,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot031(words,capacity);if(!count||capacity<count+8+fixture035.events*16)return 0;
    SqTrapVector028 traps=sq_exception_traps035(fixture_vm028());SqPrefixObject012 error=sq_exception_error035(fixture_vm028());
    words[count++]=fixture035.program;words[count++]=traps.size;words[count++]=traps.capacity;words[count++]=sizeof(SqTrap028);
    words[count++]=sq_exception_notify035(fixture_vm028());words[count++]=error.type;words[count++]=error.type&0x08000000u?fixture_id028(error.value.reference):error.value.bits;words[count++]=fixture035.events;
    for(SqPrototypeU32 i=0;i<fixture035.events;i++)for(SqPrototypeU32 j=0;j<16;j++)words[count++]=fixture035.event[i][j];return count;
}
