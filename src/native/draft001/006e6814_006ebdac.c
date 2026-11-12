/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006e6814 .. 006ebdac.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_006e6814(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 8;
}



int fn_006e6820(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}



int fn_006e690c(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 0x88;
}



undefined4 fn_006e73f8(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(param_1 + param_2 * 0x10 + param_3 * 4 + 4);
}



int fn_006e7420(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0xd4) + 0x10) + 0x1c;
}



int fn_006e7ac8(int param_1)

{
  return *(int *)(param_1 + 8) + 0x90;
}



int fn_006e7c24(int param_1)

{
  return *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
}



undefined4 fn_006e7ca4(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(*(int *)(param_1 + 0x14) + -4) == *(int *)(param_1 + 0x20)) &&
      (*(char *)(param_1 + 0x24) != '\0')) || (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_006e810c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 4;
}



int fn_006e8118(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
}



int fn_006e81e8(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 8;
}



undefined4 fn_006e92b4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x108);
  if ((((cVar1 == '\0' || cVar1 == '\x12') || (cVar1 == '\x13' || cVar1 == '\x14')) ||
      (cVar1 == '\x10' || cVar1 == '\x0f')) || (cVar1 == '\x11')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006e9744(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 4;
}



int fn_006e9750(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
}



int fn_006e9c1c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba284();
  return param_2 + iVar1 * 8;
}



undefined4 fn_006e9cc8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  bVar3 = uVar2 != param_2;
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 9);
  }
  if ((bVar3 && uVar2 != param_2) && (*(byte *)(param_1 + 10) != param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006e9cf4(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    if (*(byte *)(param_1 + 8) == param_2) {
      return 1;
    }
    if (param_3 == 1) goto LAB_006e9d24;
  }
  if (*(byte *)(param_1 + 9) == param_2) {
    return 1;
  }
  if (param_3 == 2) {
    return 0;
  }
LAB_006e9d24:
  if (*(byte *)(param_1 + 10) == param_2) {
    return 1;
  }
  return 0;
}



undefined4 fn_006e9e24(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x218);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x3c8);
  }
  return uVar1;
}



void fn_006e9e34(int param_1)

{
  if (**(int **)(param_1 + 4) == 0) {
    return;
  }
  fn_006ec95c();
  return;
}



int fn_006e9f50(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 8) - *(int *)(*(int *)(param_1 + 4) + 4) >> 3;
}



int fn_006e9fcc(int param_1)

{
  return *(int *)(param_1 + 4) + 0xc;
}



int fn_006ea000(int param_1)

{
  return *(int *)(param_1 + 4) + 0x164;
}



void fn_006ea028(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00156130(param_1 + 0x14,*param_2,*(undefined4 *)(param_1 + 0x5c),1);
  *param_2 = uVar1;
  return;
}



int fn_006eb278(int param_1)

{
  return *(int *)(param_1 + 4) + 8;
}



int fn_006eb290(int param_1)

{
  return *(int *)(param_1 + 4) + 0x10;
}



int fn_006eb2b4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x68;
}



undefined4 fn_006eb3c0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(*(int *)(param_1 + 0x14) + 4) & 1) == 0) && (*(char *)(param_1 + 0x10) != '\x01'))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006eb5e4(int *param_1,int param_2)

{
  param_1 = (int *)*param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_1 = param_1 + 2;
    }
    else if (param_2 == 2) {
      param_1 = param_1 + 4;
    }
  }
  return *(undefined4 *)(*param_1 + 0x10);
}



int fn_006eba5c(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



int fn_006eba70(int *param_1)

{
  return *param_1 + 0x28;
}



int fn_006ebd98(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



int fn_006ebdac(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}

