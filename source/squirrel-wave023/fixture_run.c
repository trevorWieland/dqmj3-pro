#include "fixture_internal.h"

SqPrototypeU32 fixture_variant023;
SqPrototypeU32 fixture_cleanup023;
SqPrototypeU32 fixture_allocating023;

void fixture_prepare023(SqPrototypeU32 variant, SqPrototypeU32 cleanup)
{
    const SqPrototypeU32 bases[] = {7,10,26,21,51,51,28,32,12,14,17,17,17,23,23,23,23,23,23,23,17,17};
    fixture_variant023 = variant;
    fixture_cleanup023 = cleanup;
    fixture_allocating023 = 0;
    fixture_prepare020(variant >= 200 ? 13 : variant >= 64 ? 32 : bases[variant], cleanup);
}

void fixture_delegate_release023(void *owner)
{
    fixture_event020(9, fixture_table_at020(0x9100)->reference.prefix.references, 0);
    sq_table_delegate019(fixture_table019(), 0);
    fn_0024d9cc(owner);
}

static void fixture_string_destroy023(void *owner) { fn_0068f564(owner); }
static const SqPrototypeVTable011 fixture_delegate_observer023 = {
    fixture_string_destroy023, 0, fixture_delegate_release023};

static void fixture_capture023(void)
{
    lookup_fixture020.selected_type = fixture_destination019()->type;
    lookup_fixture020.selected_value = fixture_payload020(*fixture_destination019());
    if (fixture_cleanup023) sq_prefix_clear(fixture_destination019());
}

static void fixture_last_delegate023(void)
{
    SqTable019 *delegate = fixture_table_at020(0x9100);
    sq_table_delegate019(fixture_table019(), 0);
    sq_table_initialize019(delegate, &fixture_shared020()->common, 4);
    delegate->reference.prefix.references = 1;
    SqPrefixObject012 value = {0x08000200u, {.reference = fixture_native019(2)}};
    sq_table_new_slot019(delegate, fixture_key020(), &value);
    sq_table_delegate019(fixture_table019(), delegate);
    SqPrefixObject012 external = {0x0a000020u, {.reference = delegate}};
    sq_prefix_clear(&external);
    SqString015 *old = fn_0019ba68(&fixture_shared020()->common, (const SqStringByte015 *)"delegate owner", -1);
    SqPrefixObject012 object = {0x08000010u, {.reference = old}};
    sq_prefix_assign(fixture_destination019(), &object);
    old->reference.vtable = &fixture_delegate_observer023;
    lookup_fixture020.result = sq_lookup_get020(fixture_vm020(), fixture_receiver020(), fixture_key020(),
        fixture_destination019(), 0, 0);
    fixture_capture023();
}

static void fixture_instance023(void)
{
    SqPrefixObject012 *methods = (void *)(table_fixture019.memory + 0xfc00);
    fixture_class020(0)->values56 = (SqPrefixVector012){methods, 8, 8};
    for (SqPrototypeU32 index = 0; index < 8; ++index)
        methods[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    SqTable019 *members = fixture_class020(0)->members;
    for (SqPrototypeI32 index = 0; index < members->node_count; ++index) {
        sq_prefix_clear(&members->nodes[index].key);
        sq_prefix_clear(&members->nodes[index].value);
    }
    members->used = 0;
    fixture_publish_instance023();
    if (fixture_variant023 == 17 || fixture_variant023 == 18 || fixture_variant023 == 19) {
        SqPrefixObject012 value = fixture_variant023 == 17 ?
            (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype019(0)}} :
            (SqPrefixObject012){0x08000200u, {.reference = fixture_native019(2)}};
        sq_prefix_assign(methods + 7, &value);
    }
    if (fixture_variant023 >= 16) {
        lookup_fixture020.result = sq_instance_get_meta023(fixture_instance020(), 0, 7, fixture_destination019());
    } else {
        lookup_fixture020.result = sq_lookup_get020(fixture_vm020(), fixture_receiver020(), fixture_key020(),
            fixture_destination019(), fixture_variant023 == 15, 0);
    }
    fixture_capture023();
}

SqPrototypeU32 fixture_execute023(void)
{
    fixture_setup020();
    SqPrototypeU32 variant = fixture_variant023;
    if (variant >= 200) {
        fixture_call_execute023();
    } else if (variant >= 64) {
        fixture_float023();
    } else if (variant == 4 || variant == 5) {
        fixture_key020()->type = variant == 4 ? 0x01000090u : 0x01001800u;
        lookup_fixture020.result = sq_lookup_object_type_name020(fixture_key020()) != 0;
        lookup_fixture020.selected_type = fixture_key020()->type;
    } else if (variant == 6) {
        SqPrefixObject012 retained = fixture_vm020()->error;
        sq_prefix_retain(retained.type, retained.value);
        sq_lookup_index_error020(fixture_vm020(), fixture_key020());
        lookup_fixture020.result = 1;
        lookup_fixture020.selected_type = fixture_vm020()->error.type;
        lookup_fixture020.selected_value = fixture_payload020(fixture_vm020()->error);
        if (fixture_cleanup023) { sq_prefix_clear(&retained); sq_prefix_clear(&fixture_vm020()->error); }
    } else if (variant == 7) {
        SqPrefixObject012 input = *fixture_destination019();
        fixture_allocating023 = 1;
        SqString015 *string = sq_lookup_stringify020(fixture_vm020(), &input);
        SqPrefixObject012 output = {0x08000010u, {.reference = string}};
        sq_prefix_retain(output.type, output.value);
        lookup_fixture020.result = 1;
        lookup_fixture020.selected_type = output.type;
        lookup_fixture020.selected_value = fixture_id020(string);
        for (SqPrototypeI32 index = 0; index < string->length && index < 31; ++index)
            lookup_fixture020.result_text[index] = (char)string->value[index];
        if (fixture_cleanup023) sq_prefix_clear(&output);
    } else if (variant == 8) {
        fixture_last_delegate023();
    } else if (variant >= 13 && variant <= 19) {
        fixture_instance023();
    } else {
        if (variant == 0) *fixture_key020() = (SqPrefixObject012){0x05000004u, {.floating = 2.75f}};
        if (variant == 2) {
            SqLookupUserdataStorage020 *userdata = fixture_receiver020()->value.reference;
            userdata->delegate = fixture_table_at020(0x9100);
            userdata->delegate->reference.prefix.references++;
        }
        if (variant == 3) {
            SqTable019 *members = fixture_class020(0)->members;
            for (SqPrototypeI32 index = 0; index < members->node_count; ++index) {
                sq_prefix_clear(&members->nodes[index].key); sq_prefix_clear(&members->nodes[index].value);
            }
            members->used = 0;
        }
        if (variant == 10 || variant == 11 || variant == 20 || variant == 21) {
            fixture_receiver020()->type = variant == 10 || variant == 20 ? 0x08000400u : 0x08001000u;
            fixture_receiver020()->value.reference = table_fixture019.memory + 0x1f000;
        }
        lookup_fixture020.result = sq_lookup_get020(fixture_vm020(), fixture_receiver020(), fixture_key020(),
            fixture_destination019(), variant == 1 || variant == 2 || variant == 20 || variant == 21, 0);
        fixture_capture023();
    }
    return 1;
}

SqPrototypeU32 fixture_snapshot023(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 count = fixture_snapshot020(output, capacity);
    if (fixture_variant023 >= 200) count += fixture_call_snapshot023(output + count);
    return count;
}
