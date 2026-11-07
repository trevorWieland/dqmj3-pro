#include "dispatch_views.h"

_Bool sq_execute_service(SqCallVM *vm, const SqObject *callable, SqI32 target,
                         SqI32 arguments, SqI32 base, SqObject *result,
                         SqU32 raise_error, SqI32 execution_type)
{
    SqDispatchFixture *fixture = vm->foreign;
    fixture->execute_visits++;
    fixture->target = target;
    fixture->arguments = arguments;
    fixture->base = base;
    fixture->raise_error = raise_error;
    fixture->execution_type = execution_type;
    fixture->callable_type = callable->type;
    fixture->callable_reference = callable->value.reference;
    fixture->native_depth = vm->native_calls;
    fixture->top = vm->frame.top;
    fixture->frame_base = vm->frame.base;
    fixture->result_is_outer = result == fixture->native.result;
    fn_0019e864(result, &fixture->requested_result);
    return fixture->execute_success != 0;
}

_Bool sq_class_service(SqCallVM *vm, SqRef *the_class, SqObject *instance, SqObject *constructor)
{
    SqDispatchFixture *fixture = vm->foreign;
    fixture->class_visits++;
    fixture->class_reference = the_class;
    fn_0019e864(instance, &fixture->instance);
    fn_0019e864(constructor, &fixture->constructor);
    return 1;
}
