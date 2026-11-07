#include "fixture_internal.h"

PrototypeFixture011 prototype_fixture011;
SqPrototype011 *fixture_prototype(SqPrototypeU32 i) { return (SqPrototype011 *)(prototype_fixture011.memory + 0x1000 + i * 0x1000); }
SqPrototypePrefix011 *fixture_reference(SqPrototypeU32 i) { return (SqPrototypePrefix011 *)(prototype_fixture011.memory + 0x5000 + i * 0x80); }
SqPrototypeWeak011 *fixture_weak(SqPrototypeU32 i) { return (SqPrototypeWeak011 *)(prototype_fixture011.memory + 0x6000 + i * 0x100); }
SqPrototypeObject011 *fixture_spare(SqPrototypeU32 i) { return (SqPrototypeObject011 *)(prototype_fixture011.memory + 0x7000 + i * 0x400); }
SqPrototypeOuter011 *fixture_spare_outers(void) { return (SqPrototypeOuter011 *)(prototype_fixture011.memory + 0x9000); }

SqPrototypeU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (pointer == fixture_prototype(i)) return i + 1;
    for (SqPrototypeU32 i = 0; i < 16; ++i) if (pointer == fixture_reference(i)) return i + 21;
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (pointer == fixture_weak(i)) return i + 51;
    for (SqPrototypeU32 i = 0; i < 4; ++i) if (pointer == fixture_spare(i)) return i + 101;
    if (pointer == fixture_spare_outers()) return 201;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        if (pointer == p->literals) return 301 + i * 10;
        if (pointer == p->parameters) return 302 + i * 10;
        if (pointer == p->functions) return 303 + i * 10;
        if (pointer == p->outers) return 304 + i * 10;
        if (pointer == p->locals) return 305 + i * 10;
    }
    return 999;
}

SqPrototypeU32 fixture_payload(const SqPrototypeObject011 *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) : object->value.bits;
}

SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table)
{
    if (table == prototype_fixture011.prototype_table) return 1;
    if (table == prototype_fixture011.base_table) return 2;
    if (table == &prototype_observer_table011) return 3;
    if (table == &prototype_alternate_table011) return 4;
    return 999;
}

void fixture_set_reference(SqPrototypeObject011 *object, void *reference)
{
    *object = (SqPrototypeObject011){0x08002000u, {.reference = reference}};
}

void fixture_compact(SqPrototype011 *p, SqPrototypeI32 count)
{
    p->instruction_count = count + 1;
    p->literal_count = p->parameter_count = p->function_count = p->outer_count = count;
    p->line_count = p->local_count = p->default_count = count;
    unsigned char *cursor = (unsigned char *)(p->instructions + p->instruction_count);
    p->literals = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->parameters = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->functions = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->outers = (SqPrototypeOuter011 *)cursor; cursor += count * sizeof(SqPrototypeOuter011);
    p->lines = (SqPrototypeLine011 *)cursor; cursor += count * sizeof(SqPrototypeLine011);
    p->locals = (SqPrototypeLocal011 *)cursor; cursor += count * sizeof(SqPrototypeLocal011);
    p->defaults = (SqPrototypeI32 *)cursor;
    for (SqPrototypeI32 i = 0; i < p->instruction_count; ++i)
        p->instructions[i] = (SqPrototypeInstruction011){i * 17, 2, (unsigned char)i, 0, 0};
    for (SqPrototypeI32 i = 0; i < count; ++i) {
        p->literals[i] = (SqPrototypeObject011){0x05000002u, {.integer = i * 23 + 3}};
        p->parameters[i] = (SqPrototypeObject011){0x05000002u, {.integer = i * 29 + 5}};
        p->functions[i] = (SqPrototypeObject011){0x05000002u, {.integer = i * 31 + 7}};
        p->outers[i] = (SqPrototypeOuter011){(SqPrototypeU32)i,
            {0x05000002u, {.integer = i * 37 + 11}}, {0x05000002u, {.integer = i * 41 + 13}}};
        p->lines[i] = (SqPrototypeLine011){i * 43 + 17, i * 47 + 19};
        p->locals[i] = (SqPrototypeLocal011){{0x05000002u, {.integer = i * 53 + 23}}, 29, 31, 37};
        p->defaults[i] = i * 59 + 41;
    }
}

SqPrototypeU32 fixture_bind(void *memory, SqPrototypeU32 bytes,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    prototype_fixture011.memory = memory; prototype_fixture011.bytes = bytes;
    prototype_fixture011.prototype_table = prototype_table; prototype_fixture011.base_table = base_table;
    return 1;
}

