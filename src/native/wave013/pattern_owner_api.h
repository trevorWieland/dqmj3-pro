#ifndef DQMJ3_WAVE013_PATTERN_OWNER_API_H
#define DQMJ3_WAVE013_PATTERN_OWNER_API_H

#include "pattern_outer.h"

void pattern_process_candidates(FixedArena *arena, const PatternRulePrefix *rule, unsigned int *flags,
    const unsigned short *pattern, unsigned int length, const unsigned short *const *candidates, unsigned int count);
extern const unsigned short pattern_empty_text[1];

#endif
