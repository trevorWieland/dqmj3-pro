#include "pattern_tokens.h"

static int emit_tag(PatternLexer *lexer, PatternToken **token, unsigned char kind, unsigned char value)
{
    (*token)->kind = kind;
    (*token)->value.control_bit = value;
    ++lexer->position;
    return 0;
}

static int emit_character(PatternLexer *lexer, PatternToken **token, unsigned short character)
{
    (*token)->kind = PATTERN_TOKEN_LITERAL;
    (*token)->value.character = character;
    ++lexer->position;
    return 0;
}

int fn_004bf378(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, PATTERN_TOKEN_CONTROL, 4);
}

int fn_004bf3a4(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, PATTERN_TOKEN_CONTROL, 3);
}

int fn_004bf3d0(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 8, 1);
}

int fn_004bf490(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 8, 2);
}

int fn_004bf4bc(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 8, 3);
}

int fn_004bf4e8(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, PATTERN_TOKEN_CONTROL, 6);
}

int fn_004bf514(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 7);
}

int fn_004bf540(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, PATTERN_TOKEN_CONTROL, 2);
}

int fn_004bf56c(PatternLexer *lexer, PatternToken **token)
{
    ++lexer->position;
    if (lexer->position == lexer->length || lexer->text[lexer->position] < 0x41 || lexer->text[lexer->position] > 0x5f)
        return 8;
    return emit_character(lexer, token, (unsigned short)(lexer->text[lexer->position] - 0x40));
}

int fn_004bf5d8(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 7, 1);
}

int fn_004bf604(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 0x1b);
}

int fn_004bf630(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 0x0c);
}

int fn_004bf65c(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 10);
}

int fn_004bf71c(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 13);
}

int fn_004bf748(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 7, 2);
}

int fn_004bf774(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, 9);
}

int fn_004bf7c4(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, 7, 3);
}

int fn_004bf814(PatternLexer *lexer, PatternToken **token)
{
    return emit_tag(lexer, token, PATTERN_TOKEN_CONTROL, 5);
}

int fn_004bfc88(PatternLexer *lexer, PatternToken **token)
{
    return emit_character(lexer, token, lexer->text[lexer->position]);
}

int fn_004bfcbc(PatternLexer *lexer, PatternToken **token)
{
    (void)lexer;
    (void)token;
    return 5;
}

int fn_004bf974(PatternLexer *lexer, PatternToken **token)
{
    ++lexer->position;
    if (lexer->position == lexer->length)
        return 4;
    unsigned int character = lexer->text[lexer->position];
    if (character < 0x20 || character > 0x7e)
        return fn_004bfc88(lexer, token);
    return pattern_dispatch_escape(lexer, token);
}
