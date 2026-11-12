/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00487100 .. 004933e0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_00487100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2f0 [560];
  undefined1 auStack_c0 [176];
  
  fn_00468824(auStack_2f0);
  fn_0014ee88(auStack_c0);
  iVar1 = fn_0014f200(auStack_c0,param_4);
  if (((iVar1 == 0) || (iVar1 = fn_0048b3d8(auStack_2f0,param_4), iVar1 == 0)) ||
     (iVar1 = fn_004687f4(auStack_2f0,param_2,param_3), iVar1 != 0)) {
    fn_0045af48(auStack_c0);
    fn_00468958(auStack_2f0);
    return 0;
  }
  uVar2 = fn_00480e30(auStack_c0,param_3);
  fn_0045af48(auStack_c0);
  fn_00468958(auStack_2f0);
  return uVar2;
}



int fn_004872e4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00468824(param_1 + 4);
  iVar1 = fn_0014ee88(iVar1 + 0x230);
  iVar1 = fn_004b3294(iVar1 + 0xb0);
  return iVar1 + -0x2e4;
}



int fn_00487308(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0014f2b0(param_1 + 0x2e4);
  iVar1 = fn_0045af48(iVar1 + -0xb0);
  iVar1 = fn_00468958(iVar1 + -0x230);
  return iVar1 + -4;
}



int fn_0048b488(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  fn_004b54dc(auStack_30);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_30);
  if (iVar1 == 0) {
    fn_004b5540(param_2,auStack_30);
  }
  fn_0014f480(auStack_30);
  return iVar1;
}



void fn_0048c740(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2)) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4) = param_3;
  }
  return;
}



bool fn_0048f590(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 0x40;
}



bool fn_0048f5c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 0x40;
}



bool fn_0048f5f0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 4;
}



bool fn_0048f710(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 4;
}



void fn_00492e08(int param_1,int param_2)

{
  fn_004732fc(param_2,param_1);
  if ((*(char *)(param_2 + 4) == '\0') &&
     (*(undefined1 *)(param_1 + 0x30) = 0, *(char *)(param_2 + 4) == '\0')) {
    fn_0047faf0(param_2,param_1 + 0x34);
    return;
  }
  return;
}



int fn_004933e0(int param_1,int param_2)

{
  fn_00473520();
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  fn_0079dd48(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  fn_0079c5b8(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  fn_0079c5b8(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  fn_0048d3c8(param_1 + 0x70,param_2 + 0x70);
  fn_0014f510(param_1 + 0x98,param_2 + 0x98);
  fn_00170fa4(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  return param_1;
}

