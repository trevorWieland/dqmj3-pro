#include "fixture_internal.h"

CreationFixture018 creation_fixture018;
SqScriptCreationStorage018 *fixture18_vm(void) { return (SqScriptCreationStorage018 *)script_fixture017.memory; }
SqPrefixObject012 *fixture18_destination(void)
{
    return creation_fixture018.variant == 21 ? fixture_values(3) + 3 : (SqPrefixObject012 *)(script_fixture017.memory + 0x600);
}
SqPrefixObject012 *fixture18_alternate_stack(void) { return (SqPrefixObject012 *)(script_fixture017.memory + 0x800); }
SqPrefixState012 *fixture18_alternate_state(void) { return (SqPrefixState012 *)(script_fixture017.memory + 0xd800); }
SqTable019 *fixture18_table(void) { return (SqTable019 *)(script_fixture017.memory + 0xc000); }
SqTableNode019 *fixture18_nodes(void) { return (SqTableNode019 *)(script_fixture017.memory + 0xc100); }

void fixture18_set_base(SqPrototypeI32 value)
{
    __builtin_memcpy(fixture18_vm()->unknown_to_shared, &value, sizeof(value));
}

static void prototype_shape(SqPrototypeU32 count)
{
    SqPrototype011 *p = fixture_prototype(0);
    script_fixture017.prototype_shape[0] = count;
    p->instruction_count = (SqPrototypeI32)count + 1;
    p->literal_count = p->parameter_count = p->function_count = p->outer_count = p->line_count = p->local_count = p->default_count = (SqPrototypeI32)count;
    unsigned char *cursor = (unsigned char *)(p->instructions + p->instruction_count);
    p->literals = (SqPrefixObject012 *)cursor; cursor += count * sizeof(SqPrefixObject012);
    p->parameters = (SqPrefixObject012 *)cursor; cursor += count * sizeof(SqPrefixObject012);
    p->functions = (SqPrefixObject012 *)cursor; cursor += count * sizeof(SqPrefixObject012);
    p->outers = (SqPrototypeOuter011 *)cursor; cursor += count * sizeof(SqPrototypeOuter011);
    p->lines = (SqPrototypeLine011 *)cursor; cursor += count * sizeof(SqPrototypeLine011);
    p->locals = (SqPrototypeLocal011 *)cursor; cursor += count * sizeof(SqPrototypeLocal011);
    p->defaults = (SqPrototypeI32 *)cursor;
    for (SqPrototypeU32 i = 0; i < count; ++i) {
        p->literals[i] = p->parameters[i] = p->functions[i] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        p->outers[i] = (SqPrototypeOuter011){0, {0x01000001u, {.reference = 0}}, {0x05000002u, {.integer = (SqPrototypeI32)i + 1}}};
        p->locals[i] = (SqPrototypeLocal011){{0x01000001u, {.reference = 0}}, 0, 0, 0};
        p->defaults[i] = (SqPrototypeI32)i + 1;
    }
}

