#include "fixture.h"

void fixture_execute_storage034(void)
{
    void *vm=fixture_vm020();SqVmCallStorage022 common;
    __builtin_memcpy(&common,vm,sizeof(common));
    SqExecuteStorage028 storage={0};storage.common=common;
    __builtin_memcpy(vm,&storage,sizeof(storage));
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    sq_execute_assign028(sq_execute_debug_slot028(vm),&null);
    sq_execute_assign028(sq_execute_error_handler_slot028(vm),&null);
    sq_execute_assign028(sq_execute_temporary028(vm),&null);
    sq_execute_publish_varargs028(vm,(SqPrefixVector012){0});
    SqPrefixObject012 *stack=sq_lookup_stack020(vm);
    for(SqPrototypeU32 index=0;index<32;index++)if(!stack[index].type)stack[index]=null;
}

static void fixture_instruction034(SqPrototype011 *function,SqPrototypeU32 index,SqPrototypeU32 opcode,
    SqPrototypeU32 a0,SqPrototypeI32 a1,SqPrototypeU32 a2,SqPrototypeU32 a3)
{
    function->instructions[index]=(SqPrototypeInstruction011){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};
}

SqPrefixObject012 fixture_script034(SqPrototypeI32 parameters,_Bool call_native)
{
    fixture_execute_storage034();
    SqPrototype011 *function=fixture_prototype019(0);
    SqPrototypeU32 count=call_native?(parameters==2?5:4):2;
    function->parameter_count=parameters;function->stack_size=parameters==2?6:4;
    function->instruction_count=(SqPrototypeI32)count;function->literal_count=call_native?1:0;
    function->literals=(void*)(function->instructions+count);function->parameters=function->literals+function->literal_count;
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    for(SqPrototypeI32 index=0;index<parameters;index++)function->parameters[index]=null;
    if(call_native) {
        function->literals[0]=null;
        const SqPrefixObject012 native={0x08000200u,{.reference=fixture_native019(2)}};
        sq_prefix_assign(function->literals,&native);
        if(parameters==2) {
            fixture_instruction034(function,0,SQ28_LOAD,2,0,0,0);
            fixture_instruction034(function,1,SQ28_MOVE,3,0,0,0);
            fixture_instruction034(function,2,SQ28_MOVE,4,1,0,0);
            fixture_instruction034(function,3,SQ28_CALL,5,2,3,2);
            fixture_instruction034(function,4,SQ28_RETURN,1,5,0,0);
        } else {
            fixture_instruction034(function,0,SQ28_LOAD,1,0,0,0);
            fixture_instruction034(function,1,SQ28_MOVE,2,0,0,0);
            fixture_instruction034(function,2,SQ28_CALL,3,1,2,1);
            fixture_instruction034(function,3,SQ28_RETURN,1,3,0,0);
        }
    } else {
        fixture_instruction034(function,0,SQ28_LOADINT,1,123,0,0);
        fixture_instruction034(function,1,SQ28_RETURN,1,1,0,0);
    }
    SqPrefixObject012 owner={0x08002000u,{.reference=function}};
    sq_prefix_assign(&class_fixture034.temporary,&owner);
    return(SqPrefixObject012){0x08000100u,{.reference=fixture_script019(0)}};
}
