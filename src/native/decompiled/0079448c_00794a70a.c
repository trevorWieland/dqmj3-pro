#include "0079448c_00794a70a.h"



void fn_007946ec(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar7 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar7 - *param_1) / 0xc;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0xc)) {
    param_1[1] = (int)(puVar7 + 3);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = puVar7[-3];
      puVar7[1] = puVar7[-2];
      puVar7[2] = puVar7[-1];
    }
    puVar5 = puVar7 + -3;
    while (param_2 != puVar5) {
      puVar7 = puVar7 + -3;
      puVar5 = puVar5 + -3;
      fn_004b8d90(puVar7,puVar5);
    }
    fn_004b8d90(param_2,param_3);
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  puVar2 = (undefined4 *)fn_0015ece0(uVar8 * 0xc);
  puVar5 = puVar2;
  for (puVar7 = (undefined4 *)*param_1; puVar7 != param_2; puVar7 = puVar7 + 3) {
    if (puVar5 != (undefined4 *)0x0) {
      uVar9 = puVar7[1];
      uVar10 = puVar7[2];
      *puVar5 = *puVar7;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
    }
    puVar5 = puVar5 + 3;
  }
  puVar7 = puVar2 + (((int)param_2 - *param_1) / 0xc) * 3;
  if (puVar7 != (undefined4 *)0x0) {
    uVar9 = param_3[1];
    uVar10 = param_3[2];
    *puVar7 = *param_3;
    puVar7[1] = uVar9;
    puVar7[2] = uVar10;
  }
  puVar5 = (undefined4 *)param_1[1];
  puVar7 = puVar2 + (((int)param_2 - *param_1) / 0xc) * 3;
  for (; param_2 != puVar5; param_2 = param_2 + 3) {
    puVar3 = puVar7 + 3;
    if (puVar3 != (undefined4 *)0x0) {
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      *puVar3 = *param_2;
      puVar7[4] = uVar9;
      puVar7[5] = uVar10;
    }
    puVar7 = puVar3;
  }
  iVar4 = *param_1;
  iVar6 = param_1[1];
  fn_00794694(param_1);
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar2;
  param_1[1] = (int)(puVar2 + ((iVar6 - iVar4) / 0xc) * 3 + 3);
  param_1[2] = (int)(puVar2 + uVar8 * 3);
  return;
}



void fn_00794694(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < param_3) {
    uVar1 = (int)(param_3 - param_2) / 0xc & 1;
  }
  else {
    uVar1 = 0;
  }
  for (iVar2 = uVar1 + 1; iVar2 < (int)(param_3 - param_2) / 0xc + 1; iVar2 = iVar2 + 2) {
  }
  return;
}



int * fn_0079448c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar4 = *param_2;
  iVar7 = param_2[1];
  puVar5 = (undefined4 *)*param_1;
  uVar1 = iVar7 - iVar4 >> 3;
  if ((uint)(param_1[2] - (int)puVar5 >> 3) < uVar1) {
    uVar2 = param_1[1] - (int)puVar5 >> 3;
    uVar9 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (uVar9 < uVar2 + 0x20) {
      uVar9 = uVar2 + 0x20;
    }
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    iVar3 = fn_0015ece0(uVar9 << 3);
    iVar8 = param_2[1];
    iVar7 = iVar3;
    for (iVar4 = *param_2; iVar4 != iVar8; iVar4 = iVar4 + 8) {
      if (iVar7 != 0) {
        fn_004b637c(iVar7,iVar4);
      }
      iVar7 = iVar7 + 8;
    }
    puVar6 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar6; puVar5 = puVar5 + 2) {
      (**(code **)*puVar5)(puVar5);
    }
    fn_0014f1bc(*param_1);
    *param_1 = iVar3;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffff8U) + iVar3;
    param_1[2] = iVar3 + uVar9 * 8;
  }
  else {
    uVar2 = param_1[1] - (int)puVar5 >> 3;
    if (uVar2 < uVar1) {
      iVar7 = iVar4 + uVar2 * 8;
      for (; iVar4 != iVar7; iVar4 = iVar4 + 8) {
        fn_00170fa4(puVar5,iVar4);
        puVar5 = puVar5 + 2;
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffff8U) + *param_1;
      iVar3 = param_2[1];
      iVar4 = *param_1 + uVar2 * 8;
      for (iVar7 = *param_2 + uVar2 * 8; iVar7 != iVar3; iVar7 = iVar7 + 8) {
        if (iVar4 != 0) {
          fn_004b637c(iVar4,iVar7);
        }
        iVar4 = iVar4 + 8;
      }
    }
    else {
      for (; iVar4 != iVar7; iVar4 = iVar4 + 8) {
        fn_00170fa4(puVar5,iVar4);
        puVar5 = puVar5 + 2;
      }
      puVar6 = (undefined4 *)param_1[1];
      for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
        (**(code **)*puVar5)(puVar5);
      }
      iVar4 = (param_2[1] - *param_2 & 0xfffffff8U) + *param_1;
      param_1[1] = iVar4;
      param_1[2] = iVar4;
    }
  }
  return param_1;
}


