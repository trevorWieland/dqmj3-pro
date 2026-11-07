#include "lifetime_fixture062.h"

void fixture_lifetime_dispose062(void *context, void *memory)
{
    LifetimeHeapFixture062 *heap = context;
    heap->observed_scratch = heap->owner->scratch;
    ++heap->observations;
    if (heap->reenter != 0)
        heap->owner->scratch = heap->replacement;
    fixture_heap_dispose062(&heap->common, memory);
}

static void *fixture_lifetime_sdk_allocate062(SdkHeapFixture062 *heap,
    Word062 bytes, Word062 alignment)
{
    return fixture_heap_allocate062(heap->context, bytes, alignment);
}

static void fixture_lifetime_sdk_dispose062(SdkHeapFixture062 *heap, void *memory)
{
    fixture_lifetime_dispose062(heap->context, memory);
}

const SdkHeapOperations062 fixture_lifetime_sdk_operations062 = {
    fixture_lifetime_sdk_allocate062, fixture_lifetime_sdk_dispose062
};

#define O(member) ((Word062)__builtin_offsetof(LifetimeHeapFixture062, member))

const Word062 fixture_lifetime_layout062[] = {
    sizeof(LifetimeHeapFixture062), O(common), O(owner), O(observed_scratch),
    O(observations), O(reenter), O(replacement)
};
