#include "00788730_00788730.h"



void fn_00788730(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 4;
  if ((uint)((int)(param_1[2] - *param_1) >> 4) <= uVar4) {
    uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    uVar12 = uVar4 + 0x20;
    if (uVar4 + 0x20 <= uVar6) {
      uVar12 = uVar6;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 4,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar13 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar10;
        puVar7[2] = uVar11;
        puVar7[3] = uVar13;
      }
      puVar7 = puVar7 + 4;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff0) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar13 = param_3[3];
      *puVar1 = *param_3;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar13;
    }
    puVar7 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff0) + (int)puVar2);
    for (; param_2 != puVar7; param_2 = param_2 + 4) {
      puVar3 = puVar1 + 4;
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar13 = param_2[3];
        *puVar3 = *param_2;
        puVar1[5] = uVar10;
        puVar1[6] = uVar11;
        puVar1[7] = uVar13;
      }
      puVar1 = puVar3;
    }
    uVar6 = *param_1;
    uVar8 = *puVar9;
    uVar4 = uVar6;
    if (uVar8 < uVar6) {
      do {
        uVar4 = uVar4 + 0x10;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar6,(int)(param_1[2] - uVar6) >> 4,0);
    param_1[2] = (uint)(puVar2 + uVar12 * 4);
    *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar6) >> 4) * 4 + 4);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    puVar1[3] = puVar1[-1];
  }
  puVar7 = puVar1 + -4;
  if (param_2 < puVar7) {
    iVar5 = (int)puVar7 - (int)param_2;
    if (0 < iVar5) {
      puVar2 = puVar1;
      if (iVar5 * 0x8000000 < 0) {
        puVar7 = puVar1 + -8;
        puVar2 = puVar1 + -4;
        *puVar2 = *puVar7;
        puVar1[-3] = puVar1[-7];
        puVar1[-2] = puVar1[-6];
        puVar1[-1] = puVar1[-5];
      }
      for (iVar5 = iVar5 >> 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar10 = puVar7[-3];
        uVar11 = puVar7[-2];
        uVar13 = puVar7[-1];
        puVar2[-4] = puVar7[-4];
        puVar2[-3] = uVar10;
        puVar2[-2] = uVar11;
        puVar2[-1] = uVar13;
        uVar10 = puVar7[-7];
        uVar11 = puVar7[-6];
        uVar13 = puVar7[-5];
        puVar2[-8] = puVar7[-8];
        puVar2[-7] = uVar10;
        puVar2[-6] = uVar11;
        puVar2[-5] = uVar13;
        puVar2 = puVar2 + -8;
        puVar7 = puVar7 + -8;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar10 = puVar7[-3];
      uVar11 = puVar7[-2];
      uVar13 = puVar7[-1];
      puVar1[-4] = puVar7[-4];
      puVar1[-3] = uVar10;
      puVar1[-2] = uVar11;
      puVar1[-1] = uVar13;
      puVar1 = puVar1 + -4;
      puVar7 = puVar7 + -4;
    }
  }
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar13 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar13;
  return;
}


