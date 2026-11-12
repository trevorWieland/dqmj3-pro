/* Generated rename adapter for src/native/third_party/zlib-1.2.5/deflate.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each macro
 * gives the split the name the original link resolved the reference to: a
 * function entry from config/symbols.txt, or the DAT_<address> shape the
 * project uses for a data object. Nothing here changes a function body.
 *
 * This is the first of the image's two zlib links. Only the functions the image
 * holds byte-for-byte from this copy are mapped; everything else the file
 * defines stays an unmeasured source function. The rest of this copy's
 * deflate.c is blocked, and reported rather than claimed:
 *
 *   deflate, fill_window  call __aeabi_memclr, which armcc generates after
 *                         preprocessing from memset(dest, 0, n), so no rename
 *                         reaches the call and the split has no symbol for it;
 *   deflate_fast          calls fill_window, whose section is discarded, so the
 *                         call has no representable target;
 *   deflate_slow,
 *   deflate_stored        are real and byte-exact but the split gives them no
 *                         entry, so they cannot be placed;
 *   deflateBound          starts four bytes after the split entry fn_00731bec.
 *
 * memcpy is mapped at the source name, not at the compiler's __aeabi_memcpy:
 * armcc lowers memcpy to that helper after preprocessing, so the helper name is
 * not a macro target, while the three-argument call itself keeps its ABI. The
 * image's helper is memory_copy_unaligned.
 */
#ifndef DQMJ3_ZLIB_RENAME_DEFLATE_COPY1
#define DQMJ3_ZLIB_RENAME_DEFLATE_COPY1

#define deflateEnd fn_00731cf0
#define flush_pending fn_0072e014

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
