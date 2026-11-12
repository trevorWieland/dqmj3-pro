/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ec6e8 .. 006edf18.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_006ec6e8(int param_1)

{
  return *(int *)(param_1 + 4) + 0x44;
}



int fn_006ec714(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c) + param_2 * 0x54;
}



undefined4 fn_006ec8f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
  }
  return uVar2;
}



undefined4 fn_006ec918(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) ||
     (iVar1 = fn_006e2d28(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined1 fn_006edf18(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00742348(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (((iVar1 != 0) && (uVar2 = iVar1 == 1, !(bool)uVar2)) && (iVar1 == 2)) {
    uVar2 = 2;
  }
  return uVar2;
}

