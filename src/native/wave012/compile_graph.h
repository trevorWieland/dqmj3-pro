#ifndef DQMJ3_WAVE012_COMPILE_GRAPH_H
#define DQMJ3_WAVE012_COMPILE_GRAPH_H

#include "label_ops.h"

typedef struct NfaState {
    IntrusiveLink collection;
    IntrusiveLink transitions;
    FixedArena *transition_arena;
    unsigned int identifier;
} NfaState;

typedef struct CompileContext {
    FixedArena *data_arena;
    IntrusiveLink compiled_states;
    FixedArena *state_arena;
    unsigned int source_count;
    NfaState **sources;
} CompileContext;

int fn_007805e4(const IntervalSet *set, unsigned int value);
int fn_004c2d98(IntervalRing *ring, unsigned int point);
int fn_007555f0(IntervalSet *destination, const IntervalSet *source, void *const *target, FixedArena *arena);
int fn_00755720(IntervalSet *destination, const IntervalSet *source, FixedArena *arena);
void fn_004c1edc(CompileContext *context, unsigned char *members);
int fn_004c2744(CompileContext *context, MatchState **state);
void fn_004c1de8(MatchState **result, CompileContext *context, const unsigned char *members);
int fn_004c2494(CompileContext *context, MatchState **state);
int fn_001010c8(const void *left, const void *right, unsigned int bytes);
void *fn_00301a9c(void *destination, const void *source, unsigned int bytes);
void *fn_0017821c(void *destination, const void *source, unsigned int bytes);

_Static_assert(__builtin_offsetof(NfaState, identifier) == 5 * sizeof(void *), "NFA identifier layout");
_Static_assert(__builtin_offsetof(CompileContext, sources) == (sizeof(void *) == 4 ? 20 : 40), "Source table layout");
_Static_assert(sizeof(NfaState) <= 2 * sizeof(FixedArenaBlock), "NFA-state logical budget");

#endif
