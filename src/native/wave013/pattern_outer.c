#include "pattern_owner_api.h"

const unsigned short pattern_empty_text[1] = {0};

void pattern_process_candidates(FixedArena *arena, const PatternRulePrefix *rule, unsigned int *flags,
    const unsigned short *pattern, unsigned int length, const unsigned short *const *candidates, unsigned int count)
{
    fn_004c3b08(arena);
    fn_004c3974(arena, rule->scratch);
    PatternLexer *lexer = fn_004c39c8(arena, 2);
    if (lexer != (void *)0)
        fn_004bfeb8(lexer);
    PatternLiteralMatcher *literal = fn_004c39c8(arena, 1);
    if (literal != (void *)0)
        fn_004c0380(literal);
    PatternNfaBuilder *builder = fn_004c39c8(arena, 2);
    if (builder != (void *)0)
        fn_004c1dc0(builder);
    CompileContext *compiled = fn_004c39c8(arena, 2);
    if (compiled != (void *)0)
        fn_004c2c5c(compiled);
    MatchCursor *cursor = fn_004c39c8(arena, 1);
    if (cursor != (void *)0)
        cursor->state = (void *)0;
    if (fn_004befe0(lexer, arena, pattern, length) != 0)
        return;
    int literal_mode = fn_004c0060(literal, lexer, pattern_empty_text);
    unsigned int mask = rule->bit_index >= 0 && rule->bit_index < 32 ? 1u << rule->bit_index : 0;
    if (literal_mode != 0) {
        for (unsigned int index = 0; index < count; ++index) {
            if ((flags[index] & mask) == 0 && fn_004c0060(literal, lexer, candidates[index]) == 1)
                flags[index] |= mask;
        }
        return;
    }
    if (fn_004c1d04(builder, arena, lexer) != 0)
        return;
    NfaState *accept = builder->accept;
    if (!fn_004c2a00(compiled, arena, &builder->states.head, &accept))
        return;
    for (unsigned int index = 0; index < count; ++index) {
        if ((flags[index] & mask) == 0 && pattern_match_dfa(compiled, cursor, candidates[index]))
            flags[index] |= mask;
    }
}

void fn_004c3c20(const PatternRulePrefix *rule, unsigned int *flags, const unsigned short *pattern,
                 unsigned int length, const unsigned short *const *candidates, unsigned int count)
{
    FixedArena arena;
    pattern_process_candidates(&arena, rule, flags, pattern, length, candidates, count);
}
