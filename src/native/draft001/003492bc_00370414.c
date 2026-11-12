/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 003492bc .. 00370414.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined1 fn_003492bc(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = 0;
  return uVar1;
}



void fn_003492d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



void fn_0034c5c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_0022cf0c(param_1);
  fn_0034c618(param_1);
  uVar2 = fn_00230c10((int)*(short *)(*(int *)(param_1 + 0x98) + 0x558));
  fn_00190d50(*(undefined4 *)(param_1 + 0x9c),uVar2);
  fn_0034c48c(param_1);
  return;
}



void fn_0034c7bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00445f0c(*(undefined4 *)(param_1 + 0x9c),0);
  if (iVar1 != 0) {
    uVar2 = fn_00445f00(*(undefined4 *)(param_1 + 0x9c),0);
    fn_00385b60(param_1,uVar2);
  }
  iVar1 = fn_00445f0c(*(undefined4 *)(param_1 + 0x9c),1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_00445f00(*(undefined4 *)(param_1 + 0x9c),1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar2);
  return;
}



void fn_0034d580(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xcc));
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return;
}



void fn_0034f07c(int param_1)

{
  fn_0012d73c(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_00352200(int param_1)

{
  if (*(char *)(param_1 + 0x88) == '\0') {
    fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x90));
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x8c));
  return;
}



void fn_003553d4(undefined4 param_1)

{
  fn_00313870(param_1,0xc,0x14);
  return;
}



void fn_003572cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar2 * 4) == *(int *)(param_1 + 0xcc)) {
        fn_002b3d78(uVar1,1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}



void fn_00358258(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + param_2) = param_3;
  *(undefined1 *)(param_1 + param_2 + 0x1a) = 0;
  return;
}



void fn_00359fb8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_00361e1c(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x1a0) = param_2;
  return;
}



void fn_00361e2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  return;
}



void fn_003622bc(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_003627ac(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0036a800(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x41) = *param_2;
  return;
}



void fn_0036a810(int *param_1,int param_2,undefined4 param_3)

{
  fn_0017821c(*param_1 + param_2 * 0x3d8 + 0x50,param_3,0x3d8);
  return;
}



void fn_0036c354(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0x7fffffff) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return;
}



void fn_0036c648(int param_1,int param_2)

{
  if (param_2 < 3) {
    param_2 = 3;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}



void fn_0036c924(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x544) = param_2;
  *(undefined2 *)(param_1 + 0x546) = param_3;
  return;
}



void fn_0036cdb4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xc0) != '\0') && (iVar1 = fn_006f6a38(param_1), iVar1 != 0)) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  return;
}



void fn_0036d888(undefined4 param_1)

{
  int iVar1;
  
  fn_00397ecc();
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    fn_0036d17c(param_1);
    return;
  }
  return;
}



void fn_0036ef10(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036ef70(param_1,param_1 + 4,param_1 + 0x14,param_2,param_3);
  return;
}



void fn_0036ef2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036ef70(param_1,param_1 + 0x14,param_1 + 4,param_2,param_3);
  return;
}



void fn_0036fbf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036f778(param_1,param_1 + 4,param_2,param_3);
  return;
}



undefined4 fn_0036fc38(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x1a || param_1 == 0x1c) || (param_1 == 0x2c || param_1 == 0x2e)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0036fc5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = fn_00182944();
  if (((iVar1 == 0) && (iVar1 = fn_00182924(param_1), iVar1 == 1)) ||
     ((iVar1 = fn_00182944(param_1), iVar1 == -1 && (iVar1 = fn_00182924(param_1), iVar1 == 0))))
  {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_0036fcb8(void)

{
  int iVar1;
  
  iVar1 = fn_0068fae0();
  return iVar1 != 0;
}



void fn_0037040c(int param_1)

{
  fn_002d691c(*(undefined4 *)(param_1 + 0x48));
  return;
}



void fn_00370414(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

