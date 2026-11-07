#include "fixture_internal.h"

ScriptFixture017 script_fixture017;
SqScriptClosure017 *fixture_script(SqPrototypeU32 i) { return (SqScriptClosure017 *)(script_fixture017.memory + 0x1000 + i * 0x400); }
SqPrototype011 *fixture_prototype(SqPrototypeU32 i) { return (SqPrototype011 *)(script_fixture017.memory + 0x3000 + i * 0x1000); }
SqNativeClosure013 *fixture_native(SqPrototypeU32 i) { return (SqNativeClosure013 *)(script_fixture017.memory + 0x7000 + i * 0x400); }
SqString015 *fixture_string(SqPrototypeU32 i) { return (SqString015 *)(script_fixture017.memory + 0x9000 + i * 0x400); }
SqWeakReference014 *fixture_weak(SqPrototypeU32 i) { return (SqWeakReference014 *)(script_fixture017.memory + 0xe000 + i * 0x100); }
SqPrefixObject012 *fixture_values(SqPrototypeU32 i) { return (SqPrefixObject012 *)(script_fixture017.memory + 0xa000 + i * 0x400); }
SqPrototypeI32 *fixture_masks(SqPrototypeU32 i) { return (SqPrototypeI32 *)(script_fixture017.memory + 0xb800 + i * 0x100); }
SqPrefixState012 *fixture_shared(void) { return (SqPrefixState012 *)(script_fixture017.memory + 0xd000); }
SqStringTable015 *fixture_string_table(void) { return (SqStringTable015 *)(script_fixture017.memory + 0xd100); }
SqString015 **fixture_string_buckets(void) { return (SqString015 **)(script_fixture017.memory + 0xd400); }

SqPrototypeU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        if (pointer == fixture_script(i)) return 1 + i;
        if (pointer == fixture_prototype(i)) return 11 + i;
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        if (pointer == fixture_native(i)) return 21 + i;
        if (pointer == fixture_masks(i)) return 201 + i;
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) if (pointer == fixture_string(i)) return 31 + i;
    for (SqPrototypeU32 i = 0; i < 6; ++i) {
        if (pointer == fixture_weak(i)) return 41 + i;
        if (pointer == fixture_values(i)) return 101 + i;
    }
    return 999;
}

SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table)
{
    if (table == script_fixture017.script_table) return 1;
    if (table == script_fixture017.prototype_table) return 2;
    if (table == script_fixture017.native_table) return 3;
    if (table == script_fixture017.weak_table) return 4;
    if (table == script_fixture017.string_table) return 5;
    if (table == script_fixture017.base_table) return 6;
    if (table == &script_alternate_table017) return 7;
    return 999;
}

void fixture_set(SqPrefixObject012 *object, SqPrototypeU32 type, void *pointer)
{
    *object = (SqPrefixObject012){type, {.reference = pointer}};
    SqPrototypePrefix011 *prefix = pointer;
    if (type & 0x08000000u) prefix->references += 1;
}

static SqPrototypeU32 string_hash(const SqStringByte015 *input, SqPrototypeU32 length)
{
    SqPrototypeU32 value = length;
    for (SqPrototypeU32 i = 0; i < length; ++i) {
        SqPrototypeU32 byte = (unsigned char)input[i];
        value ^= value * 32 + value / 4 + (byte < 128 ? byte : byte + 0xff00);
    }
    return value;
}

static void prepare_prototype(SqPrototypeU32 index, SqPrototypeU32 count)
{
    SqPrototype011 *p = fixture_prototype(index);
    script_fixture017.prototype_shape[index] = count;
    p->reference.vtable = script_fixture017.prototype_table;
    p->name = p->source_name = (SqPrefixObject012){0x01000001u, {.reference = 0}};
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
        p->outers[i] = (SqPrototypeOuter011){0, {0x01000001u, {.reference = 0}}, {0x05000002u, {.integer = 3}}};
        p->locals[i] = (SqPrototypeLocal011){{0x01000001u, {.reference = 0}}, 1, 3, 0};
    }
}

