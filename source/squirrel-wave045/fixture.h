#ifndef DQMJ3_SQUIRREL_INITIALIZATION_FIXTURE045_H
#define DQMJ3_SQUIRREL_INITIALIZATION_FIXTURE045_H
#include "initialization.h"

typedef struct SqAllocation045 {
    void *memory;
    SqPrototypeU32 bytes,alignment,active;
} SqAllocation045;

typedef struct SqHeapEvent045 {
    SqPrototypeU32 kind,allocation,bytes,alignment;
} SqHeapEvent045;

typedef struct SqFixtureHeap045 {
    unsigned char *memory;
    SqPrototypeU32 capacity,used,allocations,events,fail_ordinal;
    SqAllocation045 entries[1024];
    SqHeapEvent045 records[2048];
} SqFixtureHeap045;

typedef struct SqSdkHeap045 SqSdkHeap045;
typedef struct SqSdkOperations045 {
    void *(*allocate)(SqSdkHeap045 *,SqPrototypeU32,SqPrototypeU32);
    void (*release)(SqSdkHeap045 *,void *);
} SqSdkOperations045;

struct SqSdkHeap045 {
    const SqSdkOperations045 *operations;
    SqFixtureHeap045 *context;
};

void *sq_fixture_allocate045(void *context,SqPrototypeU32 bytes,SqPrototypeU32 alignment);
void *sq_fixture_resize045(void *context,void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 bytes,SqPrototypeU32 alignment);
void sq_fixture_release045(void *context,void *pointer,SqPrototypeU32 bytes);
extern const SqSdkOperations045 sq_sdk_operations045;
extern const SqPrototypeU32 sq_fixture_layout045[];
extern const SqPrototypeVTable011 sq_fixture_vm_operations045;
extern const SqPrefixObject012 sq_fixture_null045;
#endif
