/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004ba13c .. 004ceb10.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_004ba13c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  
  fn_004b54dc(auStack_38);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_38,param_3,uVar1,0xffffffff);
  fn_004ba19c(param_1,param_2,auStack_38,param_4);
  fn_0014f480(auStack_38);
  return;
}



undefined4 fn_004ba948(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}



undefined4 fn_004bab04(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}



void fn_004baf50(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(*(int *)(param_1 + 8) + 0x10) << 3;
  return;
}



void fn_004bb538(int param_1)

{
  fn_00170fa4(param_1 + 0x28);
  return;
}



void fn_004be9cc(undefined4 param_1,int param_2)

{
  fn_0045f3dc(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



uint fn_004c5be8(int param_1)

{
  return *(uint *)(param_1 + 0x300) & 0xffff;
}



void fn_004c9dd4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)*param_2)[1];
  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = uVar1;
  return;
}



void fn_004c9eac(int *param_1)

{
  *param_1 = (int)(param_1 + 1);
  fn_0012a2d8();
  *(undefined1 *)(*param_1 + 1) = 2;
  *(undefined1 *)*param_1 = 8;
  return;
}



undefined4 fn_004cba48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_004c5d4c(param_1,0);
  if (((*(int *)(iVar1 + 8) == 0) || (iVar1 = fn_004c5d4c(param_1,2), *(int *)(iVar1 + 8) == 0)) &&
     (*(uint *)(param_1 + 0x14) < 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_004cd8d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_004cd914(param_1,param_2,0);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    return;
  }
  fn_004cd914(param_1,param_2,1);
  return;
}



bool fn_004ceb10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return piVar1 != (int *)0x0;
}

