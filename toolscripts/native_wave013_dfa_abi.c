#include "../src/native/wave013/dfa_compile.h"

const unsigned int pattern_dfa_layout_values[] = {
    sizeof(void *), sizeof(CompileContext), __builtin_offsetof(CompileContext, data_arena),
    __builtin_offsetof(CompileContext, compiled_states), __builtin_offsetof(CompileContext, state_arena),
    __builtin_offsetof(CompileContext, source_count), __builtin_offsetof(CompileContext, sources),
    sizeof(MatchState), __builtin_offsetof(MatchState, data),
    __builtin_offsetof(MatchStateData, members), __builtin_offsetof(MatchStateData, member_count),
    __builtin_offsetof(MatchStateData, result), sizeof(MatchContext),
    __builtin_offsetof(MatchContext, initial), sizeof(MatchCursor), sizeof(IntervalRing),
    sizeof(MatchEdge), sizeof(FixedArenaBlock), (11u * 4u + 15u) >> 4, (11u + 15u) >> 4
};
