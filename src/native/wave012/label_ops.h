#ifndef DQMJ3_WAVE012_LABEL_OPS_H
#define DQMJ3_WAVE012_LABEL_OPS_H

#include "fixed_arena.h"
#include "../wave010/match_state.h"

enum {
    RANGE_NODE_BLOCKS = 1,
    TRANSITION_BLOCKS = 2,
    COMPILED_STATE_BLOCKS = 3
};

void fn_007555b4(IntervalSet *set, void *const *destination, unsigned short character);
void fn_007555cc(IntervalSet *set);
void fn_00755798(IntervalSet *set);
IntervalSet *fn_007557bc(IntervalSet *set);
void fn_004bff74(MatchStateData *data);
int fn_004bfedc(MatchStateData *data, FixedArena *arena, unsigned int members, int clear);

_Static_assert(sizeof(IntervalNode) <= RANGE_NODE_BLOCKS * sizeof(FixedArenaBlock), "range-node logical budget");
_Static_assert(sizeof(MatchEdge) <= TRANSITION_BLOCKS * sizeof(FixedArenaBlock), "transition logical budget");
_Static_assert(sizeof(MatchState) <= COMPILED_STATE_BLOCKS * sizeof(FixedArenaBlock), "compiled-state logical budget");

#endif
