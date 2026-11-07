#ifndef DQMJ3_WAVE013_DFA_COMPILE_H
#define DQMJ3_WAVE013_DFA_COMPILE_H

#include "pattern_nfa_api.h"
#include "control_compile.h"

CompileContext *fn_004c2c5c(CompileContext *context);
int fn_004c2c80(IntervalRing *destination, const IntervalRing *source);
int fn_006d4080(const IntervalRing *left, const IntervalRing *right);
void fn_0075559c(IntervalSet *set, void *const *destination, FixedArena *owner);
int fn_004c1f60(CompileContext *context, MatchState **state);
int fn_004c2a00(CompileContext *context, FixedArena *arena, const IntrusiveLink *sources,
                NfaState *const *accept);

int pattern_compile_dfa(CompileContext *context, PatternNfaBuilder *builder, FixedArena *arena);
int pattern_match_dfa(const CompileContext *context, MatchCursor *cursor, const unsigned short *text);

#endif
