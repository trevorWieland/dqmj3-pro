#include "fixture_internal.h"

SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 at = 0;
    if (capacity < 4096) return 0;
    output[at++] = prototype_fixture011.count; output[at++] = prototype_fixture011.overflow;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        output[at++] = fixture_table_identity(p->reference.vtable); output[at++] = p->reference.references;
        output[at++] = fixture_identity(p->reference.weak);
        output[at++] = p->source_name.type; output[at++] = fixture_payload(&p->source_name);
        output[at++] = p->name.type; output[at++] = fixture_payload(&p->name);
        output[at++] = (SqPrototypeU32)p->stack_size; output[at++] = p->generator; output[at++] = p->variable_parameters;
        output[at++] = (SqPrototypeU32)p->local_count; output[at++] = (SqPrototypeU32)p->line_count;
        output[at++] = (SqPrototypeU32)p->literal_count; output[at++] = (SqPrototypeU32)p->parameter_count;
        output[at++] = (SqPrototypeU32)p->function_count; output[at++] = (SqPrototypeU32)p->outer_count;
        output[at++] = (SqPrototypeU32)p->default_count; output[at++] = (SqPrototypeU32)p->instruction_count;
        output[at++] = fixture_identity(p->literals); output[at++] = fixture_identity(p->parameters);
        output[at++] = fixture_identity(p->functions); output[at++] = fixture_identity(p->outers); output[at++] = fixture_identity(p->locals);
    }
    for (SqPrototypeU32 i = 0; i < 16; ++i) {
        output[at++] = fixture_table_identity(fixture_reference(i)->vtable); output[at++] = fixture_reference(i)->references;
        output[at++] = fixture_identity(fixture_reference(i)->weak);
    }
    for (SqPrototypeU32 i = 0; i < 3; ++i) { output[at++] = fixture_weak(i)->object.type; output[at++] = fixture_payload(&fixture_weak(i)->object); }
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        PrototypeFixtureLayout011 *layout = &prototype_fixture011.layouts[i];
        for (SqPrototypeU32 slot = 0; slot < layout->counts[0]; ++slot) {
            SqPrototypeInstruction011 *instruction = layout->instructions + slot;
            output[at++] = (SqPrototypeU32)instruction->argument1;
            output[at++] = instruction->opcode | ((SqPrototypeU32)instruction->argument0 << 8) |
                ((SqPrototypeU32)instruction->argument2 << 16) | ((SqPrototypeU32)instruction->argument3 << 24);
        }
        for (SqPrototypeU32 group = 0; group < 3; ++group) {
            SqPrototypeObject011 *objects = group == 0 ? layout->literals : group == 1 ? layout->parameters : layout->functions;
            for (SqPrototypeU32 slot = 0; slot < layout->counts[group + 1]; ++slot) {
                output[at++] = objects[slot].type; output[at++] = fixture_payload(objects + slot);
            }
        }
        for (SqPrototypeU32 slot = 0; slot < layout->counts[4]; ++slot) {
            SqPrototypeOuter011 *outer = layout->outers + slot;
            output[at++] = outer->kind; output[at++] = outer->name.type; output[at++] = fixture_payload(&outer->name);
            output[at++] = outer->source.type; output[at++] = fixture_payload(&outer->source);
        }
        for (SqPrototypeU32 slot = 0; slot < layout->counts[5]; ++slot) {
            output[at++] = (SqPrototypeU32)layout->lines[slot].line; output[at++] = (SqPrototypeU32)layout->lines[slot].operation;
        }
        for (SqPrototypeU32 slot = 0; slot < layout->counts[6]; ++slot) {
            SqPrototypeLocal011 *local = layout->locals + slot;
            output[at++] = local->name.type; output[at++] = fixture_payload(&local->name);
            output[at++] = local->start; output[at++] = local->end; output[at++] = local->position;
        }
        for (SqPrototypeU32 slot = 0; slot < layout->counts[7]; ++slot) output[at++] = (SqPrototypeU32)layout->defaults[slot];
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) for (SqPrototypeU32 slot = 0; slot < 8; ++slot) {
        output[at++] = fixture_spare(i)[slot].type; output[at++] = fixture_payload(fixture_spare(i) + slot);
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        output[at++] = fixture_spare_outers()[i].kind;
        output[at++] = fixture_spare_outers()[i].name.type; output[at++] = fixture_payload(&fixture_spare_outers()[i].name);
        output[at++] = fixture_spare_outers()[i].source.type; output[at++] = fixture_payload(&fixture_spare_outers()[i].source);
    }
    for (SqPrototypeU32 i = 0; i < prototype_fixture011.count; ++i)
        for (SqPrototypeU32 word = 0; word < 16; ++word) output[at++] = prototype_fixture011.observations[i].words[word];
    return at;
}
