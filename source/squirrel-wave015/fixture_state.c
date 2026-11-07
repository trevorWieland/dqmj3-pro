#include "fixture_internal.h"

StringFixture015 string_fixture015;
SqPrefixState012 *fixture_state(SqPrototypeU32 index) { return (SqPrefixState012 *)(string_fixture015.memory + 0x1000 + index * 0x100); }
SqStringTable015 *fixture_table(void) { return (SqStringTable015 *)(string_fixture015.memory + 0x2000); }
SqString015 **fixture_buckets(SqPrototypeU32 index) { return (SqString015 **)(string_fixture015.memory + 0x3000 + index * 0x400); }
SqString015 *fixture_string(SqPrototypeU32 index) { return (SqString015 *)(string_fixture015.memory + 0x5000 + index * 0x400); }
SqWeakReference014 *fixture_weak(SqPrototypeU32 index) { return (SqWeakReference014 *)(string_fixture015.memory + 0xc000 + index * 0x100); }
SqStringByte015 *fixture_input(void) { return (SqStringByte015 *)(string_fixture015.memory + 0xa000); }

SqPrototypeU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        if (pointer == fixture_state(i)) return 1 + i;
        if (pointer == fixture_weak(i)) return 31 + i;
    }
    if (pointer == fixture_table()) return 3;
    for (SqPrototypeU32 i = 0; i < 4; ++i) if (pointer == fixture_buckets(i)) return 41 + i;
    for (SqPrototypeU32 i = 0; i < 8; ++i) if (pointer == fixture_string(i)) return 11 + i;
    return 999;
}

SqPrototypeU32 fixture_vtable_identity(const SqPrototypeVTable011 *table)
{
    if (table == string_fixture015.string_vtable) return 1;
    if (table == string_fixture015.weak_vtable) return 2;
    if (table == string_fixture015.base_vtable) return 3;
    if (table == &string_alternate_vtable015) return 4;
    return 999;
}

SqPrototypeU32 fixture_first_bytes(const SqStringByte015 *bytes)
{
    SqPrototypeU32 value = 0;
    for (SqPrototypeU32 i = 0; i < 4; ++i) value |= (SqPrototypeU32)(unsigned char)bytes[i] << (i * 8);
    return value;
}

SqPrototypeU32 fixture_hash(const SqStringByte015 *input, SqPrototypeU32 length)
{
    SqPrototypeU32 result = length;
    SqPrototypeU32 step = (length >> 5) | 1;
    SqPrototypeU32 count = 0;
    while ((count + 1) * step <= length) ++count;
    for (SqPrototypeU32 i = 0; i < count; ++i) {
        SqPrototypeU32 byte = (unsigned char)input[i];
        SqPrototypeU32 code = byte < 128 ? byte : byte + 0xff00;
        result ^= result * 32 + result / 4 + code;
    }
    return result;
}

static void prepare_value(SqPrototypeU32 index, const SqStringByte015 *input, SqPrototypeU32 length)
{
    SqString015 *string = fixture_string(index);
    string->length = (SqPrototypeI32)length;
    for (SqPrototypeU32 i = 0; i < length; ++i) string->value[i] = input[i];
    string->value[length] = 0;
    string->hash = fixture_hash(input, length);
    SqPrototypeU32 bucket = string->hash & ((SqPrototypeU32)fixture_table()->slots - 1);
    string->next = fixture_table()->buckets[bucket];
    fixture_table()->buckets[bucket] = string;
    fixture_table()->used += 1;
    string_fixture015.next_value = index + 1;
}

SqPrototypeU32 fixture_bind(void *memory, SqPrototypeU32 bytes, const SqPrototypeVTable011 *string_table,
    const SqPrototypeVTable011 *weak_table, const SqPrototypeVTable011 *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    string_fixture015.memory = memory; string_fixture015.bytes = bytes; string_fixture015.string_vtable = string_table;
    string_fixture015.weak_vtable = weak_table; string_fixture015.base_vtable = base_table;
    return 1;
}

