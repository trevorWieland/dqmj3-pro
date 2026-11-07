#include "pattern_nfa.h"

int fn_004c116c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)builder;
    (void)start;
    *result = *end;
    return 1;
}

int fn_004c14a8(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    if (!pattern_nfa_epsilon(*start, *end))
        return 2;
    *result = *end;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c1674(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    if (!pattern_nfa_epsilon(*end, *start))
        return 2;
    *result = *start;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c15ec(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    if (!pattern_nfa_epsilon(*end, *start))
        return 2;
    *result = *end;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}
