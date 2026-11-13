#include "0078bba4_0078bdc8.h"



uint * fn_0078bdc8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
  return param_1;
}



void fn_0078bbf0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar5 = (int)((int)puVar1 - *param_1) >> 3;
  if ((uint)((int)(param_1[2] - *param_1) >> 3) <= uVar5) {
    uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar10 < uVar5 + 0x20) {
      uVar10 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 3,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 2) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar11 = puVar1[1];
        *puVar7 = *puVar1;
        puVar7[1] = uVar11;
      }
      puVar7 = puVar7 + 2;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar11 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar11;
    }
    puVar7 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar2);
    for (; param_2 != puVar7; param_2 = param_2 + 2) {
      puVar3 = puVar1 + 2;
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        *puVar3 = *param_2;
        puVar1[3] = uVar11;
      }
      puVar1 = puVar3;
    }
    uVar4 = *param_1;
    uVar8 = *puVar9;
    uVar5 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar8);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) >> 3,0);
    param_1[2] = (uint)(puVar2 + uVar10 * 2);
    *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar4) >> 3) * 2 + 2);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-2];
    puVar1[1] = puVar1[-1];
  }
  puVar7 = puVar1 + -2;
  if (param_2 < puVar7) {
    iVar6 = (int)puVar7 - (int)param_2;
    if (0 < iVar6) {
      puVar2 = puVar1;
      if (iVar6 * 0x10000000 < 0) {
        puVar7 = puVar1 + -4;
        puVar2 = puVar1 + -2;
        *puVar2 = *puVar7;
        puVar1[-1] = puVar1[-3];
      }
      for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar11 = puVar7[-1];
        puVar2[-2] = puVar7[-2];
        puVar2[-1] = uVar11;
        uVar11 = puVar7[-3];
        puVar2[-4] = puVar7[-4];
        puVar2[-3] = uVar11;
        puVar2 = puVar2 + -4;
        puVar7 = puVar7 + -4;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar11 = puVar7[-1];
      puVar1[-2] = puVar7[-2];
      puVar1[-1] = uVar11;
      puVar1 = puVar1 + -2;
      puVar7 = puVar7 + -2;
    }
  }
  uVar11 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar11;
  return;
}



uint * fn_0078bba4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 0x10) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 4,0);
  return param_1;
}


