#include "0049f680_0049fde8.h"



void fn_0049fde8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x90,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (iVar2 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0049fc60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13,
                 int param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_64 [4];
  undefined *local_60;
  code *local_5c;
  undefined4 uStack_58;
  undefined *local_54;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x68) = param_3;
  *(undefined4 *)(param_2 + 0x6c) = param_4;
  puVar4 = (undefined4 *)fn_0015ecdc(4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &DAT_00854c38;
  }
  *(undefined4 **)(param_2 + 0x70) = puVar4;
  *(undefined4 *)(param_2 + 0x88) = param_11;
  *(undefined1 *)(param_2 + 0x10c) = *(undefined1 *)(param_5 + 4);
  uVar5 = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_2 + 0x114) = uVar5;
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_5 + 0x10);
  uVar5 = *(undefined4 *)(param_5 + 0x1c);
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_5 + 0x18);
  *(undefined4 *)(param_2 + 0x124) = uVar5;
  fn_0079448c(param_2 + 0x128,param_5 + 0x20);
  *(undefined4 *)(param_2 + 0x7c) = param_6;
  *(undefined1 *)(param_2 + 0x74) = param_7;
  *(undefined4 *)(param_2 + 0x78) = param_8;
  *(undefined4 *)(param_2 + 0x8c) = param_12;
  *(undefined4 *)(param_2 + 0x80) = param_9;
  *(undefined4 *)(param_2 + 0x84) = param_10;
  if (param_13 != 0) {
    if (param_14 == 0) {
      *(int *)(param_2 + 0x174) = param_13;
    }
    else {
      uVar5 = fn_0015ece0(*(undefined4 *)(param_5 + 0x10));
      *(undefined4 *)(param_2 + 0x170) = uVar5;
      fn_00301a9c(uVar5,param_13,*(undefined4 *)(param_5 + 0x10));
    }
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x68));
  fn_0048c944(param_2 + 0x90,*(undefined4 *)(iVar1 + 0x74));
  local_5c = fn_004a0184;
  uStack_58 = 0;
  local_54 = &DAT_0049fde0;
  local_60 = &DAT_00853500;
  fn_00479c98(param_2,&local_60);
  local_64[0] = 1;
  fn_004b8d18(local_34,local_64);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_0049fa68(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_00854a38;
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar3 = (int *)param_1[0xae];
  if (piVar3 != (int *)0x0) {
    puVar6 = (uint *)(piVar3 + 1);
    do {
      uVar5 = *puVar6 - 1;
      bVar9 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar9);
    *puVar6 = uVar5;
    bVar9 = uVar5 == 0;
    if (bVar9) {
      uVar5 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar9 && uVar5 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    param_1[0xae] = 0;
  }
  if (param_1[0x2e] != 0) {
    fn_0046cd70(*(undefined4 *)(*(int *)(*(int *)(param_1[0x68] + 4) + 0x18) + 0x18));
    param_1[0x2e] = 0;
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))();
    param_1[0x2f] = 0;
  }
  if ((int *)param_1[0x30] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x30] + 4))();
    param_1[0x30] = 0;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  iVar1 = fn_0013ce98(param_1 + 0x8d);
  iVar1 = fn_0013ce98(iVar1 + -0x74);
  piVar3 = *(int **)(iVar1 + -8);
  piVar2 = (int *)(iVar1 + -0x18);
  if (piVar3 != (int *)0x0) {
    piVar7 = (int *)*piVar3;
    while (piVar7 != piVar3) {
      piVar8 = *(int **)(iVar1 + -8);
      if (piVar7 != *(int **)(iVar1 + -8)) {
        piVar8 = (int *)*piVar7;
        *(int **)piVar7[1] = piVar8;
        *(int *)(*piVar7 + 4) = piVar7[1];
        *(int *)(iVar1 + -4) = *(int *)(iVar1 + -4) + -1;
        (**(code **)piVar7[2])(piVar7 + 2);
        *piVar7 = *(int *)(iVar1 + -0x14);
        *(int **)(iVar1 + -0x14) = piVar7;
      }
      piVar7 = piVar8;
    }
    puVar4 = *(undefined4 **)(iVar1 + -8);
    *puVar4 = *(undefined4 *)(iVar1 + -0x14);
    *(undefined4 **)(iVar1 + -0x14) = puVar4;
    piVar3 = (int *)*piVar2;
    while (piVar3 != (int *)0x0) {
      *piVar2 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)*piVar2;
    }
    *(undefined4 *)(iVar1 + -0x14) = 0;
    *(undefined4 *)(iVar1 + -0x10) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
  }
  iVar1 = fn_00456728(iVar1 + -0x80);
  iVar1 = fn_0048cc74(iVar1 + -0x78);
  iVar1 = fn_0048cc74(iVar1 + -0x88);
  fn_004b30d8(iVar1 + -0x40);
  return;
}



