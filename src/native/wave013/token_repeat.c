#include "pattern_tokens.h"

static int read_decimal(PatternLexer *lexer, unsigned int *result)
{
    unsigned int value = 0;
    while (lexer->position != lexer->length) {
        unsigned int character = lexer->text[lexer->position];
        if (character < 0x30 || character > 0x39)
            break;
        value = value * 10 + character - 0x30;
        if (value > 65535)
            return 0;
        ++lexer->position;
    }
    *result = value;
    return 1;
}

int fn_004bf9e0(PatternLexer *lexer, PatternToken **token)
{
    if (lexer->class_depth > 0) {
        (*token)->kind = PATTERN_TOKEN_LITERAL;
        (*token)->value.character = 0x7b;
        ++lexer->position;
        return 0;
    }
    ++lexer->position;
    if (lexer->position == lexer->length || lexer->text[lexer->position] < 0x30 || lexer->text[lexer->position] > 0x39)
        return 3;
    unsigned int minimum;
    if (!read_decimal(lexer, &minimum) || lexer->position == lexer->length)
        return 3;
    if (lexer->text[lexer->position] == 0x7d) {
        (*token)->value.minimum = (unsigned short)minimum;
        (*token)->kind = 14;
        ++lexer->position;
        return 0;
    }
    if (lexer->text[lexer->position] != 0x2c)
        return 3;
    ++lexer->position;
    if (lexer->position == lexer->length)
        return 3;
    if (lexer->text[lexer->position] == 0x7d) {
        (*token)->value.minimum = (unsigned short)minimum;
        (*token)->kind = 15;
        ++lexer->position;
        return 0;
    }
    if (lexer->text[lexer->position] < 0x30 || lexer->text[lexer->position] > 0x39)
        return 3;
    unsigned int maximum;
    if (!read_decimal(lexer, &maximum) || lexer->position == lexer->length || lexer->text[lexer->position] != 0x7d || minimum > maximum)
        return 3;
    (*token)->value.minimum = (unsigned short)minimum;
    if (minimum == maximum)
        (*token)->kind = 14;
    else {
        (*token)->maximum = (unsigned short)maximum;
        (*token)->kind = 16;
    }
    ++lexer->position;
    return 0;
}
