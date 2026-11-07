#include "fixture_internal.h"

ClassFixture009 class_fixture009;
SqClass009 *fixture_class(SqU32 i) { return (SqClass009 *)(class_fixture009.memory + 0x1000 + i * 0x200); }
SqArray *fixture_array(SqU32 i) { return (SqArray *)(class_fixture009.memory + 0x2000 + i * 0x100); }
SqGenerator008 *fixture_generator(SqU32 i) { return (SqGenerator008 *)(class_fixture009.memory + 0x2400 + i * 0x200); }
SqRef *fixture_node(SqU32 i) { return (SqRef *)(class_fixture009.memory + 0x3000 + i * 0x80); }
SqWeakObject007 *fixture_weak(SqU32 i) { return (SqWeakObject007 *)(class_fixture009.memory + 0x4000 + i * 0x100); }
SqState *fixture_shared(void) { return (SqState *)(class_fixture009.memory + 0x5000); }
SqClassMember009 *fixture_members(SqU32 i) { return (SqClassMember009 *)(class_fixture009.memory + 0x6000 + i * 0x800); }
SqObject *fixture_values(SqU32 i) { return (SqObject *)(class_fixture009.memory + 0x9000 + i * 0x800); }
SqClassMember009 *fixture_fill(void) { return (SqClassMember009 *)(class_fixture009.memory + 0xc000); }

SqU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == fixture_class(i)) return i + 1;
    for (SqU32 i = 0; i < 2; ++i) {
        if (pointer == fixture_array(i)) return i + 11;
        if (pointer == fixture_generator(i)) return i + 21;
    }
    for (SqU32 i = 0; i < 16; ++i) if (pointer == fixture_node(i)) return i + 31;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == fixture_weak(i)) return i + 51;
    for (SqU32 i = 0; i < 6; ++i) if (pointer == fixture_members(i)) return i + 101;
    for (SqU32 i = 0; i < 4; ++i) if (pointer == fixture_values(i)) return i + 201;
    return 999;
}

SqU32 fixture_table_identity(const SqVTable *table)
{
    if (table == class_fixture009.class_table) return 1;
    if (table == class_fixture009.array_table) return 2;
    if (table == class_fixture009.generator_table) return 3;
    if (table == class_fixture009.base_table) return 4;
    if (table == &class_observer_table009) return 5;
    if (table == &class_alternate_table009) return 6;
    return 999;
}

SqU32 fixture_payload(const SqObject *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) : object->value.bits;
}

void fixture_set_reference(SqObject *object, SqRef *reference)
{
    *object = (SqObject){0x08000040u, {.reference = reference}};
}

SqU32 fixture_bind(void *memory, SqU32 bytes, const SqVTable *class_table, const SqVTable *array_table,
    const SqVTable *generator_table, const SqVTable *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    class_fixture009.memory = memory; class_fixture009.bytes = bytes;
    class_fixture009.class_table = class_table; class_fixture009.array_table = array_table;
    class_fixture009.generator_table = generator_table; class_fixture009.base_table = base_table;
    return 1;
}

