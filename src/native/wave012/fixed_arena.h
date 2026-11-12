#ifndef DQMJ3_WAVE012_FIXED_ARENA_H
#define DQMJ3_WAVE012_FIXED_ARENA_H

enum { FIXED_ARENA_SLOTS = 0xa40 };

typedef struct FixedArenaBlock {
    _Alignas(void *) unsigned char bytes[4 * sizeof(void *)];
} FixedArenaBlock;

typedef struct FixedArena {
    unsigned char *occupied;
    FixedArenaBlock *storage;
    unsigned int next;
} FixedArena;

void *fixed_arena_allocate(FixedArena *arena, unsigned int blocks);
void fixed_arena_release(FixedArena *arena, void *memory, unsigned int blocks);

_Static_assert(sizeof(unsigned int) == 4 && sizeof(unsigned char) == 1, "scalar widths");
_Static_assert(sizeof(FixedArenaBlock) == 4 * sizeof(void *), "physical block width");

#endif
