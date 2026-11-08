#include "sdk062s.h"

#define OFFSET(type, field) ((SdkWord062s)__builtin_offsetof(type, field))

typedef struct SdkFixtureHeap062s {
    SdkByte062s *storage;
    SdkWord062s capacity;
    SdkWord062s used;
    SdkWord062s calls;
    SdkWord062s requests[64];
} SdkFixtureHeap062s;

SdkFixtureHeap062s *fixture_sdk_heap062s;
void *fixture_sdk_owner062s;
SdkWord062s fixture_sdk_numeric_id062s;
SdkWord062s fixture_sdk_owner_calls062s;
SdkWord062s fixture_sdk_id_calls062s;
#if defined(_WIN32)
SdkWord062s (*fixture_sdk_get_thread_id062s)(void);
void *(*fixture_sdk_tls_get062s)(SdkWord062s);
SdkWord062s fixture_sdk_tls_index062s;
#endif

const SdkMutexMethods062s fixture_sdk_mutex_methods062s = {
    {0, 0}, sdk_mutex_acquire062s, sdk_mutex_release062s
};

void *fixture_sdk_allocate062s(SdkWord062s bytes)
{
    SdkFixtureHeap062s *heap = fixture_sdk_heap062s;
    SdkWord062s offset = (heap->used + 15u) & ~15u;
    if (offset > heap->capacity || bytes > heap->capacity - offset || heap->calls >= 64)
        __builtin_trap();
    heap->requests[heap->calls++] = bytes;
    heap->used = offset + bytes;
    return heap->storage + offset;
}

void fixture_sdk_dispose062s(void *pointer)
{
    (void)pointer;
    __builtin_trap();
}

void *fixture_sdk_thread_owner062s(void)
{
    fixture_sdk_owner_calls062s += 1;
#if defined(_WIN32)
    return fixture_sdk_tls_get062s(fixture_sdk_tls_index062s);
#else
    return fixture_sdk_owner062s;
#endif
}

SdkWord062s fixture_sdk_thread_id062s(void)
{
    fixture_sdk_id_calls062s += 1;
#if defined(_WIN32)
    return fixture_sdk_get_thread_id062s();
#else
    return fixture_sdk_numeric_id062s;
#endif
}

void fixture_sdk_wait062s(_Atomic(SdkSigned062s) *pointer)
{
    (void)pointer;
    __builtin_trap();
}

void fixture_sdk_signal062s(_Atomic(SdkSigned062s) *pointer, SdkWord062s count)
{
    (void)pointer;
    (void)count;
    __builtin_trap();
}

const SdkWord062s fixture_sdk_layout062s[] = {
    sizeof(void *), sizeof(SdkNode062s), OFFSET(SdkNode062s, parent),
    OFFSET(SdkNode062s, left), OFFSET(SdkNode062s, right), OFFSET(SdkNode062s, pair),
    sizeof(SdkPool062s), OFFSET(SdkPool062s, capacity), OFFSET(SdkPool062s, storage),
    sizeof(SdkMap062s), OFFSET(SdkMap062s, head), OFFSET(SdkMap062s, count),
    OFFSET(SdkMap062s, allow_duplicates), sizeof(SdkFixtureHeap062s),
    OFFSET(SdkFixtureHeap062s, capacity), OFFSET(SdkFixtureHeap062s, used),
    OFFSET(SdkFixtureHeap062s, calls), OFFSET(SdkFixtureHeap062s, requests),
    sizeof(SdkFastMutex062s), OFFSET(SdkFastMutex062s, owner),
    OFFSET(SdkFastMutex062s, depth), sizeof(SdkMutex062s), OFFSET(SdkMutex062s, fast), sizeof(SdkContextManager062s),
    OFFSET(SdkContextManager062s, default_index), OFFSET(SdkContextManager062s, mutex),
    OFFSET(SdkContextManager062s, map), sizeof(SdkContextRoot062s),
    OFFSET(SdkContextRoot062s, default_record), OFFSET(SdkContextRoot062s, records),
    sizeof(SdkContextRecord062s), OFFSET(SdkContextRecord062s, slots),
    OFFSET(SdkContextBinding062s, context), OFFSET(SdkContext062s, owner),
    OFFSET(SdkQueryContext062s, info), OFFSET(SdkContextOwner062s, mutex),
    OFFSET(SdkEnvironment062s, contexts_enabled), OFFSET(SdkEnvironment062s, manager),
    OFFSET(SdkEnvironment062s, root)
};
