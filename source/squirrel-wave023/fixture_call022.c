#include "fixture_internal.h"
#include "../squirrel-wave022/vm_call.h"

static SqVmCallStorage022 *fixture_call_storage023(void)
{
    return (void *)table_fixture019.memory;
}

static SqPrototypeU32 fixture_array_seen023;

void fixture_call_initialize023(void)
{
    fixture_array_seen023 = 0;
    SqLookupVmStorage020 common = *fixture_vm020();
    SqVmCallStorage022 *storage = fixture_call_storage023();
    *storage = (SqVmCallStorage022){0};
    storage->common = common;
    sq_vm_publish_stack022(storage, (SqPrefixVector012){common.stack, 32, 32});
    SqVmCallFrame022 *frames = (void *)(table_fixture019.memory + 0x2b400);
    for (SqPrototypeU32 index = 0; index < 2; ++index) {
        frames[index] = (SqVmCallFrame022){0};
        frames[index].closure.type = 0x01000001u;
    }
    sq_vm_publish_calls022(storage, (SqVmCallVector022){frames, 2, 2});
    sq_vm_set_call_stack022(storage, frames);
    sq_vm_set_call_count022(storage, 0);
    sq_vm_set_allocated_calls022(storage, 2);
    sq_vm_set_current022(storage, 0);
    sq_vm_set_native_depth022(storage, 0);
}

void fixture_call_array_method023(void)
{
    SqNativeClosure013 *closure = fixture_native019(2);
    closure->function = sq_vm_array_native022;
    closure->parameter_check = 2;
    SqPrefixObject012 callable = {0x08000200u, {.reference = closure}};
    SqTable019 *delegate = fixture_table_at020(0x9100);
    for (SqPrototypeI32 index = 0; index < delegate->node_count; ++index)
        if (delegate->nodes[index].value.type == 0x08000100u)
            sq_prefix_assign(&delegate->nodes[index].value, &callable);
    sq_prefix_clear(fixture_array020()->vector.values);
    *fixture_key020() = (SqPrefixObject012){0x05000002u, {.integer = 3}};
}

static void fixture_failed_native_destroy023(void *owner) { fn_0068f564(owner); }

static void fixture_failed_native_release023(void *owner)
{
    fixture_event020(11, fixture_native019(2)->reference.prefix.references, 0);
    SqTable019 *delegate = fixture_table_at020(0x9100);
    for (SqPrototypeI32 index = 0; index < delegate->node_count; ++index)
        sq_prefix_clear(&delegate->nodes[index].value);
    SqString015 *key = fixture_key020()->value.reference;
    for (SqPrototypeU32 index = 0; index < 10; ++index) {
        SqTable019 *table = fixture_table_at020(0xa000 + index * 0x100);
        for (SqPrototypeI32 node = 0; node < table->node_count; ++node)
            if (table->nodes[node].key.type == 0x08000010u && table->nodes[node].key.value.reference == key)
                sq_prefix_clear(&table->nodes[node].key);
    }
    SqTable019 *root = fixture_table_at020(0x9200);
    for (SqPrototypeI32 index = 0; index < root->node_count; ++index)
        sq_prefix_clear(&root->nodes[index].key);
    fixture_observe_key020(key);
    fn_0024d9cc(owner);
}

static const SqPrototypeVTable011 fixture_failed_native_observer023 = {
    fixture_failed_native_destroy023, 0, fixture_failed_native_release023};

void fixture_call_arity_failure023(void)
{
    SqNativeClosure013 *closure = fixture_native019(2);
    closure->function = sq_vm_array_native022;
    closure->parameter_check = 3;
    SqPrefixObject012 callable = {0x08000200u, {.reference = closure}};
    SqTable019 *delegate = fixture_table_at020(0x9100);
    for (SqPrototypeI32 index = 0; index < delegate->node_count; ++index)
        if (delegate->nodes[index].value.type == 0x08000100u)
            sq_prefix_assign(&delegate->nodes[index].value, &callable);
    sq_prefix_clear(fixture_array020()->vector.values);
    SqString015 *old = fn_0019ba68(&fixture_shared020()->common,
        (const SqStringByte015 *)"native failure owner", -1);
    SqPrefixObject012 object = {0x08000010u, {.reference = old}};
    sq_prefix_assign(&fixture_vm020()->error, &object);
    old->reference.vtable = &fixture_failed_native_observer023;
}

