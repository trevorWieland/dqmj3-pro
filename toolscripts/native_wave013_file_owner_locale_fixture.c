#include "native_wave013_file_owner_locale_fixture.h"

static void observe(PatternOwnerLocaleFixture *fixture, unsigned char kind)
{
    unsigned int index = fixture->observation_count++;
    if (index < 4) {
        fixture->observations[index] = (unsigned int)*fixture->watched_count;
        fixture->observation_kinds[index] = kind;
    }
}

int pattern_owner_fixture_region(void *context, unsigned char *region)
{
    PatternOwnerLocaleFixture *fixture = context;
    unsigned int index = fixture->region_calls < 1 ? 0 : 1;
    ++fixture->region_calls;
    observe(fixture, 1);
    *region = fixture->regions[index];
    return 0;
}

int pattern_owner_fixture_language(void *context, unsigned char *language)
{
    PatternOwnerLocaleFixture *fixture = context;
    ++fixture->language_calls;
    observe(fixture, 2);
    *language = fixture->language;
    return 0;
}

void pattern_owner_fixture_cfg_failure(void *context, int result)
{
    PatternOwnerLocaleFixture *fixture = context;
    (void)result;
    ++fixture->failure_calls;
}
