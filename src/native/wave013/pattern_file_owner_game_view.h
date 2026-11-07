#ifndef DQMJ3_WAVE013_FILE_OWNER_GAME_VIEW_H
#define DQMJ3_WAVE013_FILE_OWNER_GAME_VIEW_H

#include "pattern_file_owner_view.h"

typedef struct PatternGameFilterOwner {
    PatternFileOwner *owner;
} PatternGameFilterOwner;

void fn_00246e68(PatternGameFilterOwner *filter);
int fn_00246e00(PatternGameFilterOwner *filter);
void fn_00246e74(PatternGameFilterOwner *filter);
int fn_004c3b1c(const unsigned short *text);
int fn_006b5424(PatternGameFilterOwner *filter, const unsigned short *text);
int pattern_game_filter_check(FixedArena *arena, PatternGameFilterOwner *filter, const unsigned short *text);

#endif
