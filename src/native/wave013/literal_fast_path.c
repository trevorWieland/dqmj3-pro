#include "pattern_outer.h"

static PatternToken *next_token(PatternToken *token)
{
    return (PatternToken *)token->link.next;
}

static unsigned int literal_run(PatternToken *start, PatternToken **end)
{
    unsigned int count = 0;
    while (start->kind == PATTERN_TOKEN_LITERAL) {
        ++count;
        start = next_token(start);
    }
    *end = start;
    return count;
}

static int dot_star_end(PatternToken *token)
{
    return token->value.control_bit == 0 && next_token(token)->kind == PATTERN_TOKEN_ZERO_OR_MORE &&
           next_token(next_token(token))->kind == PATTERN_TOKEN_END;
}

int fn_004c0060(PatternLiteralMatcher *matcher, const PatternLexer *lexer, const unsigned short *text)
{
    PatternToken *start = (PatternToken *)lexer->tokens.next;
    PatternToken *end;
    unsigned int count;
    unsigned int offset = 0;
    matcher->text = text;
    matcher->length = fn_00100b58(text);
    if (start->kind == PATTERN_TOKEN_LITERAL) {
        count = literal_run(start, &end);
        if (end->kind == PATTERN_TOKEN_WILDCARD) {
            if (!dot_star_end(end))
                return 0;
            if (matcher->length < count)
                return 2;
        } else if (end->kind == PATTERN_TOKEN_CONTROL) {
            if (end->value.control_bit != 1 || next_token(end)->kind != PATTERN_TOKEN_END)
                return 0;
            if (matcher->length != count)
                return 2;
        } else {
            if (end->kind != PATTERN_TOKEN_END)
                return 0;
            if (matcher->length != count)
                return 2;
        }
    } else if (start->kind == PATTERN_TOKEN_WILDCARD) {
        if (start->value.control_bit != 0 || next_token(start)->kind != PATTERN_TOKEN_ZERO_OR_MORE)
            return 0;
        start = next_token(next_token(start));
        count = literal_run(start, &end);
        if (end->kind == PATTERN_TOKEN_WILDCARD) {
            if (count == 0 || !dot_star_end(end))
                return 0;
            if (matcher->length < count)
                return 2;
            do {
                PatternToken *cursor = start;
                if (fn_004bffa8(matcher, &cursor, offset, count))
                    return 1;
                ++offset;
            } while (offset + count <= matcher->length);
            return 2;
        }
        if (end->kind != PATTERN_TOKEN_END || count == 0)
            return 0;
        if (matcher->length < count)
            return 2;
        offset = matcher->length - count;
    } else {
        if (start->kind != PATTERN_TOKEN_CONTROL || start->value.control_bit != 0)
            return 0;
        start = next_token(start);
        count = literal_run(start, &end);
        if (end->kind == PATTERN_TOKEN_CONTROL) {
            if (count == 0 || end->value.control_bit != 1 || next_token(end)->kind != PATTERN_TOKEN_END)
                return 0;
        } else if (end->kind != PATTERN_TOKEN_END || count == 0) {
            return 0;
        }
        if (matcher->length != count)
            return 2;
    }
    return fn_004bffa8(matcher, &start, offset, count) ? 1 : 2;
}
