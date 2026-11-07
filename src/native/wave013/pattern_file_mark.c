#include "pattern_file_view.h"

int fn_004c4420(const PatternFileRuleView *rule, const unsigned short *text, int maximum)
{
    (void)rule;
    for (int index = 0; index < maximum; ++index) {
        unsigned short value = text[index];
        if (value == 0)
            return 0;
        if (value == 0x40 || value == 0xff20)
            return 1;
    }
    return 0;
}
