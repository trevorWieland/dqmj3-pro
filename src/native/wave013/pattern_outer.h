#ifndef DQMJ3_WAVE013_PATTERN_OUTER_H
#define DQMJ3_WAVE013_PATTERN_OUTER_H

#include "pattern_tokens.h"
#include "dfa_compile.h"

enum {
    PATTERN_TOKEN_WILDCARD = 7,
    PATTERN_TOKEN_ZERO_OR_MORE = 12
};

typedef struct PatternLiteralMatcher {
    const unsigned short *text;
    unsigned int length;
} PatternLiteralMatcher;

typedef struct PatternRulePrefix {
    unsigned char opaque_prefix[27];
    signed char bit_index;
    unsigned char opaque_middle[4];
    void *scratch;
} PatternRulePrefix;

PatternLiteralMatcher *fn_004c0380(PatternLiteralMatcher *matcher);
unsigned int fn_00100b58(const unsigned short *text);
int fn_004bffa8(const PatternLiteralMatcher *matcher, PatternToken **cursor, unsigned int offset, unsigned int count);
int fn_004c0060(PatternLiteralMatcher *matcher, const PatternLexer *lexer, const unsigned short *text);
void fn_004c3b08(FixedArena *arena);
void fn_004c3974(FixedArena *arena, void *scratch);
void *fn_00158f6c(void *destination, unsigned int bytes);
void *fn_00301f50(void *destination, unsigned int bytes);
void fn_004c3c20(const PatternRulePrefix *rule, unsigned int *flags, const unsigned short *pattern,
                 unsigned int length, const unsigned short *const *candidates, unsigned int count);

_Static_assert(sizeof(PatternLiteralMatcher) <= sizeof(FixedArenaBlock), "Literal matcher logical budget");
_Static_assert(__builtin_offsetof(PatternRulePrefix, bit_index) == 27, "Rule signed bit index");
_Static_assert(__builtin_offsetof(PatternRulePrefix, scratch) == 32, "Rule scratch pointer");

#endif
