#include "pattern_outer.h"


void fn_004c3b08(FixedArena *arena)
{
    arena->occupied = (void *)0;
    arena->storage = (void *)0;
    arena->next = 0;
}

/* memory_zero_aligned -- 0x00301f50, 84 bytes, ARM, 435 call sites, draft.
 *
 * Zero-fills `bytes` bytes in 32/16/8/4-byte stores and returns the end pointer.
 * The original stores words with no alignment prologue, so the destination must
 * be word aligned; memory_zero_unaligned is the general variant.
 *
 * Evidence: the corpus disassembly is the memset shape; the 435 call sites pass
 * stack buffers and lengths 0x80 .. 0xf0.
 */
void *memory_zero_aligned(void *destination, unsigned int bytes)
{
    unsigned char *end = destination;
    while (bytes != 0) {
        *end++ = 0;
        --bytes;
    }
    return end;
}

/* memory_zero_unaligned -- 0x00158f6c, 64 bytes, ARM, 150 call sites, draft.
 *
 * Zero-fills `bytes` bytes for an arbitrary destination: advances a misaligned
 * pointer to a word boundary, then delegates to memory_zero_aligned. The arena
 * setup at 0x004c3974 uses it to clear the 3,072-byte block map.
 *
 * Evidence: the prologue in the original bytes and the tail call at the end.
 */
void *memory_zero_unaligned(void *destination, unsigned int bytes)
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
    return memory_zero_aligned(end, bytes);
}

void fn_004c3974(FixedArena *arena, void *scratch)
{
    arena->occupied = scratch;
    arena->storage = (FixedArenaBlock *)((unsigned char *)scratch + 3072);
    arena->next = 0;
    memory_zero_unaligned(scratch, 3072);
}
