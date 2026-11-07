#include "fixture_internal.h"

extern SqPrototypeU32 fixture_original_get019(SqTable019 *, const SqPrefixObject012 *, SqPrefixObject012 *);

void fixture_table_float_prepare019(SqPrototypeU32 bits)
{
    SqTable019 *table = fixture_table019();
    SqTableNode019 *node = (void *)(table_fixture019.memory + 0x10000);
    table->nodes = node;
    table->node_count = 1;
    node->key.type = 0x05000004u;
    __builtin_memcpy(&node->key.value, &bits, 4);
    node->value = (SqPrefixObject012){0x05000002u, {.integer = 41}};
    *fixture_keys019() = node->key;
}

SqPrototypeU32 fixture_table_float_run019(SqPrototypeU32 source)
{
    return source ? sq_table_get019(fixture_table019(), fixture_keys019(), fixture_destination019()) :
        fixture_original_get019(fixture_table019(), fixture_keys019(), fixture_destination019());
}