void fixture_call_execute023(void)
{
    fixture_call_initialize023();
    if (fixture_variant023 == 202 || fixture_variant023 == 203) {
        fixture_call_arity_failure023();
        if (fixture_variant023 == 203) sq_vm_set_native_depth022(fixture_vm020(), 100);
    } else {
        fixture_call_array_method023();
        if (fixture_variant023 == 204) fixture_key020()->value.integer = 0;
        if (fixture_variant023 == 205)
            *fixture_key020() = (SqPrefixObject012){0x05000004u, {.floating = 3.75f}};
        if (fixture_variant023 == 206) {
            SqPrefixObject012 *outer = (void *)(table_fixture019.memory + 0x1c800);
            *outer = (SqPrefixObject012){0x01000001u, {.reference = 0}};
            SqPrefixObject012 value = {0x08002000u, {.reference = fixture_prototype019(0)}};
            sq_prefix_assign(outer, &value);
            fixture_native019(2)->outers = (SqPrefixVector012){outer, 1, 1};
        }
        if (fixture_variant023 == 201) {
            SqLookupClassStorage020 *klass = fixture_class020(0);
            SqPrefixObject012 *methods = (void *)(table_fixture019.memory + 0xfc00);
            klass->values56 = (SqPrefixVector012){methods, 8, 8};
            for (SqPrototypeU32 index = 0; index < 8; ++index)
                methods[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
            SqPrefixObject012 method = {0x08000200u, {.reference = fixture_native019(2)}};
            sq_prefix_assign(methods + 7, &method);
            fixture_publish_instance023();
            *fixture_receiver020() = (SqPrefixObject012){0x0a008000u, {.reference = fixture_instance020()}};
        }
    }
    lookup_fixture020.result = sq_lookup_get020(fixture_vm020(), fixture_receiver020(), fixture_key020(),
        fixture_destination019(), 0, 0);
    lookup_fixture020.selected_type = fixture_destination019()->type;
    lookup_fixture020.selected_value = fixture_payload020(*fixture_destination019());
    if (fixture_destination019()->type == 0x08000040u) {
        if (fixture_destination019()->value.reference != table_fixture019.memory + 0x1d000)
            lookup_fixture020.fault = 104;
        fixture_array_seen023 = 1;
        lookup_fixture020.selected_value = 500;
    }
    if (fixture_cleanup023) {
        sq_prefix_clear(fixture_destination019());
        sq_prefix_clear(&fixture_vm020()->error);
        if (fixture_variant023 == 206) sq_prefix_clear(fixture_vm020()->stack + 6);
    }
}

SqPrototypeU32 fixture_call_snapshot023(SqPrototypeU32 *output)
{
    SqPrototypeU32 at = 0;
    SqVmCallStorage022 *vm = fixture_call_storage023();
    output[at++] = 0x230022;
    output[at++] = (SqPrototypeU32)sq_vm_call_count022(vm);
    output[at++] = (SqPrototypeU32)sq_vm_native_depth022(vm);
    output[at++] = sq_vm_current022(vm) == 0;
    output[at++] = sq_vm_call_stack022(vm) == (void *)(table_fixture019.memory + 0x2b400);
    SqPrefixVector012 stack = sq_vm_stack_vector022(vm);
    output[at++] = stack.values == (void *)(table_fixture019.memory + 0x2a000);
    output[at++] = stack.size; output[at++] = stack.capacity;
    output[at++] = fixture_array_seen023;
    if (fixture_array_seen023) {
        SqOpaqueArray012 *array = (void *)(table_fixture019.memory + 0x1d000);
        output[at++] = array->reference.prefix.references;
        output[at++] = array->vector.size; output[at++] = array->vector.capacity;
        output[at++] = array->vector.values == (void *)(table_fixture019.memory + 0x1d800);
        output[at++] = array->reference.prefix.vtable == &sq_prototype_base_vtable011;
        for (SqPrototypeU32 index = 0; index < array->vector.size; ++index) {
            output[at++] = array->vector.values[index].type;
            output[at++] = fixture_payload020(array->vector.values[index]);
        }
    }
    return at;
}
