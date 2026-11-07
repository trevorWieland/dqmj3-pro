#ifndef DQMJ3_WAVE010_MATCH_STATE_H
#define DQMJ3_WAVE010_MATCH_STATE_H

#include "../wave009/interval_set.h"

typedef IntrusiveLink MatchLink;

typedef struct MatchStateData {
    MatchLink transitions;
    struct FixedArena *transition_arena;
    MatchLink pending;
    struct FixedArena *pending_arena;
    struct FixedArena *data_arena;
    unsigned char *members;
    unsigned int member_count;
    signed char result;
} MatchStateData;

typedef struct MatchState {
    MatchLink collection;
    MatchStateData data;
} MatchState;

typedef struct MatchCursor {
    MatchState *state;
} MatchCursor;

typedef struct MatchContext {
    unsigned int unknown_00;
    MatchState *initial;
} MatchContext;

typedef struct MatchEdge {
    MatchLink link;
    IntervalSet label;
} MatchEdge;

int fn_00780578(const IntervalSet *set, unsigned int value);
void fn_004becdc(MatchCursor *cursor, unsigned int flags);
int fn_004bed30(MatchCursor *cursor, const MatchContext *context, const unsigned short *text);

#endif
