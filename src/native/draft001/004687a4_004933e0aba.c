/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00473ca4 .. 0047a2e4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00473ca4(int param_1)

{
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  fn_004a1464();
  return;
}



undefined4 fn_004790ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_004790f8();
  if (iVar1 != 0) {
    uVar2 = fn_00478a24(param_1,iVar1,param_3,param_4);
  }
  return uVar2;
}



void fn_0047a2e4(int param_1)

{
  fn_00170fa4(param_1 + 0xc);
  return;
}

