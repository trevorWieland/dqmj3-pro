#ifndef FIXTURE058_H
#define FIXTURE058_H

#include "stream058.h"

typedef struct Event058 {
    Word058 kind;
    Word058 bytes;
    Word058 alignment;
    void *memory;
    State058 *published_state;
    const char *message;
    Dispose058 disposer;
    void *context;
} Event058;

typedef struct Heap058 {
    Byte058 *pool;
    Word058 capacity;
    Word058 used;
    Word058 allocations;
    Word058 releases;
    Word058 fail_at;
    Stream058 *stream;
    Word058 reentry;
    State058 *replacement;
    Dispose058 alternate_disposer;
    void *alternate_context;
    Word058 event_count;
    Event058 events[32];
} Heap058;

typedef struct SdkHeap058 SdkHeap058;
typedef struct SdkOperations058 {
    void *(*allocate)(SdkHeap058 *, Word058, Word058);
    void (*dispose)(SdkHeap058 *, void *);
} SdkOperations058;

struct SdkHeap058 {
    const SdkOperations058 *operations;
    Heap058 *context;
};

void fixture_bind058(Heap058 *);
void *fixture_allocate058(void *, Word058, Word058);
void fixture_dispose058(void *, void *);
void fixture_alternate_dispose058(void *, void *);
extern const SdkOperations058 fixture_sdk_operations058;
extern const Word058 fixture_layout058[];

#endif
