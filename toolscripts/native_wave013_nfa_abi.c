#include "../src/native/wave013/pattern_nfa_api.h"

const unsigned int pattern_nfa_layout_values[] = {
    sizeof(void *), sizeof(FixedArenaBlock), sizeof(PatternLexer), sizeof(PatternToken),
    sizeof(NfaState), sizeof(PatternNfaBuilder), sizeof(PatternNfaCloneEntry), sizeof(PatternNfaCloneMap),
    sizeof(PatternUnicodeData), __builtin_offsetof(PatternNfaBuilder, cursor),
    __builtin_offsetof(PatternNfaBuilder, states), __builtin_offsetof(PatternNfaBuilder, accept),
    __builtin_offsetof(PatternNfaBuilder, transition_arena), __builtin_offsetof(PatternNfaBuilder, group_depth),
    __builtin_offsetof(NfaState, collection), __builtin_offsetof(NfaState, transitions),
    __builtin_offsetof(NfaState, transition_arena), __builtin_offsetof(NfaState, identifier),
    __builtin_offsetof(MatchEdge, label), sizeof(MatchEdge),
    __builtin_offsetof(PatternNfaCloneEntry, original), __builtin_offsetof(PatternNfaCloneEntry, replacement),
    __builtin_offsetof(PatternUnicodeData, case_groups), __builtin_offsetof(PatternUnicodeData, case_group_count),
    __builtin_offsetof(PatternUnicodeData, properties), __builtin_offsetof(PatternUnicodeData, property_count),
    __builtin_offsetof(PatternUnicodeData, ranges), __builtin_offsetof(PatternUnicodeData, range_count),
    __builtin_offsetof(IntervalNode, first), __builtin_offsetof(IntervalNode, last), sizeof(IntervalNode),
    sizeof(PatternNfaStateRing), sizeof(PatternNfaInput), __builtin_offsetof(PatternNfaInput, length)
};
