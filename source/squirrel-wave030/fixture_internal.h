#ifndef DQMJ3_CLASS_FIXTURE030_H
#define DQMJ3_CLASS_FIXTURE030_H
#include "class_internal.h"
#include "../squirrel-wave026/fixture_internal.h"

typedef struct SqClassAllocation030 {
    void *pointer;
    SqPrototypeU32 bytes,kind,frees;
} SqClassAllocation030;
typedef struct SqClassFixture030 {
    SqPrototypeU32 variant,cleanup,bump,allocations,events,fault;
    SqClassAllocation030 blocks[48];
    SqPrototypeU32 observations[128][12];
    SqClass030 *classes[3];
    SqClassInstance030 *instance;
    SqPrefixObject012 constructor_name,constructor,external,weak;
    SqPrototypeU32 call_result,constructor_calls,instance_hooks,class_hooks;
    SqPrototypeU32 meta_result,graph_flags[6];
} SqClassFixture030;
extern SqClassFixture030 class_fixture030;
void fixture_event030(SqPrototypeU32 operation,void *pointer,SqPrototypeU32 first,SqPrototypeU32 second);
SqPrototypeU32 fixture_identity030(const void *pointer);
SqClass030 *fixture_new_class030(SqClass030 *base);
void fixture_define030(SqClass030 *klass,SqPrototypeU32 fields,_Bool constructor);
void fixture_attach_weak030(void);
void fixture_generic_clone030(void);
void fixture_check_graph030(void);
SqPrototypeU32 fixture_graph_snapshot030(SqPrototypeU32 *output);
SqPrototypeU32 fixture_callback_aliases030(SqPrototypeU32 *output,SqPrototypeU32 capacity);
SqPrototypeI32 fixture_native_constructor030(void *vm);
SqPrototypeU32 fixture_owned030(const void *pointer);
void fixture_deallocate_fallback030(void *pointer,SqPrototypeU32 bytes);
#ifdef _WIN32
#define SQ_CLASS_FIXTURE030 __declspec(dllexport)
#else
#define SQ_CLASS_FIXTURE030
#endif
SQ_CLASS_FIXTURE030 void fixture_prepare030(SqPrototypeU32 variant,SqPrototypeU32 cleanup);
SQ_CLASS_FIXTURE030 SqPrototypeU32 fixture_execute030(void);
SQ_CLASS_FIXTURE030 SqPrototypeU32 fixture_snapshot030(SqPrototypeU32 *output,SqPrototypeU32 capacity);
#endif
