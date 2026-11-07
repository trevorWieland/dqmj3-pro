#ifndef DQMJ3_WAVE013_PATTERN_TOKENS_H
#define DQMJ3_WAVE013_PATTERN_TOKENS_H

#include "../wave012/fixed_arena.h"
#include "../wave009/interval_set.h"

typedef union PatternTokenValue {
    unsigned short character;
    unsigned char control_bit;
    unsigned short minimum;
} PatternTokenValue;

typedef struct PatternToken {
    IntrusiveLink link;
    unsigned char kind;
    PatternTokenValue value;
    unsigned short maximum;
} PatternToken;

typedef struct PatternLexer {
    IntrusiveLink tokens;
    FixedArena *arena;
    const unsigned short *text;
    unsigned int position;
    unsigned int length;
    int class_depth;
} PatternLexer;

enum {
    PATTERN_TOKEN_LITERAL = 0,
    PATTERN_TOKEN_CONTROL = 17,
    PATTERN_TOKEN_END = 18
};

PatternLexer *fn_004bfeb8(PatternLexer *lexer);
int fn_004befe0(PatternLexer *lexer, FixedArena *arena, const unsigned short *text, unsigned int length);
int fn_001006b6(const unsigned short *left, const unsigned short *right, unsigned int length);
unsigned int fn_004c3904(const unsigned short *text, unsigned int length, unsigned int *consumed);
int pattern_dispatch_ascii(PatternLexer *lexer, PatternToken **token);
int pattern_dispatch_escape(PatternLexer *lexer, PatternToken **token);

int fn_004beed0(PatternLexer *lexer, PatternToken **token);
int fn_004bef10(PatternLexer *lexer, PatternToken **token);
int fn_004bef50(PatternLexer *lexer, PatternToken **token);
int fn_004befa0(PatternLexer *lexer, PatternToken **token);
int fn_004bf248(PatternLexer *lexer, PatternToken **token);
int fn_004bf378(PatternLexer *lexer, PatternToken **token);
int fn_004bf3a4(PatternLexer *lexer, PatternToken **token);
int fn_004bf3d0(PatternLexer *lexer, PatternToken **token);
int fn_004bf3fc(PatternLexer *lexer, PatternToken **token);
int fn_004bf490(PatternLexer *lexer, PatternToken **token);
int fn_004bf4bc(PatternLexer *lexer, PatternToken **token);
int fn_004bf4e8(PatternLexer *lexer, PatternToken **token);
int fn_004bf514(PatternLexer *lexer, PatternToken **token);
int fn_004bf540(PatternLexer *lexer, PatternToken **token);
int fn_004bf56c(PatternLexer *lexer, PatternToken **token);
int fn_004bf5d8(PatternLexer *lexer, PatternToken **token);
int fn_004bf604(PatternLexer *lexer, PatternToken **token);
int fn_004bf630(PatternLexer *lexer, PatternToken **token);
int fn_004bf65c(PatternLexer *lexer, PatternToken **token);
int fn_004bf688(PatternLexer *lexer, PatternToken **token);
int fn_004bf71c(PatternLexer *lexer, PatternToken **token);
int fn_004bf748(PatternLexer *lexer, PatternToken **token);
int fn_004bf774(PatternLexer *lexer, PatternToken **token);
int fn_004bf7a0(PatternLexer *lexer, PatternToken **token);
int fn_004bf7c4(PatternLexer *lexer, PatternToken **token);
int fn_004bf7f0(PatternLexer *lexer, PatternToken **token);
int fn_004bf814(PatternLexer *lexer, PatternToken **token);
int fn_004bf840(PatternLexer *lexer, PatternToken **token);
int fn_004bf874(PatternLexer *lexer, PatternToken **token);
int fn_004bf8b4(PatternLexer *lexer, PatternToken **token);
int fn_004bf8f4(PatternLexer *lexer, PatternToken **token);
int fn_004bf974(PatternLexer *lexer, PatternToken **token);
int fn_004bf9e0(PatternLexer *lexer, PatternToken **token);
int fn_004bfc08(PatternLexer *lexer, PatternToken **token);
int fn_004bfc48(PatternLexer *lexer, PatternToken **token);
int fn_004bfc88(PatternLexer *lexer, PatternToken **token);
int fn_004bfcbc(PatternLexer *lexer, PatternToken **token);
int fn_004bfda4(PatternLexer *lexer, PatternToken **token);
int fn_004bfde4(PatternLexer *lexer, PatternToken **token);
int fn_004bfe24(PatternLexer *lexer, PatternToken **token);
int fn_004bfe8c(PatternLexer *lexer, PatternToken **token);

_Static_assert(sizeof(PatternToken) <= sizeof(FixedArenaBlock), "Token logical budget");
_Static_assert(sizeof(PatternLexer) <= 2 * sizeof(FixedArenaBlock), "Lexer logical budget");
_Static_assert(__builtin_offsetof(PatternToken, maximum) == 2 * sizeof(void *) + 4, "Token upper scalar");
_Static_assert(__builtin_offsetof(PatternLexer, position) == 4 * sizeof(void *), "Lexer position");

#endif
