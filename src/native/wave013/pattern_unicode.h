#ifndef DQMJ3_WAVE013_PATTERN_UNICODE_H
#define DQMJ3_WAVE013_PATTERN_UNICODE_H

typedef struct PatternCaseGroup {
    unsigned short characters[4];
} PatternCaseGroup;

typedef struct PatternPropertyIndex {
    unsigned int start;
    unsigned int count;
} PatternPropertyIndex;

typedef struct PatternCodeRange {
    unsigned short first;
    unsigned short last;
} PatternCodeRange;

typedef struct PatternUnicodeData {
    const PatternCaseGroup *case_groups;
    unsigned int case_group_count;
    const PatternPropertyIndex *properties;
    unsigned int property_count;
    const PatternCodeRange *ranges;
    unsigned int range_count;
} PatternUnicodeData;

int pattern_bind_unicode_data(const PatternUnicodeData *data);
const PatternUnicodeData *pattern_unicode_data(void);
const PatternCaseGroup *fn_004c35b0(unsigned int character);

_Static_assert(sizeof(PatternCaseGroup) == 8, "Case group data record");
_Static_assert(sizeof(PatternPropertyIndex) == 8, "Property index data record");
_Static_assert(sizeof(PatternCodeRange) == 4, "Range data record");

#endif
