/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0014887c .. 00148c80.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0014887c(int param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



bool fn_00148c5c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0012ea60(param_1,param_1 + 4,param_2);
  iVar1 = fn_00145aac(*(undefined4 *)(iVar1 + 8));
  return iVar1 == 1;
}



bool fn_00148c80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,param_2);
  return *(int *)(*(int *)(iVar1 + 8) + 8) != 0;
}

