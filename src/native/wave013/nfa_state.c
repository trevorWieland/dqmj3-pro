#include "pattern_nfa.h"

PatternNfaBuilder *fn_004c1dc0(PatternNfaBuilder *builder)
{
    builder->cursor = (void *)0;
    builder->states.head.previous = &builder->states.head;
    builder->states.head.next = &builder->states.head;
    builder->states.owner = (void *)0;
    builder->accept = (void *)0;
    builder->transition_arena = (void *)0;
    builder->group_depth = 0;
    return builder;
}

void fn_004c0488(NfaState **result, PatternNfaBuilder *builder)
{
    NfaState *state = fn_004c39c8(builder->states.owner, 2);
    if (state == (void *)0) {
        *result = (void *)0;
        return;
    }
    state->transitions.previous = &state->transitions;
    state->transitions.next = &state->transitions;
    state->transition_arena = (void *)0;
    state->identifier = 0;
    state->collection.previous = builder->states.head.previous;
    state->collection.next = &builder->states.head;
    builder->states.head.previous = &state->collection;
    state->collection.previous->next = &state->collection;
    *result = state;
    state->transition_arena = builder->transition_arena;
}

int fn_004c1d04(PatternNfaBuilder *builder, FixedArena *arena, PatternLexer *lexer)
{
    builder->cursor = (PatternToken *)lexer->tokens.next;
    builder->states.owner = arena;
    builder->transition_arena = arena;
    NfaState *initial;
    fn_004c0488(&initial, builder);
    if (initial == (void *)0)
        return 2;
    int result = fn_004c0b44(builder, &builder->accept, &initial);
    if (result == 0) {
        unsigned int identifier = 0;
        for (IntrusiveLink *link = builder->states.head.next; link != &builder->states.head; link = link->next)
            ((NfaState *)link)->identifier = identifier++;
    }
    return result;
}
