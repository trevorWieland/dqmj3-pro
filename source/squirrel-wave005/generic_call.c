#include "dispatch_views.h"

static void release_temporary(SqObject *object)
{
    if ((object->type & 0x08000000u) && --object->value.reference->references == 0) {
        object->value.reference->vtable->release(object->value.reference);
    }
}

_Bool fn_0017ffac(SqCallVM *vm, const SqObject *callable, SqI32 arguments,
                  SqI32 base, SqObject *result, SqU32 raise_error)
{
    switch (callable->type) {
    case 0x08000100u:
        return sq_execute_service(vm, callable, vm->frame.top - arguments,
                                  arguments, base, result, raise_error, 0);
    case 0x08000200u: {
        _Bool suspend;
        return fn_00196f6c(vm, (SqNativeClosure *)callable->value.reference,
                           arguments, base, result, &suspend);
    }
    case 0x08004000u: {
        SqObject constructor = {0x01000001u, {.reference = 0}};
        SqObject discarded = {0x01000001u, {.reference = 0}};
        sq_class_service(vm, callable->value.reference, result, &constructor);
        _Bool returned = 1;
        if (constructor.type != 0x01000001u) {
            vm_object_assign(vm->frame.stack + base, result);
            returned = fn_0017ffac(vm, &constructor, arguments, base, &discarded, raise_error);
        }
        release_temporary(&discarded);
        release_temporary(&constructor);
        return returned;
    }
    default:
        return 0;
    }
}
