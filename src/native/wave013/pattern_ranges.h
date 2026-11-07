#ifndef DQMJ3_WAVE013_PATTERN_RANGES_H
#define DQMJ3_WAVE013_PATTERN_RANGES_H

#include "../wave009/interval_set.h"
#include "../wave012/fixed_arena.h"
#include "pattern_unicode.h"

int fn_004c2e84(IntervalRing *ring, unsigned int first, unsigned int last);
int fn_004c3028(IntervalRing *destination, const IntervalRing *source);
int fn_004c33dc(IntervalRing *destination, const IntervalRing *source);
int fn_004c3070(IntervalRing *ring);
int fn_004c389c(IntervalRing *ring, unsigned int property);

#endif
