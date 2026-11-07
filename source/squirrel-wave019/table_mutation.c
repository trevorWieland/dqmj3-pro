#include "table_internal.h"

_Bool sq_table_new_slot019(SqTable019 *table, const SqPrefixObject012 *key, const SqPrefixObject012 *value)
{
    for (;;) {
        if (key->type == 0x01000001u) sq_table_invalid019();
        SqPrototypeU32 position = sq_table_hash019(key) & (SqPrototypeU32)(table->node_count - 1);
        SqTableNode019 *main = table->nodes + position;
        SqTableNode019 *present = main;
        while (present && !sq_table_key_equal019(&present->key, key)) present = present->next;
        if (present) {
            sq_prefix_assign(&present->value, value);
            return 0;
        }
        if (main->key.type != 0x01000001u) {
            SqTableNode019 *free = table->first_free;
            SqPrototypeU32 bucket = sq_table_hash019(&main->key) & (SqPrototypeU32)(table->node_count - 1);
            SqTableNode019 *other = table->nodes + bucket;
            if (main > free && other != main) {
                while (other->next != main) {
                    other = other->next;
                    if (!other) sq_table_invalid019();
                }
                other->next = free;
                sq_prefix_assign(&free->key, &main->key);
                sq_prefix_assign(&free->value, &main->value);
                free->next = main->next;
                SqPrefixObject012 empty = {0x01000001u, {.reference = 0}};
                sq_prefix_assign(&main->key, &empty);
                sq_prefix_assign(&main->value, &empty);
                main->next = 0;
            } else {
                free->next = main->next;
                main->next = free;
                main = free;
            }
        }
        sq_prefix_assign(&main->key, key);
        SqTableNode019 *free = table->first_free;
        _Bool restart = 0;
        while (free->key.type != 0x01000001u || free->next) {
            if (free != table->nodes) {
                free--;
                table->first_free = free;
            } else {
                sq_table_rehash019(table, 1);
                restart = 1;
                break;
            }
        }
        if (restart) continue;
        SqPrototypeU32 previous_type = main->value.type;
        SqPrefixValue012 previous_value = main->value.value;
        main->value.value = value->value;
        main->value.type = value->type;
        sq_prefix_retain(main->value.type, main->value.value);
        sq_prefix_release(previous_type, previous_value);
        table->used++;
        return 1;
    }
}

void sq_table_rehash019(SqTable019 *table, SqPrototypeU32 force)
{
    SqPrototypeI32 count = table->node_count < 4 ? 4 : table->node_count;
    SqTableNode019 *old = table->nodes;
    if (table->used >= count - count / 4) sq_table_allocate_nodes019(table, count * 2);
    else if (table->used <= count / 4 && count > 4) sq_table_allocate_nodes019(table, count / 2);
    else if (force) sq_table_allocate_nodes019(table, count);
    else return;
    table->used = 0;
    for (SqPrototypeI32 index = 0; index < count; index++) {
        SqTableNode019 *node = old + index;
        if (node->key.type != 0x01000001u) sq_table_new_slot019(table, &node->key, &node->value);
    }
    for (SqPrototypeI32 index = 0; index < count; index++) {
        SqTableNode019 *node = old + index;
        sq_prefix_release(node->key.type, node->key.value);
        sq_prefix_release(node->value.type, node->value.value);
    }
    sq_table_deallocate019(old, (SqPrototypeU32)count * sizeof(*old));
}
