#include "pattern_tokens.h"

static int depth_token(PatternLexer *lexer, PatternToken **token, unsigned char kind, unsigned short character)
{
    if (lexer->class_depth < 1)
        (*token)->kind = kind;
    else {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = character;
    }
    ++lexer->position;
    return 0;
}

int fn_004beed0(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth < 1) {
        (*token)->kind = 7;
        (*token)->value.control_bit = 0;
    } else {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x2e;
    }
    ++lexer->position;
    return 0;
}

int fn_004bef10(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 13, 0x2b);
}

int fn_004bef50(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth < 1) {
        (*token)->kind = PATTERN_TOKEN_CONTROL;
        (*token)->value.control_bit = 1;
    } else {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x24;
    }
    ++lexer->position;
    return 0;
}

int fn_004befa0(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth < 1) {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x2d;
    } else
        (*token)->kind = 5;
    ++lexer->position;
    return 0;
}

int fn_004bf840(PatternLexer *lexer, PatternToken **token)
{
    (*token)->kind = PATTERN_TOKEN_LITERAL;
    (*token)->value.character = lexer->text[lexer->position++];
    return 0;
}

int fn_004bf874(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 12, 0x2a);
}

int fn_004bf8b4(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 11, 0x3f);
}

int fn_004bf8f4(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth < 1 || lexer->position == lexer->length - 1 || lexer->text[lexer->position + 1] != 0x26) {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x26;
        ++lexer->position;
    } else {
        (*token)->kind = 6;
        lexer->position += 2;
    }
    return 0;
}

int fn_004bfc08(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth < 1) {
        (*token)->kind = PATTERN_TOKEN_CONTROL;
        (*token)->value.control_bit = 0;
    } else {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x5e;
    }
    ++lexer->position;
    return 0;
}

int fn_004bfc48(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 1, 0x7c);
}

int fn_004bfda4(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 9, 0x28);
}

int fn_004bfde4(PatternLexer *lexer, PatternToken **token)
{
    return depth_token(lexer, token, 10, 0x29);
}

int fn_004bfe24(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->position != lexer->length - 1 && lexer->text[lexer->position + 1] == 0x5e) {
        (*token)->kind = 3;
        lexer->position += 2;
    } else {
        (*token)->kind = 2;
        ++lexer->position;
    }
    ++lexer->class_depth;
    return 0;
}

int fn_004bfe8c(PatternLexer *lexer, PatternToken **token)
{
    (*token)->kind = 4;
    ++lexer->position;
    --lexer->class_depth;
    return 0;
}
