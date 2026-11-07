#include "coercion.h"

static void publish(void *vm, SqPrefixObject012 *destination)
{
    char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), -1);
    SqString015 *string = fn_0019ba68(sq_native_creation_shared016(vm), (const SqStringByte015 *)buffer, -1);
    if (!string) sq_coercion_allocation_failure026();
    SqPrefixObject012 temporary = {0x08000010u, {.reference = string}};
    sq_prefix_retain(temporary.type, temporary.value);
    sq_prefix_assign(destination, &temporary);
    sq_prefix_release(temporary.type, temporary.value);
}

static _Bool delegated(const SqPrefixObject012 *input)
{
    if (input->type == 0x0a000020u) return ((const SqTable019 *)input->value.reference)->delegate != 0;
    if (input->type == 0x0a000080u) return ((const SqLookupUserdataStorage020 *)input->value.reference)->delegate != 0;
    if (input->type == 0x0a008000u) return ((const SqLookupInstanceStorage020 *)input->value.reference)->delegate != 0;
    return 0;
}

void sq_value_to_string026(void *vm, const SqPrefixObject012 *input, SqPrefixObject012 *destination)
{
    SqPrototypeU32 type = input->type;
    if (type == 0x08000010u) {
        sq_prefix_assign(destination, input);
        return;
    }
    if (type == 0x05000002u || type == 0x05000004u || type == 0x01000008u) {
        char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), type == 0x01000008u ? 6 : 51);
        if (type == 0x05000002u) sq_coercion_integer_text026(buffer, input->value.integer);
        else if (type == 0x05000004u) sq_coercion_float_text026(buffer, (double)input->value.floating);
        else sq_coercion_boolean_text026(buffer, input->value.bits);
        publish(vm, destination);
        return;
    }
    if (delegated(input)) {
        sq_lookup_push020(vm, input);
        if (sq_lookup_meta_call020(vm, input->value.reference, 15, 1, destination) &&
            destination->type == 0x08000010u) return;
    }
    const char *name = sq_lookup_object_type_name020(input);
    char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), sizeof(void *) == 4 ? 24 : 17 + 2 * sizeof(void *));
    SqPrototypeU32 current = input->type;
    SqCoercionAddress026 address = (current & 0x08000000u) || (current & 0x00ffffffu) == 0x800 ?
        (SqCoercionAddress026)input->value.reference : input->value.bits;
    sq_coercion_pointer_text026(buffer, name, address);
    publish(vm, destination);
}
