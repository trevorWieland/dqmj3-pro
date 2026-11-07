#ifndef DQMJ3_SCRIPT_CREATION_FIXTURE018_H
#define DQMJ3_SCRIPT_CREATION_FIXTURE018_H

#include "script_create.h"
#include "../squirrel-wave017/fixture_internal.h"
#include "../squirrel-wave019/table.h"

typedef struct CreationFixture018 {
    SqPrototypeU32 variant, phase, result, events, overflow, allocations, reallocations;
    SqPrefixObject012 prototype_owner, weak_owner;
    SqPrototypeU32 observations[64][16];
} CreationFixture018;
extern CreationFixture018 creation_fixture018;
SqScriptCreationStorage018 *fixture18_vm(void);
SqPrefixObject012 *fixture18_destination(void);
SqPrefixObject012 *fixture18_alternate_stack(void);
SqPrefixState012 *fixture18_alternate_state(void);
SqTable019 *fixture18_table(void);
SqTableNode019 *fixture18_nodes(void);
void fixture18_record(SqPrototypeU32 operation, const void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes);
SqPrototypeU32 fixture18_payload(const SqPrefixObject012 *object);
void fixture18_set_base(SqPrototypeI32 value);
extern const SqPrototypeVTable011 fixture18_old_string_vtable;
SqPrototypeU32 fixture_prepare(SqPrototypeU32 variant, SqPrototypeU32 root);
SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity);

#endif
