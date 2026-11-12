/* Generated rename adapter for C:/Users/trevo/Documents/RecProgramming/DQM/dqmj3-wt-big/src/native/third_party/zlib-1.2.5/inflate.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each
 * macro gives the split the name the original link resolved the reference
 * to: a function entry from config/symbols.txt, or the DAT_<address> shape
 * the project uses for a data object. Nothing here changes a function body.
 */
#ifndef DQMJ3_ZLIB_RENAME_INFLATE
#define DQMJ3_ZLIB_RENAME_INFLATE

#define __aeabi_memcpy fn_00301a9c
#define adler32 fn_00736384
#define crc32 fn_00736734
#define inflateEnd fn_00739ad4
#define inflate_fast fn_00739d08
#define inflate_table fn_0073a470
#define zcalloc fn_0073aa84
#define zcfree fn_0073aa8c

/* Clang 21 diagnoses zlib 1.2.5's K&R function definitions and one negative
 * shift as errors under the public-compile census's -Werror, while armcc 4.1 --
 * the compiler this drop is measured against -- accepts them. These pragmas
 * silence only the diagnostics, and only under Clang: no body changes, and the
 * armcc object stays exactly what the measured profile produces. */
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wshift-negative-value"
#endif

#include "../inflate.c"
#endif
