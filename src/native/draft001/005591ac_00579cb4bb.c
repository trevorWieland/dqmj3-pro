/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005730e8 .. 00579cb4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005730e8(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),1);
  }
  fn_00689824(param_1,1);
  return;
}



void fn_00573220(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),0);
  }
  fn_00689824(param_1,0);
  return;
}



void fn_00573d60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_002283d0();
  uVar2 = fn_002ea524((int)*(short *)(iVar1 + 2));
  iVar3 = fn_00250388();
  if (iVar3 == 0) {
    fn_002508f4(uVar2,*(undefined4 *)(iVar1 + 4));
  }
  fn_00237c74(param_2,(int)*(short *)(iVar1 + 2),0xff,0);
  fn_0024fa24(param_2);
  return;
}



void fn_00573fc8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x44) = param_3;
  return;
}



void fn_0057433c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x4c) = param_3;
  return;
}



void fn_00579c98(int param_1)

{
  fn_002feca8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



int fn_00579cb4(int param_1)

{
  return *(int *)(param_1 + 0xc) * 0x3c;
}

