#ifndef DQMJ3_WAVE013_PATTERN_NFA_H
#define DQMJ3_WAVE013_PATTERN_NFA_H

#include "pattern_tokens.h"
#include "pattern_unicode.h"
#include "pattern_ranges.h"
#include "../wave012/compile_graph.h"

typedef struct PatternNfaStateRing {
    IntrusiveLink head;
    FixedArena *owner;
} PatternNfaStateRing;

typedef struct PatternNfaBuilder {
    PatternToken *cursor;
    PatternNfaStateRing states;
    NfaState *accept;
    FixedArena *transition_arena;
    unsigned int group_depth;
} PatternNfaBuilder;

typedef struct PatternNfaCloneEntry {
    IntrusiveLink link;
    NfaState *original;
    NfaState *replacement;
} PatternNfaCloneEntry;

typedef struct PatternNfaCloneMap {
    IntrusiveLink entries;
    FixedArena *entry_arena;
    PatternNfaStateRing *states;
    FixedArena *transition_arena;
} PatternNfaCloneMap;

void fn_004c387c(PatternNfaCloneMap *map, PatternNfaStateRing *states, FixedArena *arena);
void fn_004c3834(PatternNfaCloneEntry **result, PatternNfaCloneMap *map, NfaState *const *original);
int fn_004c360c(PatternNfaCloneMap *map, NfaState **result, NfaState *const *start, NfaState *const *stop);
void pattern_nfa_release_map(PatternNfaCloneMap *map);
void fn_00755818(MatchEdge **result, IntervalRing *ring);

PatternNfaBuilder *fn_004c1dc0(PatternNfaBuilder *builder);
int fn_004c1d04(PatternNfaBuilder *builder, FixedArena *arena, PatternLexer *lexer);
int fn_004c10f4(PatternNfaBuilder *builder, IntervalRing *ranges, unsigned int character);
int fn_004c04f0(PatternNfaBuilder *builder, IntervalRing *ranges);
void fn_004c0488(NfaState **result, PatternNfaBuilder *builder);
int fn_004c0390(PatternNfaBuilder *builder, NfaState **result, NfaState **start);
int fn_004c0b44(PatternNfaBuilder *builder, NfaState **result, NfaState **start);

void fn_0075573c(IntervalSet *set, void *const *destination);
void fn_00755750(IntervalSet *set, void *const *destination, unsigned char control_bit);
void fn_00755768(IntervalSet *set, void *const *destination, FixedArena *owner);
void fn_00755780(IntervalSet *set, void *const *destination, unsigned short character);
MatchEdge *pattern_nfa_new_transition(NfaState *state);
int pattern_nfa_epsilon(NfaState *state, NfaState *destination);
int pattern_nfa_primary(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int pattern_nfa_continuation(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);

int fn_004c0dac(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c116c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c117c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c13f8(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c14a8(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1510(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c15d4(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c15e4(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c15ec(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1658(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1660(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1674(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c16dc(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1970(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1a9c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1b08(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1b10(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1ba0(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);
int fn_004c1c5c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end);

_Static_assert(sizeof(PatternNfaCloneEntry) == sizeof(FixedArenaBlock), "Clone entry logical budget");
_Static_assert(sizeof(PatternNfaCloneMap) == 5 * sizeof(void *), "Clone map pointer layout");
_Static_assert(sizeof(PatternNfaBuilder) <= 2 * sizeof(FixedArenaBlock), "Builder logical budget");
_Static_assert(__builtin_offsetof(PatternNfaBuilder, group_depth) == 6 * sizeof(void *), "Builder depth");
_Static_assert(sizeof(NfaState) <= 2 * sizeof(FixedArenaBlock), "NFA state logical budget");

#endif
