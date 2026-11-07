#include "../../source/squirrel-wave047/execute.h"
#include "../../source/squirrel-wave049/startup.h"

static SqPrefixObject012 program057={0x01000001u,{.reference=0}};
static SqPrefixObject012 result057={0x01000001u,{.reference=0}};
static SqVm040 *program_owner057;

SqPrototypeU32 sq_compose_cleanup057(SqVm040 *vm)
{
    if(vm!=program_owner057)
        return 0;
    sq_prefix_clear(&result057);
    sq_prefix_clear(&vm->temporary);
    for(SqPrototypeU32 index=0;index<vm->stack.size;index++)
        sq_prefix_clear(vm->stack.values+index);
    sq_prefix_clear(&program057);
    sq_prefix_clear(&vm->error);
    fn_00173cb8(vm,1);
    program_owner057=0;
    return 1;
}

static SqPrototype011 *prototype(SqPrototypeI32 instructions,SqPrototypeI32 literals,
    SqPrototypeI32 functions,SqPrototypeI32 outers)
{
    SqPrefixObject012 null={0x01000001u,{.reference=0}};
    SqPrototype011 shape={0};
    shape.instruction_count=instructions;
    shape.literal_count=literals;
    shape.parameter_count=1;
    shape.function_count=functions;
    shape.outer_count=outers;
    SqPrototypeU32 bytes=sq_prototype_allocation_bytes011(&shape);
    SqPrototype011 *value=sq_startup_allocate045(bytes,_Alignof(SqPrototype011));
    *value=shape;
    value->reference=(SqPrototypePrefix011){&sq_prototype_vtable011,1,0};
    value->source_name=null;
    value->name=null;
    value->stack_size=10;
    value->literals=(void*)(value->instructions+instructions);
    value->parameters=value->literals+literals;
    value->functions=value->parameters+1;
    value->outers=(void*)(value->functions+functions);
    for(SqPrototypeI32 index=0;index<literals+1+functions;index++)
        value->literals[index]=null;
    for(SqPrototypeI32 index=0;index<outers;index++)
        value->outers[index]=(SqPrototypeOuter011){0,null,null};
    return value;
}

static void instruction(SqPrototype011 *function,SqPrototypeU32 at,
    SqPrototypeI32 opcode,SqPrototypeI32 a0,SqPrototypeI32 a1,SqPrototypeI32 a2,SqPrototypeI32 a3)
{
    function->instructions[at]=(SqInstruction028){a1,(unsigned char)opcode,
        (unsigned char)a0,(unsigned char)a2,(unsigned char)a3};
}

static void root_array(SqVm040 *vm,SqPrefixObject012 *slot)
{
    SqString015 *name=fn_0019ba68(sq_shared_prefix040(vm->shared),(const SqStringByte015*)"array",5);
    SqPrefixObject012 key={0x08000010u,{.reference=name}};
    if(!sq_table_get019(vm->root.value.reference,&key,slot)||slot->type!=0x08000200u)
        __builtin_trap();
}

static void create_program(SqVm040 *vm,SqPrototypeU32 profile,SqPrototypeI32 value)
{
    SqPrototype011 *parent=prototype(profile==8?5:14,4,profile==8?0:1,0);
    if(profile==8) {
        root_array(vm,parent->literals);
        instruction(parent,0,SQ28_LOAD,1,0,0,0);
        instruction(parent,1,SQ28_LOADNULLS,2,1,0,0);
        instruction(parent,2,SQ28_LOADINT,3,value,0,0);
        instruction(parent,3,SQ28_CALL,4,1,2,2);
        instruction(parent,4,SQ28_RETURN,1,4,0,0);
    } else {
        SqPrototype011 *child=prototype(9,0,0,1);
        child->stack_size=8;
        child->outers[0]=(SqPrototypeOuter011){0,{0x01000001u,{.reference=0}},
            {0x05000002u,{.integer=1}}};
        SqPrefixObject012 object={0x08002000u,{.reference=child}};
        sq_prefix_assign(parent->functions,&object);
        sq_prefix_release(object.type,object.value);
        if(profile==257) {
            const SqStringByte015 bytes[]={65,-128,-1};
            SqString015 *string=fn_0019ba68(sq_shared_prefix040(vm->shared),bytes,3);
            object=(SqPrefixObject012){0x08000010u,{.reference=string}};
            sq_prefix_assign(parent->literals,&object);
            for(SqPrototypeU32 index=0;index<5;index++)
                instruction(parent,index,index?SQ28_MOVE:SQ28_LOAD,1,index?1:0,0,0);
        } else {
            instruction(parent,0,31,1,0,0,0);
            instruction(parent,1,SQ28_LOADINT,2,value,0,0);
            instruction(parent,2,32,1,2,0,0);
            instruction(parent,3,SQ28_LOADINT,2,value+1,0,0);
            instruction(parent,4,32,1,2,0,0);
        }
        instruction(parent,5,48,6,0,0,0);
        instruction(parent,6,SQ28_LOADNULLS,1,1,0,0);
        instruction(parent,7,SQ28_LOADNULLS,2,1,0,0);
        instruction(parent,8,SQ35_PUSHTRAP,7,3,0,0);
        instruction(parent,9,SQ28_CALL,5,6,2,1);
        instruction(parent,10,SQ35_POPTRAP,1,0,0,0);
        instruction(parent,11,SQ28_JUMP,0,1,0,0);
        instruction(parent,12,SQ28_MOVE,5,7,0,0);
        instruction(parent,13,SQ28_RETURN,1,5,0,0);
        instruction(child,0,SQ28_LOADFREE,1,0,0,0);
        instruction(child,1,SQ28_LOADNULLS,2,3,0,0);
        instruction(child,2,SQ28_LOADINT,5,0,0,0);
        instruction(child,3,SQ39_FOREACH,1,3,2,0);
        instruction(child,4,SQ39_POSTFOREACH,1,3,0,0);
        instruction(child,5,SQ28_ARITH,5,3,5,'+');
        instruction(child,6,SQ28_JUMP,0,-4,0,0);
        instruction(child,7,SQ35_THROW,5,0,0,0);
        instruction(child,8,SQ28_RETURN,1,5,0,0);
    }
    if(!sq_script_create041(vm,&program057,parent))
        __builtin_trap();
    sq_prefix_release(0x08002000u,(SqPrefixValue012){.reference=parent});
}

SqPrototypeU32 sq_compose_run057(SqVm040 *vm,SqPrototypeU32 profile,SqPrototypeI32 value,
    SqPrototypeU32 flags,SqPrototypeU32 cleanup,SqPrototypeU32 *output)
{
    if(!vm||program_owner057||vm->top||vm->base||vm->call_count||vm->native_depth||
        !output||(profile!=8&&profile!=256&&profile!=257)||flags>1||cleanup>1||
        value< -1000000||value>1000000||(profile==8&&(value<0||value>16)))
        return 0;
    program_owner057=vm;
    create_program(vm,profile,value);
    fn_00173d14(vm);
    _Bool returned=flags?sq_vm_call022(vm,&program057,1,0,&result057,1):
        sq_execute047(vm,&program057,0,1,0,&result057,1,0);
    output[0]=returned;
    output[1]=result057.type;
    output[2]=result057.type==0x08000040u?
        ((SqOpaqueArray012*)result057.value.reference)->vector.size:result057.value.bits;
    output[3]=(SqPrototypeU32)vm->top;
    output[4]=(SqPrototypeU32)vm->base;
    output[5]=(SqPrototypeU32)vm->call_count;
    output[6]=vm->traps.size;
    if(cleanup)
        sq_compose_cleanup057(vm);
    return 7;
}
