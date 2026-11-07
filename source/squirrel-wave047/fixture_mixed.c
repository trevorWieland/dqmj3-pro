#include "fixture_mixed.h"
extern void *fixture_original_assign028(void*,const void*);
SqMixedFixture047 mixed047;
SqPrototype011 *fixture_nested047(void){return(void*)(execute_fixture028.memory+0x62000);}
static void assign(void *destination,const SqPrefixObject012 *value)
{if(mixed047.source)sq_prefix_assign(destination,value);else fixture_original_assign028(destination,value);}
static void instruction(SqPrototype011 *function,SqPrototypeU32 position,SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{function->instructions[position]=(SqInstruction028){a1,(unsigned char)opcode,(unsigned char)a0,(unsigned char)a2,(unsigned char)a3};}
void fixture_prepare047(SqPrototypeU32 variant,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source)
{
    mixed047=(SqMixedFixture047){.variant=variant,.source=source,.value=value};
    if(variant<256){fixture_prepare043(variant,value,flags,source);return;}
    fixture_prepare043(variant==257?66:0,value,flags,source);
    SqPrefixObject012 null={0x01000001u,{.reference=0}};SqPrototype011 *parent=fixture_function028();
    SqPrefixObject012 string=parent->literals[0];for(SqPrototypeI32 i=0;i<parent->literal_count;i++)if(variant!=257||i)assign(parent->literals+i,&null);parent->instruction_count=14;parent->stack_size=10;
    parent->literals=(void*)(parent->instructions+14);parent->parameters=parent->literals+4;
    for(SqPrototypeU32 i=0;i<4;i++)parent->literals[i]=null;
    parent->parameters[0]=null;parent->functions=parent->parameters+1;parent->function_count=1;parent->functions[0]=null;
    if(variant==257)parent->literals[0]=string;
    SqPrototype011 *child=fixture_nested047();*child=(SqPrototype011){0};child->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};child->name=child->source_name=null;
    child->instruction_count=9;child->stack_size=8;child->parameter_count=1;child->outer_count=1;
    child->parameters=(void*)(child->instructions+9);child->parameters[0]=null;child->outers=(void*)(child->parameters+1);
    child->outers[0]=(SqPrototypeOuter011){0,null,{0x05000002u,{.integer=1}}};
    SqPrefixObject012 prototype={0x08002000u,{.reference=child}};assign(parent->functions,&prototype);
    if(variant==257)for(SqPrototypeU32 i=0;i<5;i++)instruction(parent,i,i?SQ28_MOVE:SQ28_LOAD,1,i?1:0,0,0);
    else {
        instruction(parent,0,31,1,0,0,0);instruction(parent,1,SQ28_LOADINT,2,value,0,0);instruction(parent,2,32,1,2,0,0);
        instruction(parent,3,SQ28_LOADINT,2,value+1,0,0);instruction(parent,4,32,1,2,0,0);
    }
    instruction(parent,5,48,6,0,0,0);instruction(parent,6,SQ28_LOADNULLS,1,1,0,0);instruction(parent,7,SQ28_LOADNULLS,2,1,0,0);
    instruction(parent,8,SQ35_PUSHTRAP,7,3,0,0);instruction(parent,9,SQ28_CALL,5,6,2,1);instruction(parent,10,SQ35_POPTRAP,1,0,0,0);
    instruction(parent,11,SQ28_JUMP,0,1,0,0);instruction(parent,12,SQ28_MOVE,5,7,0,0);instruction(parent,13,SQ28_RETURN,1,5,0,0);
    instruction(child,0,SQ28_LOADFREE,1,0,0,0);instruction(child,1,SQ28_LOADNULLS,2,3,0,0);instruction(child,2,SQ28_LOADINT,5,0,0,0);
    instruction(child,3,SQ39_FOREACH,1,3,2,0);instruction(child,4,SQ39_POSTFOREACH,1,3,0,0);instruction(child,5,SQ28_ARITH,5,3,5,'+');
    instruction(child,6,SQ28_JUMP,0,-4,0,0);instruction(child,7,SQ35_THROW,5,0,0,0);instruction(child,8,SQ28_RETURN,1,5,0,0);
    execute_fixture028.prototype_bytes=sq_prototype_allocation_bytes011(parent);mixed047.child_bytes=sq_prototype_allocation_bytes011(child);
}
void fixture_run047(SqPrototypeU32 cleanup)
{
    mixed047.cleanup=cleanup;if(mixed047.variant<256){fixture_run043(cleanup);return;}
    fixture_run028(cleanup);
    if(cleanup){SqPrefixObject012 null={0x01000001u,{.reference=0}},child={0x08002000u,{.reference=fixture_nested047()}};assign(&child,&null);}
}
void fixture_lifetime047(void *pointer,SqPrototypeU32 bytes,SqPrototypeU32 kind)
{
    if(mixed047.events>=64){execute_fixture028.fault=4740;return;}
    SqPrototypeU32 *row=mixed047.event[mixed047.events++];SqVm040 *vm=fixture_vm028();
    row[0]=kind;row[1]=bytes;row[2]=(SqPrototypeU32)vm->top;row[3]=(SqPrototypeU32)vm->base;row[4]=(SqPrototypeU32)vm->call_count;row[5]=vm->traps.size;
    row[6]=fixture_nested047()->reference.references;row[7]=pointer==fixture_nested047()?1:0;
}
SqPrototypeU32 fixture_snapshot047(SqPrototypeU32 *words,SqPrototypeU32 capacity)
{
    if(mixed047.variant<256)return fixture_snapshot043(words,capacity);
    if(capacity<48+mixed047.events*8)return 0;
    SqVm040 *vm=fixture_vm028();SqPrefixObject012 result=*fixture_result028();SqPrototypeU32 at=0;
    SqPrototypeU32 fixed[]={0x470047,mixed047.variant,(SqPrototypeU32)mixed047.value,mixed047.cleanup,execute_fixture028.fault,execute_fixture028.returned,result.type,result.type&0x08000000u?fixture_id028(result.value.reference):result.value.bits,
      (SqPrototypeU32)vm->top,(SqPrototypeU32)vm->base,(SqPrototypeU32)vm->native_depth,(SqPrototypeU32)vm->call_count,vm->traps.size,fixture_nested047()->reference.references,
      ((SqScriptClosure017*)(execute_fixture028.memory+0xb0000))->reference.prefix.references,sizeof(SqVm040),sizeof(SqSharedState040),sizeof(void*),mixed047.events};
    for(SqPrototypeU32 i=0;i<sizeof(fixed)/sizeof(*fixed);i++)words[at++]=fixed[i];
    for(SqPrototypeU32 i=0;i<mixed047.events;i++)for(SqPrototypeU32 j=0;j<8;j++)words[at++]=mixed047.event[i][j];
    SqPrototypeU32 state[]={vm->suspended,vm->suspended_root,(SqPrototypeU32)vm->suspended_target,(SqPrototypeU32)vm->suspended_traps,vm->suspended_varargs_size,vm->suspended_varargs_base,vm->foreign!=0,
      vm->reference.prefix.references,vm->reference.prefix.weak!=0,vm->reference.next!=0,vm->reference.previous!=0,(SqPrototypeU32)vm->allocated_calls,vm->calls.size,vm->calls.capacity,vm->varargs.size,vm->varargs.capacity};
    for(SqPrototypeU32 i=0;i<sizeof(state)/sizeof(*state);i++)words[at++]=state[i];return at;
}
