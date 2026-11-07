#include "fixed_arena.h"

static void *find_run(FixedArena *arena, unsigned int start, unsigned int limit, unsigned int blocks)
{
    while (start < limit) {
        unsigned int run = 0;
        while (run < limit - start && arena->occupied[start + run] == 0) {
            ++run;
            if (run == blocks) {
                for (unsigned int index = 0; index < blocks; ++index)
                    arena->occupied[start + index] = 1;
                arena->next = start + blocks;
                return &arena->storage[start];
            }
        }
        start += run + 1;
    }
    return (void *)0;
}

void *fn_004c39c8(FixedArena *arena, unsigned int blocks)
{
    if (blocks == 0)
        return (void *)0;
    unsigned int initial = arena->next;
    void *memory = find_run(arena, initial, FIXED_ARENA_SLOTS, blocks);
    return memory != (void *)0 ? memory : find_run(arena, 0, initial, blocks);
}

void fn_004c3994(FixedArena *arena, void *memory, unsigned int blocks)
{
    unsigned int offset = (unsigned int)((unsigned char *)memory - (unsigned char *)arena->storage);
    unsigned int start = offset / sizeof(FixedArenaBlock);
    for (unsigned int index = start; index < start + blocks; ++index)
        arena->occupied[index] = 0;
}
