#include "007997c0_00799c30.h"



void fn_00799c30(uint *param_1,undefined4 *param_2)

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



void fn_007998d8(uint *param_1,undefined4 *param_2)

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



void fn_007997c0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_20 [2];
  uint *puStack_18;
  uint local_14;
  
  local_14 = param_2;
  puStack_18 = param_1;
  puVar5 = local_20;
  if (0x3fffffff < param_2) {
    local_20[0] = 0x3fffffff;
    fn_002ff628(8,&DAT_008c766a);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < local_14) {
    uVar8 = (int)(param_1[1] - *param_1) >> 2;
    local_20[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_20[0] < uVar8 + 0x20) {
      local_20[0] = uVar8 + 0x20;
    }
    if (local_20[0] <= local_14) {
      puVar5 = &local_14;
    }
    uVar8 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
    puVar7 = (undefined4 *)param_1[1];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar8);
  }
  return;
}


