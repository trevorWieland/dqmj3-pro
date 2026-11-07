#include "fixture_internal.h"

extern SqTable019 *fixture_original_initialize019(SqTable019 *, SqPrefixState012 *, SqPrototypeI32);
extern SqPrototypeU32 fixture_original_new_slot019(SqTable019 *, const SqPrefixObject012 *, const SqPrefixObject012 *);
extern SqPrototypeU32 fixture_original_set019(SqTable019 *, const SqPrefixObject012 *, const SqPrefixObject012 *);
extern SqPrototypeU32 fixture_original_get019(SqTable019 *, const SqPrefixObject012 *, SqPrefixObject012 *);
extern void *fixture_original_assign019(void *, const void *);
extern void fixture_original_release019(SqTable019 *);
extern SqString015 *fixture_original_string_create019(SqPrefixState012 *, const SqStringByte015 *, SqPrototypeI32);
extern void fixture_original_string_release019(SqString015 *);
extern SqWeakReference014 *fixture_original_weak_create019(SqPrototypePrefix011 *, SqPrototypeU32);

static void assign(SqPrototypeU32 source, SqPrefixObject012 *destination, const SqPrefixObject012 *value)
{
    if (source) sq_prefix_assign(destination, value);
    else fixture_original_assign019(destination, value);
}

static SqString015 *string(SqPrototypeU32 source, SqPrefixState012 *state, const SqStringByte015 *input)
{
    return source ? fn_0019ba68(state, input, -1) : fixture_original_string_create019(state, input, -1);
}

static void topology(void)
{
    SqTable019 *table = fixture_table019();
    table_fixture019.topology_count = (SqPrototypeU32)table->node_count;
    table_fixture019.topology_nodes = (SqPrototypeU32)table->node_count;
    table_fixture019.topology_used = (SqPrototypeU32)table->used;
    table_fixture019.topology_free = (SqPrototypeU32)(table->first_free - table->nodes);
    for (SqPrototypeI32 index = 0; index < table->node_count; index++) {
        SqTableNode019 *node = table->nodes + index;
        SqPrototypeU32 *row = table_fixture019.topology[index];
        __UINTPTR_TYPE__ bits = 0;
        if (node->key.type == 0x05000002u || node->key.type == 0x05000004u || node->key.type == 0x01000008u)
            __builtin_memcpy(&bits, &node->key.value, 4);
        else __builtin_memcpy(&bits, &node->key.value, sizeof(bits));
        row[0] = (SqPrototypeU32)index;
        row[1] = node->key.type;
        row[2] = (SqPrototypeU32)bits;
        row[3] = sizeof(bits) == 8 ? (SqPrototypeU32)((unsigned long long)bits >> 32) : 0;
        row[4] = node->next ? (SqPrototypeU32)(node->next - table->nodes) + 1 : 0;
        row[5] = node->value.type;
        row[6] = fixture_payload019(node->value);
        row[7] = node->key.type & 0x08000000u ? fixture_identity019(node->key.value.reference) : 0;
    }
}

void fixture_table_run019(SqPrototypeU32 source)
{
    SqPrefixObject012 *keys = fixture_keys019();
    const SqStringByte015 first[] = {'a','l','p','h','a',(SqStringByte015)0x80,0};
    const SqStringByte015 second[] = {'b','e','t','a',(SqStringByte015)0xff,0};
    SqString015 *a = string(source, fixture_state019(0), first);
    SqString015 *b = string(source, fixture_state019(0), second);
    SqString015 *missing = string(source, fixture_state019(1), first);
    keys[16] = (SqPrefixObject012){0x08000010u, {.reference = a}};
    keys[17] = (SqPrefixObject012){0x08000010u, {.reference = b}};
    keys[19] = (SqPrefixObject012){0x08000010u, {.reference = missing}};
    SqTable019 *table = fixture_table019();
    if (source) sq_table_initialize019(table, fixture_state019(0), 4);
    else fixture_original_initialize019(table, fixture_state019(0), 4);
    for (SqPrototypeU32 index = 0; index < 19; index++) {
        SqPrefixObject012 value = {0x05000002u, {.integer = (SqPrototypeI32)(100 + index)}};
        table_fixture019.insert_results[index] = source ? sq_table_new_slot019(table, keys + index, &value) :
            fixture_original_new_slot019(table, keys + index, &value);
    }
    SqPrefixObject012 value = {0x05000002u, {.integer = 777}};
    switch (table_fixture019.value_kind) {
    case 1: value = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(0)}}; break;
    case 2: value = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(0)}}; break;
    case 3: {
        SqNativeClosure013 *native = fixture_native019(0);
        SqWeakReference014 *weak = source ? fn_00233b7c(&native->reference.prefix, 0x08000200u) :
            fixture_original_weak_create019(&native->reference.prefix, 0x08000200u);
        value = (SqPrefixObject012){0x08010000u, {.reference = weak}};
        break;
    }
    case 4: value = (SqPrefixObject012){0x08000100u, {.reference = fixture_script019(0)}}; break;
    case 5: value = (SqPrefixObject012){0x08000010u, {.reference = a}}; break;
    }
    SqPrototypeU32 target = table_fixture019.query_kind == 0 ? 5 : 16;
    if (source) sq_table_set019(table, keys + target, &value);
    else fixture_original_set019(table, keys + target, &value);
    topology();
    SqPrototypeU32 selected = table_fixture019.query_kind == 0 ? 5 : table_fixture019.query_kind == 1 ? 16 :
        table_fixture019.query_kind == 2 ? 19 : 20;
    table_fixture019.selected_result = source ? sq_table_get019(table, keys + selected, fixture_destination019()) :
        fixture_original_get019(table, keys + selected, fixture_destination019());
    table_fixture019.selected_type = fixture_destination019()->type;
    table_fixture019.selected_value = fixture_payload019(*fixture_destination019());
    SqPrefixObject012 empty = {0x01000001u, {.reference = 0}};
    for (SqPrototypeU32 index = 0; index < 19; index++) {
        table_fixture019.lookup_results[index] = source ? sq_table_get019(table, keys + index, fixture_scratch019()) :
            fixture_original_get019(table, keys + index, fixture_scratch019());
        table_fixture019.lookup_types[index] = fixture_scratch019()->type;
        table_fixture019.lookup_values[index] = fixture_payload019(*fixture_scratch019());
        assign(source, fixture_scratch019(), &empty);
    }
    assign(source, fixture_destination019(), &empty);
    if (source) sq_table_release019(table);
    else fixture_original_release019(table);
    assign(source, fixture_external019(), &empty);
    assign(source, fixture_old_external019(), &empty);
    if (source) fn_0024d9cc(missing);
    else fixture_original_string_release019(missing);
}
