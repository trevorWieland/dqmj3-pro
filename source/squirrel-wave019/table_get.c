#include "table_internal.h"

static SqPrototypeU32 scalar_bits(const SqPrefixObject012 *object)
{
    SqPrototypeU32 bits;
    __builtin_memcpy(&bits, &object->value, sizeof(bits));
    return bits;
}

static _Bool scalar_key(SqPrototypeU32 type)
{
    return type == 0x01000008u || type == 0x05000002u || type == 0x05000004u;
}

_Bool sq_table_key_equal019(const SqPrefixObject012 *left, const SqPrefixObject012 *right)
{
    if (left->type != right->type) return 0;
    if (scalar_key(left->type)) return scalar_bits(left) == scalar_bits(right);
    return left->value.reference == right->value.reference;
}

SqPrototypeU32 sq_table_hash019(const SqPrefixObject012 *key)
{
    if (key->type == 0x01000008u || key->type == 0x05000002u) return scalar_bits(key);
    if (key->type == 0x05000004u) {
        float number;
        __builtin_memcpy(&number, &key->value, sizeof(number));
        if (number != number) return 0;
        if (number >= 2147483648.0f) return 0x7fffffffu;
        if (number < -2147483648.0f) return 0x80000000u;
        return (SqPrototypeU32)(SqPrototypeI32)number;
    }
    if (key->type == 0x08000010u) return ((const SqString015 *)key->value.reference)->hash;
    __UINTPTR_TYPE__ bits;
    __builtin_memcpy(&bits, &key->value, sizeof(bits));
    __UINTPTR_TYPE__ shifted = bits >> 3;
    if (bits >> (sizeof(bits) * 8 - 1)) shifted |= ~(__UINTPTR_TYPE__)0 << (sizeof(bits) * 8 - 3);
    return (SqPrototypeU32)shifted;
}

SqTableNode019 *sq_table_find_node019(SqTable019 *table, const SqPrefixObject012 *key)
{
    SqPrototypeU32 index = sq_table_hash019(key) & (SqPrototypeU32)(table->node_count - 1);
    SqTableNode019 *node = table->nodes + index;
    do {
        if (sq_table_key_equal019(&node->key, key)) return node;
        node = node->next;
    } while (node);
    return 0;
}

_Bool sq_table_get019(SqTable019 *table, const SqPrefixObject012 *key, SqPrefixObject012 *destination)
{
    if (key->type == 0x01000001u) return 0;
    SqTableNode019 *node = sq_table_find_node019(table, key);
    if (!node) return 0;
    SqPrefixObject012 incoming = node->value;
    if (incoming.type == 0x08010000u)
        incoming = ((const SqPrototypeWeak011 *)incoming.value.reference)->object;
    SqPrototypeU32 previous_type = destination->type;
    destination->type = incoming.type;
    SqPrefixValue012 previous_value = destination->value;
    destination->value = incoming.value;
    sq_prefix_retain(incoming.type, incoming.value);
    sq_prefix_release(previous_type, previous_value);
    return 1;
}

_Bool sq_table_set019(SqTable019 *table, const SqPrefixObject012 *key, const SqPrefixObject012 *value)
{
    SqTableNode019 *node = sq_table_find_node019(table, key);
    if (!node) return 0;
    sq_prefix_assign(&node->value, value);
    return 1;
}
