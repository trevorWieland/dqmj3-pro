/* Build shim for the measured ARM image: zlib 1.2.5 predates its Z_SOLO mode,
 * so zutil.h includes <stdlib.h> even in a freestanding build. armcc 4.1
 * supplies it; the pinned Clang distribution ships no C library headers. The
 * zlib units use allocation through their caller's zalloc/zfree callbacks, so
 * these declarations only satisfy the include. No code and no storage here. */
#ifndef ZLIB_BUILD_SHIM_STDLIB_H
#define ZLIB_BUILD_SHIM_STDLIB_H

#include <stddef.h>

void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void *pointer, size_t size);
void free(void *pointer);

#endif
