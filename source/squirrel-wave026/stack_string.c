#include "coercion.h"

void sq_index_to_string026(void *vm, SqPrototypeI32 index)
{
    SqPrefixObject012 *input = sq_lookup_stack020(vm) +
        (index >= 0 ? sq_lookup_base020(vm) + index - 1 : sq_lookup_top020(vm) + index);
    SqPrefixObject012 temporary = {0x01000001u, {.reference = 0}};
    sq_value_to_string026(vm, input, &temporary);
    sq_vm_push022(vm, &temporary);
    sq_prefix_release(temporary.type, temporary.value);
}
