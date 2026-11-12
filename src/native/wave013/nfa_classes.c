#include "pattern_nfa.h"

static void initialize(IntervalRing *ring, FixedArena *owner)
{
    ring->head.previous = &ring->head;
    ring->head.next = &ring->head;
    ring->owner = owner;
}

static void release(IntervalRing *ring)
{
    if (ring->owner != (void *)0) {
        IntrusiveLink *link = ring->head.next;
        while (link != &ring->head) {
            IntrusiveLink *following = link->next;
            fixed_arena_release(ring->owner, link, 1);
            link = following;
        }
    }
}

int fn_004c10f4(PatternNfaBuilder *builder, IntervalRing *ranges, unsigned int character)
{
    (void)builder;
    if (!fn_004c2e84(ranges, character, character))
        return 2;
    const PatternCaseGroup *group = fn_004c35b0(character);
    if (group != (void *)0) {
        for (unsigned int index = 1; index < 4 && group->characters[index] != 0; ++index) {
            if (!fn_004c2e84(ranges, group->characters[index], group->characters[index]))
                return 2;
        }
    }
    return 0;
}

int fn_004c04f0(PatternNfaBuilder *builder, IntervalRing *ranges)
{
    unsigned int items = 0;
    for (;;) {
        unsigned int kind = builder->cursor->kind;
        if (kind == 5) {
            int status = fn_004c10f4(builder, ranges, 0x2d);
            if (status != 0)
                return status;
            ++items;
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            continue;
        }
        if (kind == PATTERN_TOKEN_LITERAL) {
            unsigned short first = builder->cursor->value.character;
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            int status;
            if (builder->cursor->kind == 5) {
                builder->cursor = (PatternToken *)builder->cursor->link.next;
                if (builder->cursor->kind == PATTERN_TOKEN_LITERAL) {
                    unsigned short last = builder->cursor->value.character;
                    if (last < first)
                        return 7;
                    for (unsigned short character = first; character <= last; ++character) {
                        status = fn_004c10f4(builder, ranges, character);
                        if (status != 0)
                            return status;
                    }
                    builder->cursor = (PatternToken *)builder->cursor->link.next;
                } else {
                    status = fn_004c10f4(builder, ranges, first);
                    if (status != 0)
                        return status;
                    status = fn_004c10f4(builder, ranges, 0x2d);
                    if (status != 0)
                        return status;
                }
            } else {
                status = fn_004c10f4(builder, ranges, first);
                if (status != 0)
                    return status;
            }
            ++items;
            continue;
        }
        if (kind == 2) {
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            int status = fn_004c04f0(builder, ranges);
            if (status != 0)
                return status;
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            continue;
        }
        if (kind == 3) {
            IntervalRing temporary;
            initialize(&temporary, builder->transition_arena);
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            int status = fn_004c04f0(builder, &temporary);
            if (status == 0) {
                builder->cursor = (PatternToken *)builder->cursor->link.next;
                if (!fn_004c3070(&temporary) || !fn_004c3028(ranges, &temporary))
                    status = 2;
            }
            release(&temporary);
            if (status != 0)
                return status;
            continue;
        }
        if (kind == 4)
            return items == 0 ? 6 : 0;
        if (kind == 6) {
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            kind = builder->cursor->kind;
            if (items == 0) {
                if (kind == 6 || kind == 4)
                    return 6;
            } else if (kind != 6 && kind != 4) {
                IntervalRing temporary;
                initialize(&temporary, builder->transition_arena);
                int status = fn_004c04f0(builder, &temporary);
                if (status == 0 && !fn_004c33dc(ranges, &temporary))
                    status = 2;
                release(&temporary);
                if (status != 0)
                    return status;
            }
            continue;
        }
        if (kind == 7) {
            if (!fn_004c389c(ranges, builder->cursor->value.control_bit))
                return 2;
            ++items;
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            continue;
        }
        if (kind == 8) {
            IntervalRing temporary;
            initialize(&temporary, builder->transition_arena);
            int status = 0;
            if (!fn_004c389c(&temporary, builder->cursor->value.control_bit) ||
                !fn_004c3070(&temporary) || !fn_004c3028(ranges, &temporary))
                status = 2;
            release(&temporary);
            if (status != 0)
                return status;
            ++items;
            builder->cursor = (PatternToken *)builder->cursor->link.next;
            continue;
        }
        return kind == PATTERN_TOKEN_END ? 5 : 8;
    }
}
