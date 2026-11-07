#include "fixture_internal.h"

SqPrototypeU32 fixture_float_count023(void) { return 96; }

SqPrototypeU32 fixture_float_bits023(SqPrototypeU32 index)
{
    const SqPrototypeU32 edges[] = {0,1,2,0x007fffff,0x00800000,0x00800001,0x7f7fffff,
        0x43800008,0x43800018,0x38d1b716,0x38d1b717,0x38d1b718,0x3f800000,
        0x56b5e620,0x56b5e621,0x56b5e622,0x55c5e353,0x55c5e354,0x55c5e355,
        0x3dcccccd,0x3f000000,0x3fa00000,0x00812345,0x7f012345,0x01000001,
        0x3a83126f,0x3a831270,0x4b7fffff,0x4b800000,0x4b800001,0x53800008,0x53800018};
    if (index < 64) return edges[index / 2] | ((index & 1u) << 31);
    SqPrototypeU32 value = index * 1664525u + 1013904223u;
    return (value % 0x7f800000u) | ((index & 1u) << 31);
}

void fixture_float023(void)
{
    *fixture_key020() = (SqPrefixObject012){0x05000004u, {.bits = fixture_float_bits023(fixture_variant023 - 64)}};
    sq_lookup_index_error020(fixture_vm020(), fixture_key020());
    lookup_fixture020.result = 1;
    lookup_fixture020.selected_type = fixture_vm020()->error.type;
    lookup_fixture020.selected_value = fixture_payload020(fixture_vm020()->error);
    const SqString015 *error = fixture_vm020()->error.value.reference;
    for (SqPrototypeU32 index = 0; index < 31 && (SqPrototypeI32)(index + 11) < error->length;
        ++index) {
        if (error->value[index + 11] == '\'') break;
        lookup_fixture020.result_text[index] = (char)error->value[index + 11];
    }
    if (fixture_cleanup023) sq_prefix_clear(&fixture_vm020()->error);
}
