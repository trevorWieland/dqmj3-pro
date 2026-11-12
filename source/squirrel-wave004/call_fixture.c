#include "call_fixture.h"

SqI32 sq_wave004_native(SqCallVM *vm)
{
    SqCallFixture *fixture = vm->foreign;
    fixture->visits++;
    fixture->top = vm->frame.top;
    fixture->base = vm->frame.base;
    fixture->calls = vm->call_count;
    fixture->native = vm->native_calls;
    fixture->closure_references = vm->current->closure.value.reference->references;
    fixture->previous_base = vm->current->previous_base;
    fixture->previous_top = vm->current->previous_top;
    fixture->frame_calls = vm->current->calls;
    fixture->receiver = vm->frame.stack[vm->frame.base];
    fixture->outer = vm->frame.stack[vm->frame.top - 1];
    if (fixture->return_code > 0 || fixture->return_code == -666) {
        vm_stack_push(&vm->frame, &fixture->returned);
    }
    return fixture->return_code;
}

void sq_wave004_release(SqRef *node)
{
    SqCallFixture *fixture = node->weak;
    SqCallVM *vm = fixture->vm;
    SqReleaseEvent *event = fixture->releases + fixture->release_count++;
    event->node = node;
    event->top = vm->frame.top;
    event->base = vm->frame.base;
    event->calls = vm->call_count;
    event->native = vm->native_calls;
    event->result_type = fixture->result->type;
    event->result_references = event->result_type & 0x08000000u ? fixture->result->value.reference->references : 0;
}
