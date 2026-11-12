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


void fn_004ed504(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



void fn_004ed514(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}

