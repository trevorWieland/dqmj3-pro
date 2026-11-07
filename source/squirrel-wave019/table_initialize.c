#include "table.h"

extern const SqPrototypeVTable011 sq_table_vtable019;

void sq_table_allocate_nodes019(SqTable019 *table, SqPrototypeI32 count)
{
    SqTableNode019 *nodes = sq_table_allocate019((SqPrototypeU32)count * sizeof(*nodes));
    for (SqPrototypeI32 index = 0; index < count; index++) {
        nodes[index].value.type = 0x01000001u;
        nodes[index].value.value.reference = 0;
        nodes[index].key.type = 0x01000001u;
        nodes[index].key.value.reference = 0;
        nodes[index].next = 0;
    }
    table->node_count = count;
    table->nodes = nodes;
    table->first_free = nodes + count - 1;
}

SqTable019 *sq_table_initialize019(SqTable019 *table, SqPrefixState012 *shared, SqPrototypeI32 requested)
{
    table->reference.prefix.references = 0;
    table->reference.prefix.weak = 0;
    table->reference.prefix.vtable = &sq_table_vtable019;
    SqPrototypeI32 count = 4;
    while (requested > count) count *= 2;
    sq_table_allocate_nodes019(table, count);
    table->used = 0;
    table->shared = shared;
    table->delegate = 0;
    table->reference.next = 0;
    table->reference.previous = 0;
    SqPrefixCollectable012 *head = shared->chain;
    table->reference.next = head;
    if (head) head->previous = &table->reference;
    shared->chain = &table->reference;
    return table;
}
