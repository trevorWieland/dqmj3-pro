#ifndef DQMJ3_WAVE010_MATCH_STATE_H
#define DQMJ3_WAVE010_MATCH_STATE_H

#include "../wave009/interval_set.h"

typedef struct MatchLink {
    unsigned int unknown_00;
    struct MatchLink *next;
} MatchLink;

typedef struct MatchState {
    unsigned int unknown_00[2];
    MatchLink transitions;
    unsigned int unknown_10[7];
    signed char result;
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
