/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0066e458 .. 0067b540.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0066e458(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined1 *)(param_1 + 0x4d) = param_3;
  return;
}



bool fn_0066e510(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_0013d4ec();
  return *piVar1 != param_2;
}



void fn_0066ef2c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void fn_0067021c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 6;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void fn_00671e04(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 7;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc50);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc4c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void fn_00673b04(undefined4 param_1)

{
  fn_0066de74(param_1,2);
  return;
}



undefined4 fn_00673cb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x50) + 1;
    iVar2 = iVar1;
    if (iVar1 <= iVar3) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    if (iVar1 <= iVar3) {
      *(char *)(param_1 + 0x58) = (char)iVar2;
    }
  }
  return 1;
}



void fn_006740c4(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 9;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_0067633c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 == 1 || iVar1 == 4) || (iVar1 == 6 || iVar1 == 7)) || (iVar1 == 8 || iVar1 == 9)) ||
     (iVar1 == 10 || iVar1 == 0xb)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0067664c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 8;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



void fn_006779bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}



void fn_00677a68(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  fn_00170fa4(param_1 + 0x68,param_2 + 1);
  return;
}



void fn_0067aa80(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  return;
}



void fn_0067b540(int param_1)

{
  memory_zero_unaligned(param_1 + 100,0xff);
  return;
}

