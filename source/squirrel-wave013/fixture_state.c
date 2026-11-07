#include "fixture_internal.h"

NativeFixture013 native_fixture013;
SqNativeClosure013 *fixture_native(SqPrototypeU32 i) { return (SqNativeClosure013 *)(native_fixture013.memory + 0x1000 + i * 0x400); }
SqPrototype011 *fixture_prototype(SqPrototypeU32 i) { return (SqPrototype011 *)(native_fixture013.memory + 0x3000 + i * 0x1000); }
SqPrototypePrefix011 *fixture_reference(SqPrototypeU32 i) { return (SqPrototypePrefix011 *)(native_fixture013.memory + 0x6000 + i * 0x80); }
SqPrefixCollectable012 *fixture_link(SqPrototypeU32 i) { return (SqPrefixCollectable012 *)(native_fixture013.memory + 0x7000 + i * 0x100); }
SqPrototypeWeak011 *fixture_weak(SqPrototypeU32 i) { return (SqPrototypeWeak011 *)(native_fixture013.memory + 0x8000 + i * 0x100); }
SqPrefixState012 *fixture_shared(void) { return (SqPrefixState012 *)(native_fixture013.memory + 0x9000); }
SqPrefixObject012 *fixture_values(SqPrototypeU32 i) { return (SqPrefixObject012 *)(native_fixture013.memory + 0xa000 + i * 0x800); }
SqPrototypeI32 *fixture_masks(SqPrototypeU32 i) { return (SqPrototypeI32 *)(native_fixture013.memory + 0xc000 + i * 0x400); }

SqPrototypeU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (pointer == fixture_native(i)) return i + 1;
    for (SqPrototypeU32 i = 0; i < 2; ++i) if (pointer == fixture_prototype(i)) return i + 11;
    for (SqPrototypeU32 i = 0; i < 16; ++i) if (pointer == fixture_reference(i)) return i + 21;
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        if (pointer == fixture_link(i)) return i + 51;
        if (pointer == fixture_weak(i)) return i + 61;
        if (pointer == fixture_values(i)) return i + 101;
        if (pointer == fixture_masks(i)) return i + 201;
    }
    return 999;
}

SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table)
{
    if (table == native_fixture013.native_table) return 1;
    if (table == native_fixture013.prototype_table) return 2;
    if (table == native_fixture013.base_table) return 3;
    if (table == &native_observer_table013) return 4;
    if (table == &native_alternate_table013) return 5;
    return 999;
}

SqPrototypeU32 fixture_payload(const SqPrefixObject012 *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) : object->value.bits;
}

void fixture_set_reference(SqPrefixObject012 *object, void *reference)
{
    *object = (SqPrefixObject012){0x08000200u, {.reference = reference}};
}

static void prepare_prototype(SqPrototype011 *p, SqPrototypeI32 count)
{
    p->reference = (SqPrototypePrefix011){native_fixture013.prototype_table, 0, 0};
    p->source_name = p->name = (SqPrototypeObject011){0x01000001u, {.reference = 0}};
    p->stack_size = 7; p->generator = p->variable_parameters = 0; p->padding = 0;
    p->instruction_count = count + 1;
    p->literal_count = p->parameter_count = p->function_count = p->outer_count = p->line_count = p->local_count = p->default_count = count;
    unsigned char *cursor = (unsigned char *)(p->instructions + p->instruction_count);
    p->literals = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->parameters = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->functions = (SqPrototypeObject011 *)cursor; cursor += count * sizeof(SqPrototypeObject011);
    p->outers = (SqPrototypeOuter011 *)cursor; cursor += count * sizeof(SqPrototypeOuter011);
    p->lines = (SqPrototypeLine011 *)cursor; cursor += count * sizeof(SqPrototypeLine011);
    p->locals = (SqPrototypeLocal011 *)cursor; cursor += count * sizeof(SqPrototypeLocal011);
    p->defaults = (SqPrototypeI32 *)cursor;
    for (SqPrototypeI32 i = 0; i < p->instruction_count; ++i) p->instructions[i] = (SqPrototypeInstruction011){i * 17, 2, 0, 0, 0};
    for (SqPrototypeI32 i = 0; i < count; ++i) {
        p->literals[i] = p->parameters[i] = p->functions[i] = (SqPrototypeObject011){0x05000002u, {.integer = 97}};
        p->outers[i] = (SqPrototypeOuter011){0, {0x05000002u, {.integer = 113}}, {0x05000002u, {.integer = 127}}};
        p->lines[i] = (SqPrototypeLine011){3, 5}; p->locals[i] = (SqPrototypeLocal011){{0x05000002u, {.integer = 137}}, 7, 11, 13};
        p->defaults[i] = 17;
    }
}

SqPrototypeU32 fixture_bind(void *memory, SqPrototypeU32 bytes, const SqPrototypeVTable011 *native_table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    native_fixture013.memory = memory; native_fixture013.bytes = bytes; native_fixture013.native_table = native_table;
    native_fixture013.prototype_table = prototype_table; native_fixture013.base_table = base_table;
    return 1;
}

