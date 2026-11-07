#include "prototype_internal.h"

SqPrototypeU32 sq_prototype_allocation_bytes011(const SqPrototype011 *prototype)
{
    SqPrototypeU32 bytes = __builtin_offsetof(SqPrototype011, instructions);
    bytes += (SqPrototypeU32)prototype->instruction_count * sizeof(SqPrototypeInstruction011);
    bytes += (SqPrototypeU32)prototype->literal_count * sizeof(SqPrototypeObject011);
    bytes += (SqPrototypeU32)prototype->parameter_count * sizeof(SqPrototypeObject011);
    bytes += (SqPrototypeU32)prototype->function_count * sizeof(SqPrototypeObject011);
    bytes += (SqPrototypeU32)prototype->outer_count * sizeof(SqPrototypeOuter011);
    bytes += (SqPrototypeU32)prototype->line_count * sizeof(SqPrototypeLine011);
    bytes += (SqPrototypeU32)prototype->local_count * sizeof(SqPrototypeLocal011);
    bytes += (SqPrototypeU32)prototype->default_count * sizeof(SqPrototypeI32);
    return bytes;
}

void fn_00299114(SqPrototype011 *prototype)
{
    for (SqPrototypeI32 index = 0; index < prototype->literal_count; ++index)
        release_object(prototype->literals + index);
    for (SqPrototypeI32 index = 0; index < prototype->parameter_count; ++index)
        release_object(prototype->parameters + index);
    for (SqPrototypeI32 index = 0; index < prototype->function_count; ++index)
        release_object(prototype->functions + index);
    for (SqPrototypeI32 index = 0; index < prototype->outer_count; ++index) {
        SqPrototypeOuter011 *outer = prototype->outers + index;
        release_object(&outer->source);
        release_object(&outer->name);
    }
    for (SqPrototypeI32 index = 0; index < prototype->local_count; ++index)
        release_object(&prototype->locals[index].name);
    SqPrototypeU32 bytes = sq_prototype_allocation_bytes011(prototype);
    prototype->reference.vtable->destroy(prototype);
    sq_prototype_deallocate011(prototype, bytes);
}

SqPrototype011 *fn_00299424(SqPrototype011 *prototype)
{
    prototype->reference.vtable = &sq_prototype_vtable011;
    release_object(&prototype->name);
    release_object(&prototype->source_name);
    prototype->reference.vtable = &sq_prototype_base_vtable011;
    if (prototype->reference.weak) {
        SqPrototypeWeak011 *weak = prototype->reference.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return prototype;
}
