/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ebeec .. 006ebf84.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_006ebeec(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0xc;
}



bool fn_006ebf84(int param_1,int param_2)

{
  return *(int *)(param_2 + 0xc) == *(int *)(*(int *)(param_1 + 4) + 0xc);
}

