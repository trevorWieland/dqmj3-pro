#include "execute_views.h"

SqVector sq_execute_varargs(SqExecuteVM *vm)
{
    SqVector vector;
    if (sizeof(void *) == 4) {
        __builtin_memcpy(&vector, (unsigned char *)&vm->base.frame.stack + sizeof(SqVector), sizeof(vector));
    } else {
        vector = vm->portable_varargs;
    }
    return vector;
}

void sq_execute_publish_varargs(SqExecuteVM *vm, SqVector vector)
{
    if (sizeof(void *) == 4) {
        __builtin_memcpy((unsigned char *)&vm->base.frame.stack + sizeof(SqVector), &vector, sizeof(vector));
    } else {
        vm->portable_varargs = vector;
    }
}

void sq_execute_release(SqU32 type, SqValue value)
{
    if ((type & 0x08000000u) && --value.reference->references == 0) {
        value.reference->vtable->release(value.reference);
    }
}

void sq_execute_clear(SqObject *object)
{
    SqU32 type = object->type;
    SqValue value = object->value;
    object->type = 0x01000001u;
    object->value.reference = 0;
    sq_execute_release(type, value);
}

void sq_execute_scalar(SqObject *object, SqU32 type, SqU32 bits)
{
    sq_execute_release(object->type, object->value);
    object->type = type;
    object->value.bits = bits;
}

_Bool sq_execute_false(const SqObject *object)
{
    if (object->type == 0x05000004u && object->value.floating == 0.0f) return 1;
    if (object->type & 0x08000000u) return object->value.reference == 0;
    return object->value.bits == 0;
}

void sq_execute_clear_stack(SqExecuteVM *vm, SqI32 old_top)
{
    while (old_top >= vm->base.frame.top) {
        sq_execute_clear(vm->base.frame.stack + old_top--);
    }
}
