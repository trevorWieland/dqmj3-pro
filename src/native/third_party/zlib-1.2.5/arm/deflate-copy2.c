/* Generated rename adapter for src/native/third_party/zlib-1.2.5/deflate.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each macro
 * gives the split the name the original link resolved the reference to: a
 * function entry from config/symbols.txt, or the DAT_<address> shape the
 * project uses for a data object. Nothing here changes a function body.
 *
 * This is the second of the image's two zlib links. deflateEnd is the only
 * function of this copy the split names and the image holds byte-for-byte. The
 * larger functions are blocked, and reported rather than claimed:
 *
 *   deflate, deflateReset  call __aeabi_memclr, which armcc generates after
 *                          preprocessing from memset(dest, 0, n); no rename
 *                          reaches the generated call and the split has no
 *                          symbol for the helper;
 *   deflateInit2_          tail-calls deflateReset, so it cannot be placed
 *                          while that function is unrepresentable;
 *   deflate_slow,
 *   deflate_stored         have no split entry at all.
 *
 * memcpy is mapped at the source name, not at the compiler's __aeabi_memcpy:
 * armcc lowers memcpy to that helper after preprocessing, so the helper name is
 * not a macro target, while the three-argument call itself keeps its ABI. The
 * image's helper is memory_copy_unaligned.
 */
#ifndef DQMJ3_ZLIB_RENAME_DEFLATE_COPY2
#define DQMJ3_ZLIB_RENAME_DEFLATE_COPY2

#define deflateEnd fn_00737c8c

#define memcpy memory_copy_unaligned

/* Clang 21 diagnoses zlib 1.2.5's K&R function definitions and one negative
 * shift as errors under the public-compile census's -Werror, while armcc 4.1 --
 * the compiler this drop is measured against -- accepts them. These pragmas
 * silence only the diagnostics, and only under Clang: no body changes, and the
 * armcc object stays exactly what the measured profile produces. */
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wshift-negative-value"
#endif

#include "../deflate.c"
#endif
