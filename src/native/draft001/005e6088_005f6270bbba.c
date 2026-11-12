/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005f4d9c .. 005f56e4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005f4d9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x678) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x67c) = param_3;
  return;
}



void fn_005f56e4(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x671) = *param_2;
  return;
}

