#include "lookup_error.h"

SqString015 *sq_lookup_stringify020(void *vm, const SqPrefixObject012 *object)
{
    SqPrototypeU32 type = object->type;
    if (type == 0x08000010u) return object->value.reference;
    if (type == 0x05000002u || type == 0x05000004u) {
        char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), 51);
        if (type == 0x05000002u) sq_lookup_format_integer020(buffer, object->value.integer);
        else sq_lookup_format_float020(buffer, (double)object->value.floating);
        buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), -1);
        return fn_0019ba68(sq_native_creation_shared016(vm), (const SqStringByte015 *)buffer, -1);
    }
    SqPrefixObject012 temporary = *object;
    sq_prefix_retain(temporary.type, temporary.value);
    const char *name = sq_lookup_object_type_name020(&temporary);
    SqString015 *string = fn_0019ba68(sq_native_creation_shared016(vm), (const SqStringByte015 *)name, -1);
    sq_prefix_release(temporary.type, temporary.value);
    return string;
}

void sq_lookup_raise_format020(void *vm, const char *format, ...)
{
    SqLookupVarargs020 arguments;
    __builtin_va_start(arguments, format);
    SqPrototypeU32 length = sq_string_length015((const SqStringByte015 *)format);
    char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), (SqPrototypeI32)length + 100);
    sq_lookup_vformat020(buffer, format, arguments);
    __builtin_va_end(arguments);
    buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), -1);
    SqString015 *string = fn_0019ba68(sq_native_creation_shared016(vm), (const SqStringByte015 *)buffer, -1);
    SqPrefixObject012 temporary = {0x08000010u, {.reference = string}};
    sq_prefix_retain(temporary.type, temporary.value);
    SqPrefixObject012 previous;
    unsigned char *slot = (unsigned char *)vm + __builtin_offsetof(SqLookupVmStorage020, error);
    __builtin_memcpy(&previous, slot, sizeof(previous));
    __builtin_memcpy(slot, &temporary, sizeof(temporary));
    sq_prefix_retain(temporary.type, temporary.value);
    sq_prefix_release(previous.type, previous.value);
    sq_prefix_release(temporary.type, temporary.value);
}

void sq_lookup_index_error020(void *vm, const SqPrefixObject012 *key)
{
    SqString015 *string = sq_lookup_stringify020(vm, key);
    SqPrefixObject012 temporary = {0x08000010u, {.reference = string}};
    sq_prefix_retain(temporary.type, temporary.value);
    sq_lookup_raise_format020(vm, "the index '%.50s' does not exist", (const char *)string->value);
    sq_prefix_release(temporary.type, temporary.value);
}
