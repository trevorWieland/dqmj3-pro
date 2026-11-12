#include "label_ops.h"

void fn_004bff74(MatchStateData *data)
{
    data->transition_arena = (void *)0;
    data->transitions.previous = &data->transitions;
    data->pending_arena = (void *)0;
    data->transitions.next = &data->transitions;
    data->pending.previous = &data->pending;
    data->pending.next = &data->pending;
    data->data_arena = (void *)0;
    data->members = (void *)0;
    data->member_count = 0;
    data->result = 0;
}

int fn_004bfedc(MatchStateData *data, FixedArena *arena, unsigned int members, int clear)
{
    data->data_arena = arena;
    data->member_count = members;
    data->members = fixed_arena_allocate(arena, (members + 15u) >> 4);
    if (data->members == (void *)0)
        return 0;
    if (clear) {
        for (unsigned int index = 0; index < members; ++index)
            data->members[index] = 0;
    }
    data->transition_arena = data->data_arena;
    data->pending_arena = data->data_arena;
    return 1;
}
