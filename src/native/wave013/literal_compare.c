#include "pattern_outer.h"
#include "pattern_unicode.h"

PatternLiteralMatcher *fn_004c0380(PatternLiteralMatcher *matcher)
{
    matcher->text = (void *)0;
    matcher->length = 0;
    return matcher;
}

unsigned int fn_00100b58(const unsigned short *text)
{
    unsigned int length = 0;
    while (*text++ != 0)
        ++length;
    return length;
}

int fn_004bffa8(const PatternLiteralMatcher *matcher, PatternToken **cursor, unsigned int offset, unsigned int count)
{
    unsigned int end = offset + count;
    while (offset < end) {
        unsigned short candidate = matcher->text[offset];
        if (candidate != (*cursor)->value.character) {
            const PatternCaseGroup *group = fn_004c35b0((*cursor)->value.character);
            unsigned int index = 1;
            if (group == (void *)0)
                return 0;
            while (index != 4 && group->characters[index] != 0 && candidate != group->characters[index])
                ++index;
            if (index == 4 || group->characters[index] == 0)
                return 0;
        }
        ++offset;
        *cursor = (PatternToken *)(*cursor)->link.next;
    }
    return 1;
}
