#include "0078e52c_0078e7a8.h"



void fn_0078e7a8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  puVar6 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar6 - *param_1) / 0x28;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x28)) {
    param_1[1] = (int)(puVar6 + 10);
    if (puVar6 != (undefined4 *)0x0) {
      fn_0035d9ac(puVar6,puVar6 + -10);
    }
    puVar2 = puVar6 + -10;
    while (param_2 != puVar2) {
      puVar6[-10] = puVar2[-10];
      fn_00773090(puVar6 + -9,puVar2 + -9);
      puVar6[-2] = puVar2[-2];
      puVar6[-1] = puVar2[-1];
      puVar6 = puVar6 + -10;
      puVar2 = puVar2 + -10;
    }
    *param_2 = *param_3;
    fn_00773090(param_2 + 1,param_3 + 1);
    param_2[8] = param_3[8];
    param_2[9] = param_3[9];
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  iVar3 = fn_00100fc6(uVar8 * 0x28,0);
  iVar4 = iVar3;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != param_2; puVar6 = puVar6 + 10) {
    if (iVar4 != 0) {
      fn_0035d9ac(iVar4,puVar6);
    }
    iVar4 = iVar4 + 0x28;
  }
  iVar4 = iVar3 + (((int)param_2 - *param_1) / 0x28) * 0x28;
  if (iVar4 != 0) {
    fn_0035d9ac(iVar4,param_3);
  }
  puVar6 = (undefined4 *)param_1[1];
  iVar4 = iVar3 + (((int)param_2 - *param_1) / 0x28) * 0x28;
  for (; param_2 != puVar6; param_2 = param_2 + 10) {
    iVar4 = iVar4 + 0x28;
    if (iVar4 != 0) {
      fn_0035d9ac(iVar4,param_2);
    }
  }
  iVar4 = *param_1;
  iVar7 = param_1[1];
  iVar5 = iVar7 - iVar4;
  for (; iVar4 != iVar7; iVar4 = iVar4 + 0x28) {
    fn_0035dac8(iVar4);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x28,0);
  *param_1 = iVar3;
  param_1[1] = iVar3 + (iVar5 / 0x28) * 0x28 + 0x28;
  param_1[2] = iVar3 + uVar8 * 0x28;
  return;
}



void fn_0078e76c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    fn_0078e52c(param_1,puVar1,param_2);
    return;
  }
  *(undefined4 **)(param_1 + 4) = puVar1 + 5;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1[4] = uVar5;
  }
  return;
}



void fn_0078e52c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar4 = (int)((int)puVar1 - *param_1) / 0x14;
  if ((uint)((int)(param_1[2] - *param_1) / 0x14) <= uVar4) {
    uVar13 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar13 < uVar4 + 0x20) {
      uVar13 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar13 * 0x14,0);
    puVar8 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 5) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar7 = puVar1[1];
        uVar9 = puVar1[2];
        uVar11 = puVar1[3];
        uVar12 = puVar1[4];
        *puVar8 = *puVar1;
        puVar8[1] = uVar7;
        puVar8[2] = uVar9;
        puVar8[3] = uVar11;
        puVar8[4] = uVar12;
      }
      puVar8 = puVar8 + 5;
    }
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0x14) * 5;
    if (puVar1 != (undefined4 *)0x0) {
      uVar7 = param_3[1];
      uVar9 = param_3[2];
      uVar11 = param_3[3];
      uVar12 = param_3[4];
      *puVar1 = *param_3;
      puVar1[1] = uVar7;
      puVar1[2] = uVar9;
      puVar1[3] = uVar11;
      puVar1[4] = uVar12;
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0x14) * 5;
    for (; param_2 != puVar8; param_2 = param_2 + 5) {
      puVar5 = puVar1 + 5;
      if (puVar5 != (undefined4 *)0x0) {
        uVar7 = param_2[1];
        uVar9 = param_2[2];
        uVar11 = param_2[3];
        uVar12 = param_2[4];
        *puVar5 = *param_2;
        puVar1[6] = uVar7;
        puVar1[7] = uVar9;
        puVar1[8] = uVar11;
        puVar1[9] = uVar12;
      }
      puVar1 = puVar5;
    }
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar4 = uVar3;
    if (uVar6 < uVar3) {
      do {
        uVar4 = uVar4 + 0x14;
      } while (uVar4 != uVar6);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 0x14,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + ((int)(uVar6 - uVar3) / 0x14) * 5 + 5);
    param_1[2] = (uint)(puVar2 + uVar13 * 5);
    return;
  }
  param_1[1] = (uint)(puVar1 + 5);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-5];
    puVar1[1] = puVar1[-4];
    puVar1[2] = puVar1[-3];
    puVar1[3] = puVar1[-2];
    puVar1[4] = puVar1[-1];
  }
  puVar8 = puVar1 + -5;
  if (param_2 < puVar8) {
    if (0 < (int)puVar8 - (int)param_2) {
      uVar4 = ((int)puVar8 - (int)param_2) / 0x14;
      puVar2 = puVar1;
      if ((uVar4 & 1) != 0) {
        puVar8 = puVar1 + -10;
        puVar2 = puVar1 + -5;
        *puVar2 = *puVar8;
        puVar1[-4] = puVar1[-9];
        puVar1[-3] = puVar1[-8];
        puVar1[-2] = puVar1[-7];
        puVar1[-1] = puVar1[-6];
      }
      for (iVar10 = (int)uVar4 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar7 = puVar8[-4];
        uVar9 = puVar8[-3];
        uVar11 = puVar8[-2];
        uVar12 = puVar8[-1];
        puVar2[-5] = puVar8[-5];
        puVar2[-4] = uVar7;
        puVar2[-3] = uVar9;
        puVar2[-2] = uVar11;
        puVar2[-1] = uVar12;
        uVar7 = puVar8[-9];
        uVar9 = puVar8[-8];
        uVar11 = puVar8[-7];
        uVar12 = puVar8[-6];
        puVar2[-10] = puVar8[-10];
        puVar2[-9] = uVar7;
        puVar2[-8] = uVar9;
        puVar2[-7] = uVar11;
        puVar2[-6] = uVar12;
        puVar2 = puVar2 + -10;
        puVar8 = puVar8 + -10;
      }
    }
  }
  else {
    while (param_2 != puVar8) {
      uVar7 = puVar8[-4];
      uVar9 = puVar8[-3];
      uVar11 = puVar8[-2];
      uVar12 = puVar8[-1];
      puVar1[-5] = puVar8[-5];
      puVar1[-4] = uVar7;
      puVar1[-3] = uVar9;
      puVar1[-2] = uVar11;
      puVar1[-1] = uVar12;
      puVar1 = puVar1 + -5;
      puVar8 = puVar8 + -5;
    }
  }
  uVar7 = param_3[1];
  uVar9 = param_3[2];
  uVar11 = param_3[3];
  uVar12 = param_3[4];
  *param_2 = *param_3;
  param_2[1] = uVar7;
  param_2[2] = uVar9;
  param_2[3] = uVar11;
  param_2[4] = uVar12;
  return;
}


