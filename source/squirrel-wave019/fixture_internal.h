#ifndef DQMJ3_SQUIRREL_TABLE_FIXTURE019_H
#define DQMJ3_SQUIRREL_TABLE_FIXTURE019_H

#include "table_internal.h"
#include "../squirrel-wave013/native_closure_release.h"
#include "../squirrel-wave014/weak_reference.h"
#include "../squirrel-wave017/script_closure.h"

typedef struct {
    unsigned char *memory;
    SqPrototypeU32 bytes, value_kind, old_kind, query_kind, fault;
    SqPrototypeU32 node_allocations, string_allocations, bucket_allocations, frees, event_count;
    SqPrototypeU32 node_bytes[8], string_bytes[8], bucket_bytes[8];
    SqPrototypeU32 events[128][8];
    SqPrototypeU32 insert_results[19], lookup_results[19], lookup_types[19], lookup_values[19];
    SqPrototypeU32 selected_result, selected_type, selected_value;
    SqPrototypeU32 topology[128][8], topology_count, topology_nodes, topology_used, topology_free;
    const SqPrototypeVTable011 *table_vtable, *prototype_vtable, *native_vtable, *script_vtable, *weak_vtable, *string_vtable, *base_vtable;
} SqTableFixture019;

extern SqTableFixture019 table_fixture019;
SqTable019 *fixture_table019(void);
SqPrefixState012 *fixture_state019(SqPrototypeU32 index);
SqStringTable015 *fixture_strings019(SqPrototypeU32 index);
SqPrefixObject012 *fixture_keys019(void);
SqPrefixObject012 *fixture_destination019(void);
SqPrefixObject012 *fixture_scratch019(void);
SqPrefixObject012 *fixture_external019(void);
SqPrefixObject012 *fixture_old_external019(void);
SqPrototype011 *fixture_prototype019(SqPrototypeU32 index);
SqNativeClosure013 *fixture_native019(SqPrototypeU32 index);
SqScriptClosure017 *fixture_script019(SqPrototypeU32 index);
SqWeakReference014 *fixture_weak019(void);
SqPrototypeU32 fixture_identity019(const void *pointer);
SqPrototypeU32 fixture_payload019(SqPrefixObject012 object);
void fixture_record019(void *pointer, SqPrototypeU32 bytes);
SqPrototypeU32 fixture_table_bind019(void *arena, SqPrototypeU32 bytes, const SqPrototypeVTable011 *table,
    const SqPrototypeVTable011 *prototype, const SqPrototypeVTable011 *native, const SqPrototypeVTable011 *script,
    const SqPrototypeVTable011 *weak, const SqPrototypeVTable011 *string, const SqPrototypeVTable011 *base);
void fixture_table_prepare019(SqPrototypeU32 value_kind, SqPrototypeU32 old_kind, SqPrototypeU32 query_kind);
void fixture_table_run019(SqPrototypeU32 source);
SqPrototypeU32 fixture_table_snapshot019(SqPrototypeU32 *output, SqPrototypeU32 capacity);

#endif
