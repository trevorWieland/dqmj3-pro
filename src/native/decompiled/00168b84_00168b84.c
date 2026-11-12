#include "00168b84_00168b84.h"



int * fn_00168b84(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_28;
  uint local_24;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = param_2[1];
  iVar4 = *param_2;
  puVar6 = (undefined4 *)*param_1;
  local_28 = (iVar2 - iVar4) / 0x54;
  if ((uint)((param_1[2] - (int)puVar6) / 0x54) < local_28) {
    uVar7 = (param_1[1] - (int)puVar6) / 0x54;
    uVar5 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    local_24 = uVar7 + 0x20;
    if (uVar7 + 0x20 <= uVar5) {
      local_24 = uVar5;
    }
    puVar3 = &local_28;
    if (local_28 < local_24) {
      puVar3 = &local_24;
    }
    uVar7 = *puVar3;
    puVar1 = (undefined4 *)fn_00100fc6(uVar7 * 0x54,0);
    iVar2 = param_2[1];
    puVar6 = puVar1;
    for (iVar4 = *param_2; iVar4 != iVar2; iVar4 = iVar4 + 0x54) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = &DAT_00858ac8;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar4 + 4);
        puVar6[2] = *(undefined4 *)(iVar4 + 8);
        uVar9 = *(undefined4 *)(iVar4 + 0x10);
        uVar10 = *(undefined4 *)(iVar4 + 0x14);
        uVar11 = *(undefined4 *)(iVar4 + 0x18);
        uVar12 = *(undefined4 *)(iVar4 + 0x1c);
        uVar13 = *(undefined4 *)(iVar4 + 0x20);
        uVar14 = *(undefined4 *)(iVar4 + 0x24);
        uVar15 = *(undefined4 *)(iVar4 + 0x28);
        puVar6[3] = *(undefined4 *)(iVar4 + 0xc);
        puVar6[4] = uVar9;
        puVar6[5] = uVar10;
        puVar6[6] = uVar11;
        puVar6[7] = uVar12;
        puVar6[8] = uVar13;
        puVar6[9] = uVar14;
        puVar6[10] = uVar15;
        puVar6[0xb] = *(undefined4 *)(iVar4 + 0x2c);
        uVar9 = *(undefined4 *)(iVar4 + 0x34);
        uVar10 = *(undefined4 *)(iVar4 + 0x38);
        puVar6[0xc] = *(undefined4 *)(iVar4 + 0x30);
        puVar6[0xd] = uVar9;
        puVar6[0xe] = uVar10;
        puVar6[0xf] = *(undefined4 *)(iVar4 + 0x3c);
        puVar6[0x10] = *(undefined4 *)(iVar4 + 0x40);
        puVar6[0x11] = *(undefined4 *)(iVar4 + 0x44);
        *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(iVar4 + 0x48);
        puVar6[0x13] = *(undefined4 *)(iVar4 + 0x4c);
        puVar6[0x14] = *(undefined4 *)(iVar4 + 0x50);
      }
      puVar6 = puVar6 + 0x15;
    }
    puVar8 = (undefined4 *)param_1[1];
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar8; puVar6 = puVar6 + 0x15) {
      (**(code **)*puVar6)(puVar6);
    }
    fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x54,0);
    *param_1 = (int)puVar1;
    puVar6 = puVar1 + uVar7 * 0x15;
    param_1[1] = (int)(puVar1 + ((param_2[1] - *param_2) / 0x54) * 0x15);
  }
  else {
    uVar7 = (param_1[1] - (int)puVar6) / 0x54;
    if (uVar7 < local_28) {
      iVar2 = iVar4 + uVar7 * 0x54;
      for (; iVar4 != iVar2; iVar4 = iVar4 + 0x54) {
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar4 + 4);
        puVar6[2] = *(undefined4 *)(iVar4 + 8);
        uVar9 = *(undefined4 *)(iVar4 + 0x10);
        uVar10 = *(undefined4 *)(iVar4 + 0x14);
        uVar11 = *(undefined4 *)(iVar4 + 0x18);
        uVar12 = *(undefined4 *)(iVar4 + 0x1c);
        uVar13 = *(undefined4 *)(iVar4 + 0x20);
        uVar14 = *(undefined4 *)(iVar4 + 0x24);
        uVar15 = *(undefined4 *)(iVar4 + 0x28);
        puVar6[3] = *(undefined4 *)(iVar4 + 0xc);
        puVar6[4] = uVar9;
        puVar6[5] = uVar10;
        puVar6[6] = uVar11;
        puVar6[7] = uVar12;
        puVar6[8] = uVar13;
        puVar6[9] = uVar14;
        puVar6[10] = uVar15;
        puVar6[0xb] = *(undefined4 *)(iVar4 + 0x2c);
        uVar9 = *(undefined4 *)(iVar4 + 0x34);
        uVar10 = *(undefined4 *)(iVar4 + 0x38);
        puVar6[0xc] = *(undefined4 *)(iVar4 + 0x30);
        puVar6[0xd] = uVar9;
        puVar6[0xe] = uVar10;
        puVar6[0xf] = *(undefined4 *)(iVar4 + 0x3c);
        puVar6[0x10] = *(undefined4 *)(iVar4 + 0x40);
        puVar6[0x11] = *(undefined4 *)(iVar4 + 0x44);
        *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(iVar4 + 0x48);
        puVar6[0x13] = *(undefined4 *)(iVar4 + 0x4c);
        puVar6[0x14] = *(undefined4 *)(iVar4 + 0x50);
        puVar6 = puVar6 + 0x15;
      }
      param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x54) * 0x54;
      iVar2 = param_2[1];
      puVar6 = (undefined4 *)(*param_1 + uVar7 * 0x54);
      for (iVar4 = *param_2 + uVar7 * 0x54; iVar4 != iVar2; iVar4 = iVar4 + 0x54) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &DAT_00858ac8;
          *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar4 + 4);
          puVar6[2] = *(undefined4 *)(iVar4 + 8);
          uVar9 = *(undefined4 *)(iVar4 + 0x10);
          uVar10 = *(undefined4 *)(iVar4 + 0x14);
          uVar11 = *(undefined4 *)(iVar4 + 0x18);
          uVar12 = *(undefined4 *)(iVar4 + 0x1c);
          uVar13 = *(undefined4 *)(iVar4 + 0x20);
          uVar14 = *(undefined4 *)(iVar4 + 0x24);
          uVar15 = *(undefined4 *)(iVar4 + 0x28);
          puVar6[3] = *(undefined4 *)(iVar4 + 0xc);
          puVar6[4] = uVar9;
          puVar6[5] = uVar10;
          puVar6[6] = uVar11;
          puVar6[7] = uVar12;
          puVar6[8] = uVar13;
          puVar6[9] = uVar14;
          puVar6[10] = uVar15;
          puVar6[0xb] = *(undefined4 *)(iVar4 + 0x2c);
          uVar9 = *(undefined4 *)(iVar4 + 0x34);
          uVar10 = *(undefined4 *)(iVar4 + 0x38);
          puVar6[0xc] = *(undefined4 *)(iVar4 + 0x30);
          puVar6[0xd] = uVar9;
          puVar6[0xe] = uVar10;
          puVar6[0xf] = *(undefined4 *)(iVar4 + 0x3c);
          puVar6[0x10] = *(undefined4 *)(iVar4 + 0x40);
          puVar6[0x11] = *(undefined4 *)(iVar4 + 0x44);
          *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(iVar4 + 0x48);
          puVar6[0x13] = *(undefined4 *)(iVar4 + 0x4c);
          puVar6[0x14] = *(undefined4 *)(iVar4 + 0x50);
        }
        puVar6 = puVar6 + 0x15;
      }
      return param_1;
    }
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0x54) {
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar4 + 4);
      puVar6[2] = *(undefined4 *)(iVar4 + 8);
      uVar9 = *(undefined4 *)(iVar4 + 0x10);
      uVar10 = *(undefined4 *)(iVar4 + 0x14);
      uVar11 = *(undefined4 *)(iVar4 + 0x18);
      uVar12 = *(undefined4 *)(iVar4 + 0x1c);
      uVar13 = *(undefined4 *)(iVar4 + 0x20);
      uVar14 = *(undefined4 *)(iVar4 + 0x24);
      uVar15 = *(undefined4 *)(iVar4 + 0x28);
      puVar6[3] = *(undefined4 *)(iVar4 + 0xc);
      puVar6[4] = uVar9;
      puVar6[5] = uVar10;
      puVar6[6] = uVar11;
      puVar6[7] = uVar12;
      puVar6[8] = uVar13;
      puVar6[9] = uVar14;
      puVar6[10] = uVar15;
      puVar6[0xb] = *(undefined4 *)(iVar4 + 0x2c);
      uVar9 = *(undefined4 *)(iVar4 + 0x34);
      uVar10 = *(undefined4 *)(iVar4 + 0x38);
      puVar6[0xc] = *(undefined4 *)(iVar4 + 0x30);
      puVar6[0xd] = uVar9;
      puVar6[0xe] = uVar10;
      puVar6[0xf] = *(undefined4 *)(iVar4 + 0x3c);
      puVar6[0x10] = *(undefined4 *)(iVar4 + 0x40);
      puVar6[0x11] = *(undefined4 *)(iVar4 + 0x44);
      *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(iVar4 + 0x48);
      puVar6[0x13] = *(undefined4 *)(iVar4 + 0x4c);
      puVar6[0x14] = *(undefined4 *)(iVar4 + 0x50);
      puVar6 = puVar6 + 0x15;
    }
    puVar1 = (undefined4 *)param_1[1];
    for (; puVar6 != puVar1; puVar6 = puVar6 + 0x15) {
      (**(code **)*puVar6)(puVar6);
    }
    puVar6 = (undefined4 *)(*param_1 + ((param_2[1] - *param_2) / 0x54) * 0x54);
    param_1[1] = (int)puVar6;
  }
  param_1[2] = (int)puVar6;
  return param_1;
}