SqPrototype011 *fixture_prepare(SqPrototypeU32 variant)
{
    prototype_fixture011.variant = variant; prototype_fixture011.count = prototype_fixture011.overflow = 0;
    for (SqPrototypeU32 i = 0; i < prototype_fixture011.bytes; ++i) prototype_fixture011.memory[i] = 0xa5;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        p->reference = (SqPrototypePrefix011){prototype_fixture011.prototype_table, 0, 0};
        p->source_name = p->name = (SqPrototypeObject011){0x01000001u, {.reference = 0}};
        p->stack_size = 7; p->generator = 1; p->variable_parameters = 0; p->padding = 0;
        fixture_compact(p, i == 0 && variant ? (variant == 17 ? 1 : variant == 18 ? 3 : 2) : 0);
        prototype_fixture011.captured[i] = 0;
    }
    for (SqPrototypeU32 i = 0; i < 16; ++i)
        *fixture_reference(i) = (SqPrototypePrefix011){&prototype_observer_table011, 1, 0};
    for (SqPrototypeU32 i = 0; i < 3; ++i)
        *fixture_weak(i) = (SqPrototypeWeak011){{&prototype_observer_table011, 1, 0},
            {0x08002000u, {.reference = fixture_prototype(0)}}};
    for (SqPrototypeU32 i = 0; i < 4; ++i) for (SqPrototypeU32 slot = 0; slot < 8; ++slot)
        fixture_spare(i)[slot] = (SqPrototypeObject011){0x05000002u, {.integer = (SqPrototypeI32)(i * 61 + slot * 67)}};
    for (SqPrototypeU32 i = 0; i < 4; ++i)
        fixture_spare_outers()[i] = (SqPrototypeOuter011){i,
            {0x05000002u, {.integer = (SqPrototypeI32)i * 71}}, {0x05000002u, {.integer = (SqPrototypeI32)i * 73}}};
    SqPrototype011 *root = fixture_prototype(0);
    if (variant) {
        root->reference.weak = fixture_weak(0);
        fixture_set_reference(root->literals, fixture_reference(0));
        fixture_set_reference(root->parameters, fixture_reference(1));
        fixture_set_reference(root->functions, fixture_reference(2));
        fixture_set_reference(&root->outers[0].source, fixture_reference(3));
        fixture_set_reference(&root->outers[0].name, fixture_reference(4));
        fixture_set_reference(&root->locals[0].name, fixture_reference(5));
        fixture_set_reference(&root->name, fixture_reference(6));
        fixture_set_reference(&root->source_name, fixture_reference(7));
    }
    if (variant == 2) {
        fixture_set_reference(&root->source_name, fixture_reference(6)); fixture_reference(6)->references = 2;
    }
    if (variant == 3) root->reference.references = 0x80000000u;
    if (variant == 10) {
        SqPrototype011 *child = fixture_prototype(1); child->reference.references = 1; child->reference.weak = fixture_weak(2);
        fixture_set_reference(&child->name, fixture_reference(8)); fixture_set_reference(root->functions, child);
    }
    if (variant == 11) {
        fixture_compact(root, 0);
    }
    if (variant == 12) root->reference.weak = 0;
    if (variant == 13) {
        fixture_set_reference(root->literals, fixture_reference(0)); fixture_set_reference(root->parameters, fixture_reference(0));
        fixture_set_reference(root->functions, fixture_reference(0)); fixture_set_reference(&root->outers[0].source, fixture_reference(0));
        fixture_set_reference(&root->outers[0].name, fixture_reference(0)); fixture_set_reference(&root->locals[0].name, fixture_reference(0));
        fixture_set_reference(&root->name, fixture_reference(0)); fixture_set_reference(&root->source_name, fixture_reference(0));
        fixture_reference(0)->references = 8;
    }
    if (variant == 14) {
        root->name = root->source_name = (SqPrototypeObject011){0x01000001u, {.reference = 0}};
    }
    if (variant == 15) { fixture_reference(6)->references = 0; fixture_reference(7)->references = 0x80000001u; }
    if (variant == 16) {
        root->literals[0] = root->parameters[0] = root->functions[0] = root->outers[0].source = root->outers[0].name =
            root->locals[0].name = root->name = root->source_name = (SqPrototypeObject011){0x05000002u, {.integer = 97}};
    }
    if (variant == 23) root->reference.vtable = &prototype_alternate_table011;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        prototype_fixture011.initial_bytes[i] = sq_prototype_allocation_bytes011(p);
        prototype_fixture011.layouts[i] = (PrototypeFixtureLayout011){p->instructions, p->literals, p->parameters, p->functions,
            p->outers, p->lines, p->locals, p->defaults, {(SqPrototypeU32)p->instruction_count, (SqPrototypeU32)p->literal_count,
            (SqPrototypeU32)p->parameter_count, (SqPrototypeU32)p->function_count, (SqPrototypeU32)p->outer_count,
            (SqPrototypeU32)p->line_count, (SqPrototypeU32)p->local_count, (SqPrototypeU32)p->default_count}};
    }
    return root;
}

void fixture_capture(SqPrototypeU32 index)
{
    SqPrototype011 *p = fixture_prototype(index);
    SqPrototypeU32 *counts = prototype_fixture011.captured_counts[index];
    counts[0] = (SqPrototypeU32)p->instruction_count; counts[1] = (SqPrototypeU32)p->literal_count;
    counts[2] = (SqPrototypeU32)p->parameter_count; counts[3] = (SqPrototypeU32)p->function_count;
    counts[4] = (SqPrototypeU32)p->outer_count; counts[5] = (SqPrototypeU32)p->line_count;
    counts[6] = (SqPrototypeU32)p->local_count; counts[7] = (SqPrototypeU32)p->default_count;
    prototype_fixture011.captured[index] = 1;
}

const SqPrototypeVTable011 *fixture_prototype_vtable(void) { return &sq_prototype_vtable011; }
const SqPrototypeVTable011 *fixture_base_vtable(void) { return &sq_prototype_base_vtable011; }
SqPrototypeU32 fixture_layout(SqPrototypeU32 field)
{
    if (field == 0) return sizeof(SqPrototypePrefix011);
    if (field == 1) return sizeof(SqPrototypeObject011);
    if (field == 2) return __builtin_offsetof(SqPrototype011, instructions);
    if (field == 3) return sizeof(SqPrototypeOuter011);
    if (field == 4) return sizeof(SqPrototypeLocal011);
    if (field == 5) return __builtin_offsetof(SqPrototype011, literals);
    if (field == 6) return __builtin_offsetof(SqPrototype011, source_name);
    return __builtin_offsetof(SqPrototype011, instruction_count);
}
