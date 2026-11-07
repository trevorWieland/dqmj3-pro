#ifndef DQMJ3_WAVE013_PATTERN_NFA_API_H
#define DQMJ3_WAVE013_PATTERN_NFA_API_H

#include "pattern_nfa.h"

typedef struct PatternNfaInput {
    const unsigned short *text;
    unsigned int length;
} PatternNfaInput;

int pattern_compile_nfa(PatternNfaBuilder *builder, PatternLexer *lexer, FixedArena *arena,
                        const PatternNfaInput *input);

#endif
