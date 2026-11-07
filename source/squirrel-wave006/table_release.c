#include "execute_views.h"

void sq_legacy_table_release006(SqRef *reference)
{
    SqTable *table = (SqTable *)reference;
    reference->vtable = &sq_table_vtable;
    fn_0019e2e8(table, 0);
    if (!(reference->references & 0x80000000u)) {
        if (reference->previous) reference->previous->next = reference->next;
        else table->shared->chain = reference->next;
        if (reference->next) reference->next->previous = reference->previous;
        reference->next = 0;
        reference->previous = 0;
    }
    for (SqI32 index = 0; index < table->node_count; index++) {
        sq_execute_release(table->nodes[index].key.type, table->nodes[index].key.value);
        sq_execute_release(table->nodes[index].value.type, table->nodes[index].value.value);
    }
    sq_deallocate(table->nodes, (SqU32)table->node_count * sizeof(SqHashNode));
    reference->vtable = &sq_weak_prefix_vtable;
    if (reference->weak) {
        SqWeakObject *weak = reference->weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    sq_deallocate(table, sizeof(SqTable));
}
