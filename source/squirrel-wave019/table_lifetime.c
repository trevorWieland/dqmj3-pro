#include "table_internal.h"

_Bool sq_table_delegate019(SqTable019 *table, SqTable019 *delegate)
{
    if (delegate == table) return 0;
    for (SqTable019 *current = delegate; current; current = current->delegate)
        if (current->delegate == table) return 0;
    if (delegate) {
        SqPrefixValue012 value = {.reference = delegate};
        sq_prefix_retain(0x0a000020u, value);
    }
    SqTable019 *previous = table->delegate;
    if (previous) {
        SqPrefixValue012 value = {.reference = previous};
        sq_prefix_release(0x0a000020u, value);
        table->delegate = 0;
    }
    table->delegate = delegate;
    return 1;
}

void sq_table_release019(SqTable019 *table)
{
    table->reference.prefix.vtable->destroy(table);
    sq_table_deallocate019(table, sizeof(*table));
}

SqTable019 *sq_table_destroy019(SqTable019 *table)
{
    table->reference.prefix.vtable = &sq_table_vtable019;
    sq_table_delegate019(table, 0);
    if (!(table->reference.prefix.references & 0x80000000u)) {
        SqPrefixCollectable012 *object = &table->reference;
        if (object->previous) object->previous->next = object->next;
        else table->shared->chain = object->next;
        if (object->next) object->next->previous = object->previous;
        object->next = object->previous = 0;
    }
    SqPrototypeI32 index = 0;
    while (index < table->node_count) {
        SqTableNode019 *node = table->nodes + index;
        sq_prefix_release(node->key.type, node->key.value);
        sq_prefix_release(node->value.type, node->value.value);
        index++;
    }
    sq_table_deallocate019(table->nodes, (SqPrototypeU32)table->node_count * sizeof(*table->nodes));
    table->reference.prefix.vtable = &sq_prototype_base_vtable011;
    if (table->reference.prefix.weak) {
        SqPrototypeWeak011 *weak = table->reference.prefix.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return table;
}
