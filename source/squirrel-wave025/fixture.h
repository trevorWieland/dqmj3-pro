#ifndef DQMJ3_TYPE_ERROR_FIXTURE025_H
#define DQMJ3_TYPE_ERROR_FIXTURE025_H
#include "type_error.h"

typedef struct SqTypeFixture025 {
    unsigned char *memory;
    SqString015 *last_error;
    SqPrototypeI32 index;
    SqPrototypeU32 mask,type,flags,source,fault,returned,phase;
    SqPrototypeU32 allocations,frees,reallocations,scratch_slot;
    SqPrototypeU32 sizes[256],alive[256],events[256][12];
} SqTypeFixture025;
extern SqTypeFixture025 type_fixture025;
SqVmCallStorage022 *fixture_vm025(void);
SqLookupSharedStorage020 *fixture_shared025(void);
SqStringTable015 *fixture_table025(void);
SqPrototype011 *fixture_old025(void);
SqNativeClosure013 *fixture_native025(void);
SqPrototypeU32 fixture_id025(const void *pointer);
void fixture_record025(void *pointer,SqPrototypeU32 bytes);
SqPrototypeU32 fixture_bind025(void *memory,SqPrototypeU32 bytes);
void fixture_prepare025(SqPrototypeI32 index,SqPrototypeU32 mask,SqPrototypeU32 type,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run025(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot025(SqPrototypeU32 *output,SqPrototypeU32 capacity);
#endif
