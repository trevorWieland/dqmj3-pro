#include "pattern_nfa.h"

void fn_0075573c(IntervalSet *set, void *const *destination)
{
    set->kind = INTERVAL_SET_EPSILON;
    set->destination = *destination;
}

void fn_00755750(IntervalSet *set, void *const *destination, unsigned char control_bit)
{
    set->kind = INTERVAL_SET_CONTROL;
    set->value.control_bit = control_bit;
    set->destination = *destination;
}

void fn_00755768(IntervalSet *set, void *const *destination, FixedArena *owner)
{
    set->kind = INTERVAL_SET_LIST;
    set->intervals.owner = owner;
    set->destination = *destination;
}

void fn_00755780(IntervalSet *set, void *const *destination, unsigned short character)
{
    set->kind = INTERVAL_SET_SINGLE;
    set->value.character = character;
    set->destination = *destination;
}

MatchEdge *pattern_nfa_new_transition(NfaState *state)
{
    MatchEdge *edge = fn_004c39c8(state->transition_arena, 2);
    if (edge == (void *)0)
        return edge;
    fn_00755798(&edge->label);
    edge->link.previous = state->transitions.previous;
    edge->link.next = &state->transitions;
    state->transitions.previous = &edge->link;
    edge->link.previous->next = &edge->link;
    return edge;
}

int pattern_nfa_epsilon(NfaState *state, NfaState *destination)
{
    MatchEdge *edge = pattern_nfa_new_transition(state);
    if (edge == (void *)0)
        return 0;
    void *target = destination;
    fn_0075573c(&edge->label, &target);
    return 1;
}

void fn_00755818(MatchEdge **result, IntervalRing *ring)
{
    MatchEdge *edge = fn_004c39c8(ring->owner, 2);
    if (edge == (void *)0) {
        *result = (void *)0;
        return;
    }
    fn_00755798(&edge->label);
    edge->link.previous = ring->head.previous;
    edge->link.next = &ring->head;
    ring->head.previous = &edge->link;
    edge->link.previous->next = &edge->link;
    *result = edge;
}
