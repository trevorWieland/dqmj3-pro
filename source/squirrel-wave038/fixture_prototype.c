#include "fixture.h"
#include "../squirrel-wave011/prototype_internal.h"

SqPrototype011 *fixture_prototype038(SqPrototypeI32 instructions,SqPrototypeI32 literals,
    SqPrototypeI32 parameters,SqPrototypeI32 functions,SqPrototypeI32 outers,SqPrototypeI32 defaults)
{
    SqPrototype011 header={0};
    header.instruction_count=instructions;header.literal_count=literals;header.parameter_count=parameters;
    header.function_count=functions;header.outer_count=outers;header.default_count=defaults;
    SqPrototypeU32 bytes=sq_prototype_allocation_bytes011(&header);
    SqPrototype011 *result=fixture_prototype_allocate038(bytes);
    for(SqPrototypeU32 index=0;index<bytes;index++)((unsigned char*)result)[index]=0;
    __builtin_memcpy(result,&header,__builtin_offsetof(SqPrototype011,instructions));
    result->reference.vtable=&sq_prototype_vtable011;
    result->source_name.type=result->name.type=0x01000001u;result->stack_size=8;
    result->literals=(void*)(result->instructions+instructions);
    result->parameters=result->literals+literals;result->functions=result->parameters+parameters;
    result->outers=(void*)(result->functions+functions);result->defaults=(void*)(result->outers+outers);
    for(SqPrototypeI32 index=0;index<literals+parameters+functions;index++)result->literals[index].type=0x01000001u;
    for(SqPrototypeI32 index=0;index<outers;index++)result->outers[index].source.type=result->outers[index].name.type=0x01000001u;
    return result;
}

void fixture_instruction038(SqPrototype011 *function,SqPrototypeU32 index,SqPrototypeU32 opcode,
    SqPrototypeU32 argument0,SqPrototypeI32 argument1,SqPrototypeU32 argument2,SqPrototypeU32 argument3)
{
    function->instructions[index]=(SqInstruction028){argument1,(unsigned char)opcode,(unsigned char)argument0,
        (unsigned char)argument2,(unsigned char)argument3};
}
