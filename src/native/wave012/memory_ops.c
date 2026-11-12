#include "compile_graph.h"


typedef __UINTPTR_TYPE__ MemoryAddress;

static unsigned int read_word(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
           (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

/* memory_compare -- 0x001010c8, 116 bytes, Thumb, 60 call sites, draft.
 *
 * Compares two byte ranges and returns the first byte difference (0 when equal).
 * While both pointers are 4-byte aligned it compares words and resolves the
 * difference low byte first, then finishes byte by byte. Thumb mode separates it
 * from the ARM copy pair below.
 *
 * Evidence: the corpus body, and 60 call sites that pass two buffers and a length.
 *
 * Unknown: whether this is the public memcmp or a library-internal compare.
 */
int memory_compare(const void *left_buffer, const void *right_buffer, unsigned int bytes)
{
    const unsigned char *left = left_buffer;
    const unsigned char *right = right_buffer;
    if ((((MemoryAddress)left | (MemoryAddress)right) & 3) == 0) {
        while (bytes >= 4) {
            unsigned int first = read_word(left);
            unsigned int second = read_word(right);
            left += 4;
            right += 4;
            bytes -= 4;
            if (first != second) {
                int difference = (int)(first & 255) - (int)(second & 255);
                if (difference != 0)
                    return difference;
                difference = (int)(first & 65535) - (int)(second & 65535);
                if (difference != 0)
                    return difference;
                difference = (int)(first & 0xffffff) - (int)(second & 0xffffff);
                if (difference != 0)
                    return difference;
                return (int)(first >> 24) - (int)(second >> 24);
            }
        }
    }
    while (bytes != 0) {
        int difference = (int)*left++ - (int)*right++;
        if (difference != 0)
            return difference;
        --bytes;
    }
    return 0;
}

/* memory_copy_unaligned -- 0x00301a9c, 136 bytes, ARM, 496 call sites, draft.
 *
 * The same copy contract as memory_copy, but it first advances a misaligned
 * destination byte by byte to a word boundary and then copies 32-byte blocks.
 * That prologue is the only difference from 0x0017821c.
 *
 * Evidence: the byte prologue is in the original bytes, and the call sites pass
 * deliberately unaligned pointers (source + 3, source + 0xe). The draft is a
 * forward byte loop, so it is not byte-identical.
 *
 * Unknown: why two copy implementations coexist in one image.
 */
void *memory_copy_unaligned(void *destination, const void *source, unsigned int bytes)
{
    unsigned char *to = destination;
    const unsigned char *from = source;
    for (unsigned int index = 0; index < bytes; ++index)
        to[index] = from[index];
    return to + bytes;
}

/* memory_copy -- 0x0017821c, 116 bytes, ARM, 1,176 call sites, draft.
 *
 * Copies `bytes` bytes from `source` to `destination` and returns the
 * destination: 32-byte blocks with a data preload, then 8/4/2/1-byte steps.
 * The block path is ldmia/stmia and the original has no alignment prologue, so
 * the caller supplies word-aligned buffers; memory_copy_unaligned is the variant
 * that aligns the destination first. The draft below forwards to that variant,
 * which is why it does not reproduce the original 116 bytes yet.
 *
 * Evidence: the corpus disassembly is the memcpy shape, and the 1,176 call sites
 * pass (destination, source, byte count) with counts 0x18 .. 0x118.
 *
 * Unknown: which of the image's memcpy links this is (memcpy or
 * __aeabi_memcpy4) and where the original translation-unit boundary was.
 */
void *memory_copy(void *destination, const void *source, unsigned int bytes)
{
    return memory_copy_unaligned(destination, source, bytes);
}
