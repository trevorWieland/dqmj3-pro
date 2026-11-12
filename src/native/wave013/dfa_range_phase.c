#include "dfa_compile.h"

static void insert_before(IntrusiveLink *head, IntrusiveLink *link)
{
    link->previous = head->previous;
    link->next = head;
    head->previous = link;
    link->previous->next = link;
}

static void remove_edge(MatchState *state, MatchEdge *edge)
{
    edge->link.previous->next = edge->link.next;
    edge->link.next->previous = edge->link.previous;
    fn_007557bc(&edge->label);
    fixed_arena_release(state->data.pending_arena, edge, TRANSITION_BLOCKS);
}

static int release_ranges(IntervalRing *ring)
{
    if (ring->owner != (void *)0) {
        IntrusiveLink *link = ring->head.next;
        while (link != &ring->head) {
            IntrusiveLink *next = link->next;
            fixed_arena_release(ring->owner, link, 1);
            link = next;
        }
    }
    return 0;
}

static int copy_ranges(IntervalRing *destination, const IntervalRing *source)
{
    for (const IntrusiveLink *link = source->head.next; link != &source->head; link = link->next) {
        const IntervalNode *old = (const IntervalNode *)link;
        IntervalNode *node = fixed_arena_allocate(destination->owner, 1);
        if (node == (void *)0)
            return 0;
        insert_before(&destination->head, &node->link);
        node->first = old->first;
        node->last = old->last;
    }
    return 1;
}

int fn_004c1f60(CompileContext *context, MatchState **state_pointer)
{
    MatchState *state = *state_pointer;
    IntrusiveLink *head = &state->data.pending;
    IntrusiveLink *link = head->next;
    while (link != head) {
        MatchEdge *selected = (MatchEdge *)link;
        if (selected->label.kind != INTERVAL_SET_LIST) {
            link = link->next;
            continue;
        }
        unsigned int blocks = (context->source_count + 15u) >> 4;
        unsigned char *members = fixed_arena_allocate(context->data_arena, blocks);
        if (members == (void *)0)
            return 0;
        for (unsigned int index = 0; index < context->source_count; ++index)
            members[index] = 0;
        NfaState *destination = selected->label.destination;
        members[destination->identifier] = 1;
        IntervalRing ranges;
        ranges.head.previous = &ranges.head;
        ranges.head.next = &ranges.head;
        ranges.owner = selected->label.intervals.owner;
        if (!copy_ranges(&ranges, &selected->label.intervals))
            return release_ranges(&ranges);
        IntrusiveLink *other_link = head->next;
        while (other_link != head) {
            MatchEdge *other = (MatchEdge *)other_link;
            if (other != selected && other->label.kind == INTERVAL_SET_LIST &&
                fn_006d4080(&other->label.intervals, &ranges)) {
                if (!fn_004c33dc(&ranges, &other->label.intervals) ||
                    !fn_004c2c80(&other->label.intervals, &ranges))
                    return release_ranges(&ranges);
                destination = other->label.destination;
                members[destination->identifier] = 1;
                if (other->label.intervals.head.next == &other->label.intervals.head) {
                    IntrusiveLink *next = other_link->next;
                    remove_edge(state, other);
                    other_link = next;
                    continue;
                }
            }
            other_link = other_link->next;
        }
        if (!fn_004c2c80(&selected->label.intervals, &ranges))
            return release_ranges(&ranges);
        fn_004c1edc(context, members);
        MatchState *target;
        fn_004c1de8(&target, context, members);
        if (target == (void *)0)
            return release_ranges(&ranges);
        fixed_arena_release(context->data_arena, members, blocks);
        MatchEdge *edge = fixed_arena_allocate((*state_pointer)->data.transition_arena, TRANSITION_BLOCKS);
        if (edge == (void *)0)
            return release_ranges(&ranges);
        fn_007555cc(&edge->label);
        insert_before(&(*state_pointer)->data.transitions, &edge->link);
        void *value = target;
        fn_0075559c(&edge->label, &value, context->data_arena);
        fn_007557bc(&edge->label);
        IntrusiveLink *output = &edge->label.intervals.head;
        output->next = ranges.head.next;
        ranges.head.next->previous = output;
        output->previous = ranges.head.previous;
        ranges.head.previous->next = output;
        edge->label.intervals.owner = ranges.owner;
        ranges.head.previous = &ranges.head;
        ranges.head.next = &ranges.head;
        if (selected->label.intervals.head.next == &selected->label.intervals.head) {
            link = selected->link.next;
            remove_edge(state, selected);
        }
        release_ranges(&ranges);
    }
    return 1;
}
