#include "pattern_unicode.h"

static const PatternUnicodeData *active_data;

int pattern_bind_unicode_data(const PatternUnicodeData *data)
{
    if (data == (void *)0 || data->case_groups == (void *)0 || data->properties == (void *)0 ||
        data->ranges == (void *)0 || data->case_group_count == 0 || data->property_count != 132)
        return 0;
    for (unsigned int index = 1; index < data->case_group_count; ++index) {
        if (data->case_groups[index - 1].characters[0] >= data->case_groups[index].characters[0])
            return 0;
    }
    for (unsigned int index = 0; index < data->range_count; ++index) {
        if (data->ranges[index].first > data->ranges[index].last)
            return 0;
    }
    for (unsigned int index = 0; index < data->property_count; ++index) {
        unsigned int start = data->properties[index].start;
        unsigned int count = data->properties[index].count;
        if (start > data->range_count || count > data->range_count - start)
            return 0;
    }
    active_data = data;
    return 1;
}

const PatternUnicodeData *pattern_unicode_data(void)
{
    return active_data;
}

const PatternCaseGroup *fn_004c35b0(unsigned int character)
{
    const PatternUnicodeData *data = pattern_unicode_data();
    if (data == (void *)0)
        return (void *)0;
    unsigned int first = 0;
    unsigned int end = data->case_group_count;
    while (first < end) {
        unsigned int middle = first + (end - first) / 2;
        const PatternCaseGroup *group = &data->case_groups[middle];
        unsigned int value = group->characters[0];
        if (value == character)
            return group;
        if (value < character)
            first = middle + 1;
        else
            end = middle;
    }
    return (void *)0;
}
