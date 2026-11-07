#include "pattern_file_owner_game_view.h"
#include "pattern_file_owner_services.h"

int fn_006b5424(PatternGameFilterOwner *filter, const unsigned short *text)
{
    unsigned int flag = 0;
    filter->owner->operations->apply(filter->owner, &flag, 1, &text, 1);
    return flag != 0 || fn_004c3b1c(text) > 5;
}

int pattern_game_filter_check(FixedArena *arena, PatternGameFilterOwner *filter, const unsigned short *text)
{
    unsigned int flag = 0;
    pattern_owner_apply(arena, filter->owner, &flag, 1, &text, 1);
    return flag != 0 || fn_004c3b1c(text) > 5;
}
