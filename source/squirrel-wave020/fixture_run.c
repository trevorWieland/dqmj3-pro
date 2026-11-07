#include "fixture_internal.h"

const SqPrototypeVTable011 *fixture_vtable020(SqPrototypeU32 index)
{
    const SqPrototypeVTable011 *tables[] = {&sq_table_vtable019, &sq_prototype_vtable011,
        &sq_native_closure_vtable013, &sq_script_closure_vtable017, &sq_weak_vtable014,
        &sq_string_vtable015, &sq_prototype_base_vtable011};
    return index < 7 ? tables[index] : 0;
}

SqPrototypeU32 fixture_layout020(SqPrototypeU32 index)
{
    SqPrototypeU32 values[] = {sizeof(SqLookupVmStorage020), sizeof(SqLookupSharedStorage020),
        __builtin_offsetof(SqLookupVmStorage020, root), __builtin_offsetof(SqLookupVmStorage020, error),
        __builtin_offsetof(SqLookupVmStorage020, current_frame), __builtin_offsetof(SqLookupVmStorage020, shared),
        sizeof(SqLookupClassStorage020), __builtin_offsetof(SqLookupInstanceStorage020, values),
        sizeof(SqLookupMetaVTable020), __builtin_offsetof(SqLookupMetaVTable020, get_method),
        __builtin_offsetof(SqLookupSharedStorage020, default_delegates), __builtin_offsetof(SqLookupSharedStorage020, scratch)};
    return index < sizeof(values) / sizeof(values[0]) ? values[index] : 0;
}

SqPrototypeU32 fixture_execute020(void)
{
    fixture_setup020();
    SqPrototypeU32 variant = lookup_fixture020.variant;
    if (variant == 64) {
        lookup_fixture020.result = sq_lookup_table_meta020(fixture_table019(), 0, 7, fixture_destination019());
        lookup_fixture020.selected_type = fixture_destination019()->type;
        lookup_fixture020.selected_value = fixture_payload020(*fixture_destination019());
    } else if (variant >= 34 && variant <= 52) {
        const char *name = sq_lookup_object_type_name020(fixture_key020());
        lookup_fixture020.result = name != 0;
        lookup_fixture020.selected_type = fixture_key020()->type;
        SqPrototypeU32 length = 0;
        if (name) while (name[length] && length < 31) {
            lookup_fixture020.result_text[length] = name[length];
            ++length;
        }
        lookup_fixture020.selected_value = length;
    } else if (variant >= 53 && variant <= 63) {
        const SqPrototypeI32 requests[] = {0,-1,1,51,10,10,32,33,4096,51,4};
        SqPrototypeI32 requested = requests[variant - 53];
        if (variant >= 57 && variant <= 60) {
            fixture_shared020()->scratch = (void *)(table_fixture019.memory + 0x2c000);
            fixture_shared020()->scratch_capacity = variant == 57 ? 100 : 1024;
        }
        char *buffer = sq_lookup_scratch020(&fixture_shared020()->common, requested);
        lookup_fixture020.result = 1;
        lookup_fixture020.selected_type = fixture_id020(buffer);
        lookup_fixture020.selected_value = (SqPrototypeU32)fixture_shared020()->scratch_capacity;
    } else if (variant >= 28 && variant <= 33) {
        sq_lookup_index_error020(fixture_vm020(), fixture_key020());
        lookup_fixture020.result = 1;
        lookup_fixture020.selected_type = fixture_vm020()->error.type;
        lookup_fixture020.selected_value = fixture_payload020(fixture_vm020()->error);
        if (lookup_fixture020.cleanup) sq_prefix_clear(&fixture_vm020()->error);
    } else {
        lookup_fixture020.result = sq_lookup_get020(fixture_vm020(), fixture_receiver020(), fixture_key020(),
            fixture_destination019(), variant == 1 || variant == 27, 1);
        lookup_fixture020.selected_type = fixture_destination019()->type;
        lookup_fixture020.selected_value = fixture_payload020(*fixture_destination019());
        if (lookup_fixture020.cleanup) sq_prefix_clear(fixture_destination019());
    }
    return 1;
}

SqPrototypeU32 fixture_snapshot020(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    if (capacity < 4096) return 0;
    SqPrototypeU32 at = 0;
    output[at++] = lookup_fixture020.result; output[at++] = lookup_fixture020.selected_type;
    output[at++] = lookup_fixture020.selected_value; output[at++] = lookup_fixture020.fault;
    output[at++] = table_fixture019.fault; output[at++] = lookup_fixture020.events;
    output[at++] = (SqPrototypeU32)fixture_vm020()->top;
    output[at++] = fixture_destination019()->type; output[at++] = fixture_payload020(*fixture_destination019());
    output[at++] = fixture_native019(2)->reference.prefix.references;
    output[at++] = fixture_script019(0)->reference.prefix.references;
    output[at++] = fixture_prototype019(0)->reference.references;
    output[at++] = fixture_prototype019(1)->reference.references;
    output[at++] = lookup_fixture020.invoke_calls;
    output[at++] = fixture_vm020()->error.type; output[at++] = fixture_payload020(fixture_vm020()->error);
    if (fixture_vm020()->error.type == 0x08000010u) {
        SqString015 *message = fixture_vm020()->error.value.reference;
        output[at++] = (SqPrototypeU32)message->length;
        for (SqPrototypeI32 index = 0; index <= message->length; ++index) output[at++] = (unsigned char)message->value[index];
    } else output[at++] = 0;
    SqPrototypeU32 length = 0;
    while (length < 32 && lookup_fixture020.result_text[length]) ++length;
    output[at++] = length;
    for (SqPrototypeU32 index = 0; index <= length; ++index) output[at++] = (unsigned char)lookup_fixture020.result_text[index];
    for (SqPrototypeU32 index = 0; index < lookup_fixture020.events; ++index)
        for (SqPrototypeU32 column = 0; column < 16; ++column) output[at++] = lookup_fixture020.observations[index][column];
    for (SqPrototypeU32 index = 0; index < table_fixture019.event_count; ++index)
        for (SqPrototypeU32 column = 0; column < 8; ++column) output[at++] = table_fixture019.events[index][column];
    return at;
}
