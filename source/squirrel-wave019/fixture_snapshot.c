#include "fixture_internal.h"

SqPrototypeU32 fixture_table_snapshot019(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqTableFixture019 *fixture = &table_fixture019;
    SqPrototypeU32 needed = 24 + 19 * 4 + 21 * 5 + fixture->string_allocations * 5 +
        fixture->topology_count * 8 + fixture->event_count * 8 + 8;
    if (needed > capacity || fixture->topology_count > 128 || fixture->string_allocations > 8) return 0;
    SqPrototypeU32 header[] = {fixture->fault, fixture->value_kind, fixture->old_kind, fixture->query_kind,
        fixture->selected_result, fixture->selected_type, fixture->selected_value,
        fixture->node_allocations, fixture->string_allocations, fixture->bucket_allocations,
        fixture->frees, fixture->event_count, fixture->topology_nodes, fixture->topology_used,
        fixture->topology_free, fixture->topology_count, (SqPrototypeU32)fixture_strings019(0)->used,
        (SqPrototypeU32)fixture_strings019(1)->used, fixture_identity019(fixture_state019(0)->chain),
        fixture_table019()->reference.prefix.vtable == fixture->base_vtable,
        fixture_destination019()->type, fixture_external019()->type, sizeof(void *), sizeof(SqTableNode019)};
    for (SqPrototypeU32 index = 0; index < 24; index++) output[index] = header[index];
    SqPrototypeU32 cursor = 24;
    for (SqPrototypeU32 index = 0; index < 19; index++) {
        output[cursor++] = fixture->insert_results[index];
        output[cursor++] = fixture->lookup_results[index];
        output[cursor++] = fixture->lookup_types[index];
        output[cursor++] = fixture->lookup_values[index];
    }
    for (SqPrototypeU32 index = 0; index < 21; index++) {
        SqPrefixObject012 object = fixture_keys019()[index];
        __UINTPTR_TYPE__ bits = 0;
        if (object.type == 0x05000002u || object.type == 0x05000004u || object.type == 0x01000008u)
            __builtin_memcpy(&bits, &object.value, 4);
        else __builtin_memcpy(&bits, &object.value, sizeof(bits));
        output[cursor++] = object.type;
        output[cursor++] = (SqPrototypeU32)bits;
        output[cursor++] = sizeof(bits) == 8 ? (SqPrototypeU32)((unsigned long long)bits >> 32) : 0;
        output[cursor++] = object.type & 0x08000000u ? fixture_identity019(object.value.reference) : 0;
        output[cursor++] = sq_table_hash019(&object);
    }
    for (SqPrototypeU32 index = 0; index < fixture->string_allocations; index++) {
        SqString015 *string = (void *)(fixture->memory + 0x4000 + index * 0x400);
        output[cursor++] = index + 10;
        output[cursor++] = (SqPrototypeU32)string->length;
        output[cursor++] = string->hash;
        output[cursor++] = string->reference.references;
        output[cursor++] = string->reference.vtable == fixture->base_vtable;
    }
    for (SqPrototypeU32 index = 0; index < fixture->topology_count; index++)
        for (SqPrototypeU32 field = 0; field < 8; field++) output[cursor++] = fixture->topology[index][field];
    for (SqPrototypeU32 index = 0; index < fixture->event_count; index++)
        for (SqPrototypeU32 field = 0; field < 8; field++) output[cursor++] = fixture->events[index][field];
    output[cursor++] = sq_prefix_count(fixture_prototype019(0));
    output[cursor++] = sq_prefix_count(fixture_prototype019(1));
    for (SqPrototypeU32 index = 0; index < 3; index++) output[cursor++] = sq_prefix_count(fixture_native019(index));
    output[cursor++] = sq_prefix_count(fixture_script019(0));
    output[cursor++] = sq_prefix_count(fixture_script019(1));
    output[cursor++] = sq_prefix_count(fixture_weak019());
    return cursor;
}
