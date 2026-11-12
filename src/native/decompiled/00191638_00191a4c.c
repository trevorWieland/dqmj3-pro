#include "00191638_00191a4c.h"



void fn_00191a4c(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}



void fn_00191894(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}



void fn_00191638(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 3);
    if (puVar8 != (undefined4 *)0x0) {
      uVar9 = param_2[1];
      uVar11 = param_2[2];
      *puVar8 = *param_2;
      puVar8[1] = uVar9;
      puVar8[2] = uVar11;
    }
    return;
  }
  uVar4 = (int)((int)puVar8 - *param_1) / 0xc;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) / 0xc)) {
    param_1[1] = (uint)(puVar8 + 3);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-3];
      puVar8[1] = puVar8[-2];
      puVar8[2] = puVar8[-1];
    }
    puVar6 = puVar8 + -3;
    puVar10 = puVar8;
    if (puVar8 < puVar6) {
      if (0 < (int)puVar6 - (int)puVar8) {
        uVar4 = ((int)puVar6 - (int)puVar8) / 0xc;
        if ((uVar4 & 1) != 0) {
          puVar6 = puVar8 + -6;
          puVar10 = puVar8 + -3;
          *puVar10 = *puVar6;
          puVar8[-2] = puVar8[-5];
          puVar8[-1] = puVar8[-4];
        }
        for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar9 = puVar6[-2];
          uVar11 = puVar6[-1];
          puVar10[-3] = puVar6[-3];
          puVar10[-2] = uVar9;
          puVar10[-1] = uVar11;
          uVar9 = puVar6[-5];
          uVar11 = puVar6[-4];
          puVar10[-6] = puVar6[-6];
          puVar10[-5] = uVar9;
          puVar10[-4] = uVar11;
          puVar6 = puVar6 + -6;
          puVar10 = puVar10 + -6;
        }
      }
    }
    else {
      while (puVar8 != puVar6) {
        uVar9 = puVar6[-2];
        uVar11 = puVar6[-1];
        puVar10[-3] = puVar6[-3];
        puVar10[-2] = uVar9;
        puVar10[-1] = uVar11;
        puVar10 = puVar10 + -3;
        puVar6 = puVar6 + -3;
      }
    }
    uVar9 = param_2[1];
    uVar11 = param_2[2];
    *puVar8 = *param_2;
    puVar8[1] = uVar9;
    puVar8[2] = uVar11;
    return;
  }
  uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar12 < uVar4 + 0x20) {
    uVar12 = uVar4 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar12 * 0xc,0);
  puVar10 = puVar1;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar8; puVar6 = puVar6 + 3) {
    if (puVar10 != (undefined4 *)0x0) {
      uVar9 = puVar6[1];
      uVar11 = puVar6[2];
      *puVar10 = *puVar6;
      puVar10[1] = uVar9;
      puVar10[2] = uVar11;
    }
    puVar10 = puVar10 + 3;
  }
  puVar6 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc) * 3;
  if (puVar6 != (undefined4 *)0x0) {
    uVar9 = param_2[1];
    uVar11 = param_2[2];
    *puVar6 = *param_2;
    puVar6[1] = uVar9;
    puVar6[2] = uVar11;
  }
  puVar10 = (undefined4 *)param_1[1];
  puVar6 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc) * 3;
  for (; puVar8 != puVar10; puVar8 = puVar8 + 3) {
    puVar2 = puVar6 + 3;
    if (puVar2 != (undefined4 *)0x0) {
      uVar9 = puVar8[1];
      uVar11 = puVar8[2];
      *puVar2 = *puVar8;
      puVar6[4] = uVar9;
      puVar6[5] = uVar11;
    }
    puVar6 = puVar2;
  }
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = uVar3;
  if (uVar7 < uVar3) {
    do {
      uVar4 = uVar4 + 0xc;
    } while (uVar4 != uVar7);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 0xc,0);
  *param_1 = (uint)puVar1;
  param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar3) / 0xc) * 3 + 3);
  param_1[2] = (uint)(puVar1 + uVar12 * 3);
  return;
}


