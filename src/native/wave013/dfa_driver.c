#include "dfa_compile.h"

CompileContext *fn_004c2c5c(CompileContext *context)
{
    context->data_arena = (void *)0;
    context->compiled_states.previous = &context->compiled_states;
    context->compiled_states.next = &context->compiled_states;
    context->state_arena = (void *)0;
    context->source_count = 0;
    context->sources = (void *)0;
    return context;
}

int fn_004c2a00(CompileContext *context, FixedArena *arena, const IntrusiveLink *sources,
                NfaState *const *accept)
{
    context->data_arena = arena;
    unsigned int count = 0;
    for (const IntrusiveLink *link = sources->next; link != sources; link = link->next)
        ++count;
    context->source_count = count;
    context->sources = fn_004c39c8(arena, (count * 4u + 15u) >> 4);
    if (context->sources == (void *)0)
        return 0;
    unsigned int index = 0;
    for (const IntrusiveLink *link = sources->next; link != sources; link = link->next)
        context->sources[index++] = (NfaState *)link;
    context->state_arena = context->data_arena;
    MatchState *initial = fn_004c39c8(context->state_arena, COMPILED_STATE_BLOCKS);
    if (initial == (void *)0)
        return 0;
    fn_004bff74(&initial->data);
    IntrusiveLink *head = &context->compiled_states;
    initial->collection.previous = head->previous;
    initial->collection.next = head;
    head->previous = &initial->collection;
    initial->collection.previous->next = &initial->collection;
    if (!fn_004bfedc(&initial->data, context->data_arena, count, 1))
        return 0;
    initial->data.members[0] = 1;
    fn_004c1edc(context, initial->data.members);
    if (!fn_004c2744(context, &initial))
        return 0;
    for (IntrusiveLink *link = head->next; link != head; link = link->next) {
        MatchState *state = (MatchState *)link;
        MatchState *value = state;
        if (state->data.pending.next == &state->data.pending)
            continue;
        if (!fn_004c2494(context, &value))
            return 0;
        if (state->data.pending.next == &state->data.pending)
            continue;
        value = state;
        if (!fn_004c1f60(context, &value))
            return 0;
        if (state->data.pending.next != &state->data.pending) {
            value = state;
            if (!fn_004c281c(context, &value))
                return 0;
        }
    }
    for (IntrusiveLink *link = head->next; link != head; link = link->next) {
        MatchState *state = (MatchState *)link;
        signed char result = 0;
        for (unsigned int member = 0; member < context->source_count; ++member) {
            if (state->data.members[member] != 0 && context->sources[member] == *accept) {
                result = 1;
                break;
            }
        }
        state->data.result = result;
    }
    return 1;
}
