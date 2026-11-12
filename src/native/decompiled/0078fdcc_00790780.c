#include "0078fdcc_00790780.h"



void fn_00790780(uint *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar4 = (int)puVar1 - *param_1;
  if (param_1[2] - *param_1 <= uVar4) {
    uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar8 < uVar4 + 0x20) {
      uVar8 = uVar4 + 0x20;
    }
    puVar2 = (undefined1 *)fn_00100fc6(uVar8,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined1 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *puVar1;
      }
      puVar7 = puVar7 + 1;
    }
    if (puVar2 + ((int)param_2 - *param_1) != (undefined1 *)0x0) {
      puVar2[(int)param_2 - *param_1] = *param_3;
    }
    puVar7 = (undefined1 *)param_1[1];
    puVar1 = puVar2 + ((int)param_2 - *param_1);
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar4 = uVar3;
    if (uVar6 < uVar3) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
    fn_001008c4(uVar3,param_1[2] - uVar3,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + (uVar6 - uVar3) + 1);
    param_1[2] = (uint)(puVar2 + uVar8);
    return;
  }
  param_1[1] = (uint)(puVar1 + 1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar7 = puVar1 + -1;
  if (param_2 < puVar7) {
    uVar4 = (int)puVar7 - (int)param_2;
    if (0 < (int)uVar4) {
      if ((uVar4 & 1) != 0) {
        puVar7 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar7;
      }
      for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1[-1] = puVar7[-1];
        puVar7 = puVar7 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar7;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      puVar7 = puVar7 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar7;
    }
  }
  *param_2 = *param_3;
  return;
}



void fn_00790084(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar5 = (int)((int)puVar1 - *param_1) / 0xc;
  if ((uint)((int)(param_1[2] - *param_1) / 0xc) <= uVar5) {
    uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar10 < uVar5 + 0x20) {
      uVar10 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar9 = puVar1[1];
        uVar11 = puVar1[2];
        *puVar7 = *puVar1;
        puVar7[1] = uVar9;
        puVar7[2] = uVar11;
      }
      puVar7 = puVar7 + 3;
    }
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0xc) * 3;
    if (puVar1 != (undefined4 *)0x0) {
      uVar9 = param_3[1];
      uVar11 = param_3[2];
      *puVar1 = *param_3;
      puVar1[1] = uVar9;
      puVar1[2] = uVar11;
    }
    puVar7 = (undefined4 *)param_1[1];
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0xc) * 3;
    for (; param_2 != puVar7; param_2 = param_2 + 3) {
      puVar3 = puVar1 + 3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar9 = param_2[1];
        uVar11 = param_2[2];
        *puVar3 = *param_2;
        puVar1[4] = uVar9;
        puVar1[5] = uVar11;
      }
      puVar1 = puVar3;
    }
    uVar4 = *param_1;
    uVar8 = param_1[1];
    uVar5 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != uVar8);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0xc,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar4) / 0xc) * 3 + 3);
    param_1[2] = (uint)(puVar2 + uVar10 * 3);
    return;
  }
  param_1[1] = (uint)(puVar1 + 3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-3];
    puVar1[1] = puVar1[-2];
    puVar1[2] = puVar1[-1];
  }
  puVar7 = puVar1 + -3;
  if (param_2 < puVar7) {
    if (0 < (int)puVar7 - (int)param_2) {
      uVar5 = ((int)puVar7 - (int)param_2) / 0xc;
      puVar2 = puVar1;
      if ((uVar5 & 1) != 0) {
        puVar7 = puVar1 + -6;
        puVar2 = puVar1 + -3;
        *puVar2 = *puVar7;
        puVar1[-2] = puVar1[-5];
        puVar1[-1] = puVar1[-4];
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar9 = puVar7[-2];
        uVar11 = puVar7[-1];
        puVar2[-3] = puVar7[-3];
        puVar2[-2] = uVar9;
        puVar2[-1] = uVar11;
        uVar9 = puVar7[-5];
        uVar11 = puVar7[-4];
        puVar2[-6] = puVar7[-6];
        puVar2[-5] = uVar9;
        puVar2[-4] = uVar11;
        puVar2 = puVar2 + -6;
        puVar7 = puVar7 + -6;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar9 = puVar7[-2];
      uVar11 = puVar7[-1];
      puVar1[-3] = puVar7[-3];
      puVar1[-2] = uVar9;
      puVar1[-1] = uVar11;
      puVar1 = puVar1 + -3;
      puVar7 = puVar7 + -3;
    }
  }
  uVar9 = param_3[1];
  uVar11 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = uVar9;
  param_2[2] = uVar11;
  return;
}



