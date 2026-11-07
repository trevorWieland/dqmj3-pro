#include "pattern_nfa.h"

static MatchEdge *begin_fragment(PatternNfaBuilder *builder, NfaState **finish, NfaState *start)
{
    fn_004c0488(finish, builder);
    if (*finish == (void *)0)
        return (void *)0;
    return pattern_nfa_new_transition(start);
}

int fn_004c1970(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    NfaState *finish;
    MatchEdge *edge = begin_fragment(builder, &finish, *start);
    if (edge == (void *)0)
        return 2;
    unsigned short character = builder->cursor->value.character;
    const PatternCaseGroup *group = fn_004c35b0(character);
    void *target = finish;
    fn_00755780(&edge->label, &target, character);
    if (group != (void *)0) {
        for (unsigned int index = 1; index < 4 && group->characters[index] != 0; ++index) {
            edge = pattern_nfa_new_transition(*start);
            if (edge == (void *)0)
                return 2;
            fn_00755780(&edge->label, &target, group->characters[index]);
        }
    }
    *result = finish;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c1b10(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    NfaState *finish;
    MatchEdge *edge = begin_fragment(builder, &finish, *start);
    if (edge == (void *)0)
        return 2;
    void *target = finish;
    fn_00755750(&edge->label, &target, builder->cursor->value.control_bit);
    *result = finish;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

static int property_fragment(PatternNfaBuilder *builder, NfaState **result, NfaState **start, int negate)
{
    NfaState *finish;
    MatchEdge *edge = begin_fragment(builder, &finish, *start);
    if (edge == (void *)0)
        return 2;
    void *target = finish;
    fn_00755768(&edge->label, &target, builder->transition_arena);
    if (!fn_004c389c(&edge->label.intervals, builder->cursor->value.control_bit))
        return 2;
    if (negate && !fn_004c3070(&edge->label.intervals))
        return 2;
    *result = finish;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c1ba0(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    return property_fragment(builder, result, start, 1);
}

int fn_004c1c5c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    return property_fragment(builder, result, start, 0);
}

static int class_fragment(PatternNfaBuilder *builder, NfaState **result, NfaState **start, int negate)
{
    NfaState *finish;
    MatchEdge *edge = begin_fragment(builder, &finish, *start);
    if (edge == (void *)0)
        return 2;
    void *target = finish;
    fn_00755768(&edge->label, &target, builder->transition_arena);
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    int status = fn_004c04f0(builder, &edge->label.intervals);
    if (status != 0)
        return status;
    if (negate && !fn_004c3070(&edge->label.intervals))
        return 2;
    *result = finish;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c13f8(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    return class_fragment(builder, result, start, 0);
}

int fn_004c1510(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    return class_fragment(builder, result, start, 1);
}

int fn_004c1a9c(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)end;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    ++builder->group_depth;
    NfaState *temporary = *start;
    int status = fn_004c0b44(builder, result, &temporary);
    if (status != 0)
        return status;
    if (builder->cursor->kind != 10)
        return 3;
    --builder->group_depth;
    builder->cursor = (PatternToken *)builder->cursor->link.next;
    return 0;
}

int fn_004c15d4(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)builder;
    (void)end;
    *result = *start;
    return 1;
}

int fn_004c1660(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)result;
    (void)start;
    (void)end;
    return builder->group_depth == 0 ? 3 : 1;
}

int fn_004c1658(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)builder;
    (void)result;
    (void)start;
    (void)end;
    return 5;
}

int fn_004c15e4(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)builder;
    (void)result;
    (void)start;
    (void)end;
    return 8;
}

int fn_004c1b08(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    (void)builder;
    (void)result;
    (void)start;
    (void)end;
    return 4;
}
