#include "pattern_ranges.h"

int fn_004c389c(IntervalRing *ring, unsigned int property)
{
    const PatternUnicodeData *data = pattern_unicode_data();
    if (data == (void *)0 || property >= data->property_count)
        return 0;
    const PatternPropertyIndex *index = &data->properties[property];
    unsigned int remaining = index->count;
    while (remaining != 0) {
        --remaining;
        const PatternCodeRange *range = &data->ranges[index->start + remaining];
        if (!fn_004c2e84(ring, range->first, range->last))
            return 0;
    }
    return 1;
}
