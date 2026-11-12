/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00747fd0 .. 00747fd0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_00747fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc) + uVar3 * 0x10;
  }
  return *(int *)(iVar1 + 8) != 0;
}

