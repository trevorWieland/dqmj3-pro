#include "execute_views.h"

void fn_001a0cc0(SqExecuteVM *vm, const unsigned short *varargs)
{
    for (SqI32 index = 0; index < varargs[0]; index++) {
        SqVector vector = sq_execute_varargs(vm);
        vector.size--;
        sq_execute_publish_varargs(vm, vector);
        SqObject *object = vector.values + vector.size;
        sq_execute_release(object->type, object->value);
    }
}

_Bool fn_001994c0(SqExecuteVM *vm, SqI32 argument0, SqI32 argument1, SqObject *result)
{
    SqCallVM *base = &vm->base;
    SqCallInfo *frame = base->current;
    if (base->debug_hook.type != 0x01000001u && base->debug_hook.value.reference != frame->closure.value.reference) {
        for (SqI32 index = 0; index < frame->calls; index++) sq_execute_debug(vm, 'r', 0);
    }
    SqI32 old_base = base->frame.base;
    SqI32 old_top = base->frame.top;
    SqI32 target = frame->target;
    SqI32 root = frame->root;
    base->frame.base -= frame->previous_base;
    base->frame.top = base->frame.base + frame->previous_top;
    if (frame->varargs_size) fn_001a0cc0(vm, &frame->varargs_size);
    base->call_count--;
    sq_execute_clear(&frame->closure);
    base->current = base->call_count ? base->call_stack + base->call_count - 1 : 0;
    SqObject null = {0x01000001u, {.reference = 0}};
    const SqObject *value = argument0 != 255 ? base->frame.stack + old_base + argument1 : &null;
    if (root) {
        vm_object_assign(result, value);
    } else if (target != -1) {
        vm_object_assign(base->frame.stack + base->frame.base + target, value);
    }
    sq_execute_clear_stack(vm, old_top);
    if (old_base < base->frame.base) sq_execute_unsupported(vm, -2);
    return root != 0;
}
