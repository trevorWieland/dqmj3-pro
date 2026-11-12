/* Minimal <limits.h> for the public-compile census.
 *
 * zlib 1.2.5's crc32.c includes <limits.h> to choose its four-byte integer type
 * for the word-at-a-time CRC. armcc 4.1 supplies its own limits.h, and the
 * measured build puts that include directory first, so this file is never seen
 * by armcc. The pinned Clang distribution is freestanding and supplies no libc
 * header, so the census needs the constants the file actually uses. The values
 * are the ARM32 EABI ones the measured target has: 32-bit int and long.
 *
 * This is a reviewed build shim, pinned in toolscripts/public_zlib_headers.py
 * like the upstream headers whose includes it satisfies.
 */
#ifndef DQMJ3_ZLIB_SHIM_LIMITS_H
#define DQMJ3_ZLIB_SHIM_LIMITS_H

#define CHAR_BIT 8
#define SCHAR_MIN (-128)
#define SCHAR_MAX 127
#define UCHAR_MAX 255
#define SHRT_MIN (-32768)
#define SHRT_MAX 32767
#define USHRT_MAX 65535
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647
#define UINT_MAX 4294967295U
#define LONG_MIN (-2147483647L - 1L)
#define LONG_MAX 2147483647L
#define ULONG_MAX 4294967295UL

#endif
