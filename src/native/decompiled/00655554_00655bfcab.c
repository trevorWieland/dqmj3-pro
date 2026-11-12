#include "00655554_00655bfcab.h"



void fn_006558e4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (7 < param_3 - 0x10U) {
    fn_0065578c(param_1,param_2,param_4,param_5,param_6);
    return;
  }
  iVar7 = 0;
  iVar2 = fn_00691860(param_2);
  iVar3 = fn_0069187c(param_2);
  iVar5 = 0;
  iVar4 = fn_0069180c(iVar2);
  if (iVar4 != 0) {
    iVar4 = fn_0069180c(iVar2);
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(char *)(param_5 + iVar2 + -1);
    }
  }
  iVar2 = fn_0069180c(iVar3);
  if (iVar2 != 0) {
    iVar2 = fn_0069180c(iVar3);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)*(char *)(param_5 + iVar3 + -1);
    }
  }
  fn_006f39e8(param_6 + param_3 * 0x418 + -0x4080,param_2,param_6 + param_4 * 0x418 + -0x4080,iVar7
               ,iVar5,param_1 + 0xd,param_1 + 0xf,param_1 + 0xc,param_1 + 0xe,param_7);
  uVar6 = (uint)*(byte *)(param_1 + 0xc);
  if (uVar6 != 0) {
    iVar2 = fn_0069180c(uVar6);
    sVar1 = 0;
    if (iVar2 != 0) {
      sVar1 = (short)*(char *)(param_5 + uVar6 + -1);
    }
    *(short *)(param_1 + 10) = sVar1;
  }
  return;
}



void fn_0065578c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  param_5 = param_5 + param_3 * 0x418;
  local_28 = fn_00691860(param_2);
  uVar2 = fn_0069187c(param_2);
  iVar6 = 0;
  iVar3 = fn_00691860(param_2);
  iVar4 = fn_0069187c(param_2);
  iVar8 = 0;
  iVar5 = fn_0069180c(iVar3);
  if (iVar5 != 0) {
    iVar5 = fn_0069180c(iVar3);
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)*(char *)(param_4 + iVar3 + -1);
    }
  }
  iVar3 = fn_0069180c(iVar4);
  if (iVar3 != 0) {
    iVar3 = fn_0069180c(iVar4);
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)*(char *)(param_4 + iVar4 + -1);
    }
  }
  local_5c = *(undefined4 *)(param_5 + -0x3cdc);
  uStack_58 = *(undefined4 *)(param_5 + -0x3cd8);
  uStack_54 = *(undefined4 *)(param_5 + -0x3cd4);
  uStack_50 = *(undefined4 *)(param_5 + -0x3cd0);
  uStack_4c = *(undefined4 *)(param_5 + -0x3ccc);
  uStack_48 = *(undefined4 *)(param_5 + -0x3cc8);
  uStack_44 = *(undefined4 *)(param_5 + -0x3cc4);
  uStack_40 = *(undefined4 *)(param_5 + -0x3cc0);
  local_3c = *(undefined4 *)(param_5 + -0x3cbc);
  local_30 = *(undefined4 *)(param_5 + -0x3cb0);
  local_38 = *(undefined4 *)(param_5 + -0x3cb8);
  local_34 = *(undefined4 *)(param_5 + -0x3cb4);
  local_2c = *(undefined4 *)(param_5 + -0x3cac);
  fn_006f4684(&local_5c,local_28,uVar2,iVar8,iVar6,param_1 + 0xd,param_1 + 0xf,param_1 + 0xc,
               param_1 + 0xe);
  uVar7 = (uint)*(byte *)(param_1 + 0xc);
  if (uVar7 != 0) {
    iVar3 = fn_0069180c(uVar7);
    sVar1 = 0;
    if (iVar3 != 0) {
      sVar1 = (short)*(char *)(param_4 + uVar7 + -1);
    }
    *(short *)(param_1 + 10) = sVar1;
  }
  return;
}



void fn_00655638(undefined2 param_1,int param_2,undefined4 param_3,int param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_4 + param_2 * 0x418;
  *param_5 = param_1;
  iVar5 = iVar4 + -0x4080;
  *(char *)(param_5 + 3) = (char)param_2;
  uVar1 = fn_006f3f7c(iVar5);
  param_5[1] = uVar1;
  *(undefined1 *)((int)param_5 + 7) = *(undefined1 *)(iVar4 + -0x4027);
  *(undefined1 *)(param_5 + 4) = *(undefined1 *)(iVar4 + -0x4028);
  *(undefined1 *)((int)param_5 + 9) = *(undefined1 *)(iVar4 + -0x4024);
  *(undefined1 *)(param_5 + 5) = *(undefined1 *)(iVar4 + -0x3ca4);
  iVar4 = fn_006f44fc(iVar5,0xd3);
  if (iVar4 != 0) {
    *(char *)(param_5 + 5) = *(char *)(param_5 + 5) + '\x01';
  }
  uVar1 = fn_00620a74(param_2,param_4);
  param_5[2] = uVar1;
  uVar2 = fn_0061be08(param_2);
  fn_00655760((int)param_5 + 0xb,0,uVar2);
  fn_00655760((int)param_5 + 0xb,1,param_3);
  uVar2 = fn_006f44fc(iVar5,0xac);
  fn_00655760((int)param_5 + 0xb,2,uVar2);
  uVar2 = fn_006f44fc(iVar5,0xad);
  fn_00655760((int)param_5 + 0xb,3,uVar2);
  uVar2 = fn_006f44fc(iVar5,0x21);
  fn_00655760((int)param_5 + 0xb,4,uVar2);
  iVar4 = fn_006f44fc(iVar5,0xab);
  bVar3 = *(byte *)((int)param_5 + 0xb);
  if (iVar4 == 0) {
    bVar3 = bVar3 & 0xdf;
  }
  else {
    bVar3 = bVar3 | 0x20;
  }
  *(byte *)((int)param_5 + 0xb) = bVar3;
  return;
}


