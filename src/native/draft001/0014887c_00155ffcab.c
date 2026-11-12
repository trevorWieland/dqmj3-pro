/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0014f55c .. 001539b8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0014f55c(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x200;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_0014f5b4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_00193ff8(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x18);
  return;
}



void fn_0014f85c(char *param_1)

{
  if (*param_1 == '\0') {
    fn_0013c500(param_1 + 0x34);
    *param_1 = '\x01';
  }
  return;
}



void fn_00150cb4(int *param_1,undefined4 param_2,int param_3)

{
  memory_copy_unaligned(*param_1 + param_1[1],param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return;
}



undefined4 fn_0015252c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0xc) != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar2 != 0) && (param_2 < **(uint **)(param_1 + 4))) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
    *(undefined4 *)(iVar2 + param_2 * 4) = param_3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_001539a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * param_3 * 4;
  if (param_1 != 0x8058) {
    iVar1 = param_2 * param_3 * 2;
  }
  return iVar1;
}



int fn_001539b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 * param_3;
  iVar1 = param_2 * 4;
  if (param_1 == 0x81a5) {
    iVar1 = param_2 * 2;
  }
  else if (param_1 == 0x81a6) {
    iVar1 = param_2 * 3;
  }
  return iVar1;
}

