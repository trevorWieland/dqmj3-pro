#ifndef HEAP_FIXTURE062_H
#define HEAP_FIXTURE062_H

#include "records062.h"

typedef struct HeapEvent062 {
    Word062 kind;
    Word062 bytes;
    Word062 alignment;
    void *memory;
    ResourceRecord062 *begin;
    ResourceRecord062 *end;
    ResourceRecord062 *limit;
} HeapEvent062;

typedef struct HeapFixture062 {
    Byte062 *pool;
    Word062 capacity;
    Word062 used;
    Word062 allocations;
    Word062 releases;
    Word062 fail_at;
    Word062 event_count;
    ResourceRecordVector062 *vector;
    HeapEvent062 events[64];
} HeapFixture062;

typedef struct SdkHeapFixture062 SdkHeapFixture062;
typedef struct SdkHeapOperations062 {
    void *(*allocate)(SdkHeapFixture062 *, Word062, Word062);
    void (*dispose)(SdkHeapFixture062 *, void *);
} SdkHeapOperations062;

struct SdkHeapFixture062 {
    const SdkHeapOperations062 *operations;
    HeapFixture062 *context;
};

void *fixture_heap_allocate062(void *, Word062, Word062);
void fixture_heap_dispose062(void *, void *);
extern const SdkHeapOperations062 fixture_sdk_operations062;

#endif
