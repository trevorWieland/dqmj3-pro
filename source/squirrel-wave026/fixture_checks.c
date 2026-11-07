#include "fixture_internal.h"

SqPrototypeU32 fixture_native_checks026(SqPrototypeU32 *output)
{
    void *vm = table_fixture019.memory;
    SqPrefixVector012 stack = sq_vm_stack_vector022(vm);
    SqVmCallVector022 calls = sq_vm_call_vector022(vm);
    SqVmCallFrame022 *frames = (void *)(table_fixture019.memory + 0x2b400);
    SqPrototypeU32 count = 0;
    output[count++] = stack.values == (void *)(table_fixture019.memory + 0x2a000);
    output[count++] = stack.size == 32 && stack.capacity == 32;
    output[count++] = calls.values == frames && calls.size == 2 && calls.capacity == 2;
    output[count++] = sq_vm_call_stack022(vm) == frames;
    output[count++] = sq_vm_call_count022(vm) == 0 && sq_vm_current022(vm) == 0;
    output[count++] = sq_vm_native_depth022(vm) == 0 && fixture_vm020()->base == 0;
    output[count++] = fixture_vm020()->top == (fixture_variant026 >= 51 && fixture_variant026 <= 54 ? 5 : 4);
    output[count++] = fixture_vm020()->shared == fixture_state019(fixture_variant026 == 65 ? 1 : 0);
    output[count++] = sizeof(void *) == 4 || (SqCoercionAddress026)table_fixture019.memory > 0xffffffffu;
    SqPrefixObject012 *result = fixture_variant026 >= 51 && fixture_variant026 <= 54 ?
        stack.values + fixture_vm020()->top - 1 : fixture_destination019();
    _Bool released = fixture_variant026 == 50 || fixture_variant026 == 51;
    output[count++] = result->type == (released ? 0x01000001u : 0x08000010u);
    if (!released && result->type == 0x08000010u) {
        const SqString015 *string = result->value.reference;
        output[count++] = string->shared == fixture_vm020()->shared && string->reference.references != 0;
        SqCoercionAddress026 offset = (SqCoercionAddress026)string - (SqCoercionAddress026)table_fixture019.memory;
        output[count++] = offset >= 0x4000 && offset < 0x6000 && !(offset & 0x3ffu);
    } else {
        output[count++] = released;
        output[count++] = released;
    }
    output[count++] = fixture_variant026 != 66 || table_fixture019.memory[0x2c018] == 0xa5;
    return count;
}
