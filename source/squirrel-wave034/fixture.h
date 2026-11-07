#ifndef DQMJ3_CLASS_FIXTURE034_H
#define DQMJ3_CLASS_FIXTURE034_H
#include "class.h"
#include "../squirrel-wave030/fixture_internal.h"
#include "../squirrel-wave031/execute.h"

typedef struct SqClassFixture034 {
    SqPrototypeU32 variant,result,native_calls,inherited_calls,newslot_calls,stack_owner_mask;
    SqPrototypeU32 string_bytes[64],string_frees[64],fault,meta_table_frees,table_frees[2];
    SqPrefixVector012 meta_names;
    SqPrefixObject012 names[18],keys[5],result_owner,temporary;
    SqPrototypeU32 results[128],result_count;
    SqClass030 *active_class;
    const SqPrefixObject012 *active_key;
    SqPrototypeU32 events,event[128][6];
} SqClassFixture034;
extern SqClassFixture034 class_fixture034;
void fixture_names034(void);
SqPrototypeU32 fixture_string_id034(const void *pointer);
void fixture_cleanup_names034(void);
void fixture_members034(SqClass030 *klass);
void fixture_observe_allocation034(void);
void fixture_controller034(void);
void fixture_stack034(SqPrototypeU32 index,const SqPrefixObject012 *value);
void fixture_cleanup_stack034(void);
void fixture_construct034(void);
SqPrefixObject012 fixture_script034(SqPrototypeI32 parameters,_Bool call_native);
void fixture_execute_storage034(void);
void fixture_newslots034(void);
void fixture_cleanup_newslots034(void);
void fixture_factory034(void);
void fixture_class_temp034(void);
SqPrototypeI32 fixture_inherited034(void *vm);
SqPrototypeI32 fixture_constructor034(void *vm);
SqPrototypeI32 fixture_newslot034(void *vm);
#endif
