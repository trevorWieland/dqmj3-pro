#include "fixture_internal.h"

SqPrototypeU32 fixture_variant026;
SqPrototypeU32 fixture_cleanup026;
char fixture_text026[256];
SqPrototypeU32 fixture_text_bytes026;
SqCoercionAddress026 fixture_input_address026;
SqPrototypeU32 fixture_checks026[13];

void fixture_prepare026(SqPrototypeU32 variant, SqPrototypeU32 cleanup)
{
    fixture_variant026 = variant - 300;
    fixture_cleanup026 = cleanup;
    fixture_text_bytes026 = 0;
    fixture_input_address026 = 0;
    for (SqPrototypeU32 index = 0; index < 13; ++index) fixture_checks026[index] = 0;
    for (SqPrototypeU32 index = 0; index < sizeof(fixture_text026); ++index) fixture_text026[index] = 0;
    fixture_prepare023(200, cleanup);
}

SqPrototypeU32 fixture_execute026(void)
{
    fixture_setup020();
    fixture_call_initialize023();
    SqPrefixObject012 *input = fixture_receiver020();
    SqPrototypeU32 variant = fixture_variant026;
    if (variant <= 1) *input = *fixture_key020();
    if (variant >= 2 && variant <= 4) {
        const SqPrototypeU32 values[] = {0,0x80000000u,0x7fffffffu};
        *input = (SqPrefixObject012){0x05000002u, {.bits = values[variant - 2]}};
    }
    if (variant >= 5 && variant <= 7)
        *input = (SqPrefixObject012){0x01000008u, {.bits = variant == 5 ? 0 : variant == 6 ? 1 : 0x80000000u}};
    if (variant >= 8 && variant <= 14) {
        const SqPrototypeU32 values[] = {0,0x80000000u,0x3dcccccdu,0x38d1b717u,1,0x7f7fffffu,0x43800008u};
        *input = (SqPrefixObject012){0x05000004u, {.bits = values[variant - 8]}};
    }
    if (variant == 15) *input = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    if (variant == 16) *input = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(2)}};
    if (variant == 17) *input = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(0)}};
    if (variant == 18) *input = (SqPrefixObject012){0x08000040u, {.reference = fixture_array020()}};
    if (variant == 19) *input = (SqPrefixObject012){0x08010000u, {.reference = fixture_weak019()}};
    if (variant == 20) {
        sq_table_delegate019(fixture_table019(), 0);
        *input = (SqPrefixObject012){0x0a000020u, {.reference = fixture_table019()}};
    }
    if (variant == 21) *input = (SqPrefixObject012){0x0a008000u, {.reference = fixture_instance020()}};
    if (variant == 22) {
        SqLookupUserdataStorage020 *userdata = (void *)(table_fixture019.memory + 0xe800);
        *userdata = (SqLookupUserdataStorage020){0};
        userdata->reference.prefix = fixture_instance020()->reference.prefix;
        userdata->shared = &fixture_shared020()->common;
        *input = (SqPrefixObject012){0x0a000080u, {.reference = userdata}};
    }
    if (variant == 23) *input = (SqPrefixObject012){0x01000800u, {.reference = table_fixture019.memory + 0x12000}};
    if (variant == 24) *input = (SqPrefixObject012){0x08004000u, {.reference = fixture_class020(0)}};
    if (variant == 25) *input = (SqPrefixObject012){0x08000100u, {.reference = fixture_script019(0)}};
    if (variant >= 50 && variant <= 53)
        *input = (SqPrefixObject012){0x05000002u, {.integer = 1234567}};
    if (variant == 54) *input = *fixture_key020();
    if (variant >= 100 && variant < 196)
        *input = (SqPrefixObject012){0x05000004u, {.bits = fixture_float_bits023(variant - 100)}};
    if (variant >= 196 && variant < 202) {
        const SqPrototypeU32 values[] = {0x7f800000u,0xff800000u,0x7fc00001u,0xffc00001u,0x7f800001u,0xff800001u};
        *input = (SqPrefixObject012){0x05000004u, {.bits = values[variant - 196]}};
    }
    if (variant >= 60 && variant <= 65) {
        *input = (SqPrefixObject012){0x05000002u, {.integer = 42}};
        if (variant == 61) *input = (SqPrefixObject012){0x05000004u, {.bits = 0x3f800000}};
        if (variant == 62 || variant == 63) *input = (SqPrefixObject012){0x01000008u, {.bits = 0}};
        if (variant == 64) *input = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(2)}};
        if (variant == 65) {
            SqLookupSharedStorage020 *alternate = (void *)fixture_state019(1);
            SqPrefixState012 common = alternate->common;
            *alternate = (SqLookupSharedStorage020){0};
            alternate->common = common;
            alternate->scratch = (void *)(table_fixture019.memory + 0x34000);
            alternate->scratch_capacity = 128;
            const char text[] = "alternate scratch";
            for (SqPrototypeU32 index = 0; index < sizeof(text); ++index)
                alternate->scratch[index] = text[index];
        }
    }
    if (variant == 66) {
        *input = (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(2)}};
        fixture_shared020()->scratch = (void *)(table_fixture019.memory + 0x2c000);
        fixture_shared020()->scratch_capacity = 24;
        for (SqPrototypeU32 index = 0; index < 80; ++index) fixture_shared020()->scratch[index] = (char)0xa5;
        fixture_event020(31, 24, 0);
    }
    if (variant >= 32 && variant <= 42) fixture_meta026(variant);
    if (variant == 1 || variant == 38) {
        sq_prefix_assign(fixture_destination019(), input);
        input = fixture_destination019();
    }
    SqPrototypeU32 type = input->type;
    fixture_input_address026 = (type & 0x08000000u) || (type & 0x00ffffffu) == 0x800 ?
        (SqCoercionAddress026)input->value.reference : input->value.bits;
    if (variant == 50 || variant == 51) fixture_release_observer_setup026(variant);
    if (variant >= 51 && variant <= 54) {
        SqPrototypeI32 index = variant >= 53 ? -1 : 1;
        SqPrefixObject012 *slot = fixture_vm020()->stack + (index < 0 ? 3 : 0);
        sq_prefix_retain(slot->type, slot->value);
        sq_prefix_assign(slot, input);
        sq_index_to_string026(fixture_vm020(), index);
        SqPrefixObject012 *result = fixture_vm020()->stack + fixture_vm020()->top - 1;
        if (variant != 51) fixture_capture_text026(result);
    } else {
        sq_value_to_string026(fixture_vm020(), input, fixture_destination019());
        if (variant != 50) fixture_capture_text026(fixture_destination019());
    }
    if (lookup_fixture020.fault) return 0;
    lookup_fixture020.result = 1;
    lookup_fixture020.selected_type = fixture_destination019()->type;
    lookup_fixture020.selected_value = fixture_payload020(*fixture_destination019());
    fixture_native_checks026(fixture_checks026);
    if (fixture_cleanup026) {
        SqPrefixObject012 *result = variant >= 51 && variant <= 54 ?
            fixture_vm020()->stack + fixture_vm020()->top - 1 : fixture_destination019();
        sq_prefix_clear(result);
    }
    return 1;
}

SqPrototypeU32 fixture_snapshot026(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 count = fixture_snapshot020(output, capacity);
    output[count++] = 0x260000;
    output[count++] = fixture_text_bytes026;
    for (SqPrototypeU32 index = 0; index <= fixture_text_bytes026; ++index)
        output[count++] = (unsigned char)fixture_text026[index];
    __UINT64_TYPE__ address = fixture_input_address026;
    output[count++] = (SqPrototypeU32)address;
    output[count++] = (SqPrototypeU32)(address >> 32);
    output[count++] = sizeof(void *);
    output[count++] = (SqPrototypeU32)fixture_shared020()->scratch_capacity;
    for (SqPrototypeU32 index = 0; index < 13; ++index) output[count++] = fixture_checks026[index];
    return count;
}
