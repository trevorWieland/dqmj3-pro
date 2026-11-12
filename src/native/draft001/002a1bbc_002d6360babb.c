/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002c76bc .. 002c8f94.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002c76bc(undefined4 param_1)

{
  fn_002c1f84();
  fn_002c74d8(param_1);
  return;
}



void fn_002c8f94(int param_1)

{
  fn_002b0d18(*(undefined4 *)(param_1 + 0xb4),0,1);
  *(int *)(param_1 + 0xbc) =
       (int)(short)(*(int *)(*(int *)(param_1 + 0xb4) + 8) - *(int *)(*(int *)(param_1 + 0xb4) + 4)
                   >> 1);
  return;
}

