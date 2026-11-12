#include "execute_views.h"

SqI32 sq_execute_foreach(SqExecuteVM *vm, const SqObject *self, SqObject *key, SqObject *value,
                         SqObject *iterator, SqI32 exit_position)
{
    if (self->type == 0x08000400u) {
        SqGenerator *generator = (SqGenerator *)self->value.reference;
        if (generator->state == 2) return exit_position;
        if (iterator->type != 0x01000001u && iterator->type != 0x05000002u) sq_execute_unsupported(vm, -154);
        SqU32 next = iterator->type == 0x05000002u ? iterator->value.bits + 1 : 0;
        sq_execute_scalar(key, 0x05000002u, next);
        sq_execute_scalar(iterator, 0x05000002u, next);
        fn_0019e378(generator, vm, (SqI32)(value - vm->base.frame.stack) - vm->base.frame.base);
        return 0;
    }
    SqU32 position;
    if (iterator->type == 0x01000001u) position = 0;
    else if (iterator->type == 0x05000002u) position = iterator->value.bits;
    else sq_execute_unsupported(vm, -151);
    if (self->type == 0x08000040u) {
        SqArray *array = (SqArray *)self->value.reference;
        if (position >= array->vector.size) return exit_position;
        sq_execute_scalar(key, 0x05000002u, position);
        SqObject element = array->vector.values[position];
        if (element.type == 0x08010000u) element = ((SqWeakObject *)element.value.reference)->object;
        vm_object_assign(value, &element);
    } else if (self->type == 0x0a000020u) {
        SqTable *table = (SqTable *)self->value.reference;
        if (position & 0x80000000u) sq_execute_unsupported(vm, -152);
        while (position < (SqU32)table->node_count && table->nodes[position].key.type == 0x01000001u) position++;
        if (position >= (SqU32)table->node_count) return exit_position;
        vm_object_assign(key, &table->nodes[position].key);
        SqObject element = table->nodes[position].value;
        if (element.type == 0x08010000u) element = ((SqWeakObject *)element.value.reference)->object;
        vm_object_assign(value, &element);
    } else sq_execute_unsupported(vm, -153);
    sq_execute_scalar(iterator, 0x05000002u, position + 1);
    return 1;
}
