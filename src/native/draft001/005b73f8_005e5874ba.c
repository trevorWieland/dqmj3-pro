/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005daecc .. 005e19a4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005daecc(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0xc) = param_3;
  return;
}



bool fn_005db460(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0x8ec) & 1 << (param_2 & 0xff)) != 0;
}



undefined4 fn_005db570(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 4;
  }
  else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
    uVar2 = 7;
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}



void fn_005dbf78(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44));
  if (*(int *)(param_1 + 0x128) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



undefined4 fn_005df5ec(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006cfe7c(param_1 + 8);
  if ((iVar1 == 0) || (uVar2 = fn_004516fc(param_1 + 8), (uVar2 & 0x80000000) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



void fn_005df838(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



int fn_005e19a4(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x184) + param_2 * 0x28;
}

