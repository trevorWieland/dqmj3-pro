/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00156448 .. 0016624c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_00156448(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}



bool fn_0015676c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00165fd0(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}



bool fn_001567a4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    param_3[4] = (uint)*(byte *)(puVar2 + 2);
    uVar1 = fn_001663a0(puVar2);
    *(undefined1 *)(param_3 + 5) = uVar1;
    uVar1 = fn_001663c4(puVar2);
    *(undefined1 *)((int)param_3 + 0x15) = uVar1;
    uVar3 = fn_0016647c(puVar2);
    param_3[3] = uVar3;
    uVar3 = fn_00166444(puVar2);
    param_3[2] = uVar3;
    uVar1 = fn_00166420(puVar2);
    *(undefined1 *)((int)param_3 + 0x16) = uVar1;
  }
  return puVar2 != (undefined4 *)0x0;
}



bool fn_001568d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00166210(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}



undefined4 fn_0015a320(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0012ea60(param_1,param_1 + 4,param_2);
  iVar2 = fn_00145aac(*(undefined4 *)(iVar1 + 8));
  if (iVar2 == 1) {
    uVar3 = fn_00145ac0(*(undefined4 *)(iVar1 + 8));
    return uVar3;
  }
  return 0;
}



undefined4 fn_0015a358(int param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = fn_0016678c(param_1,0xd);
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar2 && uVar1 == 0) {
    fn_0015a394(param_1,0xe,param_2);
  }
  return 0xe;
}



void fn_0015e5c0(int param_1)

{
  fn_0013c920(param_1 + 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  return;
}



undefined4 fn_0015e6d8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)((uint)*(ushort *)((int)param_1 + 10) + param_2 + 4);
  }
  return uVar1;
}



void fn_00162ce4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_00164208(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x100);
  return;
}



void fn_00164230(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x200);
  return;
}



undefined4 fn_00165b48(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\f') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_00165b84(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x01')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



void fn_00165d3c(int param_1)

{
  fn_001759d0(*(undefined4 *)(param_1 + 100));
  return;
}



int fn_0016624c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x34);
}

