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

/* fixed_arena_allocate -- 0x004c39c8, 320 bytes, ARM, 47 call sites, draft.
 *
 * Allocates `blocks` contiguous 16-byte blocks from the fixed arena: first fit
 * from arena->next to the slot limit, then wrapped from zero, marking the run
 * occupied. Returns the storage pointer, or nothing when no run fits.
 *
 * Evidence: the reconstructed body and the FixedArena type in fixed_arena.h; the
 * call sites pass an arena and a block count. The draft does not reproduce the
 * original 320 bytes yet.
 */
void *fixed_arena_allocate(FixedArena *arena, unsigned int blocks)
{
    if (blocks == 0)
        return (void *)0;
    unsigned int initial = arena->next;
    void *memory = find_run(arena, initial, FIXED_ARENA_SLOTS, blocks);
    return memory != (void *)0 ? memory : find_run(arena, 0, initial, blocks);
}

/* fixed_arena_release -- 0x004c3994, 52 bytes, ARM, 50 call sites, draft.
 *
 * Returns a run to the arena: converts the storage pointer back to a block index
 * and clears the occupancy bytes of `blocks` blocks, which is what lets
 * fixed_arena_allocate hand the run out again.
 *
 * Evidence: the reconstructed body; the call sites pair it with an allocation of
 * the same size.
 */
void fixed_arena_release(FixedArena *arena, void *memory, unsigned int blocks)
{
    unsigned int offset = (unsigned int)((unsigned char *)memory - (unsigned char *)arena->storage);
    unsigned int start = offset / sizeof(FixedArenaBlock);
    for (unsigned int index = start; index < start + blocks; ++index)
        arena->occupied[index] = 0;
}
