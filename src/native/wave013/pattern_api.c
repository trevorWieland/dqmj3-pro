#include "pattern_nfa_api.h"

int pattern_compile_nfa(PatternNfaBuilder *builder, PatternLexer *lexer, FixedArena *arena,
                        const PatternNfaInput *input)
{
    fn_004bfeb8(lexer);
    int result = fn_004befe0(lexer, arena, input->text, input->length);
    fn_004c1dc0(builder);
    if (result != 0)
        return result;
    return fn_004c1d04(builder, arena, lexer);
}