void fn_0049f680(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_120 [4];
  undefined *local_11c;
  undefined1 local_118;
  undefined4 local_114 [26];
  undefined4 local_ac;
  undefined1 auStack_a8 [120];
  undefined1 auStack_30 [16];
  
  uVar1 = fn_006d09e4(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  uVar1 = fn_006d09d4(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  fn_006d0734(auStack_30,param_1 + 0x234);
  iVar2 = fn_00156284(auStack_30);
  if (((iVar2 == 0) || (iVar2 = fn_006d0978(param_1 + 0x234), iVar2 == 0)) ||
     (iVar2 = fn_006d07d8(param_1 + 0x234), iVar2 == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  fn_00170f54(auStack_30);
  if (bVar8) {
    fn_0013ce04(auStack_a8);
    uVar1 = fn_006d09b8(param_1 + 0x234);
    fn_00455394(auStack_a8,uVar1);
    uVar1 = fn_006d07d8(param_1 + 0x234);
    fn_004550d4(auStack_a8,uVar1);
    local_118 = 0;
    local_11c = &DAT_00853b88;
    iVar2 = fn_0013ce04(local_114);
    *(undefined **)(iVar2 + -8) = &DAT_008530ac;
    fn_00455cf0(local_114,auStack_a8);
    local_ac = *(undefined4 *)(param_1 + 0x2b4);
    piVar6 = *(int **)(param_1 + 0x1ac);
    iVar2 = *(int *)(param_1 + 0x1b8);
    if (piVar6 == (int *)0x0) {
      piVar6 = *(int **)(param_1 + 0x1b0);
      if (piVar6 == *(int **)(param_1 + 0x1b4)) {
        if (*(int *)(param_1 + 0x1a8) == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x1a8) + 4);
          uVar7 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar7 < uVar3 + 0x20) {
            uVar7 = uVar3 + 0x20;
          }
        }
        puVar4 = (undefined4 *)fn_0015ece0(0xc);
        uVar1 = fn_0015ece0(uVar7 * 0x7c);
        puVar4[2] = uVar1;
        *puVar4 = *(undefined4 *)(param_1 + 0x1a8);
        puVar4[1] = uVar7;
        *(undefined4 **)(param_1 + 0x1a8) = puVar4;
        piVar6 = (int *)puVar4[2];
        *(int **)(param_1 + 0x1b0) = piVar6;
        *(int **)(param_1 + 0x1b4) = piVar6 + uVar7 * 0x1f;
      }
      *(int **)(param_1 + 0x1b0) = piVar6 + 0x1f;
    }
    else {
      *(int *)(param_1 + 0x1ac) = *piVar6;
    }
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = (int)&DAT_00853b88;
      *(undefined1 *)(piVar6 + 3) = local_118;
      iVar5 = fn_0013cd7c(piVar6 + 4,local_114);
      *(undefined4 *)(iVar5 + 0x68) = local_ac;
      *(undefined **)(iVar5 + -8) = &DAT_008530ac;
    }
    *piVar6 = iVar2;
    piVar6[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar6;
    *(int **)(iVar2 + 4) = piVar6;
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    local_11c = &DAT_00853b88;
    fn_0013ce98(local_114);
    fn_0013ce98(auStack_a8);
  }
  iVar2 = *(int *)(param_1 + 0x2b0);
  bVar8 = iVar2 == 0;
  if (bVar8) {
    iVar2 = *(int *)(param_1 + 0x2b4);
  }
  if (bVar8 && iVar2 == 0) {
    local_114[0] = 0x80050003;
    uVar1 = fn_004b8d4c(auStack_120,local_114);
    fn_004b8d90(param_1 + 0x228,uVar1);
    *(undefined1 *)(param_1 + 0x3a) = 5;
    fn_004b2f04(param_1);
  }
  return;
}


