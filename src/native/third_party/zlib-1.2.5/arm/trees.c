/* Generated rename adapter for src/native/third_party/zlib-1.2.5/trees.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each macro
 * gives the split the name the original link resolved the reference to: a
 * function entry from config/symbols.txt, or the DAT_<address> shape the
 * project uses for a data object. Nothing here changes a function body.
 *
 * The first four functions were registered on 2026-11-12. The second group
 * needs translation-unit data placement: _tr_flush_block and compress_block
 * load the unit's .constdata tables (proved at 0x0080c974), and _tr_init
 * initialises the descriptors in its .data section (proved at 0x008c35b4).
 * scan_tree is the copy at 0x0073abac, which is the one _tr_flush_block calls;
 * the byte-identical copy at 0x0073aa9c has no caller in the measured set.
 */
#ifndef DQMJ3_ZLIB_RENAME_TREES
#define DQMJ3_ZLIB_RENAME_TREES

#define _tr_align fn_00735650
#define _tr_stored_block fn_007361b0
#define build_tree fn_00729cd8
#define send_tree fn_0073b23c

#define _tr_flush_block fn_00735950
#define _tr_init fn_00736060
#define compress_block fn_0072a9b0
#define scan_tree fn_0073abac

/* Clang 21 diagnoses zlib 1.2.5's K&R function definitions and one negative
 * shift as errors under the public-compile census's -Werror, while armcc 4.1 --
 * the compiler this drop is measured against -- accepts them. These pragmas
 * silence only the diagnostics, and only under Clang: no body changes, and the
 * armcc object stays exactly what the measured profile produces. */
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wshift-negative-value"
#endif

#include "../trees.c"
#endif
