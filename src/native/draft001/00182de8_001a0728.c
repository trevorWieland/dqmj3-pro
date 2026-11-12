/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00182de8 .. 001a0728.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_00182de8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_00182dfc(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x03')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_0018360c(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}



byte fn_00183704(int param_1,uint param_2)

{
  return *(byte *)(param_1 + (param_2 >> 3)) >> (param_2 & 7) & 1;
}



int fn_00183840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = fn_0017fbdc(*(undefined1 *)(param_1 + 0x10));
  return iVar1 * param_2 + iVar2;
}



void fn_0018af1c(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x38) != in_s0) {
    *(float *)(param_1 + 0x38) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  return;
}



void fn_0018af84(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x34) != in_s0) {
    *(float *)(param_1 + 0x34) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018b010(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) != 0) {
          fn_0018a33c();
          *(undefined4 *)(param_1 + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = fn_0018b794();
    fn_001960ec(uVar1,param_1);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



void fn_0018b078(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x30) != in_s0) {
    *(float *)(param_1 + 0x30) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018b164(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x28) != in_s0) {
    *(float *)(param_1 + 0x28) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 4;
  }
  return;
}



void fn_0018b1fc(int param_1,int param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + param_2 * 2 + 0x10c) = param_3;
  return;
}



void fn_0018b678(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x6c) = *param_2;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x74) = param_2[2];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  *(undefined4 *)(param_1 + 0xac) = *param_3;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  uVar1 = fn_00172fc4();
  fn_00195e04(uVar1,param_1 + 0x50);
  *(undefined1 *)(param_1 + 0xa2) = 1;
  return;
}



void fn_0018c454(int param_1,int param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + param_2 * 2 + 0xd0) = param_3;
  return;
}



undefined4 fn_00190ea4(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (param_2 ^ 1) * 4);
}



undefined4 fn_00190eb0(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (param_2 ^ 1) * 4 + 8);
}



void fn_001912b0(int param_1)

{
  fn_00145a08(**(undefined4 **)(param_1 + 4));
  return;
}



void fn_00195848(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = fn_001a03e0(*param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[1] != '\0';
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}



void fn_00195d80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001a3e54(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  return;
}



void fn_00195dc4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001a3e70(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_00195e28(int param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



void fn_001968e4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_001a2388(param_2);
  fn_0019f4c4(*param_1,*(undefined4 *)(iVar1 + 0x1c),iVar1,param_1[1],param_1[2]);
  return;
}



void fn_0019ba68(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016b5f0(*(undefined4 *)(param_1 + 0x14));
  *(int *)(iVar1 + 0xc) = param_1;
  return;
}



undefined4 fn_0019bbc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001a2150(*(undefined4 *)(param_1 + 4));
  memory_copy(param_2,uVar1,0x4c);
  return 1;
}



void fn_0019f1fc(int param_1)

{
  if (*(char *)(param_1 + 0x104) != '\0') {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}



void fn_001a0728(int param_1)

{
  int iVar1;
  
  fn_001a4270();
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      fn_001a46b0(iVar1);
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

