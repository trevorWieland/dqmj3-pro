#include "effect_shader.h"

typedef struct EffectFixtureAllocator065 {
    EffectAllocator065 base;
    void *expected;
    void *last_released;
    unsigned int release_count;
    unsigned int invalid_release;
} EffectFixtureAllocator065;

static void effect_fixture_release065(EffectAllocator065 *allocator, void *memory);

static const EffectAllocatorOperations065 effect_fixture_operations065 = {
    0, 0, 0, effect_fixture_release065
};

static EffectFixtureAllocator065 effect_fixture_allocator065 = {
    { &effect_fixture_operations065 }, 0, 0, 0, 0
};

static void effect_fixture_release065(EffectAllocator065 *allocator, void *memory)
{
    EffectFixtureAllocator065 *fixture = (EffectFixtureAllocator065 *)allocator;
    if (memory != fixture->expected || fixture->release_count != 0)
        fixture->invalid_release = 1;
    fixture->last_released = memory;
    fixture->release_count += 1;
}

EffectAllocator065 *effect_fixture_allocator065_reset(void *expected)
{
    effect_fixture_allocator065.expected = expected;
    effect_fixture_allocator065.last_released = 0;
    effect_fixture_allocator065.release_count = 0;
    effect_fixture_allocator065.invalid_release = 0;
    return &effect_fixture_allocator065.base;
}

unsigned int effect_fixture_allocator065_releases(void)
{
    return effect_fixture_allocator065.release_count;
}

unsigned int effect_fixture_allocator065_invalid(void)
{
    return effect_fixture_allocator065.invalid_release;
}

void *effect_fixture_allocator065_last(void)
{
    return effect_fixture_allocator065.last_released;
}
