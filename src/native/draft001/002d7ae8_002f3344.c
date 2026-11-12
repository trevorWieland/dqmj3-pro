/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002d7ae8 .. 002f3344.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_002d805c(int param_1)

{
  fn_002caccc();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return 0;
}



void fn_002d81e0(int param_1)

{
  fn_0012d73c(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



undefined4 fn_002d8870(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == -1) {
    fn_002d9528(param_1);
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



void fn_002dc094(int *param_1)

{
  (**(code **)(*param_1 + 0x14c))(param_1);
  fn_001d9f9c(param_1);
  return;
}



bool fn_002dd168(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_002dd188(param_1,param_3,param_2);
  return iVar1 != 0;
}



void fn_002df424(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x37] != 4) {
    iVar2 = 0;
    do {
      piVar1 = (int *)param_1[iVar2 + 0x50];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x54))(piVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    (**(code **)(*param_1 + 0x54))(param_1,0);
    param_1[0x37] = 4;
  }
  return;
}



void fn_002df6f8(int param_1,uint param_2)

{
  if (param_2 < 2) {
    *(uint *)(param_1 + 0xf0) = param_2;
  }
  return;
}



void fn_002e2d78(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



void fn_002e2d84(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x30) = param_3;
  return;
}



void fn_002e3e30(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[7]) {
    do {
      (**(code **)(*param_1 + 0x10))(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[7]);
  }
  return;
}



void fn_002e6978(int param_1)

{
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  fn_0031c0e0();
  return;
}



undefined4 fn_002f26a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x60) == 0) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_002f2800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x60) == 0) ||
      (iVar1 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar1 != 0)) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(param_1 + 0x60)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_002f2954(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 != 0) {
    bVar3 = *(int *)(uVar1 + 0x54) == 0;
    if (bVar3) {
      uVar1 = (uint)*(byte *)(uVar1 + 0x5c);
    }
    if (bVar3 && uVar1 == 0) {
      iVar2 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 100) == 0) {
        return 1;
      }
    }
    fn_00232a60(*(undefined4 *)(param_1 + 100),param_1 + 0x60);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return 1;
}



bool fn_002f2dac(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



undefined4 fn_002f2fc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x60) == 0) || (iVar1 = fn_006f8444(), iVar1 != 0)) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(param_1 + 0x60)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_002f3094(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3140(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f31ec(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3298(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3344(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}

