#ifndef LIFETIME_FIXTURE062_H
#define LIFETIME_FIXTURE062_H

#include "heap_fixture062.h"
#include "resource062.h"

typedef struct LifetimeHeapFixture062 {
    HeapFixture062 common;
    Resource062 *owner;
    void *observed_scratch;
    Word062 observations;
    Word062 reenter;
    void *replacement;
} LifetimeHeapFixture062;

void fixture_lifetime_dispose062(void *, void *);
extern const SdkHeapOperations062 fixture_lifetime_sdk_operations062;

#endif
