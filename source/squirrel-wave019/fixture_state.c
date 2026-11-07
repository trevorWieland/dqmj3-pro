#include "fixture_internal.h"

SqTableFixture019 table_fixture019;

SqTable019 *fixture_table019(void) { return (void *)(table_fixture019.memory + 0x9000); }
SqPrefixState012 *fixture_state019(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0x1000 + index * 0x800); }
SqStringTable015 *fixture_strings019(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0x2000 + index * 0x800); }
SqPrefixObject012 *fixture_keys019(void) { return (void *)(table_fixture019.memory + 0x27000); }
SqPrefixObject012 *fixture_destination019(void) { return (void *)(table_fixture019.memory + 0x29000); }
SqPrefixObject012 *fixture_scratch019(void) { return (void *)(table_fixture019.memory + 0x29100); }
SqPrefixObject012 *fixture_external019(void) { return (void *)(table_fixture019.memory + 0x29200); }
SqPrefixObject012 *fixture_old_external019(void) { return (void *)(table_fixture019.memory + 0x29300); }
SqPrototype011 *fixture_prototype019(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0x22000 + index * 0x1000); }
SqNativeClosure013 *fixture_native019(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0x24000 + index * 0x400); }
SqScriptClosure017 *fixture_script019(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0x20000 + index * 0x1000); }
SqWeakReference014 *fixture_weak019(void) { return (void *)(table_fixture019.memory + 0x26000); }

SqPrototypeU32 fixture_identity019(const void *pointer)
{
    if (!pointer) return 0;
    if (pointer == fixture_table019()) return 1;
    for (SqPrototypeU32 index = 0; index < 8; index++) {
        if (pointer == table_fixture019.memory + 0x4000 + index * 0x400) return 10 + index;
        if (pointer == table_fixture019.memory + 0x10000 + index * 0x2000) return 100 + index;
        if (pointer == table_fixture019.memory + 0x8000 + index * 0x100) return 30 + index;
    }
    if (pointer == table_fixture019.memory + 0x3000) return 40;
    if (pointer == table_fixture019.memory + 0x3800) return 41;
    for (SqPrototypeU32 index = 0; index < 2; index++) {
        if (pointer == fixture_prototype019(index)) return 20 + index;
        if (pointer == fixture_script019(index)) return 25 + index;
    }
    for (SqPrototypeU32 index = 0; index < 3; index++) if (pointer == fixture_native019(index)) return 22 + index;
    if (pointer == fixture_weak019()) return 27;
    return 0xffffffffu;
}

SqPrototypeU32 fixture_payload019(SqPrefixObject012 object)
{
    if (object.type & 0x08000000u) return fixture_identity019(object.value.reference);
    SqPrototypeU32 bits;
    __builtin_memcpy(&bits, &object.value, sizeof(bits));
    return bits;
}

static void prototype(SqPrototypeU32 index, SqPrototypeU32 references)
{
    SqPrototype011 *object = fixture_prototype019(index);
    *object = (SqPrototype011){0};
    object->reference = (SqPrototypePrefix011){table_fixture019.prototype_vtable, references, 0};
    object->name.type = object->source_name.type = 0x01000001u;
}

static void native(SqPrototypeU32 index, SqPrototypeU32 references, SqPrototypeU32 with_function)
{
    SqNativeClosure013 *object = fixture_native019(index);
    *object = (SqNativeClosure013){0};
    object->reference.prefix = (SqPrototypePrefix011){table_fixture019.native_vtable, references, 0};
    object->shared = fixture_state019(0);
    object->environment.type = object->name.type = 0x01000001u;
    if (with_function) {
        prototype(index, 1);
        object->environment = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(index)}};
    }
    SqPrefixState012 *state = fixture_state019(0);
    object->reference.next = state->chain;
    if (state->chain) state->chain->previous = &object->reference;
    state->chain = &object->reference;
}

static void script(SqPrototypeU32 index, SqPrototypeU32 references)
{
    prototype(index, 1);
    SqScriptClosure017 *object = fixture_script019(index);
    *object = (SqScriptClosure017){0};
    object->reference.prefix = (SqPrototypePrefix011){table_fixture019.script_vtable, references, 0};
    object->shared = fixture_state019(0);
    object->environment.type = 0x01000001u;
    object->function = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(index)}};
    SqPrefixState012 *state = fixture_state019(0);
    object->reference.next = state->chain;
    if (state->chain) state->chain->previous = &object->reference;
    state->chain = &object->reference;
}

