#include "fixture_internal.h"

SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 at = 0;
    if (capacity < 4096) return 0;
    output[at++] = native_fixture013.count; output[at++] = native_fixture013.overflow;
    output[at++] = native_fixture013.callable_count; output[at++] = fixture_identity(fixture_shared()->chain);
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqNativeClosure013 *p = fixture_native(i);
        output[at++] = fixture_table_identity(p->reference.prefix.vtable); output[at++] = p->reference.prefix.references;
        output[at++] = fixture_identity(p->reference.prefix.weak); output[at++] = fixture_identity(p->reference.next); output[at++] = fixture_identity(p->reference.previous);
        output[at++] = (SqPrototypeU32)p->parameter_check; output[at++] = fixture_identity(p->type_checks.values);
        output[at++] = p->type_checks.size; output[at++] = p->type_checks.capacity;
        output[at++] = fixture_identity(p->outers.values); output[at++] = p->outers.size; output[at++] = p->outers.capacity;
        output[at++] = p->environment.type; output[at++] = fixture_payload(&p->environment);
        output[at++] = p->function == fixture_callable ? 1 : p->function == fixture_other_callable ? 2 : 999;
        output[at++] = p->name.type; output[at++] = fixture_payload(&p->name);
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        output[at++] = fixture_table_identity(p->reference.vtable); output[at++] = p->reference.references;
        output[at++] = fixture_identity(p->reference.weak); output[at++] = p->name.type; output[at++] = fixture_payload(&p->name);
        output[at++] = p->source_name.type; output[at++] = fixture_payload(&p->source_name);
        output[at++] = p->function_count;
        if (p->function_count) { output[at++] = p->functions[0].type; output[at++] = fixture_payload(p->functions); }
        else { output[at++] = 0; output[at++] = 0; }
    }
    for (SqPrototypeU32 i = 0; i < 16; ++i) {
        output[at++] = fixture_table_identity(fixture_reference(i)->vtable); output[at++] = fixture_reference(i)->references;
        output[at++] = fixture_identity(fixture_reference(i)->weak);
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        output[at++] = fixture_identity(fixture_link(i)->next); output[at++] = fixture_identity(fixture_link(i)->previous);
        output[at++] = fixture_weak(i)->object.type; output[at++] = fixture_payload(&fixture_weak(i)->object);
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) for (SqPrototypeU32 slot = 0; slot < 16; ++slot) {
        output[at++] = fixture_values(i)[slot].type; output[at++] = fixture_payload(fixture_values(i) + slot);
        output[at++] = (SqPrototypeU32)fixture_masks(i)[slot];
    }
    for (SqPrototypeU32 i = 0; i < native_fixture013.count; ++i)
        for (SqPrototypeU32 word = 0; word < 16; ++word) output[at++] = native_fixture013.observations[i].words[word];
    return at;
}