SqPrototypeU32 fixture_bind(void *memory, SqPrototypeU32 bytes, const SqPrototypeVTable011 *script_table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *native_table,
    const SqPrototypeVTable011 *weak_table, const SqPrototypeVTable011 *string_table, const SqPrototypeVTable011 *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    script_fixture017.memory = memory; script_fixture017.bytes = bytes; script_fixture017.script_table = script_table;
    script_fixture017.prototype_table = prototype_table; script_fixture017.native_table = native_table;
    script_fixture017.weak_table = weak_table; script_fixture017.string_table = string_table; script_fixture017.base_table = base_table;
    return 1;
}

SqPrototypeU32 fixture_prepare(SqPrototypeU32 variant, SqPrototypeU32 root)
{
    script_fixture017.variant = variant; script_fixture017.root = root;
    script_fixture017.count = script_fixture017.overflow = script_fixture017.disposed = 0;
    for (SqPrototypeU32 i = 0; i < script_fixture017.bytes; ++i) script_fixture017.memory[i] = 0;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqScriptClosure017 *s = fixture_script(i);
        s->reference.prefix.vtable = script_fixture017.script_table; s->shared = fixture_shared();
        s->function = s->environment = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        prepare_prototype(i, i == 0 && variant != 13 ? 1 : 0);
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        fixture_native(i)->reference.prefix.vtable = script_fixture017.native_table;
        fixture_native(i)->shared = fixture_shared();
        fixture_native(i)->environment = fixture_native(i)->name = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    }
    *fixture_string_table() = (SqStringTable015){fixture_string_buckets(), 4, 4};
    SqStringTable015 *table = fixture_string_table();
    __builtin_memcpy(fixture_shared()->unknown_0000 + 20, &table, sizeof(table));
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        SqString015 *s = fixture_string(i);
        s->reference.vtable = script_fixture017.string_table; s->shared = fixture_shared();
        s->length = 2; s->value[0] = variant == 12 && i == 0 ? -128 : (SqStringByte015)'s'; s->value[1] = (SqStringByte015)('0' + i);
        s->hash = string_hash(s->value, 2);
        SqPrototypeU32 slot = s->hash & 3;
        s->next = fixture_string_buckets()[slot]; fixture_string_buckets()[slot] = s;
    }
    for (SqPrototypeU32 i = 0; i < 6; ++i) {
        fixture_weak(i)->prefix.vtable = script_fixture017.weak_table;
        fixture_weak(i)->object = (SqPrefixObject012){0x08000100u, {.reference = fixture_script(0)}};
    }
    fixture_script(0)->reference.prefix.weak = fixture_weak(0);
    fixture_shared()->chain = &fixture_script(0)->reference;
    if (variant == 0) return variant;
    SqScriptClosure017 *s = fixture_script(0);
    SqNativeClosure013 *native = fixture_native(0);
    SqScriptClosure017 *child = fixture_script(1);
    s->reference.next = &native->reference; native->reference.previous = &s->reference;
    native->reference.next = &child->reference; child->reference.previous = &native->reference;
    s->defaults = (SqPrefixVector012){fixture_values(0), 2, variant == 16 ? 4 : 2};
    s->outers = (SqPrefixVector012){fixture_values(1), 2, variant == 16 ? 4 : 2};
    native->outers = (SqPrefixVector012){fixture_values(2), 1, 2};
    native->type_checks = (SqPrefixPodVector012){fixture_masks(0), 2, 2};
    fixture_set(fixture_values(0), 0x08000200u, native);
    fixture_set(fixture_values(0) + 1, variant == 14 ? 0x08002000u : 0x08000010u, variant == 14 ? (void *)fixture_prototype(0) : (void *)fixture_string(0));
    fixture_set(fixture_values(1), 0x08000010u, fixture_string(variant == 15 ? 0 : 1));
    fixture_set(fixture_values(1) + 1, 0x08000100u, child);
    fixture_set(fixture_values(2), 0x08002000u, fixture_prototype(2));
    fixture_set(&s->function, 0x08002000u, fixture_prototype(0));
    fixture_set(&child->function, 0x08002000u, fixture_prototype(1));
    fixture_set(&native->name, 0x08000010u, fixture_string(3));
    fixture_set(&s->environment, 0x08010000u, fixture_weak(variant == 17 ? 3 : 2));
    fixture_set(&native->environment, 0x08010000u, fixture_weak(3));
    fixture_set(&child->environment, 0x08010000u, fixture_weak(3));
    native->reference.prefix.weak = fixture_weak(2);
    fixture_weak(2)->object = (SqPrefixObject012){0x08000200u, {.reference = native}};
    fixture_string(2)->reference.weak = fixture_weak(3);
    fixture_weak(3)->object = (SqPrefixObject012){0x08000010u, {.reference = fixture_string(2)}};
    fixture_prototype(0)->reference.weak = fixture_weak(5);
    fixture_weak(5)->object = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype(0)}};
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        fixture_set(&fixture_prototype(i)->source_name, 0x08000010u, fixture_string(0));
        fixture_set(&fixture_prototype(i)->name, 0x08000010u, fixture_string(i == 0 && variant == 15 ? 0 : 1));
    }
    if (script_fixture017.prototype_shape[0]) {
        fixture_set(fixture_prototype(0)->literals, 0x08000010u, fixture_string(0));
        fixture_set(fixture_prototype(0)->parameters, 0x08000010u, fixture_string(1));
        fixture_set(fixture_prototype(0)->functions, 0x08002000u, fixture_prototype(1));
        fixture_set(&fixture_prototype(0)->outers[0].name, 0x08000010u, fixture_string(2));
        fixture_set(&fixture_prototype(0)->locals[0].name, 0x08000010u, fixture_string(3));
    }
    if (variant == 2) s->defaults.size = 0;
    if (variant == 3) s->outers.size = 0;
    if (variant == 4) {
        fixture_set(fixture_values(3), 0x08000010u, fixture_string(2));
        fixture_set(fixture_values(3) + 1, 0x08002000u, fixture_prototype(1));
    }
    if (variant == 5) fixture_set(fixture_values(4) + 1, 0x08000010u, fixture_string(2));
    if (variant == 6) fixture_prototype(2)->reference.references += 1;
    if (variant == 7) {
        fixture_script(2)->reference.prefix.references = 1; fixture_script(2)->reference.prefix.weak = fixture_weak(1);
        fixture_weak(1)->prefix.references = 1;
        fixture_weak(1)->object = (SqPrefixObject012){0x08000100u, {.reference = fixture_script(2)}};
    }
    if (variant == 8) fixture_weak(1)->object = (SqPrefixObject012){0x08000100u, {.reference = s}};
    if (variant == 9) s->reference.prefix.vtable = &script_alternate_table017;
    if (variant == 10) s->reference.prefix.references = 0x80000000u;
    if (variant == 11) fixture_prototype(0)->reference.references = 0x80000001u;
    return variant;
}

const SqPrototypeVTable011 *fixture_script_vtable(void) { return &sq_script_closure_vtable017; }
const SqPrototypeVTable011 *fixture_prototype_vtable(void) { return &sq_prototype_vtable011; }
const SqPrototypeVTable011 *fixture_native_vtable(void) { return &sq_native_closure_vtable013; }
const SqPrototypeVTable011 *fixture_weak_vtable(void) { return &sq_weak_vtable014; }
const SqPrototypeVTable011 *fixture_string_vtable(void) { return &sq_string_vtable015; }
const SqPrototypeVTable011 *fixture_base_vtable(void) { return &sq_prototype_base_vtable011; }
SqPrototypeU32 fixture_layout(SqPrototypeU32 index)
{
    SqPrototypeU32 values[] = {sizeof(SqScriptClosure017), sizeof(SqPrefixCollectable012), sizeof(SqPrototypePrefix011),
        __builtin_offsetof(SqScriptClosure017, environment), __builtin_offsetof(SqScriptClosure017, function),
        __builtin_offsetof(SqScriptClosure017, outers), __builtin_offsetof(SqScriptClosure017, defaults)};
    return index < 7 ? values[index] : 0;
}
