#include "pattern_nfa.h"

static int append_copy(PatternNfaBuilder *builder, NfaState *start, NfaState *stop,
                       NfaState *tail, NfaState **copy_start, NfaState **copy_end,
                       NfaState *join, unsigned int connect_join)
{
    PatternNfaCloneMap map;
    fn_004c387c(&map, &builder->states, builder->transition_arena);
    NfaState *begin = (void *)0;
    if (!fn_004c360c(&map, &begin, &start, &stop)) {
        pattern_nfa_release_map(&map);
        return 0;
    }
    if (!pattern_nfa_epsilon(tail, begin)) {
        pattern_nfa_release_map(&map);
        return 0;
    }
    PatternNfaCloneEntry *found;
    fn_004c3834(&found, &map, &stop);
    NfaState *finish = found->replacement;
    if (connect_join && !pattern_nfa_epsilon(finish, join)) {
        pattern_nfa_release_map(&map);
        return 0;
    }
    *copy_start = begin;
    *copy_end = finish;
    pattern_nfa_release_map(&map);
    return 1;
}

int fn_004c16dc(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    unsigned int minimum = builder->cursor->value.minimum;
    if (minimum == 0) {
        NfaState *state = *start;
        while (state->transitions.next != &state->transitions) {
            MatchEdge *edge = (MatchEdge *)state->transitions.next;
            edge->link.previous->next = edge->link.next;
            edge->link.next->previous = edge->link.previous;
            fn_007557bc(&edge->label);
            fixed_arena_release(state->transition_arena, edge, 2);
        }
        if (!pattern_nfa_epsilon(state, *end))
            return 2;
        *result = *end;
    } else {
        NfaState *tail = *end;
        for (unsigned int index = 1; index < minimum; ++index) {
            NfaState *copy_start;
            NfaState *copy_end;
            if (!append_copy(builder, *start, *end, tail, &copy_start, &copy_end, (void *)0, 0))
                return 2;
            tail = copy_end;
        }
        *result = tail;
    }
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c117c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    unsigned int minimum = builder->cursor->value.minimum;
    if (minimum == 0) {
        if (!pattern_nfa_epsilon(*end, *start))
            return 2;
        *result = *start;
    } else {
        NfaState *last_start = *start;
        NfaState *tail = *end;
        for (unsigned int index = 1; index < minimum; ++index) {
            NfaState *copy_start;
            NfaState *copy_end;
            if (!append_copy(builder, *start, *end, tail, &copy_start, &copy_end, (void *)0, 0))
                return 2;
            last_start = copy_start;
            tail = copy_end;
        }
        if (!pattern_nfa_epsilon(tail, last_start))
            return 2;
        *result = tail;
    }
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c0dac(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    NfaState *join;
    fn_004c0488(&join, builder);
    if (join == (void *)0)
        return 2;
    unsigned int minimum = builder->cursor->value.minimum;
    unsigned int maximum = builder->cursor->maximum;
    NfaState *tail = *end;
    for (unsigned int index = 1; index < maximum; ++index) {
        NfaState *copy_start;
        NfaState *copy_end;
        if (!append_copy(builder, *start, *end, tail, &copy_start, &copy_end, join, minimum <= index + 1))
            return 2;
        tail = copy_end;
    }
    if (minimum == 0 && !pattern_nfa_epsilon(*start, join))
        return 2;
    if (minimum < 2 && maximum != 0 && !pattern_nfa_epsilon(*end, join))
        return 2;
    *result = join;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}
