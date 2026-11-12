/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004b30f0 .. 004b9f98.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_004b30f0(int param_1,undefined4 param_2)

{
  fn_0079c308(param_1 + 0xc,param_2,0);
  return *(undefined4 *)(param_1 + 0xc);
}



undefined4 fn_004b6424(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  fn_004bebd8(auStack_10,param_1,param_2);
  fn_00170fa4(param_1,auStack_10);
  fn_00170f54(auStack_10);
  return param_1;
}



void fn_004b7244(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  fn_0015ef58(*(undefined4 *)(param_1 + 8),*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + 4,
               *(int *)(iVar1 + 0x10) + -4,0xffffffff);
  return;
}



undefined4 fn_004b72d8(int param_1)

{
  fn_004b7268();
  return *(undefined4 *)(param_1 + 8);
}



int fn_004b8734(int param_1,int param_2)

{
  fn_0015e6f0(param_1,*(undefined4 *)(param_2 + 4));
  *(undefined1 *)(param_1 + 8) = 4;
  return param_1;
}



int fn_004b8770(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_004b8820(param_1);
  return param_1;
}



void fn_004b8790(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[8] = 3;
  return;
}



void fn_004b8d90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



undefined4 * fn_004b93c4(undefined4 *param_1)

{
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_004b9b4c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



undefined8 fn_004b9c48(undefined8 *param_1)

{
  return *param_1;
}



void fn_004b9c58(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      (**(code **)(*piVar1 + 0x74))(piVar1,*(int *)(param_1 + 0x7c),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x70))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x7c) = param_2;
  return;
}



void fn_004b9cb4(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x78) != 0) {
      (**(code **)(*piVar1 + 0x7c))(piVar1,*(int *)(param_1 + 0x78),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x78))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x78) = param_2;
  return;
}



void fn_004b9ef8(void)

{
  fn_004b9f08();
  fn_00455018();
  return;
}



undefined4 fn_004b9f98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  
  fn_004b54dc(auStack_38);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_38,param_3,uVar1,0xffffffff);
  uVar1 = fn_004ba000(param_1,param_2,auStack_38,param_4);
  fn_0014f480(auStack_38);
  return uVar1;
}

