/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0053e3f4 .. 0054f1dc.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_0053e3f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = param_1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar2 != 0 && iVar1 != 0) {
    fn_001694e4(param_2,iVar2,iVar1 << 2);
    param_2 = param_2 + *(int *)(param_1 + 8) * 4;
  }
  return param_2;
}



void fn_005483e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + *(int *)(param_1 + 0x48) * 0x20;
  iVar2 = (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) & 0xfffffffcU) + *(int *)(iVar1 + 0x10);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar1 = *(int *)(iVar1 + 0x14) + (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) & 0xfffffffcU);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x60) = iVar1;
  return;
}



void fn_0054be60(int param_1)

{
  fn_0017d90c(param_1 + 4);
  return;
}



int fn_0054be68(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0054a72c(param_1 + 4);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2), iVar1 != 0)) {
    fn_001615fc(param_1 + 4,param_2,iVar1,1);
  }
  return iVar1;
}



void fn_0054e2f0(int param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = 0;
  uVar2 = 0;
  if ((param_2 & 2) != 0) {
    bVar1 = 0x80;
  }
  if ((param_2 != 0) && ((param_2 & 0x40000000) == 0)) {
    uVar2 = 8;
  }
  if ((param_2 & 4) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((param_2 & 8) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_2 & 0x10) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  if ((param_2 & 0x20) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((param_2 & 0x10000) != 0) {
    bVar1 = bVar1 | 0x40;
  }
  if ((param_2 & 0x20000) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_2 & 0x40000) != 0) {
    bVar1 = bVar1 | 1;
  }
  *(byte *)(param_1 + 0x5f8) = bVar1;
  *(undefined1 *)(param_1 + 0x5f9) = uVar2;
  return;
}



undefined4 fn_0054f1dc(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  if (param_3 != 0) {
    param_2 = fn_00560b7c(param_2);
  }
  return param_2;
}

