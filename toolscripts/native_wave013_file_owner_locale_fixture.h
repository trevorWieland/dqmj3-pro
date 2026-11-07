#ifndef DQMJ3_WAVE013_OWNER_LOCALE_FIXTURE_H
#define DQMJ3_WAVE013_OWNER_LOCALE_FIXTURE_H

#include "../src/native/wave013/pattern_file_owner_locale.h"

typedef struct PatternOwnerLocaleFixture {
    unsigned char regions[2];
    unsigned char language;
    unsigned char reserved;
    unsigned int region_calls;
    unsigned int language_calls;
    unsigned int failure_calls;
    int *watched_count;
    unsigned int observations[4];
    unsigned char observation_kinds[4];
    unsigned int observation_count;
} PatternOwnerLocaleFixture;

int pattern_owner_fixture_region(void *context, unsigned char *region);
int pattern_owner_fixture_language(void *context, unsigned char *language);
void pattern_owner_fixture_cfg_failure(void *context, int result);

#endif
