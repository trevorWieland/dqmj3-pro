#include "../src/native/wave013/pattern_owner_api.h"

const unsigned int pattern_outer_layout_values[] = {
    sizeof(void *), sizeof(FixedArena), __builtin_offsetof(FixedArena, occupied),
    __builtin_offsetof(FixedArena, storage), __builtin_offsetof(FixedArena, next), sizeof(FixedArenaBlock),
    sizeof(PatternRulePrefix), __builtin_offsetof(PatternRulePrefix, bit_index), __builtin_offsetof(PatternRulePrefix, scratch),
    sizeof(PatternLexer), sizeof(PatternNfaBuilder), sizeof(CompileContext), sizeof(MatchState), sizeof(MatchCursor),
    sizeof(PatternLiteralMatcher), sizeof(unsigned int),
    (sizeof(PatternLexer)+sizeof(FixedArenaBlock)-1)/sizeof(FixedArenaBlock),
    (sizeof(PatternNfaBuilder)+sizeof(FixedArenaBlock)-1)/sizeof(FixedArenaBlock),
    (sizeof(CompileContext)+sizeof(FixedArenaBlock)-1)/sizeof(FixedArenaBlock),
    (sizeof(MatchCursor)+sizeof(FixedArenaBlock)-1)/sizeof(FixedArenaBlock)
};
