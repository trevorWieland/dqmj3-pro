#include "fixture_internal.h"

void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 references)
{
    if (prototype_fixture011.count >= 128) { prototype_fixture011.overflow = 1; return; }
    SqPrototype011 *root = fixture_prototype(0);
    PrototypeObservation011 *row = &prototype_fixture011.observations[prototype_fixture011.count++];
    *row = (PrototypeObservation011){{operation, object, references, fixture_table_identity(root->reference.vtable),
        (SqPrototypeU32)root->literal_count, (SqPrototypeU32)root->parameter_count, (SqPrototypeU32)root->function_count,
        (SqPrototypeU32)root->outer_count, (SqPrototypeU32)root->local_count, (SqPrototypeU32)root->instruction_count,
        root->name.type, fixture_payload(&root->name), root->source_name.type, fixture_payload(&root->source_name),
        fixture_weak(0)->object.type, fixture_weak(1)->object.type}};
}

static void observer_release(void *opaque)
{
    SqPrototypePrefix011 *reference = opaque;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        if (!prototype_fixture011.captured[i] &&
                ((p->name.type & 0x08000000u && p->name.value.reference == opaque) ||
                (p->source_name.type & 0x08000000u && p->source_name.value.reference == opaque))) fixture_capture(i);
    }
    fixture_record(1, fixture_identity(opaque), reference->references);
    SqPrototype011 *root = fixture_prototype(0);
    SqPrototypeU32 variant = prototype_fixture011.variant;
    if (variant == 4 && opaque == fixture_reference(0)) {
        root->parameters = fixture_spare(0); root->parameter_count = 1;
        fixture_set_reference(root->parameters, fixture_reference(8));
    }
    if (variant == 5 && opaque == fixture_reference(3)) {
        root->outers = fixture_spare_outers(); root->outer_count = 2;
        fixture_set_reference(&root->outers[0].name, fixture_reference(8));
        fixture_set_reference(&root->outers[1].source, fixture_reference(9));
        fixture_set_reference(&root->outers[1].name, fixture_reference(10));
    }
    if (variant == 6 && opaque == fixture_reference(5)) root->reference.vtable = &prototype_alternate_table011;
    if (variant == 7 && opaque == fixture_reference(6)) {
        root->instruction_count += 3; root->default_count += 2; root->reference.weak = fixture_weak(1);
    }
    if (variant == 8 && opaque == fixture_reference(1)) {
        root->functions = fixture_spare(1); root->function_count = 1;
        fixture_set_reference(root->functions, fixture_reference(9));
    }
    if (variant == 9 && opaque == fixture_reference(7)) {
        root->line_count += 1; root->reference.weak = fixture_weak(1);
    }
    if (variant == 19 && opaque == fixture_reference(0)) root->literal_count = 1;
    if (variant == 20 && opaque == fixture_reference(6)) {
        fixture_set_reference(&root->source_name, fixture_reference(8)); root->reference.weak = fixture_weak(1);
    }
    if (variant == 21 && opaque == fixture_reference(5)) root->local_count = 1;
    if (variant == 22 && opaque == fixture_reference(2)) fixture_set_reference(&root->name, fixture_reference(8));
}

static void alternate_destructor(void *opaque)
{
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (opaque == fixture_prototype(i)) fixture_capture(i);
    fixture_record(3, fixture_identity(opaque), 0);
    if (prototype_fixture011.variant == 6) fixture_prototype(0)->instruction_count += 1;
    prototype_fixture011.prototype_table->destroy(opaque);
}

static void alternate_release(void *opaque)
{
    SqPrototype011 *prototype = opaque;
    fn_00299114(prototype);
}

const SqPrototypeVTable011 prototype_observer_table011 = {0, 0, observer_release};
const SqPrototypeVTable011 prototype_alternate_table011 = {alternate_destructor, 0, alternate_release};

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 index = 3;
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (pointer == fixture_prototype(i)) index = i;
    if (index == 3) { fixture_record(2, 999, bytes); return; }
    if (!prototype_fixture011.captured[index]) fixture_capture(index);
    SqPrototypeU32 *counts = prototype_fixture011.captured_counts[index];
    SqPrototypeU32 adjustment = __builtin_offsetof(SqPrototype011, instructions) - 96;
    adjustment += (counts[1] + counts[2] + counts[3]) * (sizeof(SqPrototypeObject011) - 8);
    adjustment += counts[4] * (sizeof(SqPrototypeOuter011) - 20);
    adjustment += counts[6] * (sizeof(SqPrototypeLocal011) - 20);
    fixture_record(2, index + 1, bytes - adjustment);
}