void fn_0078fdcc(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)param_1[2]) {
    param_1[1] = (int)(puVar2 + 5);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_2;
      iVar3 = fn_00785420(puVar2 + 1,param_2 + 1);
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      *(undefined4 *)(iVar3 + 4) = param_2[2];
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    return;
  }
  uVar1 = ((int)puVar2 - *param_1) / 0x14;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x14)) {
    param_1[1] = (int)(puVar2 + 5);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-5];
      iVar3 = fn_00785420(puVar2 + 1,puVar2 + -4);
      uVar6 = puVar2[-2];
      uVar7 = puVar2[-1];
      *(undefined4 *)(iVar3 + 4) = puVar2[-3];
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    puVar8 = puVar2;
    puVar9 = puVar2 + -5;
    while (puVar2 != puVar9) {
      puVar8[-5] = puVar9[-5];
      fn_007854f8(puVar8 + -4,puVar9 + -4);
      uVar6 = puVar9[-2];
      uVar7 = puVar9[-1];
      puVar8[-3] = puVar9[-3];
      puVar8[-2] = uVar6;
      puVar8[-1] = uVar7;
      puVar8 = puVar8 + -5;
      puVar9 = puVar9 + -5;
    }
    *puVar2 = *param_2;
    fn_007854f8(puVar2 + 1,param_2 + 1);
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar6;
    puVar2[4] = uVar7;
    return;
  }
  uVar12 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar12 < uVar1 + 0x20) {
    uVar12 = uVar1 + 0x20;
  }
  puVar4 = (undefined4 *)fn_00100fc6(uVar12 * 0x14,0);
  puVar9 = puVar4;
  for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar2; puVar8 = puVar8 + 5) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *puVar8;
      iVar3 = fn_00785420(puVar9 + 1,puVar8 + 1);
      uVar6 = puVar8[3];
      uVar7 = puVar8[4];
      *(undefined4 *)(iVar3 + 4) = puVar8[2];
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    puVar9 = puVar9 + 5;
  }
  puVar8 = puVar4 + (((int)puVar2 - *param_1) / 0x14) * 5;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = *param_2;
    iVar3 = fn_00785420(puVar8 + 1,param_2 + 1);
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    *(undefined4 *)(iVar3 + 4) = param_2[2];
    *(undefined4 *)(iVar3 + 8) = uVar6;
    *(undefined4 *)(iVar3 + 0xc) = uVar7;
  }
  puVar9 = (undefined4 *)param_1[1];
  puVar8 = puVar4 + (((int)puVar2 - *param_1) / 0x14) * 5;
  for (; puVar2 != puVar9; puVar2 = puVar2 + 5) {
    puVar11 = puVar8 + 5;
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = *puVar2;
      iVar3 = fn_00785420(puVar8 + 6,puVar2 + 1);
      uVar6 = puVar2[3];
      uVar7 = puVar2[4];
      *(undefined4 *)(iVar3 + 4) = puVar2[2];
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    puVar8 = puVar11;
  }
  iVar3 = *param_1;
  iVar10 = param_1[1];
  iVar5 = iVar10 - iVar3;
  for (; iVar3 != iVar10; iVar3 = iVar3 + 0x14) {
    fn_001588d4(iVar3 + 4);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x14,0);
  *param_1 = (int)puVar4;
  param_1[1] = (int)(puVar4 + (iVar5 / 0x14) * 5 + 5);
  param_1[2] = (int)(puVar4 + uVar12 * 5);
  return;
}


