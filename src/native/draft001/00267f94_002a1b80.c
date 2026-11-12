/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00267f94 .. 002a1b80.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00267f94(void)

{
  fn_005e6a40();
  fn_002feef8();
  return;
}



int fn_0026a574(int param_1,uint param_2)

{
  return param_1 + (param_2 ^ 1) * 0x20 + 0x204;
}



bool fn_002798a0(void)

{
  int iVar1;
  
  iVar1 = fn_00278784();
  return iVar1 == 3;
}



bool fn_00279bbc(void)

{
  int iVar1;
  
  iVar1 = fn_00278784();
  return iVar1 == 2;
}



undefined4 * fn_00289ca8(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



void fn_0028ad24(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0;
  return;
}



void fn_0028b680(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  return;
}



void fn_0028b908(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}



void fn_0028b928(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0x14);
  return;
}



void fn_0028b934(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0xc);
  return;
}



void fn_0028b954(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0x1c);
  return;
}



void fn_0028b960(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x5c) = *param_2;
  return;
}



void fn_0028bb7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



undefined4 fn_0028bbf4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00163940();
  if ((iVar1 != 0) && (iVar1 = fn_00660e64(param_1), iVar1 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0028e310(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0028f93c(*(undefined4 *)piVar1[2]);
  }
  return;
}



void fn_0028ebc8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0028fb1c(*(undefined4 *)piVar1[2]);
  }
  return;
}



void fn_00290100(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0x98) = param_2;
    *(int *)(param_1 + 0x9c) = iVar1;
  }
  return;
}



bool fn_00291ad4(int param_1)

{
  return param_1 == 6;
}



void fn_0029331c(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = 0x74;
  *param_2 = 10;
  return;
}



bool fn_002940d0(int param_1)

{
  return param_1 != 0;
}



bool fn_00295fa4(int param_1,int param_2)

{
  return *(int *)(param_1 + param_2 * 4 + 0x2c8) != 0;
}



void fn_00295fb8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2c8) = param_3;
  return;
}



void fn_00296058(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x2c) + -8);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x34) + -8);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



bool fn_00296110(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x2c) == 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x34);
  }
  return bVar1 && param_1 == 0;
}



void fn_00299518(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x48);
  return;
}



undefined4 * fn_00299cf8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  fn_00301f50(param_1 + 1,0x80);
  fn_00301f50(param_1 + 0x21,0x80);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}



bool fn_002a0178(uint param_1)

{
  return 0xc < param_1;
}



int fn_002a19c4(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    param_1 = param_1 + param_2 * 4;
  }
  return param_1;
}



void fn_002a1ad0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 5;
  return;
}



void fn_002a1af4(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 4;
  return;
}



void fn_002a1b80(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 3;
  return;
}

