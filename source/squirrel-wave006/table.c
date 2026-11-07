#include "execute_views.h"

static SqU32 hash(const SqObject *key)
{
    if (key->type == 0x01000008u || key->type == 0x05000002u) return key->value.bits;
    if (key->type == 0x05000004u) {
        float value = key->value.floating;
        if (!(value == value)) return 0;
        if (value >= 2147483648.0f) return 0x7fffffffu;
        if (value < -2147483648.0f) return 0x80000000u;
        return (SqU32)(SqI32)value;
    }
    if (key->type == 0x08000010u) return ((SqStringView *)key->value.reference)->hash;
    return (SqU32)((__UINTPTR_TYPE__)key->value.reference >> 3);
}

static SqHashNode *find(SqTable *table, const SqObject *key, SqU32 position)
{
    SqHashNode *node = table->nodes + position;
    do {
        if (node->key.type == key->type && sq_execute_identical(&node->key, key)) return node;
        node = node->next;
    } while (node);
    return 0;
}

void fn_0019b390(SqTable *table, SqI32 count)
{
    SqHashNode *nodes = sq_allocate((SqU32)count * sizeof(SqHashNode));
    if (!nodes) sq_execute_table_stop(-300);
    for (SqI32 index = 0; index < count; index++) {
        nodes[index].value = (SqObject){0x01000001u, {.reference = 0}};
        nodes[index].key = (SqObject){0x01000001u, {.reference = 0}};
        nodes[index].next = 0;
    }
    table->node_count = count;
    table->nodes = nodes;
    table->first_free = nodes + count - 1;
}

void fn_0019b998(SqTable *table, SqState *shared, SqI32 requested)
{
    table->reference = (SqRef){&sq_table_vtable, 0, 0, 0, 0};
    SqI32 count = 4;
    while (requested > count) count *= 2;
    fn_0019b390(table, count);
    table->used = 0;
    table->shared = shared;
    table->delegate = 0;
    fn_0019e8c4(&shared->chain, &table->reference);
}

_Bool fn_001a1dc8(SqTable *table, const SqObject *key, SqObject *destination)
{
    if (key->type == 0x01000001u) return 0;
    SqHashNode *node = find(table, key, hash(key) & (SqU32)(table->node_count - 1));
    if (!node) return 0;
    const SqObject *value = &node->value;
    if (value->type == 0x08010000u) value = &((SqWeakObject *)value->value.reference)->object;
    fn_0019e864(destination, value);
    return 1;
}

_Bool fn_0019b414(SqTable *table, const SqObject *key, const SqObject *value)
{
    SqHashNode *node = find(table, key, hash(key) & (SqU32)(table->node_count - 1));
    if (!node) return 0;
    fn_0019e864(&node->value, value);
    return 1;
}

void fn_0019b650(SqTable *table, const SqObject *key)
{
    SqHashNode *node = find(table, key, hash(key) & (SqU32)(table->node_count - 1));
    if (!node) return;
    SqObject null = {0x01000001u, {.reference = 0}};
    fn_0019e864(&node->key, &null);
    fn_0019e864(&node->value, &node->key);
    table->used--;
    fn_0019b4ec(table, 0);
}

void fn_0019b4ec(SqTable *table, _Bool force)
{
    SqI32 old_count = table->node_count < 4 ? 4 : table->node_count;
    SqHashNode *old = table->nodes;
    if (table->used >= old_count - old_count / 4) fn_0019b390(table, old_count * 2);
    else if (table->used <= old_count / 4 && old_count > 4) fn_0019b390(table, old_count / 2);
    else if (force) fn_0019b390(table, old_count);
    else return;
    table->used = 0;
    for (SqI32 index = 0; index < old_count; index++)
        if (old[index].key.type != 0x01000001u) fn_0019b728(table, &old[index].key, &old[index].value);
    for (SqI32 index = 0; index < old_count; index++) {
        sq_execute_release(old[index].key.type, old[index].key.value);
        sq_execute_release(old[index].value.type, old[index].value.value);
    }
    sq_deallocate(old, (SqU32)old_count * sizeof(SqHashNode));
}

_Bool fn_0019b728(SqTable *table, const SqObject *key, const SqObject *value)
{
    if (key->type == 0x01000001u) sq_execute_table_stop(-301);
    SqU32 position = hash(key) & (SqU32)(table->node_count - 1);
    SqHashNode *present = find(table, key, position);
    if (present) { fn_0019e864(&present->value, value); return 0; }
    SqHashNode *main = table->nodes + position;
    if (main->key.type != 0x01000001u) {
        SqHashNode *free = table->first_free;
        SqHashNode *other = table->nodes + (hash(&main->key) & (SqU32)(table->node_count - 1));
        if (main > free && other != main) {
            while (other->next != main) { other = other->next; if (!other) sq_execute_table_stop(-302); }
            other->next = free;
            fn_0019e864(&free->key, &main->key);
            fn_0019e864(&free->value, &main->value);
            free->next = main->next;
            SqObject null = {0x01000001u, {.reference = 0}};
            fn_0019e864(&main->key, &null);
            fn_0019e864(&main->value, &null);
            main->next = 0;
        } else {
            free->next = main->next;
            main->next = free;
            main = free;
        }
    }
    fn_0019e864(&main->key, key);
    for (;;) {
        if (table->first_free->key.type == 0x01000001u && !table->first_free->next) {
            fn_0019e864(&main->value, value);
            table->used++;
            return 1;
        }
        if (table->first_free == table->nodes) break;
        table->first_free--;
    }
    fn_0019b4ec(table, 1);
    return fn_0019b728(table, key, value);
}
