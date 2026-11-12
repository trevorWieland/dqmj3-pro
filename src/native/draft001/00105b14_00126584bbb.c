/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00124914 .. 00126584.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00124914(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}



undefined4 fn_001251b8(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_001147a8();
  iVar2 = fn_0013e078();
  if ((iVar2 == 0 || (uVar1 & 0x20000000) == 0) || ((uVar1 & 0x10000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_0012574c(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_0013eb54(param_1);
  fn_001257a8();
  return uVar1;
}



void fn_00126584(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x2f;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