SqPrototypeU32 fixture_table_bind019(void *arena, SqPrototypeU32 bytes, const SqPrototypeVTable011 *table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *native_table, const SqPrototypeVTable011 *script_table,
    const SqPrototypeVTable011 *weak_table, const SqPrototypeVTable011 *string_table, const SqPrototypeVTable011 *base_table)
{
    if (!arena || bytes < 0x40000) return 0;
    table_fixture019.memory = arena;
    table_fixture019.bytes = bytes;
    table_fixture019.table_vtable = table;
    table_fixture019.prototype_vtable = prototype_table;
    table_fixture019.native_vtable = native_table;
    table_fixture019.script_vtable = script_table;
    table_fixture019.weak_vtable = weak_table;
    table_fixture019.string_vtable = string_table;
    table_fixture019.base_vtable = base_table;
    return 1;
}

void fixture_table_prepare019(SqPrototypeU32 value_kind, SqPrototypeU32 old_kind, SqPrototypeU32 query_kind)
{
    unsigned char *memory = table_fixture019.memory;
    for (SqPrototypeU32 index = 0; index < 0x40000; index++) memory[index] = 0;
    table_fixture019.value_kind = value_kind;
    table_fixture019.old_kind = old_kind;
    table_fixture019.query_kind = query_kind;
    table_fixture019.fault = table_fixture019.node_allocations = table_fixture019.string_allocations = 0;
    table_fixture019.bucket_allocations = table_fixture019.frees = table_fixture019.event_count = 0;
    for (SqPrototypeU32 index = 0; index < 2; index++) {
        SqStringTable015 *strings = fixture_strings019(index);
        strings->buckets = (void *)(memory + 0x3000 + index * 0x800);
        strings->slots = 4;
        strings->used = 0;
        sq_string_provision_table015(fixture_state019(index), strings);
    }
    SqPrefixObject012 empty = {0x01000001u, {.reference = 0}};
    *fixture_destination019() = *fixture_scratch019() = *fixture_external019() = *fixture_old_external019() = empty;
    native(2, 0, 0);
    if (value_kind == 1) native(0, 0, 1);
    if (value_kind == 2) prototype(0, 0);
    if (value_kind == 3) {
        native(0, 1, 1);
        *fixture_external019() = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(0)}};
    }
    if (value_kind == 4) script(0, 0);
    if (old_kind == 0) *fixture_destination019() = (SqPrefixObject012){0x05000002u, {.integer = 7}};
    if (old_kind == 1) {
        prototype(1, 1);
        *fixture_destination019() = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(1)}};
    }
    if (old_kind == 2) {
        native(1, 1, 1);
        *fixture_destination019() = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(1)}};
    }
    if (old_kind == 3) {
        script(1, 1);
        *fixture_destination019() = (SqPrefixObject012){0x08000100u, {.reference = fixture_script019(1)}};
    }
    if (old_kind == 4) {
        native(1, 2, 1);
        *fixture_destination019() = *fixture_old_external019() =
            (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(1)}};
    }
    const SqPrototypeU32 types[] = {0x05000002,0x05000002,0x01000008,0x05000004,0x05000004,0x05000004,0x05000004,
        0x05000004,0x05000004,0x05000004,0x05000004,0x05000004,0x05000004,0x05000004,0x01000800,0x05000004};
    const SqPrototypeU32 bits[] = {0,4,0xffffffff,0,0x80000000,0x7fc00001,0x7fc00002,0x7f800001,
        0x7f800000,0xff800000,0x4f000000,0x4effffff,0xcf000000,1,0x90000000,0x7fc00001};
    SqPrefixObject012 *keys = fixture_keys019();
    for (SqPrototypeU32 index = 0; index < 16; index++) {
        keys[index].type = types[index];
        if (index == 14) keys[index].value.reference = (void *)(__UINTPTR_TYPE__)bits[index];
        else __builtin_memcpy(&keys[index].value, bits + index, 4);
    }
    keys[18] = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(2)}};
    keys[20] = empty;
}
