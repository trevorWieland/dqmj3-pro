#include "pattern_nfa.h"

void fn_004c387c(PatternNfaCloneMap *map, PatternNfaStateRing *states, FixedArena *arena)
{
    map->entries.previous = &map->entries;
    map->entries.next = &map->entries;
    map->entry_arena = arena;
    map->states = states;
    map->transition_arena = arena;
}

void fn_004c3834(PatternNfaCloneEntry **result, PatternNfaCloneMap *map, NfaState *const *original)
{
    *result = (void *)0;
    IntrusiveLink *link = map->entries.next;
    *result = (PatternNfaCloneEntry *)link;
    while (link != &map->entries) {
        PatternNfaCloneEntry *entry = (PatternNfaCloneEntry *)link;
        if (entry->original == *original)
            return;
        link = link->next;
        *result = (PatternNfaCloneEntry *)link;
    }
}

void pattern_nfa_release_map(PatternNfaCloneMap *map)
{
    if (map->entry_arena != (void *)0) {
        IntrusiveLink *link = map->entries.next;
        while (link != &map->entries) {
            IntrusiveLink *following = link->next;
            fn_004c3994(map->entry_arena, link, 1);
            link = following;
        }
    }
}

int fn_004c360c(PatternNfaCloneMap *map, NfaState **result, NfaState *const *start, NfaState *const *stop)
{
    NfaState *state = fn_004c39c8(map->states->owner, 2);
    if (state == (void *)0)
        return 0;
    state->transitions.previous = &state->transitions;
    state->transitions.next = &state->transitions;
    state->transition_arena = (void *)0;
    state->identifier = 0;
    state->collection.previous = map->states->head.previous;
    state->collection.next = &map->states->head;
    map->states->head.previous = &state->collection;
    state->collection.previous->next = &state->collection;
    state->transition_arena = map->transition_arena;
    PatternNfaCloneEntry *entry = fn_004c39c8(map->entry_arena, 1);
    if (entry == (void *)0)
        return 0;
    entry->original = (void *)0;
    entry->replacement = (void *)0;
    entry->link.previous = map->entries.previous;
    entry->link.next = &map->entries;
    map->entries.previous = &entry->link;
    entry->link.previous->next = &entry->link;
    entry->original = *start;
    entry->replacement = state;
    if (*start != *stop) {
        for (IntrusiveLink *link = (*start)->transitions.next; link != &(*start)->transitions; link = link->next) {
            MatchEdge *old = (MatchEdge *)link;
            NfaState *destination = old->label.destination;
            PatternNfaCloneEntry *found;
            fn_004c3834(&found, map, &destination);
            NfaState *target;
            if ((IntrusiveLink *)found == &map->entries) {
                target = (void *)0;
                if (!fn_004c360c(map, &target, &destination, stop))
                    return 0;
            } else
                target = found->replacement;
            MatchEdge *edge = pattern_nfa_new_transition(state);
            if (edge == (void *)0)
                return 0;
            void *value = target;
            if (!fn_007555f0(&edge->label, &old->label, &value, map->transition_arena))
                return 0;
        }
    }
    *result = state;
    return 1;
}
