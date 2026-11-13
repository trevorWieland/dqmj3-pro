#include "007989d4_00798eb0.h"



void fn_00798eb0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar10 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar9;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar10);
    *puVar9 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    if (0 < (int)puVar6 - (int)param_2) {
      iVar8 = (int)puVar6 - (int)param_2 >> 2;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar1[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}



void fn_00798d0c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  
  puVar5 = (undefined4 *)param_1[1];
  uVar3 = (int)((int)puVar5 - *param_1) >> 2;
  if (uVar3 < (uint)((int)(param_1[2] - *param_1) >> 2)) {
    param_1[1] = (uint)(puVar5 + 1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar5[-1];
    }
    iVar9 = (int)puVar5 + (-4 - (int)param_2) >> 2;
    if (0 < iVar9) {
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar5[iVar4 + -1] = puVar5[iVar4 + -2];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
    *param_2 = *param_3;
    return;
  }
  uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  if (uVar10 < uVar3 + 0x20) {
    uVar10 = uVar3 + 0x20;
  }
  puVar1 = (undefined4 *)fn_0015ece0(uVar10 << 2);
  puVar6 = puVar1;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != param_2; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_3;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar1);
  for (; param_2 != puVar6; param_2 = param_2 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
  }
  uVar2 = param_1[1];
  uVar7 = *param_1;
  uVar3 = uVar2;
  if (uVar7 < uVar2) {
    uVar3 = (uVar2 - uVar7) * 0x20000000;
  }
  iVar9 = (int)(uVar2 - uVar7) >> 2;
  if (uVar7 < uVar2) {
    uVar3 = uVar3 >> 0x1f;
  }
  else {
    uVar3 = 0;
  }
  for (iVar4 = uVar3 + 1; iVar4 < iVar9 + 1; iVar4 = iVar4 + 2) {
  }
  if (uVar7 != 0) {
    pcVar8 = *(code **)(uVar7 - 8);
    if (pcVar8 == (code *)0x0) {
      fn_0030233c((undefined4 *)(uVar7 - 8));
    }
    else {
      (*pcVar8)();
    }
  }
  param_1[2] = (uint)(puVar1 + uVar10);
  param_1[1] = (uint)(puVar1 + iVar9 + 1);
  *param_1 = (uint)puVar1;
  return;
}



void fn_00798bc0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_20 [2];
  uint *puStack_18;
  uint local_14;
  
  local_14 = param_2;
  puStack_18 = param_1;
  if (0x3fffffff < param_2) {
    local_20[0] = 0x3fffffff;
    fn_002ff628(8,&DAT_007dd000);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < local_14) {
    uVar9 = (int)(param_1[1] - *param_1) >> 2;
    local_20[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_20[0] < uVar9 + 0x20) {
      local_20[0] = uVar9 + 0x20;
    }
    puVar7 = &local_14;
    if (local_14 < local_20[0]) {
      puVar7 = local_20;
    }
    uVar9 = *puVar7;
    puVar1 = (undefined4 *)fn_0015ece0(uVar9 << 2);
    puVar8 = (undefined4 *)param_1[1];
    puVar2 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = param_1[1];
    uVar6 = *param_1;
    if (uVar6 < uVar3) {
      uVar10 = (uVar3 - uVar6 & 7) >> 2;
    }
    else {
      uVar10 = 0;
    }
    for (iVar4 = uVar10 + 1; iVar4 < ((int)(uVar3 - uVar6) >> 2) + 1; iVar4 = iVar4 + 2) {
    }
    if (uVar6 != 0) {
      if (*(code **)(uVar6 - 8) == (code *)0x0) {
        fn_0030233c(uVar6 - 8);
      }
      else {
        (**(code **)(uVar6 - 8))();
      }
    }
    uVar3 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar3 & 0xfffffffc) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar9);
  }
  return;
}



uint * fn_00798b74(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  return param_1;
}



void fn_007989d4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar10 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar9;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar10);
    *puVar9 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    if (0 < (int)puVar6 - (int)param_2) {
      iVar8 = (int)puVar6 - (int)param_2 >> 2;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar1[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}


