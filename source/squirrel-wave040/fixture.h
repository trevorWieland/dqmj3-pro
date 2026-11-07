#ifndef DQMJ3_SQUIRREL_STARTUP040_FIXTURE_H
#define DQMJ3_SQUIRREL_STARTUP040_FIXTURE_H
#include "startup.h"

typedef struct SqStartupFixtureAllocation040 {
    void *memory;
    SqPrototypeU32 bytes,alignment;
} SqStartupFixtureAllocation040;

typedef struct SqStartupFixtureHeap040 {
    unsigned char *memory;
    SqPrototypeU32 capacity,used,allocations;
    SqStartupFixtureAllocation040 entries[16];
} SqStartupFixtureHeap040;

typedef struct SqStartupSdkHeap040 SqStartupSdkHeap040;
typedef struct SqStartupSdkOperations040 {
    void *(*allocate)(SqStartupSdkHeap040 *,SqPrototypeU32,SqPrototypeU32);
    void (*release)(SqStartupSdkHeap040 *,void *);
} SqStartupSdkOperations040;

struct SqStartupSdkHeap040 {
    const SqStartupSdkOperations040 *operations;
    SqStartupFixtureHeap040 *context;
};

void *sq_startup_fixture_allocate040(void *,SqPrototypeU32,SqPrototypeU32);
extern const SqStartupSdkOperations040 sq_startup_sdk_operations040;
extern const SqPrototypeVTable011 sq_startup_fixture_vm_operations040;
extern const SqPrefixObject012 sq_startup_fixture_null040;
extern const SqPrototypeU32 sq_startup_layout040[];
#endif
