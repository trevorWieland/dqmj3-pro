/* Generated rename adapter for src/native/third_party/zlib-1.2.5/crc32.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each macro
 * gives the split the name the original link resolved the reference to: a
 * function entry from config/symbols.txt, or the DAT_<address> shape the
 * project uses for a data object. Nothing here changes a function body.
 *
 * This is the first of the image's two zlib links: crc32 at 0x007305b8 and the
 * static big-endian body it tail-calls at 0x0072ae0c. The literal pool word
 * that names the unit's CRC table is placed by the unit's dataProfile, which
 * proves the table's address (0x007f0b58, 8,192 bytes) from the relocation.
 */
#ifndef DQMJ3_ZLIB_RENAME_CRC32_COPY1
#define DQMJ3_ZLIB_RENAME_CRC32_COPY1

#define crc32 fn_007305b8
#define crc32_big fn_0072ae0c

/* Clang 21 diagnoses zlib 1.2.5's K&R function definitions and one negative
 * shift as errors under the public-compile census's -Werror, while armcc 4.1 --
 * the compiler this drop is measured against -- accepts them. These pragmas
 * silence only the diagnostics, and only under Clang: no body changes, and the
 * armcc object stays exactly what the measured profile produces. */
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wshift-negative-value"
#endif

#include "../crc32.c"
#endif
