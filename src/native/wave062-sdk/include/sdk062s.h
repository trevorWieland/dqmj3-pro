#ifndef SDK062S_H
#define SDK062S_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../../platform/port/memory.h"
#include "../../../../platform/port/thread.h"

typedef unsigned char SdkByte062s;
typedef unsigned int SdkWord062s;
typedef int SdkSigned062s;
typedef struct SdkNode062s SdkNode062s;

typedef struct SdkPair062s {
    SdkWord062s key;
    SdkWord062s value;
} SdkPair062s;

struct SdkNode062s {
    SdkByte062s black;
    SdkNode062s *parent;
    SdkNode062s *left;
    SdkNode062s *right;
    SdkPair062s pair;
};

typedef struct SdkPool062s {
    struct SdkPool062s *next;
    SdkWord062s capacity;
    SdkNode062s *storage;
} SdkPool062s;

typedef struct SdkMap062s {
    SdkPool062s *pools;
    SdkNode062s *free_nodes;
    SdkNode062s *next;
    SdkNode062s *limit;
    SdkNode062s *head;
    SdkWord062s count;
    SdkByte062s allow_duplicates;
    SdkByte062s unknown_0019;
} SdkMap062s;

typedef struct SdkFastMutex062s {
    _Atomic(SdkSigned062s) count;
    _Atomic(void *) owner;
    SdkWord062s depth;
} SdkFastMutex062s;

typedef struct SdkMutex062s SdkMutex062s;
typedef struct SdkMutexMethods062s {
    void (*unknown[2])(SdkMutex062s *);
    void (*acquire)(SdkMutex062s *);
    void (*release)(SdkMutex062s *);
} SdkMutexMethods062s;

struct SdkMutex062s {
    const SdkMutexMethods062s *methods;
    const void *class_tag;
    SdkFastMutex062s fast;
    const void *tag;
    SdkByte062s flags_0018;
    SdkWord062s control;
    SdkWord062s state;
    SdkWord062s unknown_0024;
};

typedef struct SdkPlatform062s {
    void *(*allocate)(SdkWord062s);
    void (*dispose)(void *);
    SdkWord062s (*thread_id)(void);
    void *(*thread_owner)(void);
    void (*wait_arbiter)(_Atomic(SdkSigned062s) *);
    void (*signal_arbiter)(_Atomic(SdkSigned062s) *, SdkWord062s);
} SdkPlatform062s;

typedef struct SdkContextOwner062s {
    SdkByte062s unknown_0000[80];
    SdkMutex062s mutex;
} SdkContextOwner062s;

typedef struct SdkContextInfo062s {
    SdkByte062s unknown_0000[254];
    SdkByte062s enabled;
} SdkContextInfo062s;

typedef struct SdkContext062s {
    SdkByte062s unknown_0000[12];
    SdkContextOwner062s *owner;
} SdkContext062s;

typedef struct SdkQueryContext062s {
    SdkByte062s unknown_0000[144];
    SdkContextInfo062s *info;
} SdkQueryContext062s;

typedef struct SdkContextBinding062s {
    SdkByte062s unknown_0000[12];
    void *context;
} SdkContextBinding062s;

typedef struct SdkContextRecord062s {
    const void *methods;
    SdkContextBinding062s *slots[15];
    SdkByte062s initialized;
} SdkContextRecord062s;

typedef struct SdkContextVector062s {
    SdkContextRecord062s **begin;
    SdkContextRecord062s **end;
    SdkContextRecord062s **limit;
} SdkContextVector062s;

typedef struct SdkContextRoot062s {
    const void *methods;
    SdkContextRecord062s default_record;
    SdkContextVector062s *records;
} SdkContextRoot062s;

typedef struct SdkContextManager062s {
    const void *methods;
    SdkWord062s unknown_0004;
    SdkWord062s unknown_0008;
    SdkWord062s default_index;
    SdkMutex062s mutex;
    SdkMap062s map;
} SdkContextManager062s;

typedef struct SdkEnvironment062s {
    SdkPlatform062s platform;
    SdkByte062s locking_disabled;
    SdkByte062s contexts_enabled;
    SdkContextManager062s *manager;
    SdkContextRoot062s *root;
} SdkEnvironment062s;

extern SdkEnvironment062s sdk_environment062s;
void *sdk_allocate062s(SdkWord062s);
SdkMap062s *sdk_map_initialize062s(SdkMap062s *);
void sdk_map_insert062s(SdkNode062s **, SdkMap062s *, SdkWord062s,
    SdkNode062s *, const SdkPair062s *);
SdkWord062s *sdk_map_value062s(SdkMap062s *, const SdkWord062s *);
void sdk_fast_acquire062s(_Atomic(SdkSigned062s) *);
void sdk_fast_release062s(_Atomic(SdkSigned062s) *);
void sdk_recursive_acquire062s(SdkFastMutex062s *);
void sdk_recursive_release062s(SdkFastMutex062s *);
void sdk_mutex_acquire062s(SdkMutex062s *);
void sdk_mutex_release062s(SdkMutex062s *);

SdkContext062s *sdk_context062s(void);
SdkQueryContext062s *sdk_context_alternate062s(void);

#endif
