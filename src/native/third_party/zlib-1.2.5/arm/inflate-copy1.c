/* Generated rename adapter for C:/Users/trevo/Documents/RecProgramming/DQM/dqmj3-wt-big/src/native/third_party/zlib-1.2.5/inflate.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each
 * macro gives the split the name the original link resolved the reference
 * to: a function entry from config/symbols.txt, or the DAT_<address> shape
 * the project uses for a data object. Nothing here changes a function body.
 */
#ifndef DQMJ3_ZLIB_RENAME_INFLATE
#define DQMJ3_ZLIB_RENAME_INFLATE

/* fn_00733bb0 (this copy's inflateEnd) is already reproduced byte-exact by
 * src/native/wave058/initialize058.c; this unit measures the second
 * function the adapter packet located at this address. */
#define inflateReset fn_00739c74

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
