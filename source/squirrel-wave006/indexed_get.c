#include "execute_views.h"

_Bool sq_legacy_indexed_get006(SqExecuteVM *vm, const SqObject *self, const SqObject *key,
                  SqObject *destination, SqU32 raw, SqU32 rooted)
{
    (void)raw;
    (void)rooted;
    if (self->type == 0x0a000020u) {
        SqTable *table = (SqTable *)self->value.reference;
        if (fn_001a1dc8(table, key, destination)) return 1;
        if (table->delegate) {
            SqObject object = {0x0a000020u, {.reference = &table->delegate->reference}};
            object.value.reference->references++;
            _Bool found = fn_00198578(vm, &object, key, destination, raw, 0);
            sq_execute_release(object.type, object.value);
            if (found) return 1;
        }
        if (!raw) sq_execute_unsupported(vm, -142);
        return 0;
    }
    if (self->type != 0x08000040u || !(key->type & 0x04000000u)) sq_execute_unsupported(vm, -140);
    SqI32 index;
    if (key->type == 0x05000004u) {
        float number = key->value.floating;
        if (!(number == number)) index = 0;
        else if (number >= 2147483648.0f) index = 2147483647;
        else if (number < -2147483648.0f) index = -2147483647 - 1;
        else index = (SqI32)number;
    } else index = key->value.integer;
    SqArray *array = (SqArray *)self->value.reference;
    if (index < 0 || (SqU32)index >= array->vector.size) return 0;
    SqObject value = array->vector.values[index];
    if (value.type == 0x08010000u) value = ((SqWeakObject *)value.value.reference)->object;
    vm_object_assign(destination, &value);
    return 1;
}

_Bool fn_001987e4(SqExecuteVM *vm, const SqObject *self, const SqObject *key, const SqObject *value, SqU32 rooted)
{
    (void)rooted;
    if (self->type == 0x0a000020u) {
        SqTable *table = (SqTable *)self->value.reference;
        if (fn_0019b414(table, key, value)) return 1;
        if (table->delegate) {
            SqObject object = {0x0a000020u, {.reference = &table->delegate->reference}};
            object.value.reference->references++;
            _Bool changed = fn_001987e4(vm, &object, key, value, 0);
            sq_execute_release(object.type, object.value);
            if (changed) return 1;
        }
        sq_execute_unsupported(vm, -143);
    }
    if (self->type != 0x08000040u || !(key->type & 0x04000000u)) sq_execute_unsupported(vm, -144);
    SqI32 index;
    if (key->type == 0x05000004u) {
        float number = key->value.floating;
        if (!(number == number)) index = 0;
        else if (number >= 2147483648.0f) index = 2147483647;
        else if (number < -2147483648.0f) index = -2147483647 - 1;
        else index = (SqI32)number;
    } else index = key->value.integer;
    SqArray *array = (SqArray *)self->value.reference;
    if (index < 0 || (SqU32)index >= array->vector.size) return 0;
    vm_object_assign(array->vector.values + index, value);
    return 1;
}
