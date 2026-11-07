#ifndef DQMJ3_SQUIRREL_STARTUP040_H
#define DQMJ3_SQUIRREL_STARTUP040_H

#include "../squirrel-wave034/class.h"
#include "../squirrel-wave028/execute.h"

typedef struct SqStartupRefNode040 SqStartupRefNode040;
struct SqStartupRefNode040 {
    SqPrefixObject012 object;
    SqPrototypeU32 references;
    SqStartupRefNode040 *next;
};

typedef struct SqStartupRefTable040 {
    SqPrototypeU32 capacity,used;
    SqStartupRefNode040 *nodes,*free;
    void *storage;
} SqStartupRefTable040;

typedef struct SqStartupInitialRefs040 {
    SqStartupRefNode040 *buckets[4];
    SqStartupRefNode040 nodes[4];
} SqStartupInitialRefs040;

typedef void (*SqStartupUninvokedCallback040)(void);

typedef struct SqSharedTargetFields040 {
    SqPrefixVector012 *system_strings;
    SqPrefixObject012 meta_map;
    SqPrefixVector012 *meta_methods,*type_names;
    SqStringTable015 *strings;
    SqStartupRefTable040 references;
    SqPrefixObject012 registry,constants,constructor_name;
    SqPrefixCollectable012 *chain;
    SqPrefixObject012 special;
    SqPrefixObject012 default_delegates[10];
    SqStartupUninvokedCallback040 callback_00a0,callback_00a4;
    unsigned char flag_00a8,flag_00a9;
    unsigned char unwritten_00aa[2];
    char *scratch;
    SqPrototypeI32 scratch_capacity;
} SqSharedTargetFields040;

typedef struct SqSharedNativeFields040 {
    SqPrefixVector012 *system_strings,*meta_methods,*type_names;
    SqStringTable015 *strings;
    SqStartupRefTable040 references;
    SqPrefixObject012 registry,constants,special;
    SqPrototypeU32 meta_map_type;
    SqStartupUninvokedCallback040 callback_00a0,callback_00a4;
    unsigned char flag_00a8,flag_00a9;
} SqSharedNativeFields040;

typedef struct SqSharedState040 {
#if __SIZEOF_POINTER__ == 4
    union {
        SqClassSharedStorage034 common;
        SqSharedTargetFields040 target;
    };
#else
    SqClassSharedStorage034 common;
    SqSharedNativeFields040 fields;
#endif
} SqSharedState040;

typedef struct SqVm040 {
    SqPrefixCollectable012 reference;
    unsigned char unwritten_0014[4];
    SqPrefixVector012 stack,varargs;
    SqPrototypeI32 top,base;
    SqPrefixObject012 root,error,error_handler,debug_hook,temporary;
    SqVmCallFrame022 *call_stack;
    SqPrototypeI32 call_count,allocated_calls;
    SqVmCallVector022 calls;
    SqTrapVector028 traps;
    SqVmCallFrame022 *current;
    void *foreign;
    SqSharedState040 *shared;
    SqPrototypeI32 native_depth;
    SqPrototypeU32 suspended,suspended_root;
    SqPrototypeI32 suspended_target,suspended_traps;
    unsigned short suspended_varargs_size,suspended_varargs_base;
} SqVm040;

typedef struct SqStartupServices040 {
    void *context;
    void *(*allocate)(void *,SqPrototypeU32,SqPrototypeU32);
    const SqPrototypeVTable011 *vm_operations;
    const SqPrefixObject012 *live_null_template;
} SqStartupServices040;

_Bool sq_startup_bind040(const SqStartupServices040 *services);
const SqStartupServices040 *sq_startup_services040(void);
SqPrefixState012 *sq_shared_prefix040(SqSharedState040 *state);
SqStartupRefTable040 *sq_shared_references040(SqSharedState040 *state);
SqPrefixObject012 *sq_shared_registry040(SqSharedState040 *state);
SqPrefixObject012 *sq_shared_constants040(SqSharedState040 *state);
SqPrefixObject012 *sq_shared_special040(SqSharedState040 *state);
void sq_shared_null_meta040(SqSharedState040 *state);
void sq_startup_null040(SqPrefixObject012 *object);
SqSharedState040 *fn_0014c4c8(SqSharedState040 *state);
SqVm040 *fn_0015467c(SqVm040 *vm,SqSharedState040 *shared);

_Static_assert(__builtin_offsetof(SqSharedState040,common)==0,"actual034 shared first member");
_Static_assert(__builtin_offsetof(SqClassSharedStorage034,common)==0,"actual030 shared first member");
_Static_assert(__builtin_offsetof(SqClassSharedStorage030,common)==0,"actual020 shared first member");
_Static_assert(__builtin_offsetof(SqLookupSharedStorage020,common)==0,"actual012 shared first member");
_Static_assert(sizeof(void*)!=4||sizeof(SqSharedState040)==180,"complete target shared allocation");
_Static_assert(sizeof(void*)!=4||sizeof(SqVm040)==168,"complete target VM allocation");
_Static_assert(sizeof(void*)!=8||sizeof(SqSharedState040)==448,"complete native shared with explicit034 view");
_Static_assert(sizeof(void*)!=8||sizeof(SqVm040)==264,"complete native VM storage");
_Static_assert(sizeof(void*)!=4||sizeof(SqStartupInitialRefs040)==80,"target four-bucket reference allocation");
_Static_assert(sizeof(void*)!=8||sizeof(SqStartupInitialRefs040)==160,"native four-bucket reference allocation");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,references)==24,"target reference table");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,chain)==68,"target collectable head");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqSharedTargetFields040,scratch)==172,"target scratch pointer");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqVm040,stack)==24,"target VM stack");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqVm040,shared)==140,"target VM shared owner");
#if __SIZEOF_POINTER__ == 8
_Static_assert(__builtin_offsetof(SqSharedState040,common.common.constructor_name)==280,"authoritative030 constructor name");
_Static_assert(__builtin_offsetof(SqSharedState040,common.meta_indices)==296,"authoritative034 meta-index value");
_Static_assert(__builtin_offsetof(SqSharedState040,fields)==304,"new fields follow entire034 state");
_Static_assert(__builtin_offsetof(SqVm040,stack)==48,"stack follows real40-byte collectable and preserved word");
_Static_assert(__builtin_offsetof(SqVm040,shared)==232,"full native VM owner field");
#endif
#endif
