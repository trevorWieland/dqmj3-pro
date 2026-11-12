#include "execute_views.h"

_Bool sq_execute_delete(SqExecuteVM *vm, SqObject *destination, const SqObject *self, const SqObject *key)
{
    if (self->type == 0x0a008000u || self->type == 0x0a000080u) sq_execute_unsupported(vm, -156);
    if (self->type != 0x0a000020u) {
        sq_execute_error(&vm->base, "attempt to delete a slot from a %s", fn_00191f20(self));
        return 0;
    }
    SqTable *table = (SqTable *)self->value.reference;
    if (table->delegate) sq_execute_unsupported(vm, -157);
    SqObject temporary = {0x01000001u, {.reference = 0}};
    if (!fn_001a1dc8(table, key, &temporary)) sq_execute_unsupported(vm, -158);
    fn_0019b650(table, key);
    vm_object_assign(destination, &temporary);
    sq_execute_release(temporary.type, temporary.value);
    return 1;
}
