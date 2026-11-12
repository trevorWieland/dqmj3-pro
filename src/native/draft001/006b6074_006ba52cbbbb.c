/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ba4bc .. 006ba52c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


uint fn_006ba4bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x1f) >> 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba4fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 7) >> 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba52c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x7f) >> 6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

