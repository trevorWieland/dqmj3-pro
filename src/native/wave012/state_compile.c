#include "compile_graph.h"

static void insert_before(IntrusiveLink *position, IntrusiveLink *link)
{
    link->previous = position->previous;
    link->next = position;
    position->previous = link;
    link->previous->next = link;
}

int fn_004c2744(CompileContext *context, MatchState **state)
{
    for (unsigned int index = 0; index < context->source_count; ++index) {
        if ((*state)->data.members[index] == 0)
            continue;
        NfaState *source = context->sources[index];
        for (IntrusiveLink *link = source->transitions.next; link != &source->transitions; link = link->next) {
            MatchEdge *old = (MatchEdge *)link;
            if (old->label.kind == INTERVAL_SET_EPSILON)
                continue;
            MatchEdge *edge = fn_004c39c8((*state)->data.pending_arena, TRANSITION_BLOCKS);
            if (edge == (void *)0)
                return 0;
            fn_00755798(&edge->label);
            insert_before(&(*state)->data.pending, &edge->link);
            if (!fn_00755720(&edge->label, &old->label, context->data_arena))
                return 0;
        }
    }
    return 1;
}

void fn_004c1de8(MatchState **result, CompileContext *context, const unsigned char *members)
{
    IntrusiveLink *head = &context->compiled_states;
    for (IntrusiveLink *link = head->next; link != head; link = link->next) {
        MatchState *state = (MatchState *)link;
        if (fn_001010c8(state->data.members, members, context->source_count) == 0) {
            *result = state;
            return;
        }
    }
    MatchState *state = fn_004c39c8(context->state_arena, COMPILED_STATE_BLOCKS);
    if (state != (void *)0) {
        fn_004bff74(&state->data);
        insert_before(head, &state->collection);
    }
    if (state != (void *)0 && fn_004bfedc(&state->data, context->data_arena, context->source_count, 0)) {
        fn_00301a9c(state->data.members, members, context->source_count);
        if (fn_004c2744(context, &state)) {
            *result = state;
            return;
        }
    }
    *result = (void *)0;
}
