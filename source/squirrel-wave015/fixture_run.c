#include "fixture_internal.h"

SqPrototypeU32 fixture_execute(void)
{
    SqPrototypeU32 mode = string_fixture015.root;
    SqString015 *string = fixture_string(string_fixture015.target_value);
    if (mode == 0) string = fn_0016b5f0(fixture_table(), fixture_input(), string_fixture015.request_length);
    if (mode == 1) string = fn_0019ba68(fixture_state(0), fixture_input(), string_fixture015.request_length);
    string_fixture015.returned = fixture_identity(string);
    if (mode == 2) fn_0024d9e0(fixture_table(), string);
    if (mode == 3) fn_0024d9cc(string);
    if (mode == 4 && fn_0068f564(string) != string) return 0;
    if (mode == 5 || mode == 6) {
        SqWeakReference014 *weak = fn_00233b7c(&string->reference, 0x08000010u);
        if (mode == 5) { fn_0024d9cc(string); fn_006a7780(weak); }
        else { fn_006a7780(weak); fn_0024d9cc(string); }
    }
    return 1;
}

SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    if (capacity < 4096) return 0;
    SqPrototypeU32 at = 0;
    output[at++] = string_fixture015.count; output[at++] = string_fixture015.overflow;
    output[at++] = string_fixture015.returned; output[at++] = string_fixture015.value_allocations;
    output[at++] = string_fixture015.bucket_allocations; output[at++] = string_fixture015.weak_allocations;
    output[at++] = string_fixture015.current_value; output[at++] = string_fixture015.input_length;
    output[at++] = (SqPrototypeU32)string_fixture015.request_length;
    output[at++] = (SqPrototypeU32)fixture_table()->slots; output[at++] = (SqPrototypeU32)fixture_table()->used;
    output[at++] = fixture_identity(fixture_table()->buckets);
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        SqStringTable015 *table;
        __builtin_memcpy(&table, fixture_state(i)->unknown_0000 + 20, sizeof(table));
        output[at++] = fixture_identity(table);
    }
    for (SqPrototypeU32 i = 0; i < 16; ++i) output[at++] = fixture_identity(fixture_table()->buckets[i]);
    for (SqPrototypeU32 i = 0; i < 8; ++i) {
        SqString015 *string = fixture_string(i);
        output[at++] = fixture_vtable_identity(string->reference.vtable); output[at++] = string->reference.references;
        output[at++] = fixture_identity(string->reference.weak); output[at++] = fixture_identity(string->shared);
        output[at++] = fixture_identity(string->next); output[at++] = (SqPrototypeU32)string->length; output[at++] = string->hash;
        for (SqPrototypeU32 j = 0; j < 128; ++j) output[at++] = (unsigned char)string->value[j];
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        SqWeakReference014 *weak = fixture_weak(i);
        output[at++] = fixture_vtable_identity(weak->prefix.vtable); output[at++] = weak->prefix.references;
        output[at++] = fixture_identity(weak->prefix.weak); output[at++] = weak->object.type;
        output[at++] = fixture_identity(weak->object.value.reference);
    }
    for (SqPrototypeU32 i = 0; i < 128; ++i) output[at++] = (unsigned char)fixture_input()[i];
    for (SqPrototypeU32 i = 0; i < string_fixture015.count; ++i)
        for (SqPrototypeU32 j = 0; j < 20; ++j) output[at++] = string_fixture015.observations[i].words[j];
    return at;
}
