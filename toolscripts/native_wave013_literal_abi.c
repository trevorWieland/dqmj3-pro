#include "../src/native/wave013/pattern_outer.h"

const unsigned int pattern_literal_layout_values[] = {
    sizeof(void *), sizeof(PatternLiteralMatcher),
    __builtin_offsetof(PatternLiteralMatcher, text), __builtin_offsetof(PatternLiteralMatcher, length),
    sizeof(PatternRulePrefix), __builtin_offsetof(PatternRulePrefix, bit_index), __builtin_offsetof(PatternRulePrefix, scratch),
    sizeof(FixedArena), __builtin_offsetof(FixedArena, occupied), __builtin_offsetof(FixedArena, storage),
    __builtin_offsetof(FixedArena, next), sizeof(FixedArenaBlock), sizeof(PatternToken), sizeof(PatternLexer),
    __builtin_offsetof(IntrusiveLink, previous), __builtin_offsetof(IntrusiveLink, next)
};
