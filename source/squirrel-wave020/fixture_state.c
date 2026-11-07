#include "fixture_internal.h"

SqLookupFixture020 lookup_fixture020;
SqLookupVmStorage020 *fixture_vm020(void) { return (void *)table_fixture019.memory; }
SqLookupSharedStorage020 *fixture_shared020(void) { return (void *)fixture_state019(0); }
SqTable019 *fixture_table_at020(SqPrototypeU32 address) { return (void *)(table_fixture019.memory + address); }
SqPrefixObject012 *fixture_receiver020(void) { return (void *)(table_fixture019.memory + 0x2b100); }
SqPrefixObject012 *fixture_key020(void) { return (void *)(table_fixture019.memory + 0x2b000); }
SqLookupClassStorage020 *fixture_class020(SqPrototypeU32 index) { return (void *)(table_fixture019.memory + 0xe400 + index * 0x200); }
SqLookupInstanceStorage020 *fixture_instance020(void) { return (void *)(table_fixture019.memory + 0xe000); }
SqOpaqueArray012 *fixture_array020(void) { return (void *)(table_fixture019.memory + 0xec00); }
SqLookupMetaVTable020 *fixture_methods020(void) { return (void *)(table_fixture019.memory + 0x28000); }

static void unsupported(void *owner)
{
    (void)owner;
    lookup_fixture020.fault = 90;
    for (;;) { }
}
static const SqPrototypeVTable011 unqualified_receiver_lifetime020 = {unsupported, 0, unsupported};

SqPrototypeU32 fixture_id020(const void *pointer)
{
    SqPrototypeU32 known = fixture_identity019(pointer);
    if (known != 0xffffffffu) return known;
    const unsigned char *memory = table_fixture019.memory;
    const SqPrototypeU32 offsets[] = {0x9100,0x9200,0x9300,0xe000,0xe400,0xe600,0xe800,0xec00,
        0xee00,0xf000,0xf400,0xf800,0xf900,0x28000,0x2a000,0x2a400,0x2c000,0x34000};
    for (SqPrototypeU32 index = 0; index < sizeof(offsets) / sizeof(offsets[0]); ++index)
        if (pointer == memory + offsets[index]) return 200 + index;
    for (SqPrototypeU32 index = 0; index < 10; ++index)
        if (pointer == memory + 0xa000 + index * 0x100) return 300 + index;
    return 0xffffffffu;
}

SqPrototypeU32 fixture_payload020(SqPrefixObject012 object)
{
    return object.type & 0x08000000u ? fixture_id020(object.value.reference) : object.value.bits;
}

void fixture_event020(SqPrototypeU32 operation, SqPrototypeU32 first, SqPrototypeU32 second)
{
    if (lookup_fixture020.events == 64) { lookup_fixture020.fault = 91; return; }
    SqPrototypeU32 *event = lookup_fixture020.observations[lookup_fixture020.events++];
    event[0] = operation; event[1] = first; event[2] = second;
    event[3] = (SqPrototypeU32)fixture_vm020()->top;
    event[4] = fixture_destination019()->type; event[5] = fixture_payload020(*fixture_destination019());
    event[6] = fixture_vm020()->error.type; event[7] = fixture_payload020(fixture_vm020()->error);
    event[8] = (SqPrototypeU32)fixture_shared020()->scratch_capacity;
    event[9] = fixture_id020(fixture_shared020()->scratch);
    if (fixture_vm020()->error.type & 0x08000000u) event[10] = sq_prefix_count(fixture_vm020()->error.value.reference);
    event[11] = fixture_script019(0)->reference.prefix.references;
}

static void publication(void *context, const SqTable019 *table, const SqLookupMetaVTable020 *storage)
{
    SqPrototypeU32 valid = context == &lookup_fixture020 && table->reference.prefix.vtable == &storage->prefix &&
        storage->prefix.destroy == table_fixture019.table_vtable->destroy &&
        storage->prefix.reserved == table_fixture019.table_vtable->reserved &&
        storage->prefix.release == table_fixture019.table_vtable->release && storage->get_method &&
        !storage->uninvoked_slot3 && !storage->uninvoked_slot4;
    fixture_event020(1, valid, fixture_id020(table));
}

