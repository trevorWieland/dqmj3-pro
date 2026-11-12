#include "pattern_tokens.h"

PatternLexer *fn_004bfeb8(PatternLexer *lexer)
{
    lexer->tokens.previous = &lexer->tokens;
    lexer->tokens.next = &lexer->tokens;
    lexer->arena = (void *)0;
    lexer->text = (void *)0;
    lexer->position = 0;
    lexer->length = 0;
    lexer->class_depth = 0;
    return lexer;
}

static PatternToken *append_token(PatternLexer *lexer)
{
    PatternToken *token = fixed_arena_allocate(lexer->arena, 1);
    if (token == (void *)0)
        return token;
    token->link.previous = lexer->tokens.previous;
    token->link.next = &lexer->tokens;
    lexer->tokens.previous = &token->link;
    token->link.previous->next = &token->link;
    return token;
}

int fn_004befe0(PatternLexer *lexer, FixedArena *arena, const unsigned short *text, unsigned int length)
{
    lexer->arena = arena;
    lexer->text = text;
    lexer->length = length;
    lexer->class_depth = 0;
    int quoted = 0;
    while (lexer->position != lexer->length) {
        unsigned int position = lexer->position;
        unsigned int character = lexer->text[position];
        if (character == 0x5c && position != lexer->length - 1) {
            unsigned int next = lexer->text[position + 1];
            if (!quoted && next == 0x51) {
                quoted = 1;
                lexer->position += 2;
                continue;
            }
            if (next == 0x45) {
                if (!quoted)
                    return 2;
                quoted = 0;
                lexer->position += 2;
                continue;
            }
        }
        if (character == 0x20 || character == 0x3000) {
            ++lexer->position;
            continue;
        }
        PatternToken *token = append_token(lexer);
        if (token == (void *)0)
            return 1;
        int result;
        if (quoted || character < 0x20 || character > 0x7e)
            result = fn_004bf840(lexer, &token);
        else
            result = pattern_dispatch_ascii(lexer, &token);
        if (result != 0)
            return result;
    }
    PatternToken *token = append_token(lexer);
    if (token == (void *)0)
        return 1;
    token->kind = PATTERN_TOKEN_END;
    return 0;
}
