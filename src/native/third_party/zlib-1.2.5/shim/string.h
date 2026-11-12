/* Build shim for the measured ARM image: zlib 1.2.5 predates its Z_SOLO mode,
 * so zutil.h maps zmemcpy/zmemcmp/zmemzero onto the C library even in a
 * freestanding build. armcc 4.1 supplies the declarations; the pinned Clang
 * distribution ships no C library headers. No code and no storage here. */
#ifndef ZLIB_BUILD_SHIM_STRING_H
#define ZLIB_BUILD_SHIM_STRING_H

#include <stddef.h>

void *memcpy(void *dest, const void *source, size_t count);
void *memmove(void *dest, const void *source, size_t count);
void *memset(void *dest, int value, size_t count);
int memcmp(const void *left, const void *right, size_t count);

#endif
