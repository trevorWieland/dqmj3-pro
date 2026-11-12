/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002a1bbc .. 002b1390.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002a1bbc(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0019bc50(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 6;
  return;
}



void fn_002a6ed8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}



void fn_002a843c(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x112) = 1;
  }
  return;
}



bool fn_002afc68(void)

{
  float in_s0;
  float in_s1;
  
  return in_s0 < in_s1;
}



int fn_002b0948(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x34;
}



int fn_002b0a98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8 + -8;
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_002b0b04(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 4) + 0x28) = *(int *)(*(int *)(param_1 + 4) + 0x28) - param_2;
  return;
}



undefined8 fn_002b0b38(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 8);
}



void fn_002b0b44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  return;
}



void fn_002b0b5c(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  **(undefined2 **)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 2) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 3) = param_4;
  return;
}



void fn_002b0c50(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 7) = param_4;
  return;
}



undefined4 fn_002b0c78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = *(ushort *)(iVar1 + 4);
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (ushort)*(byte *)(iVar1 + 6);
  }
  if ((bVar4 && uVar3 == 0) && (*(char *)(iVar1 + 7) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_002b0cac(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(*param_1 + param_2 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}



int fn_002b1390(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 2);
}

