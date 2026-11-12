#include "0079448c_00794a70b.h"



void fn_00794a70(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
  iVar4 = param_1[1];
  uVar1 = (iVar4 - *param_1) / 0xc;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0xc)) {
    param_1[1] = iVar4 + 0xc;
    iVar7 = iVar4;
    if (iVar4 != 0) {
      fn_004b8eac(iVar4,iVar4 + -0xc);
    }
    while (param_2 != iVar7 + -0xc) {
      iVar4 = iVar4 + -0xc;
      fn_007936a0(iVar4);
      iVar7 = iVar7 + -0xc;
    }
    fn_007936a0(param_2,param_3);
    return;
  }
  uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar9 < uVar1 + 0x20) {
    uVar9 = uVar1 + 0x20;
  }
  iVar2 = fn_0015ece0(uVar9 * 0xc);
  iVar7 = iVar2;
  for (iVar4 = *param_1; iVar4 != param_2; iVar4 = iVar4 + 0xc) {
    if (iVar7 != 0) {
      fn_004b8eac(iVar7,iVar4);
    }
    iVar7 = iVar7 + 0xc;
  }
  iVar4 = iVar2 + ((param_2 - *param_1) / 0xc) * 0xc;
  if (iVar4 != 0) {
    fn_004b8eac(iVar4,param_3);
  }
  iVar7 = param_1[1];
  iVar4 = iVar2 + ((param_2 - *param_1) / 0xc) * 0xc;
  for (; param_2 != iVar7; param_2 = param_2 + 0xc) {
    iVar4 = iVar4 + 0xc;
    if (iVar4 != 0) {
      fn_004b8eac(iVar4,param_2);
    }
  }
  piVar6 = (int *)*param_1;
  piVar8 = (int *)param_1[1];
  iVar4 = (int)piVar8 - (int)piVar6;
  for (; piVar6 != piVar8; piVar6 = piVar6 + 3) {
    puVar5 = (undefined4 *)piVar6[1];
    for (puVar3 = (undefined4 *)*piVar6; puVar3 != puVar5; puVar3 = puVar3 + 10) {
      (**(code **)*puVar3)(puVar3);
    }
    fn_0014f1bc(*piVar6);
  }
  fn_0014f1bc(*param_1);
  *param_1 = iVar2;
  param_1[1] = iVar2 + (iVar4 / 0xc) * 0xc + 0xc;
  param_1[2] = iVar2 + uVar9 * 0xc;
  return;
}



undefined4 * fn_00794a50(undefined4 *param_1)

{
  fn_00794694(param_1,*param_1,param_1[1]);
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_00794930(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (0x15555555 < param_2) {
    param_4 = 0x15555555;
    fn_002ff628(8,&DAT_007d8abc,&DAT_007d8abc,param_2,0x15555555);
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < param_2) {
    uVar1 = (param_1[1] - *param_1) / 0xc;
    uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar7 < uVar1 + 0x20) {
      uVar7 = uVar1 + 0x20;
    }
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
    puVar2 = (undefined4 *)fn_0015ece0(uVar7 * 0xc);
    puVar6 = (undefined4 *)param_1[1];
    puVar3 = puVar2;
    for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar6; puVar4 = puVar4 + 3) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar3 = *puVar4;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
      }
      puVar3 = puVar3 + 3;
    }
    fn_00794694(param_1,*param_1,param_1[1],puVar6,param_4);
    fn_0014f1bc(*param_1);
    iVar5 = *param_1;
    *param_1 = (int)puVar2;
    param_1[1] = (int)(puVar2 + ((param_1[1] - iVar5) / 0xc) * 3);
    param_1[2] = (int)(puVar2 + uVar7 * 3);
  }
  return;
}



int fn_007948a8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar1 = param_2;
  iVar2 = param_3;
  if (*param_1 != iVar3) {
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0xc) {
      fn_004b8d90(iVar1,iVar2);
      iVar1 = iVar1 + 0xc;
    }
    fn_00794694(param_1,iVar1,param_1[1]);
    param_1[1] = param_1[1] + ((param_3 - param_2) / 0xc) * -0xc;
  }
  return param_2;
}