SqPrototypeU32 fixture_prepare(SqPrototypeU32 variant, SqPrototypeU32 root)
{
    string_fixture015.variant = variant; string_fixture015.root = root;
    string_fixture015.count = string_fixture015.overflow = string_fixture015.returned = 0;
    string_fixture015.value_allocations = string_fixture015.bucket_allocations = string_fixture015.weak_allocations = 0;
    string_fixture015.next_value = string_fixture015.current_value = string_fixture015.target_value = string_fixture015.disposed_values = 0;
    for (SqPrototypeU32 i = 0; i < string_fixture015.bytes; ++i) string_fixture015.memory[i] = 0;
    *fixture_table() = (SqStringTable015){fixture_buckets(0), 4, 0};
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        SqStringTable015 *table = fixture_table();
        __builtin_memcpy(fixture_state(i)->unknown_0000 + 20, &table, sizeof(table));
        fixture_weak(i)->prefix = (SqPrototypePrefix011){string_fixture015.weak_vtable, 0, 0};
        fixture_weak(i)->object = (SqPrototypeObject011){0x08000010u, {.reference = fixture_string(0)}};
    }
    for (SqPrototypeU32 i = 0; i < 8; ++i) {
        SqString015 *string = fixture_string(i);
        string->reference = (SqPrototypePrefix011){string_fixture015.string_vtable, 0, 0};
        string->shared = fixture_state(1);
    }
    SqStringByte015 *input = fixture_input();
    input[0] = 'a'; input[1] = 'b'; string_fixture015.input_length = 2; string_fixture015.request_length = 2;
    if (variant == 0) string_fixture015.input_length = (SqPrototypeU32)(string_fixture015.request_length = 0);
    if (variant == 2) { input[0] = -128; input[1] = -1; input[2] = 'A'; string_fixture015.input_length = 3; string_fixture015.request_length = 3; }
    if (variant == 3) { input[0] = 'b'; input[1] = 0; input[2] = 't'; string_fixture015.input_length = 1; string_fixture015.request_length = -1; }
    if (variant == 4) { input[0] = 'a'; input[1] = 0; input[2] = 'b'; input[3] = -1; input[4] = 'c'; string_fixture015.input_length = 5; string_fixture015.request_length = 5; }
    if (variant == 5) {
        for (SqPrototypeU32 i = 0; i < 96; ++i) input[i] = (SqStringByte015)(i * 13 + 3);
        string_fixture015.input_length = 96; string_fixture015.request_length = 96;
    }
    if (variant == 6) prepare_value(0, input, string_fixture015.input_length);
    if (variant == 7) {
        SqPrototypeU32 desired = fixture_hash(input, 2) & 3;
        SqPrototypeU32 index = 0;
        for (SqPrototypeU32 byte = 0; byte < 256 && index < 2; ++byte) {
            SqStringByte015 candidate[] = {'a', (SqStringByte015)byte};
            if (byte != 'b' && (fixture_hash(candidate, 2) & 3) == desired) prepare_value(index++, candidate, 2);
        }
    }
    if (variant == 8 || variant == 9 || variant == 11) {
        for (SqPrototypeU32 i = 0; i < 4; ++i) {
            SqStringByte015 value = (SqStringByte015)(variant == 9 ? 0x40 + i * 4 : 'a' + i);
            prepare_value(i, &value, 1);
        }
        input[0] = 'n'; input[1] = 'e'; input[2] = 'w'; string_fixture015.input_length = 3; string_fixture015.request_length = 3;
    }
    if (variant == 13 || variant == 14) {
        for (SqPrototypeU32 i = 0; i < 3; ++i) { SqStringByte015 value = (SqStringByte015)(0x40 + i * 4); prepare_value(i, &value, 1); }
        string_fixture015.target_value = variant == 13 ? 1 : 0;
    }
    if (root >= 2 && !string_fixture015.next_value) prepare_value(0, input, string_fixture015.input_length);
    string_fixture015.current_value = root < 2 ? string_fixture015.next_value : string_fixture015.target_value;
    SqString015 *target = fixture_string(string_fixture015.target_value);
    if (root >= 2) target->shared = fixture_state(0);
    if (variant == 12 && root >= 2) target->reference.vtable = &string_alternate_vtable015;
    if (variant == 15 && root >= 2) target->reference.weak = fixture_weak(0);
    for (SqPrototypeU32 i = 0; i < 2; ++i) fixture_weak(i)->object.value.reference = target;
    return variant;
}

const SqPrototypeVTable011 *fixture_string_vtable(void) { return &sq_string_vtable015; }
const SqPrototypeVTable011 *fixture_weak_vtable(void) { return &sq_weak_vtable014; }
const SqPrototypeVTable011 *fixture_base_vtable(void) { return &sq_prototype_base_vtable011; }
SqPrototypeU32 fixture_layout(SqPrototypeU32 index)
{
    SqPrototypeU32 values[] = {sizeof(SqPrototypePrefix011), __builtin_offsetof(SqString015, value),
        sizeof(SqStringTable015), sq_string_allocation_bytes015(0), sizeof(SqWeakReference014)};
    return index < 5 ? values[index] : 0;
}