void fixture_prepare020(SqPrototypeU32 variant, SqPrototypeU32 cleanup)
{
    fixture_table_prepare019(4, 1, 1);
    lookup_fixture020 = (SqLookupFixture020){0};
    lookup_fixture020.variant = variant; lookup_fixture020.cleanup = cleanup;
    SqPrefixState012 common = *fixture_state019(0);
    *fixture_shared020() = (SqLookupSharedStorage020){0};
    fixture_shared020()->common = common;
    *fixture_vm020() = (SqLookupVmStorage020){0};
    fixture_vm020()->stack = (void *)(table_fixture019.memory + 0x2a000);
    fixture_vm020()->top = 4; fixture_vm020()->base = 0;
    fixture_vm020()->shared = &fixture_shared020()->common;
    fixture_vm020()->root = fixture_table_at020(0x9200);
    fixture_vm020()->error = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    for (SqPrototypeU32 index = 0; index < 16; ++index)
        fixture_vm020()->stack[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
}

static void hold(SqPrefixObject012 *destination, SqPrefixObject012 incoming)
{
    *destination = incoming;
    sq_prefix_retain(incoming.type, incoming.value);
}

static void error_destroy(void *owner) { fn_0068f564((SqString015 *)owner); }
static void error_release(void *owner)
{
    fixture_event020(5, fixture_id020(owner), 0);
    if (lookup_fixture020.variant == 33) sq_prefix_clear(&fixture_vm020()->error);
    fn_0024d9cc((SqString015 *)owner);
    fixture_event020(6, fixture_id020(owner), 0);
}
static const SqPrototypeVTable011 error_observer020 = {error_destroy, 0, error_release};
void fixture_observe_key020(SqString015 *string) { string->reference.vtable = &error_observer020; }

static void empty_table(SqTable019 *table, SqTableNode019 *nodes)
{
    *table = (SqTable019){0};
    table->reference.prefix = (SqPrototypePrefix011){table_fixture019.table_vtable, 1, 0};
    table->shared = &fixture_shared020()->common;
    table->nodes = nodes; table->node_count = 4; table->first_free = nodes + 3;
    for (SqPrototypeU32 index = 0; index < 4; ++index)
        nodes[index] = (SqTableNode019){{0x01000001u, {.reference = 0}}, {0x01000001u, {.reference = 0}}, 0};
}

static void item(SqTable019 *table, SqPrefixObject012 key, SqPrefixObject012 value)
{
    SqTableNode019 *node = table->nodes + (sq_table_hash019(&key) & 3);
    hold(&node->key, key); hold(&node->value, value); table->used++;
}

void fixture_setup020(void)
{
    SqPrototypeU32 variant = lookup_fixture020.variant;
    if (variant == 65) variant = 13;
    unsigned char *memory = table_fixture019.memory;
    SqPrefixState012 *shared = &fixture_shared020()->common;
    SqPrefixObject012 native = {0x08000200u, {.reference = fixture_native019(2)}};
    SqPrefixObject012 script = {0x08000100u, {.reference = fixture_script019(0)}};
    SqPrefixObject012 prototype = {0x08002000u, {.reference = fixture_prototype019(0)}};
    const SqStringByte015 text[] = {'a','b',(SqStringByte015)0x80,'d','e','f',0};
    SqString015 *string = fn_0019ba68(shared, text, -1);
    string->value[7] = -2;
    SqPrefixObject012 key = {0x08000010u, {.reference = string}};
    SqString015 *method = fn_0019ba68(shared, (const SqStringByte015 *)"_get", -1);
    SqPrefixObject012 *names = (void *)(memory + 0xf900);
    SqPrefixVector012 *name_vector = (void *)(memory + 0xf800);
    *name_vector = (SqPrefixVector012){names, 8, 8};
    for (SqPrototypeU32 index = 0; index < 8; ++index) names[index] = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    hold(names + 7, (SqPrefixObject012){0x08000010u, {.reference = method}});
    sq_lookup_bind_names020(shared, name_vector);
    sq_table_initialize019(fixture_table019(), shared, 4);
    fixture_table019()->reference.prefix.references = 1;
    empty_table(fixture_table_at020(0x9100), (void *)(memory + 0xd000));
    empty_table(fixture_table_at020(0x9200), (void *)(memory + 0xd400));
    empty_table(fixture_table_at020(0x9300), (void *)(memory + 0xd800));
    for (SqPrototypeU32 index = 0; index < 10; ++index) {
        SqTable019 *table = fixture_table_at020(0xa000 + index * 0x100);
        empty_table(table, (void *)(memory + 0xb000 + index * 0x200));
        fixture_shared020()->default_delegates[index] = (SqPrefixObject012){0x0a000020u, {.reference = table}};
        item(table, key, (SqPrefixObject012){0x05000002u, {.integer = (SqPrototypeI32)(1000 + index)}});
    }
    *fixture_key020() = key;
    *fixture_receiver020() = (SqPrefixObject012){0x0a000020u, {.reference = fixture_table019()}};
    if (variant == 0) sq_table_new_slot019(fixture_table019(), &key, &native);
    SqOpaqueArray012 *array = fixture_array020();
    *array = (SqOpaqueArray012){0};
    array->reference.prefix = (SqPrototypePrefix011){&sq_opaque_array_vtable012, 1, 0};
    array->shared = shared; array->vector = (SqPrefixVector012){(void *)(memory + 0xee00), 2, 2};
    hold(array->vector.values, native); hold(array->vector.values + 1, prototype);
    SqWeakReference014 *weak = fn_00233b7c(&fixture_native019(2)->reference.prefix, 0x08000200u);
    SqPrefixObject012 weak_object = {0x08010000u, {.reference = weak}};
    for (SqPrototypeU32 index = 0; index < 2; ++index) {
        SqLookupClassStorage020 *klass = fixture_class020(index);
        *klass = (SqLookupClassStorage020){0};
        klass->reference.prefix = (SqPrototypePrefix011){&unqualified_receiver_lifetime020, 1, 0};
        klass->shared = shared; klass->members = fixture_table_at020(0x9300);
        klass->members32 = (SqLookupMemberVector020){(void *)(memory + 0xf000 + index * 0x100), 1, 1};
        klass->members44 = (SqLookupMemberVector020){(void *)(memory + 0xf400 + index * 0x100), 1, 1};
        hold(&klass->members32.values[0].primary, weak_object);
        hold(&klass->members44.values[0].primary, script);
    }
    SqLookupInstanceStorage020 *instance = fixture_instance020();
    instance->reference.prefix = (SqPrototypePrefix011){&unqualified_receiver_lifetime020, 1, 0};
    instance->shared = shared; instance->klass = fixture_class020(0);
    hold(instance->values, weak_object);
    if (variant >= 2 && variant <= 6) {
        *fixture_receiver020() = (SqPrefixObject012){0x08000040u, {.reference = array}};
        if (variant != 6) *fixture_key020() = (SqPrefixObject012){0x05000002u, {.integer = variant == 4 ? -1 : variant == 5 ? 3 : 0}};
        if (variant == 3) *fixture_key020() = (SqPrefixObject012){0x05000004u, {.floating = 1.75f}};
    }
    if (variant >= 7 && variant <= 10) {
        *fixture_receiver020() = key;
        if (variant != 10) *fixture_key020() = (SqPrefixObject012){0x05000002u, {.integer = variant == 8 ? -1 : variant == 9 ? 6 : 2}};
    }
    if (variant >= 11 && variant <= 14) {
        sq_table_delegate019(fixture_table019(), fixture_table_at020(0x9100));
        if (variant == 11) item(fixture_table_at020(0x9100), key, native);
        else {
            for (SqPrototypeU32 index = 0; index < 4; ++index) {
                SqTableNode019 *node = fixture_table_at020(0xa000)->nodes + index;
                sq_prefix_clear(&node->key); sq_prefix_clear(&node->value);
            }
            fixture_table_at020(0xa000)->used = 0;
            if (variant >= 13) item(fixture_table_at020(0x9100), names[7], script);
        }
    }
    if (variant == 15) *fixture_receiver020() = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    if (variant == 16) *fixture_receiver020() = (SqPrefixObject012){0x01000001u, {.bits = 1}};
    if (variant == 17) *fixture_receiver020() = (SqPrefixObject012){0x01000008u, {.integer = 1}};
    if (variant == 18) *fixture_receiver020() = script;
    if (variant == 19) *fixture_receiver020() = native;
    if (variant == 20) *fixture_receiver020() = weak_object;
    if (variant >= 21 && variant <= 24) {
        SqPrefixObject012 encoded = {0x05000002u, {.bits = variant == 21 || variant == 23 ? 0x02000000u : 0}};
        item(fixture_table_at020(0x9300), key, encoded);
        *fixture_receiver020() = variant <= 22 ? (SqPrefixObject012){0x08004000u, {.reference = fixture_class020(0)}} :
            (SqPrefixObject012){0x0a008000u, {.reference = instance}};
    }
    if (variant == 25 || variant == 26) {
        SqLookupUserdataStorage020 *userdata = (void *)(memory + 0xe800);
        *userdata = (SqLookupUserdataStorage020){0};
        userdata->reference.prefix = (SqPrototypePrefix011){&unqualified_receiver_lifetime020, 1, 0};
        userdata->shared = shared;
        if (variant == 25) { userdata->delegate = fixture_table_at020(0x9100); item(userdata->delegate, key, native); }
        *fixture_receiver020() = (SqPrefixObject012){0x0a000080u, {.reference = userdata}};
    }
    if (variant >= 28 && variant <= 33) {
        SqString015 *old = fn_0019ba68(shared, (const SqStringByte015 *)"previous error", -1);
        hold(&fixture_vm020()->error, (SqPrefixObject012){0x08000010u, {.reference = old}});
        old->reference.vtable = &error_observer020;
        if (variant == 29) {
            SqStringByte015 long_key[81];
            for (SqPrototypeU32 index = 0; index < 80; ++index) long_key[index] = (SqStringByte015)('A' + index % 26);
            long_key[80] = 0;
            SqString015 *long_string = fn_0019ba68(shared, long_key, -1);
            hold(fixture_keys019() + 21, (SqPrefixObject012){0x08000010u, {.reference = long_string}});
            *fixture_key020() = fixture_keys019()[21];
        }
        if (variant == 30) *fixture_key020() = (SqPrefixObject012){0x05000002u, {.integer = (-2147483647 - 1)}};
        if (variant == 31) *fixture_key020() = (SqPrefixObject012){0x01000008u, {.integer = 1}};
        if (variant == 32) *fixture_key020() = prototype;
    }
    if (variant >= 34 && variant <= 52) {
        const SqPrototypeU32 types[] = {0x01000001u,0x05000002u,0x05000004u,0x01000008u,0x08000010u,
            0x0a000020u,0x08000040u,0x0a000080u,0x08000100u,0x08000200u,0x08000400u,0x01000800u,
            0x08001000u,0x08002000u,0x08004000u,0x0a008000u,0x08010000u,0x01000003u,0xf5000002u};
        *fixture_key020() = (SqPrefixObject012){types[variant - 34], {.reference = 0}};
    }
    item(fixture_table_at020(0x9200), variant == 5 ? *fixture_key020() : key,
        (SqPrefixObject012){0x05000002u, {.integer = 2000}});
    fixture_vm020()->stack[0] = *fixture_receiver020();
    if (variant == 16) fixture_vm020()->stack[0].value.bits = 0;
    for (SqPrototypeU32 index = 0; index < sizeof(SqLookupMetaVTable020); ++index) ((unsigned char *)fixture_methods020())[index] = 0xa5;
    sq_lookup_publish_table_methods020(fixture_table019(), fixture_methods020(), publication, &lookup_fixture020);
}
