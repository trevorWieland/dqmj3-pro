#ifndef DQMJ3_SQUIRREL_SCRIPT_FIXTURE017_H
#define DQMJ3_SQUIRREL_SCRIPT_FIXTURE017_H

#include "script_closure.h"
#include "../squirrel-wave013/native_closure_release.h"
#include "../squirrel-wave014/weak_reference.h"
#include "../squirrel-wave015/string.h"

typedef struct ScriptObservation017 { SqPrototypeU32 words[24]; } ScriptObservation017;
typedef struct ScriptFixture017 {
    unsigned char *memory;
    SqPrototypeU32 bytes, variant, root, count, overflow, disposed, prototype_shape[3];
    const SqPrototypeVTable011 *script_table, *prototype_table, *native_table, *weak_table, *string_table, *base_table;
    ScriptObservation017 observations[128];
} ScriptFixture017;
extern ScriptFixture017 script_fixture017;
extern const SqPrototypeVTable011 script_alternate_table017;
SqScriptClosure017 *fixture_script(SqPrototypeU32 index);
SqPrototype011 *fixture_prototype(SqPrototypeU32 index);
SqNativeClosure013 *fixture_native(SqPrototypeU32 index);
SqString015 *fixture_string(SqPrototypeU32 index);
SqWeakReference014 *fixture_weak(SqPrototypeU32 index);
SqPrefixObject012 *fixture_values(SqPrototypeU32 index);
SqPrototypeI32 *fixture_masks(SqPrototypeU32 index);
SqPrefixState012 *fixture_shared(void);
SqStringTable015 *fixture_string_table(void);
SqString015 **fixture_string_buckets(void);
SqPrototypeU32 fixture_identity(const void *pointer);
SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table);
void fixture_set(SqPrefixObject012 *object, SqPrototypeU32 type, void *pointer);
void fixture_record(SqPrototypeU32 operation, const void *object, SqPrototypeU32 size);

#endif
