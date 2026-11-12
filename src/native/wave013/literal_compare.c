#include "pattern_outer.h"
#include "pattern_unicode.h"


PatternLiteralMatcher *fn_004c0380(PatternLiteralMatcher *matcher)
{
    matcher->text = (void *)0;
    matcher->length = 0;
    return matcher;
}

/* wide_string_length -- 0x00100b58, 18 bytes, Thumb, 244 call sites, draft.
 *
 * Returns the number of 16-bit units before the NUL terminator. The pattern
 * matcher calls it on its own u16 text; the prototype lives in pattern_outer.h.
 *
 * Evidence: the loop body in the original bytes and 244 call sites.
 */
unsigned int wide_string_length(const unsigned short *text)
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
