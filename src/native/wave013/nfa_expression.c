#include "pattern_nfa.h"

int fn_004c0390(PatternNfaBuilder *builder, NfaState **result, NfaState **start)
{
    for (;;) {
        NfaState *atom = (void *)0;
        NfaState *temporary = *start;
        int status = pattern_nfa_primary(builder, &atom, &temporary, (void *)0);
        if (status == 1) {
            *result = *start;
            return 0;
        }
        if (status != 0)
            return status;
        temporary = *start;
        NfaState *end = atom;
        NfaState *following = (void *)0;
        status = pattern_nfa_continuation(builder, &following, &temporary, &end);
        if (status > 1)
            return status;
        *start = following;
    }
}

int fn_004c0b44(PatternNfaBuilder *builder, NfaState **result, NfaState **start)
{
    NfaState *last = (void *)0;
    NfaState *temporary = *start;
    int status = fn_004c0390(builder, &last, &temporary);
    if (status != 0)
        return status;
    if (builder->cursor->kind != 1) {
        *result = last;
        return 0;
    }
    NfaState *join;
    fn_004c0488(&join, builder);
    if (join == (void *)0 || !pattern_nfa_epsilon(last, join))
        return 2;
    while (builder->cursor->kind == 1) {
        builder->cursor = (PatternToken *)builder->cursor->link.next;
        temporary = *start;
        last = (void *)0;
        status = fn_004c0390(builder, &last, &temporary);
        if (status != 0)
            return status;
        if (!pattern_nfa_epsilon(last, join))
            return 2;
    }
    *result = join;
    return 0;
}
