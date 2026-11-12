#include "002d10d8_002d1d78b.h"



void fn_002d1d78(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 1;
  *param_1 = &DAT_0081fe38;
  do {
    if (*(int *)(param_1[7] + iVar4 * 4) != 0) {
      fn_0012f208(param_1,iVar4);
      fn_005e6b44(*(undefined4 *)(param_1[7] + iVar4 * 4));
      *(undefined4 *)(param_1[7] + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  uVar2 = param_1[7];
  uVar3 = param_1[8];
  uVar1 = uVar2;
  if (uVar2 < uVar3) {
    if (0 < (int)(uVar3 - uVar2)) {
      for (iVar4 = (int)(uVar3 - uVar2) >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      }
    }
  }
  else {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[9] - uVar2) >> 2,0);
  fn_00241ddc(param_1);
  fn_002feef8();
  return;
}



void fn_002d1d24(void)

{
  int iVar1;
  
  iVar1 = fn_002961ac(DAT_0089783c);
  if (iVar1 == 0) {
    return;
  }
  fn_00112fb4(DAT_0089783c);
  return;
}



undefined4 * fn_002d193c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  piVar9 = param_1 + 1;
  *param_1 = &DAT_0081fdf8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_3c = 0x20;
  if ((uint)((int)(param_1[3] - param_1[1]) >> 4) < 0x20) {
    uVar13 = (int)(param_1[2] - param_1[1]) >> 4;
    local_30 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_30 < uVar13 + 0x20) {
      local_30 = uVar13 + 0x20;
    }
    puVar5 = &local_30;
    if (local_30 < 0x21) {
      puVar5 = &local_3c;
    }
    local_34 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(local_34 << 4,0);
    puVar12 = (undefined4 *)param_1[2];
    puVar8 = puVar1;
    for (puVar10 = (undefined4 *)*piVar9; puVar10 != puVar12; puVar10 = puVar10 + 4) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar10;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        local_38 = (int)(puVar10[2] - puVar10[1]) >> 2;
        local_2c[0] = 0x20;
        puVar5 = &local_38;
        if (local_38 < 0x20) {
          puVar5 = local_2c;
        }
        uVar13 = *puVar5;
        puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
        puVar8[1] = puVar2;
        puVar7 = (undefined4 *)puVar10[2];
        for (puVar6 = (undefined4 *)puVar10[1]; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar6;
          }
          puVar2 = puVar2 + 1;
        }
        iVar3 = puVar8[1];
        puVar8[2] = (puVar10[2] - puVar10[1] & 0xfffffffc) + iVar3;
        puVar8[3] = iVar3 + uVar13 * 4;
      }
      puVar8 = puVar8 + 4;
    }
    iVar11 = param_1[2];
    for (iVar3 = *piVar9; iVar3 != iVar11; iVar3 = iVar3 + 0x10) {
      uVar4 = *(uint *)(iVar3 + 4);
      uVar13 = uVar4;
      if (*(uint *)(iVar3 + 8) < uVar4) {
        do {
          uVar13 = uVar13 + 4;
        } while (uVar13 != *(uint *)(iVar3 + 8));
      }
      fn_001008c4(uVar4,(int)(*(int *)(iVar3 + 0xc) - uVar4) >> 2,0);
    }
    fn_001008c4(*piVar9,param_1[3] - *piVar9 >> 4,0);
    iVar3 = *piVar9;
    *piVar9 = (int)puVar1;
    param_1[2] = (int)puVar1 + (param_1[2] - iVar3 & 0xfffffff0U);
    param_1[3] = puVar1 + local_34 * 4;
  }
  return param_1;
}



void fn_002d1844(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  
  iVar3 = *(int *)(param_1 + 0x50);
  piVar10 = *(int **)(iVar3 + 8);
  for (piVar5 = *(int **)(iVar3 + 4); piVar5 != piVar10; piVar5 = piVar5 + 4) {
    puVar8 = (undefined4 *)piVar5[2];
    for (puVar6 = (undefined4 *)piVar5[1]; puVar6 != puVar8; puVar6 = puVar6 + 1) {
      (**(code **)(*(int *)*piVar5 + 8))((int *)*piVar5,*puVar6);
    }
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 4))();
    }
    *piVar5 = 0;
  }
  iVar7 = *(int *)(iVar3 + 4);
  iVar9 = *(int *)(iVar3 + 8);
  iVar1 = iVar7;
  if (iVar7 != iVar9) {
    for (; iVar1 != iVar9; iVar1 = iVar1 + 0x10) {
      uVar4 = *(uint *)(iVar1 + 4);
      uVar2 = uVar4;
      if (*(uint *)(iVar1 + 8) <= uVar4) {
        for (; uVar2 != *(uint *)(iVar1 + 8); uVar2 = uVar2 + 4) {
        }
      }
      fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0xc) - uVar4) >> 2,0);
    }
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) - (iVar9 - iVar7 & 0xfffffff0U);
  }
  return;
}



undefined4 * fn_002d177c(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint local_18 [2];
  
  piVar7 = param_1 + 1;
  piVar8 = param_2 + 1;
  *param_1 = *param_2;
  *piVar7 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_18[0] = param_2[2] - *piVar8 >> 2;
  puVar1 = local_18;
  if (local_18[0] < 0x20) {
    puVar1 = local_18 + 1;
  }
  local_18[1] = 0x20;
  uVar9 = *puVar1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
  *piVar7 = (int)puVar2;
  puVar3 = (undefined4 *)param_2[2];
  for (puVar5 = (undefined4 *)*piVar8; puVar5 != puVar3; puVar5 = puVar5 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar5;
    }
    puVar2 = puVar2 + 1;
  }
  iVar4 = param_2[2];
  iVar6 = *piVar8;
  param_1[3] = *piVar7 + uVar9 * 4;
  param_1[2] = (iVar4 - iVar6 & 0xfffffffcU) + *piVar7;
  return param_1;
}


