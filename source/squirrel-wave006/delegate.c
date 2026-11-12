#include "execute_views.h"

_Bool sq_legacy_table_delegate006(SqTable *table, SqTable *delegate)
{
    for (SqTable *cursor = delegate; cursor; cursor = cursor->delegate)
        if (cursor == table) return 0;
    if (delegate) delegate->reference.references++;
    if (table->delegate) {
        SqValue old = {.reference = &table->delegate->reference};
        sq_execute_release(0x0a000020u, old);
        table->delegate = 0;
    }
    table->delegate = delegate;
    return 1;
}

_Bool sq_execute_delegate(SqExecuteVM *vm, SqObject *destination, const SqObject *self, const SqObject *delegate)
{
    if (self->type != 0x0a000020u) {
        sq_execute_error(&vm->base, "delegating a '%s'", fn_00191f20(self));
        return 0;
    }
    SqTable *table = (SqTable *)self->value.reference;
    if (delegate->type == 0x0a000020u) {
        if (!fn_0019e2e8(table, (SqTable *)delegate->value.reference)) {
            sq_execute_error(&vm->base, "delegate cycle detected");
            return 0;
        }
    } else if (delegate->type == 0x01000001u) fn_0019e2e8(table, 0);
    else {
        sq_execute_error(&vm->base, "using '%s' as delegate", fn_00191f20(delegate));
        return 0;
    }
    vm_object_assign(destination, self);
    return 1;
}
