#include "00144128_001448d0.h"



void fn_001448d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
  if (*(int *)(param_1 + 100) == -1) {
    return;
  }
  uVar1 = fn_00156f24(DAT_008987bc);
  fn_00154a48(uVar1,0);
  return;
}



void fn_00144854(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void fn_00144834(undefined4 param_1,undefined4 param_2)

{
  func_0x00121708(*(undefined4 *)(DAT_00897804 + 8),param_1,param_2);
  return;
}



void fn_00144828(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00121708(*(undefined4 *)(DAT_00897804 + 8),param_2,param_3);
  return;
}



int * fn_001446c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = (uint *)param_1[0xc];
  for (puVar4 = (uint *)param_1[0xb]; puVar4 != puVar5; puVar4 = puVar4 + 3) {
    uVar1 = *puVar4;
    uVar2 = uVar1;
    if (puVar4[1] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar4[1]);
    }
    fn_001008c4(uVar1,(int)(puVar4[2] - uVar1) >> 2,0);
  }
  iVar3 = param_1[0xb];
  fn_001008c4(iVar3,(param_1[0xd] - iVar3) / 0xc,0);
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if ((uint)param_1[4] <= uVar1) {
    for (; uVar2 != param_1[4]; uVar2 = uVar2 + 0xc) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[5] - uVar1) / 0xc,0);
  iVar6 = param_1[1];
  for (iVar3 = *param_1; iVar3 != iVar6; iVar3 = iVar3 + 0x94) {
    uVar1 = *(uint *)(iVar3 + 0x7c);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0x80) < uVar1) {
      do {
        uVar2 = uVar2 + 8;
      } while (uVar2 != *(uint *)(iVar3 + 0x80));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x84) - uVar1) >> 3,0);
  }
  uVar2 = param_1[2] - *param_1;
  iVar3 = (int)((longlong)(int)uVar2 * -0x22983759 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  fn_001008c4(*param_1,(iVar3 >> 7) - (iVar3 >> 0x1f),0);
  return param_1;
}



void fn_001445a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_18;
  uint local_14;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_18 = 8;
  puVar8 = (uint *)(param_1 + 0x60);
  if ((uint)(*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60) >> 2) < 8) {
    uVar9 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2;
    local_14 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_14 < uVar9 + 0x20) {
      local_14 = uVar9 + 0x20;
    }
    puVar4 = &local_14;
    if (local_14 < 9) {
      puVar4 = &local_18;
    }
    uVar9 = *puVar4;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar7 = *(undefined4 **)(param_1 + 100);
    puVar2 = puVar1;
    for (puVar5 = (undefined4 *)*puVar8; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar6 = uVar3;
    if (*(uint *)(param_1 + 100) <= uVar3) {
      for (; uVar6 != *(uint *)(param_1 + 100); uVar6 = uVar6 + 4) {
      }
    }
    fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x68) - uVar3) >> 2,0);
    uVar6 = *puVar8;
    *(undefined4 **)(param_1 + 0x60) = puVar1;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 100) - uVar6 & 0xfffffffc) + (int)puVar1;
    *(undefined4 **)(param_1 + 0x68) = puVar1 + uVar9;
  }
  return;
}



undefined4 fn_001443a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  
  iVar1 = *(int *)(param_1 + param_3 * 4 + 0x10);
  uVar6 = 0;
  puVar10 = *(undefined4 **)(iVar1 + 8);
  uVar5 = (int)puVar10 - *(int *)(iVar1 + 4) >> 2;
  if (uVar5 != 0) {
    do {
      if (*(int **)(*(int *)(iVar1 + 4) + uVar6 * 4) == param_2) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  puVar11 = (uint *)(iVar1 + 4);
  if (puVar10 == *(undefined4 **)(iVar1 + 0xc)) {
    if (uVar5 < (uint)((int)*(undefined4 **)(iVar1 + 0xc) - *(int *)(iVar1 + 4) >> 2)) {
      *(undefined4 **)(iVar1 + 8) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar3 = puVar10 + -1;
      puVar8 = puVar10;
      if (puVar10 < puVar3) {
        if (0 < (int)puVar3 - (int)puVar10) {
          iVar1 = (int)puVar3 - (int)puVar10 >> 2;
          iVar7 = 0;
          do {
            iVar1 = iVar1 + -1;
            puVar10[iVar7 + -1] = puVar3[iVar7 + -1];
            iVar7 = iVar7 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        while (puVar10 != puVar3) {
          puVar3 = puVar3 + -1;
          puVar8[-1] = *puVar3;
          puVar8 = puVar8 + -1;
        }
      }
      *puVar10 = param_2;
    }
    else {
      uVar6 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (uVar6 < uVar5 + 0x20) {
        uVar6 = uVar5 + 0x20;
      }
      puVar2 = (undefined4 *)fn_00100fc6(uVar6 << 2,0);
      puVar8 = puVar2;
      for (puVar3 = (undefined4 *)*puVar11; puVar3 != puVar10; puVar3 = puVar3 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar3;
        }
        puVar8 = puVar8 + 1;
      }
      puVar3 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = param_2;
      }
      puVar8 = *(undefined4 **)(iVar1 + 8);
      puVar3 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar3 = puVar3 + 1;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar10;
        }
      }
      uVar4 = *puVar11;
      uVar9 = *(uint *)(iVar1 + 8);
      uVar5 = uVar4;
      if (uVar9 < uVar4) {
        do {
          uVar5 = uVar5 + 4;
        } while (uVar5 != uVar9);
      }
      fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0xc) - uVar4) >> 2,0);
      *(undefined4 **)(iVar1 + 0xc) = puVar2 + uVar6;
      *(undefined4 **)(iVar1 + 8) = puVar2 + ((int)(uVar9 - uVar4) >> 2) + 1;
      *puVar11 = (uint)puVar2;
    }
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



void fn_00144298(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1[3];
  uVar4 = 0;
  if (param_1[4] - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar5 = uVar4 + 1;
      *(undefined4 *)(param_1[3] + uVar4 * 4) = 0;
      iVar3 = param_1[3];
      uVar4 = uVar5;
    } while (uVar5 < (uint)(param_1[4] - iVar3 >> 2));
  }
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  if (uVar4 != uVar5) {
    uVar2 = uVar4;
    if (uVar5 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar5);
    }
    param_1[4] = uVar5 - (uVar5 - uVar4 & 0xfffffffc);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return;
}



undefined4 fn_00144128(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1;
  uStack_10 = param_2;
  fn_00173d14(param_1);
  fn_00158128(local_14,param_2,0xffffffff);
  iVar1 = fn_00157df4(local_14,0xfffffffe);
  if (iVar1 < 0) {
    uVar2 = fn_00157ff4(local_14);
    fn_00173cb8(local_14,uVar2);
    return 0;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = fn_00158268(local_14,&LAB_00152888,&local_20);
  uVar2 = local_1c;
  if (iVar1 < 0) {
    uVar2 = fn_00157ff4(local_14);
    fn_00173cb8(local_14,uVar2);
    return 0xffffffff;
  }
  uVar3 = fn_00157ff4(local_14);
  fn_00173cb8(local_14,uVar3);
  return uVar2;
}


