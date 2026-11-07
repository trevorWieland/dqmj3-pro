#include "pattern_tokens.h"

static int parse_hexadecimal(PatternLexer *lexer, PatternToken **token, unsigned int digits)
{
    ++lexer->position;
    if (lexer->position == lexer->length)
        return 6;
    (*token)->kind = PATTERN_TOKEN_LITERAL;
    (*token)->value.character = 0;
    for (unsigned int index = 0; index < digits; ++index) {
        (*token)->value.character = (unsigned short)((unsigned int)(*token)->value.character << 4);
        if (lexer->position == lexer->length)
            return 6;
        unsigned int character = lexer->text[lexer->position];
        unsigned int value;
        if (character >= 0x30 && character <= 0x39)
            value = character - 0x30;
        else if (character >= 0x61 && character <= 0x66)
            value = character - 0x57;
        else if (character >= 0x41 && character <= 0x46)
            value = character - 0x37;
        else
            return 6;
        (*token)->value.character |= (unsigned short)value;
        ++lexer->position;
    }
    return 0;
}

int fn_004bf7a0(PatternLexer *lexer, PatternToken **token)
{
    return parse_hexadecimal(lexer, token, 4);
}

int fn_004bf7f0(PatternLexer *lexer, PatternToken **token)
{
    return parse_hexadecimal(lexer, token, 2);
}

int fn_004bf248(PatternLexer *lexer, PatternToken **token)
{
    ++lexer->position;
    if (lexer->position == lexer->length)
        return 7;
    unsigned int character = lexer->text[lexer->position];
    if (character < 0x30 || character > 0x37)
        return 7;
    unsigned int value = character - 0x30;
    unsigned int limit = value < 4 ? 3 : 2;
    ++lexer->position;
    for (unsigned int index = 1; index < limit && lexer->position != lexer->length; ++index) {
        character = lexer->text[lexer->position];
        if (character < 0x30 || character > 0x37)
            break;
        value = value << 3 | (character - 0x30);
        ++lexer->position;
    }
    (*token)->kind = PATTERN_TOKEN_LITERAL;
    (*token)->value.character = (unsigned short)value;
    return 0;
}

static int parse_property(PatternLexer *lexer, PatternToken **token, unsigned char kind)
{
    ++lexer->position;
    if (lexer->position == lexer->length || lexer->text[lexer->position] != 0x7b)
        return 9;
    ++lexer->position;
    if (lexer->position == lexer->length)
        return 9;
    unsigned int consumed = 0;
    unsigned int property = fn_004c3904(lexer->text + lexer->position, lexer->length - lexer->position, &consumed);
    if (property == 0x85)
        return 9;
    (*token)->kind = kind;
    (*token)->value.control_bit = (unsigned char)property;
    lexer->position += consumed;
    return 0;
}

int fn_004bf3fc(PatternLexer *lexer, PatternToken **token)
{
    return parse_property(lexer, token, 8);
}

int fn_004bf688(PatternLexer *lexer, PatternToken **token)
{
    return parse_property(lexer, token, 7);
}
