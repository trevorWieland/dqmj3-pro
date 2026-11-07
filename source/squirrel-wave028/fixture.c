#include "fixture.h"
extern SqPrototypeU32 fixture_original_execute028(void*,const SqPrefixObject012*,SqPrototypeI32,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012*,SqPrototypeU32,SqPrototypeI32);
extern SqPrototypeU32 fixture_original_call028(void*,const SqPrefixObject012*,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012*,SqPrototypeU32);
extern void fixture_original_register028(void*,SqNativeCallable013,SqPrototypeU32);
extern SqPrototypeI32 fixture_original_array028(void*);
extern void *fixture_original_assign028(void*,const void*);
SqExecuteFixture028 execute_fixture028;
SqPrototypeI32 fixture_array_callback028(void *vm)
{fixture_native_event028(vm);return execute_fixture028.source?sq_vm_array_native022(vm):fixture_original_array028(vm);}
SqExecuteStorage028 *fixture_vm028(void){return(void*)(execute_fixture028.memory+0x1000);}
SqLookupSharedStorage020 *fixture_shared028(void){return(void*)(execute_fixture028.memory+0x3000);}
SqScriptClosure017 *fixture_script028(void){return(void*)(execute_fixture028.memory+0x10000);}
SqPrototype011 *fixture_function028(void){return(void*)(execute_fixture028.memory+0x20000);}
SqPrototype011 *fixture_extra028(SqPrototypeU32 index){return(void*)(execute_fixture028.memory+0x30000+index*0x1000);}
SqPrefixObject012 *fixture_result028(void){return(void*)(execute_fixture028.memory+0x18000);}
SqPrototypeU32 fixture_id028(const void *pointer)
{
    if(!pointer)return 0;
    if(pointer==fixture_script028())return 1;if(pointer==fixture_function028())return 2;
    if(pointer==fixture_extra028(0))return 3;if(pointer==fixture_extra028(1))return 4;
    if(pointer==execute_fixture028.memory+0x14000)return 5;
    if(pointer==execute_fixture028.memory+0x8000)return 6;
    if(pointer==execute_fixture028.memory+0x9000)return 7;
    if(pointer==execute_fixture028.memory+0xc000)return 8;
    if(pointer==execute_fixture028.memory+0xd000)return 9;
    if(pointer==execute_fixture028.memory+0x12000)return 10;
    if(pointer==execute_fixture028.memory+0x16000)return 11;
    if(pointer==execute_fixture028.memory+0x17000)return 12;
    if(pointer==execute_fixture028.memory+0x50000)return 13;
    return 0xffffffffu;
}
static void assign(void *destination,const SqPrefixObject012 *value)
{if(execute_fixture028.source)sq_execute_assign028(destination,value);else fixture_original_assign028(destination,value);}
static void instruction(SqPrototypeU32 position,SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{fixture_function028()->instructions[position]=(SqInstruction028){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};}
SqPrototypeU32 fixture_bind028(void *memory,SqPrototypeU32 bytes)
{if(!memory||bytes<0x100000)return 0;execute_fixture028.memory=memory;return 1;}
void fixture_prepare028(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    unsigned char *memory=execute_fixture028.memory;execute_fixture028=(SqExecuteFixture028){0};execute_fixture028.memory=memory;
    execute_fixture028.mode=mode;execute_fixture028.flags=flags;execute_fixture028.value=value;execute_fixture028.source=source;
    for(SqPrototypeU32 i=0;i<0x100000;i++)memory[i]=0;
    SqExecuteStorage028 *vm=fixture_vm028();*vm=(SqExecuteStorage028){0};SqLookupSharedStorage020 *shared=fixture_shared028();*shared=(SqLookupSharedStorage020){0};vm->common.common.shared=&shared->common;
    SqStringTable015 *table=(void*)(memory+0x4000);*table=(SqStringTable015){(void*)(memory+0x5000),128,0};sq_string_provision_table015(&shared->common,table);
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    vm->common.common.error=empty;sq_execute_assign028((unsigned char*)vm+56,&empty);sq_execute_assign028(sq_execute_error_handler_slot028(vm),&empty);sq_execute_assign028(sq_execute_debug_slot028(vm),&empty);sq_execute_assign028(sq_execute_temporary028(vm),&empty);
    SqPrefixVector012 stack={(void*)(memory+0x8000),flags&4?16:64,flags&4?16:64};for(SqPrototypeU32 i=0;i<64;i++)stack.values[i]=empty;
    sq_vm_publish_stack022(vm,stack);sq_vm_set_top022(vm,8);sq_vm_set_base022(vm,1);
    SqVmCallVector022 calls={(void*)(memory+0xc000),4,4};for(SqPrototypeU32 i=0;i<4;i++){calls.values[i]=(SqVmCallFrame022){0};calls.values[i].closure=empty;}
    sq_vm_publish_calls022(vm,calls);sq_vm_set_call_stack022(vm,calls.values);sq_vm_set_allocated_calls022(vm,4);sq_vm_set_call_count022(vm,flags&2?4:0);sq_vm_set_current022(vm,flags&2?calls.values+3:0);
    SqPrefixVector012 varargs={0,0,0};sq_execute_publish_varargs028(vm,varargs);
    for(SqPrototypeU32 i=0;i<2;i++){SqPrototype011 *old=fixture_extra028(i);*old=(SqPrototype011){0};old->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};old->name=old->source_name=empty;}
    stack.values[4]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(0)}};
    if(mode==9||mode==10){vm->common.common.error=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(1)}};fixture_extra028(1)->reference.references++;}
    *fixture_result028()=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(1)}};
    SqPrototype011 *function=fixture_function028();*function=(SqPrototype011){0};function->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,2,0};function->name=function->source_name=empty;function->parameter_count=mode==10?2:1;function->stack_size=8;
    SqPrototypeU32 count=mode==1?8:mode==2?4:mode==3?12:mode==8?5:3;function->instruction_count=(SqPrototypeI32)count;execute_fixture028.instruction_count=count;
    function->literal_count=4;function->literals=(void*)(function->instructions+count);function->parameters=function->literals+4;
    for(SqPrototypeU32 i=0;i<4;i++)function->literals[i]=empty;for(SqPrototypeI32 i=0;i<function->parameter_count;i++)function->parameters[i]=empty;
    function->literals[1]=(SqPrefixObject012){0x05000002u,{.integer=7}};
    execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(function);
    SqScriptClosure017 *script=fixture_script028();*script=(SqScriptClosure017){0};script->reference.prefix=(SqPrototypePrefix011){&sq_script_closure_vtable017,1,0};script->shared=&shared->common;script->environment=empty;script->function=(SqPrefixObject012){0x08002000u,{.reference=function}};shared->common.chain=&script->reference;
    if(mode==9)sq_vm_set_native_depth022(vm,100);
    if(mode==1) {
        instruction(0,SQ28_LOADINT,1,value,0,0);instruction(1,SQ28_LOADINT,2,0,0,0);instruction(2,SQ28_LOADINT,3,1,0,0);instruction(3,SQ28_JZ,1,3,0,0);
        instruction(4,SQ28_ARITH,2,1,2,'+');instruction(5,SQ28_ARITH,1,3,1,'-');instruction(6,SQ28_JNZ,1,-3,0,0);instruction(7,SQ28_RETURN,1,2,0,0);
    } else if(mode==2) {
        function->literals[0]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(0)}};fixture_extra028(0)->reference.references++;
        instruction(0,SQ28_DLOAD,1,0,2,1);instruction(1,SQ28_DMOVE,3,1,4,2);instruction(2,SQ28_LOADNULLS,1,2,0,0);instruction(3,SQ28_RETURN,1,3,0,0);
    } else if(mode==3) {
        instruction(0,SQ28_LOADFLOAT,1,value,0,0);instruction(1,SQ28_NOT,2,1,0,0);instruction(2,SQ28_LOADBOOL,3,value,0,0);
        instruction(3,SQ28_AND,4,1,1,0);instruction(4,SQ28_LOADINT,4,11,0,0);instruction(5,SQ28_OR,5,1,1,0);instruction(6,SQ28_LOADINT,5,22,0,0);
        instruction(7,SQ28_JZ,2,1,0,0);instruction(8,SQ28_LOADINT,6,33,0,0);instruction(9,SQ28_JUMP,0,1,0,0);instruction(10,SQ28_LOADINT,6,44,0,0);instruction(11,SQ28_RETURN,1,4,0,0);
    } else if(mode==7) {
        instruction(0,SQ28_LINE,0,7,0,0);instruction(1,SQ28_VARGC,1,0,0,0);instruction(2,SQ28_RETURN,1,1,0,0);
    } else if(mode==8) {
        if(source)fn_00176fc8(vm,fixture_array_callback028,0);else fixture_original_register028(vm,fixture_array_callback028,0);
        SqPrefixObject012 *created=sq_lookup_stack020(vm)+sq_lookup_top020(vm)-1;assign(function->literals,created);assign(created,&empty);sq_vm_set_top022(vm,8);
        instruction(0,SQ28_LOAD,1,0,0,0);instruction(1,SQ28_LOADNULLS,2,1,0,0);instruction(2,SQ28_LOADINT,3,value,0,0);instruction(3,SQ28_CALL,4,1,2,2);instruction(4,SQ28_RETURN,1,4,0,0);
    } else if(mode==4) {
        script->outers=(SqPrefixVector012){(void*)(memory+0x14000),1,1};script->outers.values[0]=(SqPrefixObject012){0x08002000u,{.reference=fixture_extra028(0)}};fixture_extra028(0)->reference.references++;
        instruction(0,SQ28_LOADFREE,1,0,0,0);instruction(1,SQ28_MOVE,2,1,0,0);instruction(2,SQ28_RETURN,1,2,0,0);
    } else if(mode==5) {
        instruction(0,SQ28_LOADROOT,1,0,0,0);instruction(1,SQ28_NOT,2,1,0,0);instruction(2,SQ28_RETURN,1,2,0,0);
    } else if(mode==6) {
        instruction(0,255,0,0,0,0);instruction(1,SQ28_LOADINT,1,value,0,0);instruction(2,SQ28_RETURN,1,1,0,0);
    } else {
        instruction(0,SQ28_LOADINT,1,value,0,0);instruction(1,SQ28_MOVE,2,1,0,0);instruction(2,SQ28_RETURN,1,2,0,0);
    }
}
void fixture_run028(SqPrototypeU32 cleanup)
{
    SqPrefixObject012 callable={0x08000100u,{.reference=fixture_script028()}};void *vm=fixture_vm028();
    if(execute_fixture028.flags&1)execute_fixture028.returned=execute_fixture028.source?sq_vm_call022(vm,&callable,1,3,fixture_result028(),0xffffffffu):fixture_original_call028(vm,&callable,1,3,fixture_result028(),0xffffffffu);
    else execute_fixture028.returned=execute_fixture028.source?sq_execute028(vm,&callable,0,1,3,fixture_result028(),0xffffffffu,0):fixture_original_execute028(vm,&callable,0,1,3,fixture_result028(),0xffffffffu,0);
    if(cleanup) {
        SqPrefixObject012 empty={0x01000001u,{.reference=0}};assign(fixture_result028(),&empty);assign(sq_execute_temporary028(vm),&empty);
        SqPrefixVector012 stack=sq_vm_stack_vector022(vm);for(SqPrototypeU32 i=0;i<stack.size;i++)assign(stack.values+i,&empty);
        assign(&callable,&empty);
        SqPrefixObject012 prototype={0x08002000u,{.reference=fixture_function028()}};assign(&prototype,&empty);assign(&fixture_vm028()->common.common.error,&empty);
    }
}
SqPrototypeU32 fixture_snapshot028(SqPrototypeU32 *words,SqPrototypeU32 capacity)
{
    void *vm=fixture_vm028();SqPrefixObject012 result=*fixture_result028(),temporary=sq_execute_temporary_value028(vm);SqPrototypeU32 needed=24+64*3+execute_fixture028.events*20+68;if(capacity<needed)return 0;
    SqPrototypeU32 header[]={execute_fixture028.fault,execute_fixture028.returned,execute_fixture028.mode,execute_fixture028.flags,result.type,
      result.type&0x08000000u?fixture_id028(result.value.reference):result.value.bits,result.type&0x08000000u?sq_prefix_count(result.value.reference):0,
      temporary.type,temporary.type&0x08000000u?fixture_id028(temporary.value.reference):temporary.value.bits,
      fixture_script028()->reference.prefix.references,fixture_function028()->reference.references,fixture_extra028(0)->reference.references,fixture_extra028(1)->reference.references,
      (SqPrototypeU32)sq_lookup_top020(vm),(SqPrototypeU32)sq_lookup_base020(vm),(SqPrototypeU32)sq_vm_call_count022(vm),(SqPrototypeU32)sq_vm_native_depth022(vm),
      execute_fixture028.events,execute_fixture028.reallocations,sizeof(SqExecuteStorage028),sizeof(SqVmCallFrame022),sizeof(void*),sq_vm_stack_vector022(vm).size,
      sq_vm_current022(vm)?(SqPrototypeU32)(sq_vm_current022(vm)-sq_vm_call_stack022(vm))+1:0};
    SqPrototypeU32 count=0;for(SqPrototypeU32 i=0;i<24;i++)words[count++]=header[i];
    SqPrefixObject012 *stack=sq_lookup_stack020(vm);for(SqPrototypeU32 i=0;i<64;i++){words[count++]=stack[i].type;words[count++]=stack[i].type&0x08000000u?fixture_id028(stack[i].value.reference):stack[i].value.bits;words[count++]=stack[i].type&0x08000000u?sq_prefix_count(stack[i].value.reference):0;}
    for(SqPrototypeU32 i=0;i<execute_fixture028.events;i++)for(SqPrototypeU32 j=0;j<20;j++)words[count++]=execute_fixture028.event[i][j];
    SqPrefixObject012 error=fixture_vm028()->common.common.error;SqString015 *text=error.type==0x08000010u?error.value.reference:0;
    words[count++]=error.type;words[count++]=text?(SqPrototypeU32)text->length:0;words[count++]=text?text->hash:0;words[count++]=fixture_id028(error.value.reference);
    for(SqPrototypeU32 i=0;i<64;i++)words[count++]=text&&i<(SqPrototypeU32)text->length?(unsigned char)text->value[i]:0;return count;
}