SqRef *fixture_prepare(SqU32 variant)
{
    class_fixture009.variant = variant; class_fixture009.count = class_fixture009.overflow = 0;
    for (SqU32 i = 0; i < class_fixture009.bytes; ++i) class_fixture009.memory[i] = 0xa5;
    for (SqU32 i = 0; i < 3; ++i) {
        SqClass009 *item = fixture_class(i);
        *item = (SqClass009){0}; item->reference.vtable = class_fixture009.class_table;
        item->shared = fixture_shared(); item->members32.values = fixture_members(i);
        item->members44.values = fixture_members(i + 3); item->values56.values = fixture_values(i);
        item->attributes.type = 0x01000001u; item->type_tag = item;
        item->locked = 1; item->instance_bytes = 123 + i;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqArray *array = fixture_array(i);
        *array = (SqArray){0}; array->reference.vtable = class_fixture009.array_table;
        array->shared = fixture_shared(); array->vector.values = fixture_values(i + 2);
        SqGenerator008 *generator = fixture_generator(i);
        *generator = (SqGenerator008){0}; generator->reference.vtable = class_fixture009.generator_table;
        generator->shared = fixture_shared(); generator->closure.type = generator->saved.closure.type = 0x01000001u;
        generator->state = 1;
    }
    for (SqU32 i = 0; i < 16; ++i) *fixture_node(i) = (SqRef){&class_observer_table009, 1, 0, 0, 0};
    for (SqU32 i = 0; i < 3; ++i)
        *fixture_weak(i) = (SqWeakObject007){{&class_observer_table009, 1, 0},
            {0x08004000u, {.reference = &fixture_class(0)->reference}}};
    for (SqU32 i = 0; i < 6; ++i) for (SqU32 slot = 0; slot < 16; ++slot)
        fixture_members(i)[slot] = (SqClassMember009){{0x05000002u, {.integer = (SqI32)(i * 17 + slot * 23)}},
            {0x05000002u, {.integer = (SqI32)(i * 29 + slot * 31)}}};
    for (SqU32 i = 0; i < 4; ++i) for (SqU32 slot = 0; slot < 16; ++slot)
        fixture_values(i)[slot] = (SqObject){0x05000002u, {.integer = (SqI32)(i * 41 + slot * 43)}};
    fixture_set_reference(&fixture_fill()->primary, fixture_node(14));
    fixture_set_reference(&fixture_fill()->secondary, fixture_node(15));
    SqClass009 *root = fixture_class(0);
    fixture_shared()->chain = &root->reference;
    if (!variant || variant == 16) return &root->reference;
    root->reference.weak = fixture_weak(0); root->release_hook = fixture_release_hook;
    root->members32 = (SqClassMemberVector009){fixture_members(0), 2, 4};
    root->members44 = (SqClassMemberVector009){fixture_members(1), 1, 4};
    root->values56 = (SqVector){fixture_values(0), 2, 4};
    fixture_set_reference(&root->attributes, fixture_node(8)); root->members = fixture_node(9);
    fixture_set_reference(&fixture_members(0)[0].primary, fixture_node(0));
    fixture_set_reference(&fixture_members(0)[0].secondary, fixture_node(1));
    fixture_set_reference(&fixture_members(0)[1].primary, fixture_node(2));
    fixture_set_reference(&fixture_members(0)[1].secondary, fixture_node(3));
    fixture_set_reference(&fixture_members(1)[0].primary, fixture_node(4));
    fixture_set_reference(&fixture_members(1)[0].secondary, fixture_node(5));
    fixture_set_reference(fixture_values(0), fixture_node(6));
    fixture_set_reference(fixture_values(0) + 1, fixture_node(7)); fixture_node(7)->references = 2;
    if (variant == 1 || variant == 2 || variant == 3) {
        root->reference.next = fixture_node(13); fixture_node(13)->previous = &root->reference;
    }
    if (variant == 2 || variant == 22) {
        root->reference.previous = fixture_node(12); fixture_node(12)->next = &root->reference;
        fixture_shared()->chain = fixture_node(12);
    }
    if (variant == 3) root->reference.references = 0x80000000u;
    if (variant == 4 || variant == 11 || variant == 14) {
        root->base = fixture_class(1); root->base->reference.references = variant == 14 ? 2 : 1;
        root->base->reference.next = root->reference.next; root->base->reference.previous = &root->reference;
        if (root->base->reference.next) root->base->reference.next->previous = &root->base->reference;
        root->reference.next = &root->base->reference;
        if (variant == 11) root->base->release_hook = fixture_release_hook;
    }
    if (variant == 14) fixture_node(9)->references = 2;
    if (variant == 15) { root->members = 0; fixture_node(8)->references = 0; fixture_node(7)->references = 0x80000001u; }
    if (variant == 17) {
        root->members32.size = root->members44.size = root->values56.size = 0;
        root->attributes = (SqObject){0x01000001u, {.reference = 0}}; root->members = 0;
    }
    if (variant == 18) {
        root->members32.size = root->values56.size = 1;
        fixture_set_reference(&root->attributes, fixture_node(0));
        fixture_set_reference(&fixture_members(0)[0].primary, fixture_node(0));
        fixture_set_reference(&fixture_members(0)[0].secondary, fixture_node(0));
        fixture_set_reference(&fixture_members(1)[0].primary, fixture_node(0));
        fixture_set_reference(&fixture_members(1)[0].secondary, fixture_node(0));
        fixture_set_reference(fixture_values(0), fixture_node(0)); fixture_node(0)->references = 6;
    }
    if (variant == 19) {
        root->attributes = (SqObject){0x05000002u, {.integer = 97}}; root->members = 0;
        root->members32.size = root->members44.size = root->values56.size = 0;
    }
    if (variant == 21) fixture_fill()->secondary = fixture_fill()->primary;
    if (variant == 23) root->reference.weak = 0;
    if (variant == 24 || variant == 25) {
        SqRef *child = variant == 24 ? &fixture_array(0)->reference : &fixture_generator(0)->reference;
        child->references = 1; child->previous = &root->reference; child->next = root->reference.next;
        if (child->next) child->next->previous = child; root->reference.next = child;
        fixture_set_reference(fixture_values(0), child);
    }
    return &root->reference;
}

SqU32 fixture_requested(void)
{
    SqU32 sizes[5] = {0, 1, 2, 4, 6};
    return sizes[class_fixture009.variant % 5];
}

const SqVTable *fixture_class_vtable(void) { return &sq_class_vtable; }
const SqVTable *fixture_array_vtable(void) { return &sq_array_vtable; }
const SqVTable *fixture_generator_vtable(void) { return &sq_generator_vtable; }
const SqVTable *fixture_base_vtable(void) { return &sq_release007_weak_vtable; }
SqU32 fixture_layout(SqU32 field)
{
    if (field == 0) return sizeof(SqClass009);
    if (field == 1) return sizeof(SqClassMember009);
    if (field == 2) return __builtin_offsetof(SqClass009, members32);
    if (field == 3) return __builtin_offsetof(SqState, chain);
    if (field == 4) return __builtin_offsetof(SqClass009, attributes);
    if (field == 5) return __builtin_offsetof(SqClass009, release_hook);
    if (field == 6) return __builtin_offsetof(SqClass009, instance_bytes);
    return sizeof(SqObject);
}
