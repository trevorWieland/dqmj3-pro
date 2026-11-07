#ifndef DQMJ3_FIXTURE_API047_H
#define DQMJ3_FIXTURE_API047_H
#define DQMJ3_EXECUTE_FIXTURE028_H
#include "execute.h"

typedef struct SqExecuteFixture028 {
    unsigned char *memory;
    SqPrototypeU32 mode,flags,source,fault,returned,events,reallocations;
    SqPrototypeI32 value;
    SqPrototypeU32 instruction_count,prototype_bytes,event[128][20];
} SqExecuteFixture028;
extern SqExecuteFixture028 execute_fixture028;
SqVm040 *fixture_vm028(void);
SqLookupSharedStorage020 *fixture_shared028(void);
SqScriptClosure017 *fixture_script028(void);
SqPrototype011 *fixture_function028(void);
SqPrototype011 *fixture_extra028(SqPrototypeU32 index);
SqPrefixObject012 *fixture_result028(void);
SqPrototypeU32 fixture_id028(const void *pointer);
void fixture_native_event028(void *vm);
void fixture_record028(void *pointer,SqPrototypeU32 bytes);
SqPrototypeU32 fixture_bind028(void *memory,SqPrototypeU32 bytes);
void fixture_prepare028(SqPrototypeU32 mode,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 source);
void fixture_run028(SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_snapshot028(SqPrototypeU32 *words,SqPrototypeU32 capacity);
#endif
