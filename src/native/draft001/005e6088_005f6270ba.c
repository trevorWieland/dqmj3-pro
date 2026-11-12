/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005e8e60 .. 005ea69c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005e8e60(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 5) = param_2;
  *(undefined1 *)(iVar1 + 6) = param_3;
  *(undefined1 *)(iVar1 + 7) = param_4;
  *(undefined1 *)(iVar1 + 8) = param_5;
  *(undefined1 *)(iVar1 + 9) = param_6;
  *(undefined1 *)(iVar1 + 10) = param_7;
  return;
}



void fn_005e8f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dcfbc(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



int fn_005ea33c(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0xc;
}



int fn_005ea4e8(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 0x20) + param_2 * 0x30;
}



int fn_005ea4fc(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0x30;
}



int fn_005ea5fc(int param_1)

{
  return *(int *)(param_1 + 0x148) + 4;
}



void fn_005ea69c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x148) + 0x8c) + param_2 * 4);
  if (*piVar1 != 0) {
    fn_005e7e54();
    fn_002feef8();
    *piVar1 = 0;
  }
  return;
}