SqNativeClosure013 *fixture_prepare(SqPrototypeU32 variant)
{
    native_fixture013.variant = variant; native_fixture013.count = native_fixture013.overflow = native_fixture013.callable_count = 0;
    for (SqPrototypeU32 i = 0; i < native_fixture013.bytes; ++i) native_fixture013.memory[i] = 0xa5;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqNativeClosure013 *p = fixture_native(i);
        *p = (SqNativeClosure013){0}; p->reference.prefix.vtable = native_fixture013.native_table; p->shared = fixture_shared();
        p->parameter_check = -3; p->type_checks.values = fixture_masks(i); p->outers.values = fixture_values(i);
        p->environment.type = p->name.type = 0x01000001u; p->function = fixture_callable;
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) prepare_prototype(fixture_prototype(i), 0);
    for (SqPrototypeU32 i = 0; i < 16; ++i) *fixture_reference(i) = (SqPrototypePrefix011){&native_observer_table013, 1, 0};
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        *fixture_link(i) = (SqPrefixCollectable012){{&native_observer_table013, 1, 0}, 0, 0};
        *fixture_weak(i) = (SqPrototypeWeak011){{&native_observer_table013, 1, 0}, {0x08000200u, {.reference = fixture_native(0)}}};
        for (SqPrototypeU32 slot = 0; slot < 16; ++slot) {
            fixture_values(i)[slot] = (SqPrefixObject012){0x05000002u, {.integer = (SqPrototypeI32)(i * 17 + slot * 23)}};
            fixture_masks(i)[slot] = (SqPrototypeI32)(i * 29 + slot * 31);
        }
    }
    SqNativeClosure013 *root = fixture_native(0);
    fixture_shared()->chain = &root->reference;
    if (!variant) return root;
    root->reference.prefix.weak = fixture_weak(0); root->type_checks = (SqPrefixPodVector012){fixture_masks(0), 2, 4};
    root->outers = (SqPrefixVector012){fixture_values(0), 2, 4};
    fixture_set_reference(&root->name, fixture_reference(0)); fixture_set_reference(&root->environment, fixture_reference(1));
    fixture_set_reference(fixture_values(0), fixture_reference(2));
    fixture_set_reference(fixture_values(1), fixture_reference(4)); fixture_set_reference(fixture_values(2) + 1, fixture_reference(5));
    if (variant == 1 || variant == 2 || variant == 3 || variant == 11 || variant == 12) {
        root->reference.next = fixture_link(1); fixture_link(1)->previous = &root->reference;
    }
    if (variant == 2 || variant == 22) {
        root->reference.previous = fixture_link(0); fixture_link(0)->next = &root->reference;
        fixture_shared()->chain = fixture_link(0);
    }
    if (variant == 3) root->reference.prefix.references = 0x80000000u;
    if (variant == 9) { fixture_set_reference(&root->environment, fixture_reference(0)); fixture_reference(0)->references = 2; }
    if (variant == 10 || variant == 12) {
        SqPrototype011 *p = fixture_prototype(0); prepare_prototype(p, variant == 12 ? 1 : 0);
        p->reference.references = 1; p->reference.weak = fixture_weak(2);
        fixture_weak(2)->object = (SqPrototypeObject011){0x08002000u, {.reference = p}};
        fixture_set_reference(&p->name, fixture_reference(3));
        if (variant == 10) fixture_set_reference(&root->environment, p);
        else fixture_set_reference(root->outers.values, p);
    }
    if (variant == 11 || variant == 12) {
        SqNativeClosure013 *child = fixture_native(1); child->reference.prefix.references = 1;
        child->reference.prefix.weak = fixture_weak(3); fixture_set_reference(&child->name, fixture_reference(4));
        child->reference.previous = &root->reference; child->reference.next = root->reference.next;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        root->reference.next = &child->reference;
        if (variant == 11) fixture_set_reference(root->outers.values, child);
        else fixture_set_reference(fixture_prototype(0)->functions, child);
    }
    if (variant == 13) root->outers.size = 0;
    if (variant == 14) root->type_checks.size = 0;
    if (variant == 15) root->type_checks.size = root->type_checks.capacity = 0;
    if (variant == 16) {
        root->reference.prefix.weak = 0; root->name = root->environment = root->outers.values[0] =
            (SqPrefixObject012){0x05000002u, {.integer = 149}};
    }
    if (variant == 17) {
        fixture_set_reference(&root->environment, fixture_reference(0)); fixture_set_reference(root->outers.values, fixture_reference(0));
        fixture_reference(0)->references = 3;
    }
    if (variant == 18) { fixture_reference(0)->references = 0; fixture_reference(1)->references = 0x80000001u; }
    if (variant == 23) root->reference.prefix.vtable = &native_alternate_table013;
    return root;
}

const SqPrototypeVTable011 *fixture_native_vtable(void) { return &sq_native_closure_vtable013; }
const SqPrototypeVTable011 *fixture_prototype_vtable(void) { return &sq_prototype_vtable011; }
const SqPrototypeVTable011 *fixture_base_vtable(void) { return &sq_prototype_base_vtable011; }
SqPrototypeU32 fixture_layout(SqPrototypeU32 field)
{
    if (field == 0) return sizeof(SqNativeClosure013);
    if (field == 1) return sizeof(SqPrefixCollectable012);
    if (field == 2) return sizeof(SqPrototypePrefix011);
    if (field == 3) return __builtin_offsetof(SqNativeClosure013, type_checks);
    if (field == 4) return __builtin_offsetof(SqNativeClosure013, outers);
    if (field == 5) return __builtin_offsetof(SqNativeClosure013, environment);
    if (field == 6) return __builtin_offsetof(SqNativeClosure013, function);
    return __builtin_offsetof(SqNativeClosure013, name);
}
