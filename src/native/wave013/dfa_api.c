#include "dfa_compile.h"

int pattern_compile_dfa(CompileContext *context, PatternNfaBuilder *builder, FixedArena *arena)
{
    fn_004c2c5c(context);
    return fn_004c2a00(context, arena, &builder->states.head, &builder->accept);
}

int pattern_match_dfa(const CompileContext *context, MatchCursor *cursor, const unsigned short *text)
{
    MatchContext input;
    input.unknown_00 = 0;
    input.initial = (MatchState *)context->compiled_states.next;
    return fn_004bed30(cursor, &input, text);
}
