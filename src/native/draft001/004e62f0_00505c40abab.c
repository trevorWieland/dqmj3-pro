/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004ed504 .. 004ed514.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"



/* store_big_endian_16 -- 0x004ed504, 16 bytes, ARM, 49 call sites, byte-identical.
 *
 * Writes a 16-bit value to two bytes most significant first.
 */
void store_big_endian_16(undefined1 *destination,undefined4 value)

{
  *destination = (char)((uint)value >> 8);
  destination[1] = (char)value;
  return;
}



/* store_big_endian_32 -- 0x004ed514, 32 bytes, ARM, 117 call sites, byte-identical.
 *
 * Writes a 32-bit value to four bytes most significant first.
 */
void store_big_endian_32(undefined1 *destination,undefined4 value)

{
  *destination = (char)((uint)value >> 0x18);
  destination[1] = (char)((uint)value >> 0x10);
  destination[2] = (char)((uint)value >> 8);
  destination[3] = (char)value;
  return;
}

