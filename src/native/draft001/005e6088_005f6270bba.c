/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005eff2c .. 005f4344.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_005eff2c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c) + param_2 * 0x54;
}



bool fn_005f0750(int param_1)

{
  return *(int *)(**(int **)(param_1 + 4) + 4) == 0;
}



undefined4 fn_005f4344(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0015e284();
  if (uVar1 <= param_1) {
    iVar2 = fn_0015e284();
    iVar3 = fn_0015e218();
    if (param_1 < (uint)(iVar3 + iVar2)) {
      return 1;
    }
  }
  return 0;
}

