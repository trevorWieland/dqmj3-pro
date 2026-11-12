/* Generated rename adapter for C:/Users/trevo/Documents/RecProgramming/DQM/dqmj3-wt-big/src/native/third_party/zlib-1.2.5/adler32.c.
 *
 * The upstream file is unmodified and stays next to this adapter. Each
 * macro gives the split the name the original link resolved the reference
 * to: a function entry from config/symbols.txt, or the DAT_<address> shape
 * the project uses for a data object. Nothing here changes a function body.
 */
#ifndef DQMJ3_ZLIB_RENAME_ADLER32
#define DQMJ3_ZLIB_RENAME_ADLER32

#define adler32 fn_00730208

/* The image links two zlib copies and both include this same upstream
 * file, so every symbol this adapter does not place would be defined
 * twice. This copy owns its own symbols; only the mapped ones are placed. */
#define adler32_combine zlib_copy1_adler32_combine
#define adler32_combine64 zlib_copy1_adler32_combine64

#include "../adler32.c"
#endif
