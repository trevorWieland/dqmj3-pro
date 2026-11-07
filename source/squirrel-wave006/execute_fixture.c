#include "execute_fixture.h"

void sq_execute_unsupported(SqExecuteVM *vm, SqI32 reason)
{
    SqExecuteFixture *fixture = vm->base.foreign;
    fixture->unsupported_count++;
    fixture->unsupported_reason = reason;
    sq_execute_stop(reason);
}

void sq_execute_debug(SqExecuteVM *vm, SqI32 event, SqI32 line)
{
    SqExecuteFixture *fixture = vm->base.foreign;
    SqDebugEvent *record = fixture->debug + fixture->debug_count++;
    record->event = event;
    record->line = line;
    record->top = vm->base.frame.top;
    record->base = vm->base.frame.base;
    record->native_calls = vm->base.native_calls;
    record->call_count = vm->base.call_count;
}

void sq_wave006_release(SqRef *node)
{
    sq_wave004_release(node);
    SqExecuteFixture *fixture = node->weak;
    SqExecuteVM *vm = (SqExecuteVM *)fixture->native.vm;
    fixture->release_varargs_sizes[fixture->native.release_count - 1] = sq_execute_varargs(vm).size;
}

void sq_execute_error_handler(SqExecuteVM *vm, const SqObject *error)
{
    SqExecuteFixture *fixture = vm->base.foreign;
    fixture->error_handler_count++;
    fixture->error_handler_type = error->type;
    fixture->error_handler_value = error->value.bits;
}
