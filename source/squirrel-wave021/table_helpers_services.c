#include "table_helpers_fixture.h"

void *sq_table_allocate019(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index = table_fixture019.node_allocations++;
    if (index >= 8 || bytes > 0x2000) { table_fixture019.fault = 1; return 0; }
    table_fixture019.node_bytes[index] = bytes;
    return table_fixture019.memory + 0x10000 + index * 0x2000;
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index = table_fixture019.string_allocations++;
    if (index >= 8 || bytes > 0x400) { table_fixture019.fault = 2; return 0; }
    table_fixture019.string_bytes[index] = bytes;
    return (void *)(table_fixture019.memory + 0x4000 + index * 0x400);
}

SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes)
{
    SqPrototypeU32 index = table_fixture019.bucket_allocations++;
    if (index >= 8 || bytes > 0x100) { table_fixture019.fault = 3; return 0; }
    table_fixture019.bucket_bytes[index] = bytes;
    return (void *)(table_fixture019.memory + 0x8000 + index * 0x100);
}

void *sq_weak_allocate014(SqPrototypeU32 bytes)
{
    if (bytes != sizeof(SqWeakReference014)) { table_fixture019.fault = 4; return 0; }
    return fixture_weak019();
}

void fixture_record019(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 id = fixture_identity019(pointer), expected = 0, units = 1;
    if (id >= 1 && id <= 3) expected = sizeof(SqTable019);
    if (id >= 10 && id < 18) expected = table_fixture019.string_bytes[id - 10];
    if (id == 20 || id == 21) expected = sizeof(SqPrototype011);
    if (id >= 22 && id <= 24) expected = sizeof(SqNativeClosure013);
    if (id == 25 || id == 26) expected = sizeof(SqScriptClosure017);
    if (id == 27) expected = sizeof(SqWeakReference014);
    if (id >= 30 && id < 38) { expected = table_fixture019.bucket_bytes[id - 30]; units = expected / sizeof(SqString015 *); }
    if (id == 40 || id == 41) { expected = 4 * sizeof(SqString015 *); units = 4; }
    if (id >= 100 && id < 108) { expected = table_fixture019.node_bytes[id - 100]; units = expected / sizeof(SqTableNode019); }
    if (!expected || expected != bytes || table_fixture019.event_count == 128) { table_fixture019.fault = 5; return; }
    SqPrototypeU32 *event = table_fixture019.events[table_fixture019.event_count++];
    event[0] = id;
    event[1] = units;
    event[2] = fixture_identity019(fixture_table019()->delegate);
    event[3] = fixture_table019()->delegate ? sq_prefix_count(fixture_table019()->delegate) : 0;
    event[4] = fixture_helpers_observer021();
    SqPrefixObject012 value = fixture_table019()->nodes[0].value;
    event[5] = value.type;
    event[6] = fixture_payload019(value);
    event[7] = value.type & 0x08000000u ? sq_prefix_count(value.value.reference) : 0;
    table_fixture019.frees++;
}

void sq_table_deallocate019(void *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_script_closure_deallocate017(void *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_string_deallocate_value015(SqString015 *pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_string_deallocate_buckets015(SqString015 **pointer, SqPrototypeU32 bytes) { fixture_record019(pointer, bytes); }
void sq_deallocate(void *pointer, SqU32 bytes) { fixture_record019(pointer, bytes); }
_Noreturn void sq_table_invalid019(void) { for (;;) {} }
_Noreturn void sq_string_missing015(void) { for (;;) {} }
