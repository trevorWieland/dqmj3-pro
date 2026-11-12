/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005e6088 .. 005e8e50.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005e6088(int param_1)

{
  int iVar1;
  
  iVar1 = fn_005e19c8(*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void fn_005e692c(undefined4 param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  fn_0012bc84(0x208,&local_10);
  fn_00123600(param_1,local_10);
  return;
}



void fn_005e69b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)param_1[7] == '\0') {
    fn_00117984();
    iVar1 = fn_0010fa2c();
    if (iVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  for (piVar2 = (int *)param_1[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}



void fn_005e7788(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dcfe8(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



void fn_005e7a58(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dd02c(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



void fn_005e7a74(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  puVar1[4] = param_6;
  puVar1[5] = param_7;
  puVar1[6] = param_8;
  puVar1[7] = param_9;
  return;
}



void fn_005e7c34(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fn_001a0b88();
  return;
}



void fn_005e8584(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dd0a0(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



void fn_005e8724(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fn_001a0b88();
  return;
}



void fn_005e88b8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    fn_00143a58();
    *piVar1 = 0;
  }
  if (piVar1[1] != 0) {
    fn_00143a58();
    piVar1[1] = 0;
  }
  if (piVar1[2] != 0) {
    fn_00143a58();
    piVar1[2] = 0;
  }
  return;
}



void fn_005e8b70(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x15) = param_2;
  *(undefined1 *)(iVar1 + 0x16) = param_3;
  return;
}



void fn_005e8b80(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0xd) = param_2;
  *(undefined1 *)(iVar1 + 0xe) = param_3;
  *(undefined1 *)(iVar1 + 0xf) = param_4;
  *(undefined1 *)(iVar1 + 0x10) = param_5;
  *(undefined1 *)(iVar1 + 0x11) = param_6;
  *(undefined1 *)(iVar1 + 0x12) = param_7;
  return;
}



void fn_005e8e18(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 4) = param_2;
  *(undefined1 *)(iVar1 + 0xc) = param_2;
  *(undefined1 *)(iVar1 + 0x14) = param_2;
  *(undefined1 *)(iVar1 + 0x18) = param_2;
  return;
}



void fn_005e8e50(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x19) = param_2;
  *(undefined1 *)(iVar1 + 0x1a) = param_3;
  return;
}

