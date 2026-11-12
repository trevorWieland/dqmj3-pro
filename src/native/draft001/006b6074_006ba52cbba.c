/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006b8760 .. 006ba018.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined8 fn_006b8760(int param_1)

{
  return **(undefined8 **)(param_1 + 4);
}



bool fn_006b8970(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + -4) == *(int *)(param_1 + 0xc);
}



int fn_006b89d4(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    param_1 = param_1 + param_2 * 4;
  }
  return param_1;
}



undefined4 fn_006b9fb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00154ac8(0x35);
  if ((iVar1 == 0) || (iVar1 = fn_006b7654(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006ba018(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x34;
}

