#include "compile_graph.h"

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

int fn_004c2494(CompileContext *context, MatchState **state_pointer)
{
    MatchState *state = *state_pointer;
    IntrusiveLink *head = &state->data.pending;
    IntrusiveLink *link = head->next;
    while (link != head) {
        MatchEdge *selected = (MatchEdge *)link;
        if (selected->label.kind != INTERVAL_SET_SINGLE) {
            link = link->next;
            continue;
        }
        unsigned int count = context->source_count;
        unsigned short character = selected->label.value.character;
        unsigned char *members = fixed_arena_allocate(context->data_arena, (count + 15u) >> 4);
        if (members == (void *)0)
            return 0;
        for (unsigned int index = 0; index < context->source_count; ++index)
            members[index] = 0;
        NfaState *destination = selected->label.destination;
        members[destination->identifier] = 1;
        IntrusiveLink *other_link = head->next;
        while (other_link != head) {
            MatchEdge *other = (MatchEdge *)other_link;
            IntrusiveLink *next = other_link->next;
            if (other != selected) {
                int remove = 0;
                if (other->label.kind == INTERVAL_SET_SINGLE && other->label.value.character == character) {
                    destination = other->label.destination;
                    members[destination->identifier] = 1;
                    remove = 1;
                } else if (other->label.kind == INTERVAL_SET_LIST && fn_007805e4(&other->label, character)) {
                    if (!fn_004c2d98(&other->label.intervals, character))
                        return 0;
                    destination = other->label.destination;
                    members[destination->identifier] = 1;
                    remove = other->label.intervals.head.next == &other->label.intervals.head;
                }
                if (remove) {
                    remove_link(other_link);
                    fn_007557bc(&other->label);
                    fixed_arena_release(state->data.pending_arena, other, TRANSITION_BLOCKS);
                }
            }
            other_link = next;
        }
        fn_004c1edc(context, members);
        MatchState *target;
        fn_004c1de8(&target, context, members);
        if (target == (void *)0)
            return 0;
        fixed_arena_release(context->data_arena, members, (count + 15u) >> 4);
        MatchEdge *edge = fixed_arena_allocate((*state_pointer)->data.transition_arena, TRANSITION_BLOCKS);
        if (edge == (void *)0)
            return 0;
        fn_007555cc(&edge->label);
        insert_before(&(*state_pointer)->data.transitions, &edge->link);
        void *value = target;
        fn_007555b4(&edge->label, &value, character);
        link = selected->link.next;
        remove_link(&selected->link);
        fn_007557bc(&selected->label);
        fixed_arena_release(state->data.pending_arena, selected, TRANSITION_BLOCKS);
    }
    return 1;
}
