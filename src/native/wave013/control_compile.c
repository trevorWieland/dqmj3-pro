#include "control_compile.h"

void fn_00755584(IntervalSet *set, void *const *destination, unsigned char control_bit)
{
    set->destination = *destination;
    set->kind = INTERVAL_SET_CONTROL;
    set->value.control_bit = control_bit;
}

static void insert_before(IntrusiveLink *position, IntrusiveLink *link)
{
    link->previous = position->previous;
    link->next = position;
    position->previous = link;
    link->previous->next = link;
}

static void remove_link(IntrusiveLink *link)
{
    link->previous->next = link->next;
    link->next->previous = link->previous;
}

int fn_004c281c(CompileContext *context, MatchState **state_pointer)
{
    MatchState *state = *state_pointer;
    IntrusiveLink *head = &state->data.pending;
    IntrusiveLink *link = head->next;
    while (link != head) {
        MatchEdge *selected = (MatchEdge *)link;
        unsigned int blocks = (context->source_count + 15u) >> 4;
        unsigned char *members = fn_004c39c8(context->data_arena, blocks);
        if (members == (void *)0)
            return 0;
        fn_00301a9c(members, (*state_pointer)->data.members, context->source_count);
        NfaState *destination = selected->label.destination;
        members[destination->identifier] = 1;
        IntrusiveLink *other_link = head->next;
        while (other_link != head) {
            MatchEdge *other = (MatchEdge *)other_link;
            if (other == selected || selected->label.value.control_bit != other->label.value.control_bit) {
                other_link = other_link->next;
                continue;
            }
            destination = other->label.destination;
            members[destination->identifier] = 1;
            IntrusiveLink *next = other_link->next;
            remove_link(other_link);
            fn_007557bc(&other->label);
            fn_004c3994(state->data.pending_arena, other, TRANSITION_BLOCKS);
            other_link = next;
        }
        fn_004c1edc(context, members);
        if (fn_001010c8(members, (*state_pointer)->data.members, context->source_count) != 0) {
            MatchState *target;
            fn_004c1de8(&target, context, members);
            if (target == (void *)0)
                return 0;
            MatchEdge *edge = fn_004c39c8((*state_pointer)->data.transition_arena, TRANSITION_BLOCKS);
            if (edge == (void *)0)
                return 0;
            fn_007555cc(&edge->label);
            insert_before(&(*state_pointer)->data.transitions, &edge->link);
            void *value = target;
            fn_00755584(&edge->label, &value, selected->label.value.control_bit);
        }
        fn_004c3994(context->data_arena, members, blocks);
        link = selected->link.next;
        remove_link(&selected->link);
        fn_007557bc(&selected->label);
        fn_004c3994(state->data.pending_arena, selected, TRANSITION_BLOCKS);
    }
    return 1;
}
