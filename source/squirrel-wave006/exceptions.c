#include "execute_views.h"

void sq_execute_push_trap(SqExecuteVM *vm, const SqInstruction *instruction)
{
    SqCallVM *base = &vm->base;
    if (base->traps.size >= base->traps.capacity) {
        SqU32 capacity = base->traps.size ? base->traps.size * 2 : 4;
        base->traps.values = sq_reallocate(base->traps.values, base->traps.capacity * sizeof(SqTrap), capacity * sizeof(SqTrap));
        base->traps.capacity = capacity;
    }
    SqTrap *record = (SqTrap *)base->traps.values + base->traps.size++;
    record->stack_base = base->frame.base;
    record->stack_top = base->frame.top;
    record->instruction = (SqInstruction *)base->current->instruction + instruction->argument1;
    record->target = instruction->argument0;
}

static void pop_frame(SqCallVM *base)
{
    base->call_count--;
    sq_execute_clear(&base->current->closure);
    base->current = base->call_count ? base->call_stack + base->call_count - 1 : 0;
}

_Bool sq_execute_unwind(SqExecuteVM *vm, SqU32 raise_error, SqI32 *traps)
{
    SqCallVM *base = &vm->base;
    SqObject error = base->last_error;
    if (error.type & 0x08000000u) error.value.reference->references++;
    SqI32 old_top = base->frame.top;
    if (base->current) {
        SqSharedRuntime *shared = (SqSharedRuntime *)base->shared;
        if (shared->notify_all_exceptions) sq_execute_error_handler(vm, &error);
        if (*traps) {
            SqI32 unwound = 0;
            while (base->current) {
                SqCallInfo *frame = base->current;
                if (frame->traps > 0) {
                    const SqTrap *record = (SqTrap *)base->traps.values + base->traps.size - 1;
                    frame->instruction = (void *)record->instruction;
                    base->frame.top = record->stack_top;
                    base->frame.base = record->stack_base;
                    fn_0019e864(base->frame.stack + record->stack_base + record->target, &error);
                    base->traps.size--;
                    (*traps)--;
                    frame->traps--;
                    sq_execute_clear_stack(vm, old_top);
                    sq_execute_release(error.type, error.value);
                    return 1;
                }
                if (frame->closure.type != 0x08000100u && unwound) break;
                if (frame->generator) sq_execute_unsupported(vm, -701);
                if (frame->varargs_size) fn_001a0cc0(vm, &frame->varargs_size);
                pop_frame(base);
                unwound++;
            }
        } else if (raise_error && !shared->notify_all_exceptions) sq_execute_error_handler(vm, &error);
        while (base->current) {
            SqCallInfo *frame = base->current;
            SqI32 exit_after = frame->root;
            if (frame->generator) sq_execute_unsupported(vm, -701);
            base->frame.base -= frame->previous_base;
            base->frame.top = base->frame.base + frame->previous_top;
            if (frame->varargs_size) fn_001a0cc0(vm, &frame->varargs_size);
            pop_frame(base);
            if ((base->current && base->current->closure.type != 0x08000100u) || exit_after) break;
        }
        sq_execute_clear_stack(vm, old_top);
    }
    fn_0019e864(&base->last_error, &error);
    sq_execute_release(error.type, error.value);
    return 0;
}
