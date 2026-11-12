/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0022cf90 .. 00232fa8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0022cf90(int param_1)

{
  if (*(int *)(param_1 + 0x6c) == -1) {
    return;
  }
  fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),0);
  return;
}



void fn_00232fa8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}

