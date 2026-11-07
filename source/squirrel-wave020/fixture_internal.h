#ifndef DQMJ3_SQUIRREL_LOOKUP_FIXTURE020_H
#define DQMJ3_SQUIRREL_LOOKUP_FIXTURE020_H

#include "lookup_error.h"
#include "../squirrel-wave019/fixture_internal.h"

typedef struct SqLookupFixture020 {
    SqPrototypeU32 variant, cleanup, result, selected_type, selected_value, fault;
    SqPrototypeU32 events, scratch_calls, invoke_calls;
    char result_text[32];
    SqPrototypeU32 observations[64][16];
} SqLookupFixture020;
extern SqLookupFixture020 lookup_fixture020;
SqLookupVmStorage020 *fixture_vm020(void);
SqLookupSharedStorage020 *fixture_shared020(void);
SqTable019 *fixture_table_at020(SqPrototypeU32 address);
SqPrefixObject012 *fixture_receiver020(void);
SqPrefixObject012 *fixture_key020(void);
SqLookupClassStorage020 *fixture_class020(SqPrototypeU32 index);
SqLookupInstanceStorage020 *fixture_instance020(void);
SqOpaqueArray012 *fixture_array020(void);
SqLookupMetaVTable020 *fixture_methods020(void);
SqPrototypeU32 fixture_id020(const void *pointer);
SqPrototypeU32 fixture_payload020(SqPrefixObject012 object);
void fixture_event020(SqPrototypeU32 operation, SqPrototypeU32 first, SqPrototypeU32 second);
void fixture_setup020(void);
void fixture_observe_key020(SqString015 *string);
void fixture_prepare020(SqPrototypeU32 variant, SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_execute020(void);
SqPrototypeU32 fixture_snapshot020(SqPrototypeU32 *output, SqPrototypeU32 capacity);

#endif
