/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 001a49b0 .. 001a4a68.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_001a49b0(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x300) {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_001a4a68(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  *param_1 = uVar1 | uVar1 << 0x10;
  return;
}

