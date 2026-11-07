#include "fixture_internal.h"

SqPrototypeI32 fixture_native_callback026(void *vm)
{
    fixture_event020(26, fixture_variant026, (SqPrototypeU32)sq_vm_native_depth022(vm));
    if (fixture_variant026 == 40) return 0;
    sq_index_to_string026(vm, 2);
    fixture_event020(27, fixture_variant026, (SqPrototypeU32)sq_vm_native_depth022(vm));
    return 1;
}

void fixture_meta026(SqPrototypeU32 variant)
{
    SqPrefixVector012 *names = sq_lookup_names020(&fixture_shared020()->common);
    for (SqPrototypeU32 index = names->size; index < 16; ++index)
        names->values[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    names->size = names->capacity = 16;
    SqString015 *name = fn_0019ba68(&fixture_shared020()->common, (const SqStringByte015 *)"_tostring", -1);
    SqPrefixObject012 key = {0x08000010u, {.reference = name}};
    sq_prefix_assign(names->values + 15, &key);
    SqPrefixObject012 captured = *fixture_key020();
    fixture_call_array_method023();
    SqNativeClosure013 *closure = fixture_native019(2);
    closure->function = fixture_native_callback026;
    closure->parameter_check = 1;
    if (variant == 35) captured = (SqPrefixObject012){0x05000004u, {.bits = 0x3dcccccdu}};
    if (variant == 36) {
        closure->function = sq_vm_array_native022;
        captured = (SqPrefixObject012){0x05000002u, {.integer = 3}};
    }
    if (variant == 37) closure->parameter_check = 2;
    if (variant == 39) captured = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(0)}};
    SqPrefixObject012 *outer = (void *)(table_fixture019.memory + 0x1c800);
    *outer = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    sq_prefix_assign(outer, &captured);
    closure->outers = (SqPrefixVector012){outer, 1, 1};
    SqPrefixObject012 method = {0x08000200u, {.reference = closure}};
    if (variant == 41) method = (SqPrefixObject012){0x05000002u, {.integer = 7}};
    if (variant != 42 && !sq_table_new_slot019(fixture_table_at020(0x9100), &key, &method))
        lookup_fixture020.fault = 114;
    *fixture_receiver020() = (SqPrefixObject012){0x0a000020u, {.reference = fixture_table019()}};
    if (variant == 33) {
        SqLookupClassStorage020 *klass = fixture_class020(0);
        SqPrefixObject012 *methods = (void *)(table_fixture019.memory + 0xfc00);
        for (SqPrototypeU32 index = 0; index < 16; ++index)
            methods[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
        klass->values56 = (SqPrefixVector012){methods, 16, 16};
        sq_prefix_assign(methods + 15, &method);
        fixture_instance020()->delegate = klass->members;
        fixture_publish_instance023();
        *fixture_receiver020() = (SqPrefixObject012){0x0a008000u, {.reference = fixture_instance020()}};
    }
}
