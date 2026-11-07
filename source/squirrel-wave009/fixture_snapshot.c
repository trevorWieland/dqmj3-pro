#include "fixture_internal.h"

SqU32 fixture_snapshot(SqU32 *output, SqU32 capacity)
{
    SqU32 at = 0;
    if (capacity < 4096) return 0;
    output[at++] = class_fixture009.count; output[at++] = class_fixture009.overflow;
    output[at++] = fixture_identity(fixture_shared()->chain);
    for (SqU32 i = 0; i < 3; ++i) {
        SqClass009 *item = fixture_class(i);
        output[at++] = fixture_table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = fixture_identity(item->reference.weak); output[at++] = fixture_identity(item->reference.next);
        output[at++] = fixture_identity(item->reference.previous); output[at++] = fixture_identity(item->members);
        output[at++] = fixture_identity(item->base); output[at++] = fixture_identity(item->members32.values);
        output[at++] = item->members32.size; output[at++] = item->members32.capacity;
        output[at++] = fixture_identity(item->members44.values); output[at++] = item->members44.size; output[at++] = item->members44.capacity;
        output[at++] = fixture_identity(item->values56.values); output[at++] = item->values56.size; output[at++] = item->values56.capacity;
        output[at++] = item->attributes.type; output[at++] = fixture_payload(&item->attributes);
        output[at++] = item->locked; output[at++] = item->instance_bytes;
        output[at++] = fixture_identity(item->type_tag); output[at++] = !!item->release_hook;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqArray *item = fixture_array(i);
        output[at++] = fixture_table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = fixture_identity(item->reference.weak); output[at++] = fixture_identity(item->reference.next); output[at++] = fixture_identity(item->reference.previous);
        output[at++] = fixture_identity(item->vector.values); output[at++] = item->vector.size; output[at++] = item->vector.capacity;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqGenerator008 *item = fixture_generator(i);
        output[at++] = fixture_table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = fixture_identity(item->reference.weak); output[at++] = fixture_identity(item->reference.next); output[at++] = fixture_identity(item->reference.previous);
        output[at++] = item->state; output[at++] = item->closure.type; output[at++] = fixture_payload(&item->closure);
        output[at++] = item->stack.size; output[at++] = item->varargs.size;
        output[at++] = item->saved.closure.type; output[at++] = fixture_payload(&item->saved.closure); output[at++] = item->traps.capacity;
    }
    for (SqU32 i = 0; i < 16; ++i) {
        output[at++] = fixture_node(i)->references; output[at++] = fixture_identity(fixture_node(i)->next); output[at++] = fixture_identity(fixture_node(i)->previous);
    }
    for (SqU32 i = 0; i < 3; ++i) { output[at++] = fixture_weak(i)->object.type; output[at++] = fixture_payload(&fixture_weak(i)->object); }
    for (SqU32 i = 0; i < 6; ++i) for (SqU32 slot = 0; slot < 16; ++slot) {
        SqClassMember009 *member = fixture_members(i) + slot;
        output[at++] = member->primary.type; output[at++] = fixture_payload(&member->primary);
        output[at++] = member->secondary.type; output[at++] = fixture_payload(&member->secondary);
    }
    for (SqU32 i = 0; i < 4; ++i) for (SqU32 slot = 0; slot < 16; ++slot) {
        output[at++] = fixture_values(i)[slot].type; output[at++] = fixture_payload(fixture_values(i) + slot);
    }
    output[at++] = fixture_fill()->primary.type; output[at++] = fixture_payload(&fixture_fill()->primary);
    output[at++] = fixture_fill()->secondary.type; output[at++] = fixture_payload(&fixture_fill()->secondary);
    for (SqU32 i = 0; i < class_fixture009.count; ++i)
        for (SqU32 word = 0; word < 20; ++word) output[at++] = class_fixture009.observations[i].words[word];
    return at;
}