SqPrototypeU32 fixture18_prepare(SqPrototypeU32 variant, SqPrototypeU32 phase)
{
    fixture_prepare(0, 0);
    creation_fixture018 = (CreationFixture018){0};
    creation_fixture018.variant = variant; creation_fixture018.phase = phase;
    SqScriptCreationStorage018 *vm = fixture18_vm();
    vm->stack = fixture_values(3); vm->top = 8; vm->shared = fixture_shared();
    fixture18_set_base(2);
    SqScriptCallStorage018 *frame = (SqScriptCallStorage018 *)(script_fixture017.memory + 0x400);
    fixture_set(&frame->closure, 0x08000100u, fixture_script(0));
    const void *frame_pointer = frame;
    __builtin_memcpy(vm->unknown_to_shared + 80, &frame_pointer, sizeof(frame_pointer));
    for (SqPrototypeU32 i = 0; i < 6; ++i)
        for (SqPrototypeU32 j = 0; j < 8; ++j) fixture_values(i)[j] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    for (SqPrototypeU32 i = 0; i < 8; ++i)
        fixture18_alternate_stack()[i] = (SqPrefixObject012){0x05000002u, {.integer = (SqPrototypeI32)(700 + i)}};
    SqTable019 *table = fixture18_table();
    table->reference.prefix.vtable = script_fixture017.base_table;
    table->shared = fixture_shared(); table->nodes = fixture18_nodes(); table->node_count = 1; table->used = 1;
    fixture_set(vm->stack + 2, 0x0a000020u, table);
    fixture_set(vm->stack + 3, 0x08000010u, fixture_string(1));
    fixture_set(vm->stack + 4, 0x08000200u, fixture_native(0));
    fixture_set(vm->stack + 5, 0x08002000u, fixture_prototype(2));
    vm->stack[6] = (SqPrefixObject012){0x05000002u, {.integer = -125}};
    fixture_set(vm->stack + 7, 0x08010000u, fixture_weak(3));
    fixture_weak(3)->object = (SqPrefixObject012){0x08000010u, {.reference = fixture_string(2)}};
    fixture_string(2)->reference.weak = fixture_weak(3);
    fixture_set(&table->nodes[0].key, 0x08000010u, fixture_string(0));
    fixture_set(&table->nodes[0].value, 0x08000200u, fixture_native(0));
    fixture_script(0)->outers = (SqPrefixVector012){fixture_values(0), 3, 3};
    fixture_set(fixture_values(0), 0x08000010u, fixture_string(2));
    fixture_set(fixture_values(0) + 1, 0x08002000u, fixture_prototype(2));
    fixture_set(fixture_values(0) + 2, 0x08010000u, fixture_weak(3));
    fixture_set(&fixture_script(0)->function, 0x08002000u, fixture_prototype(1));
    fixture_script(0)->reference.next = &fixture_native(0)->reference;
    fixture_native(0)->reference.previous = &fixture_script(0)->reference;
    prototype_shape(variant == 0 ? 0 : 3);
    fixture_set(&creation_fixture018.prototype_owner, 0x08002000u, fixture_prototype(0));
    fixture_set(&fixture_prototype(0)->name, 0x08000010u, fixture_string(0));
    fixture_set(&fixture_prototype(0)->source_name, 0x08000010u, fixture_string(1));
    SqPrototype011 *p = fixture_prototype(0);
    if (variant == 2 || variant == 25) for (SqPrototypeU32 i = 0; i < 3; ++i) { p->outers[i].kind = 2; p->outers[i].source.value.integer = (SqPrototypeI32)i; }
    if (variant == 3 || variant == 10 || variant == 15) {
        p->outers[1].kind = 1; fixture_set(&p->outers[1].source, 0x08000010u, fixture_string(0));
        p->outers[2].kind = 2; p->outers[2].source.value.integer = 1;
    }
    if (variant == 4 || variant == 5 || variant == 13) {
        SqPrototypeU32 index = variant == 5 ? 1 : 0;
        p->outers[index].kind = 1; fixture_set(&p->outers[index].source, 0x08000010u, fixture_string(0));
    }
    if (variant == 6) { p->outers[0].kind = 0x100; p->outers[1].kind = 0x102; p->outers[1].source.value.integer = 0; p->outers[2].kind = 0x1ff; }
    if (variant == 7) for (SqPrototypeU32 i = 0; i < 3; ++i) p->outers[i].kind = 9;
    if (variant == 16) p->outer_count = 0;
    if (variant == 17) p->default_count = 0;
    if (variant == 18) p->outers[0].source.value.integer = -1;
    if (variant == 19) {
        p->outers[0].kind = 2; p->outers[0].source.value.integer = 2;
        p->defaults[0] = 5;
    }
    if (variant == 20) p->outer_count = p->default_count = 1;
    if (variant == 21) {
        SqPrefixObject012 old = {0x08000010u, {.reference = fixture_string(3)}};
        sq_prefix_assign(fixture18_destination(), &old);
    } else fixture_set(fixture18_destination(), 0x08000010u, fixture_string(3));
    if (variant == 22) sq_prefix_assign(vm->stack + 3, &creation_fixture018.prototype_owner);
    if (variant == 23 || variant == 24) {
        creation_fixture018.prototype_owner = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        p->reference.references = 0;
    }
    if (variant == 24) {
        fixture_weak(5)->object = (SqPrefixObject012){0x08002000u, {.reference = p}};
        fixture_set(&creation_fixture018.weak_owner, 0x08010000u, fixture_weak(5));
        p->reference.weak = fixture_weak(5);
    }
    if (variant == 25) {
        SqPrefixObject012 keep = {0x08000010u, {.reference = fixture_string(2)}};
        sq_prefix_assign(vm->stack + 6, &keep);
    }
    fixture_string(3)->reference.vtable = &fixture18_old_string_vtable;
    return variant;
}

SqPrototypeU32 fixture18_payload(const SqPrefixObject012 *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) : object->value.bits;
}
