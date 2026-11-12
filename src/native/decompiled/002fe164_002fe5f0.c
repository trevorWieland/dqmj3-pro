#include "002fe164_002fe5f0.h"



uint fn_002fe5f0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x3c);
  uVar8 = 0;
  if ((int)(*(int *)(param_1 + 0x40) - *puVar10) >> 2 != 0) {
    do {
      uVar11 = (int)(*(int *)(param_1 + 0x40) - *puVar10) >> 2;
      if (uVar11 <= uVar8) {
        fn_002ff628(9,&DAT_008c7648,&DAT_008c7648,uVar8,uVar11);
        param_4 = uVar11;
      }
      if (*(int *)(*puVar10 + uVar8 * 4) == 0) {
        uVar11 = (int)(*(int *)(param_1 + 0x40) - *puVar10) >> 2;
        if (uVar11 <= uVar8) {
          fn_002ff628(9,&DAT_008c7648,&DAT_008c7648,uVar8,uVar11);
        }
        *(undefined4 *)(*puVar10 + uVar8 * 4) = param_2;
        return uVar8;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)((int)(*(int *)(param_1 + 0x40) - *puVar10) >> 2));
  }
  puVar9 = *(undefined4 **)(param_1 + 0x40);
  if (puVar9 == *(undefined4 **)(param_1 + 0x44)) {
    uVar8 = (int)((int)puVar9 - *puVar10) >> 2;
    if (uVar8 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x44) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 0x40) = puVar9 + 1;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = puVar9[-1];
      }
      puVar4 = puVar9 + -1;
      puVar5 = puVar9;
      if (puVar9 < puVar4) {
        if (0 < (int)puVar4 - (int)puVar9) {
          iVar7 = (int)puVar4 - (int)puVar9 >> 2;
          iVar3 = 0;
          do {
            iVar7 = iVar7 + -1;
            puVar9[iVar3 + -1] = puVar4[iVar3 + -1];
            iVar3 = iVar3 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        while (puVar9 != puVar4) {
          puVar4 = puVar4 + -1;
          puVar5[-1] = *puVar4;
          puVar5 = puVar5 + -1;
        }
      }
      *puVar9 = param_2;
    }
    else {
      uVar11 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (uVar11 < uVar8 + 0x20) {
        uVar11 = uVar8 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar5 = puVar1;
      for (puVar4 = (undefined4 *)*puVar10; puVar4 != puVar9; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_2;
      }
      puVar5 = *(undefined4 **)(param_1 + 0x40);
      puVar4 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
        puVar4 = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar9;
        }
      }
      uVar2 = *puVar10;
      uVar6 = *(uint *)(param_1 + 0x40);
      uVar8 = uVar2;
      if (uVar6 < uVar2) {
        do {
          uVar8 = uVar8 + 4;
        } while (uVar8 != uVar6);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x44) - uVar2) >> 2,0,uVar2,param_4);
      *(undefined4 **)(param_1 + 0x44) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 0x40) = puVar1 + ((int)(uVar6 - uVar2) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x40) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
  }
  return ((int)(*(int *)(param_1 + 0x40) - *puVar10) >> 2) - 1;
}



undefined4 fn_002fe5a4(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  (**(code **)(*param_2 + 0xa0))(param_2,param_3);
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 8) = param_2;
  }
  return 0;
}



uint fn_002fe310(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0xa0))(param_2,param_3,param_3,*(code **)(*param_2 + 0xa0),param_4);
  puVar4 = *(undefined4 **)(param_1 + 0x1c);
  uVar9 = 0;
  if ((int)((int)puVar4 - *puVar10) >> 2 != 0) {
    do {
      uVar11 = (int)((int)puVar4 - *puVar10) >> 2;
      if (uVar11 <= uVar9) {
        fn_002ff628(9,&DAT_008c764a,&DAT_008c764a,uVar9,uVar11);
      }
      if (*(int *)(*puVar10 + uVar9 * 4) == 0) {
        uVar11 = (int)(*(int *)(param_1 + 0x1c) - *puVar10) >> 2;
        if (uVar11 <= uVar9) {
          fn_002ff628(9,&DAT_008c764a,&DAT_008c764a,uVar9,uVar11);
        }
        *(int **)(*puVar10 + uVar9 * 4) = param_2;
        return uVar9;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)((int)puVar4 - *puVar10) >> 2));
  }
  if (puVar4 == *(undefined4 **)(param_1 + 0x20)) {
    uVar9 = (int)((int)puVar4 - *puVar10) >> 2;
    if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 0x1c) = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = puVar4[-1];
      }
      puVar2 = puVar4 + -1;
      puVar6 = puVar4;
      if (puVar4 < puVar2) {
        if (0 < (int)puVar2 - (int)puVar4) {
          iVar8 = (int)puVar2 - (int)puVar4 >> 2;
          iVar5 = 0;
          do {
            iVar8 = iVar8 + -1;
            puVar4[iVar5 + -1] = puVar2[iVar5 + -1];
            iVar5 = iVar5 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        while (puVar4 != puVar2) {
          puVar2 = puVar2 + -1;
          puVar6[-1] = *puVar2;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar4 = param_2;
    }
    else {
      uVar11 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar11 < uVar9 + 0x20) {
        uVar11 = uVar9 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar6 = puVar1;
      for (puVar2 = (undefined4 *)*puVar10; puVar2 != puVar4; puVar2 = puVar2 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
        }
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x1c);
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
      }
      uVar7 = *puVar10;
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar9 = uVar7;
      if (uVar3 < uVar7) {
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 != uVar3);
      }
      fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x20) - uVar7) >> 2,0);
      *(undefined4 **)(param_1 + 0x20) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 0x1c) = puVar1 + ((int)(uVar3 - uVar7) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x1c) = puVar4 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
    }
  }
  return ((int)(*(int *)(param_1 + 0x1c) - *puVar10) >> 2) - 1;
}



void fn_002fe2dc(undefined4 *param_1)

{
  *param_1 = &DAT_00821710;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



void fn_002fe2c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 in_s0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 0x14) = *param_3;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = in_s0;
  return;
}



void fn_002fe164(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  float in_s0;
  float fVar2;
  float in_s2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_30;
  float local_2c;
  float local_28;
  
  fVar4 = 0.0;
  local_28 = fVar4;
  fVar2 = fVar4;
  if (0 < param_2) {
    fn_006bd6f4();
    fVar2 = fVar4;
    fVar5 = in_s2;
    fVar4 = in_s0;
    fn_006bd6f4(param_1,param_2 + -1);
    fVar4 = fVar4 - in_s0;
    local_28 = fVar5 - in_s2;
  }
  fVar5 = 1.0;
  fVar3 = fVar5;
  local_30 = fVar4;
  local_2c = fVar2;
  (**(code **)(*param_3 + 0x88))(param_3);
  fn_006bd6f4(param_1,param_2);
  fVar4 = fVar5 - (float)param_3[9];
  bVar1 = local_30 == fVar2;
  if (bVar1) {
    fVar5 = local_2c;
  }
  if ((!bVar1 || (!bVar1 || fVar5 != fVar2)) || local_28 != fVar2) {
    fVar3 = fVar3 / SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    local_30 = local_30 * fVar3;
    local_2c = local_2c * fVar3;
    local_28 = local_28 * fVar3;
  }
  fVar2 = local_30;
  (**(code **)(*param_3 + 0x94))(param_3);
  local_30 = local_30 * fVar2;
  local_28 = local_28 * fVar2;
  local_2c = fVar4;
  (**(code **)(*param_3 + 0x38))(param_3,&local_30,1);
  return;
}


