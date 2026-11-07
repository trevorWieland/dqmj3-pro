#include "pattern_outer.h"

void fn_004c3b08(FixedArena *arena)
{
    arena->occupied = (void *)0;
    arena->storage = (void *)0;
    arena->next = 0;
}

void *fn_00301f50(void *destination, unsigned int bytes)
{
    unsigned char *end = destination;
    while (bytes != 0) {
        *end++ = 0;
        --bytes;
    }
    return end;
}

void *fn_00158f6c(void *destination, unsigned int bytes)
{
    unsigned char *end = destination;
    if (bytes < 4) {
        while (bytes != 0) {
            *end++ = 0;
            --bytes;
        }
        return end;
    }
    unsigned int alignment = (__UINTPTR_TYPE__)end & 3;
    if (alignment != 0) {
        unsigned int initial = 4 - alignment;
        bytes -= initial;
        while (initial != 0) {
            *end++ = 0;
            --initial;
        }
    }
    return fn_00301f50(end, bytes);
}

void fn_004c3974(FixedArena *arena, void *scratch)
{
    arena->occupied = scratch;
    arena->storage = (FixedArenaBlock *)((unsigned char *)scratch + 3072);
    arena->next = 0;
    fn_00158f6c(scratch, 3072);
}
