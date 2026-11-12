/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005591ac .. 00560a88.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005591ac(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



void fn_00559e44(undefined4 *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



void fn_0055a218(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = 0;
        if (((param_2 != 0) && (uVar3 = param_2 == 1, !(bool)uVar3)) && (param_2 == 2)) {
          uVar3 = 2;
        }
        fn_0051e548(iVar1,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_0055a29c(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 1;
  return;
}



void fn_0055a4a8(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}



int fn_0055a4dc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0x10c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_0055afd0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  fn_005558ac(*(undefined4 *)(param_1 + 0x24));
  return;
}



void fn_0055b900(int param_1)

{
  fn_0055be4c();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0xb94) = 3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



void fn_0055df18(int param_1)

{
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  fn_005558ac(*(undefined4 *)(param_1 + 0x24));
  return;
}



void fn_0055ee80(int param_1)

{
  if (*(char *)(param_1 + 0x13d) == '\0') {
    if (*(char *)(param_1 + 0x98) != '\x04') {
      if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
        fn_001a82f4(*(int *)(param_1 + 0x1a8),1);
      }
      *(undefined1 *)(param_1 + 0x98) = 4;
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}



void fn_0055f31c(int param_1)

{
  fn_005579dc();
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  return;
}



void fn_00560638(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  if (param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x18))
            (param_1,*(undefined4 *)(param_2 + 0x28),param_3,param_4,param_5,param_6);
  return;
}



void fn_00560938(int param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x32);
  fn_00560750(param_1,param_2,param_1 + uVar1 * 0x10 + 0x1f8,uVar1 + 0x20,
               *(byte *)(param_1 + 0x31) - uVar1);
  *(undefined1 *)(param_1 + 0x31) = param_3;
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



void fn_00560a88(int param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x34);
  fn_00560750(param_1,param_2,param_1 + uVar1 * 0x10 + 0x3f8,uVar1 + 0x40,
               *(byte *)(param_1 + 0x33) - uVar1);
  *(undefined1 *)(param_1 + 0x33) = param_3;
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}

