/* Build shim for the measured ARM image: zlib 1.2.5 predates its Z_SOLO mode,
 * so its headers include the standard C headers even in a freestanding build.
 * armcc 4.1 supplies them; the pinned Clang distribution ships no C library
 * headers, so a unit that compiles under both needs these declarations from a
 * reviewed directory. This file contains types only; no code and no storage. */
#ifndef ZLIB_BUILD_SHIM_STDDEF_H
#define ZLIB_BUILD_SHIM_STDDEF_H

typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;

#define NULL ((void *)0)

#endif
