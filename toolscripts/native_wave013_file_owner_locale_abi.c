#include "native_wave013_file_owner_locale_fixture.h"

const unsigned int pattern_owner_locale_layout_values[] = {
    sizeof(void *), sizeof(PatternOwnerLocaleServices),
    __builtin_offsetof(PatternOwnerLocaleServices, read_region), __builtin_offsetof(PatternOwnerLocaleServices, read_language),
    __builtin_offsetof(PatternOwnerLocaleServices, read_failure), __builtin_offsetof(PatternOwnerLocaleServices, context),
    sizeof(PatternOwnerLocaleFixture), __builtin_offsetof(PatternOwnerLocaleFixture, watched_count),
    __builtin_offsetof(PatternOwnerLocaleFixture, observations), __builtin_offsetof(PatternOwnerLocaleFixture, observation_kinds),
    __builtin_offsetof(PatternOwnerLocaleFixture, observation_count), sizeof(int)
};
