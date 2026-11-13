#include "005b329c_005b3ba8b.h"



void fn_005b3ba8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar1 = *(int *)(iVar3 + 0x6c);
  iVar4 = *(int *)(iVar3 + 0x3c);
  if (iVar4 <= iVar1) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if (10 < iVar4) {
    iVar1 = iVar4 + -10;
  }
  *(int *)(iVar3 + 0x3c) = iVar1;
  uVar2 = fn_003453a8();
  fn_005b4558(param_1,0,uVar2);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_005b3b34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  iVar3 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(iVar1 + 0x6c) < iVar3) {
    *(int *)(iVar1 + 0x3c) = iVar3 + -1;
    uVar2 = fn_003453a8(iVar3 + -1);
    fn_005b4558(param_1,0,uVar2);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_005b3ac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  iVar3 = *(int *)(iVar1 + 0x3c);
  if (iVar3 < *(int *)(iVar1 + 0x70)) {
    *(int *)(iVar1 + 0x3c) = iVar3 + 1;
    uVar2 = fn_003453a8(iVar3 + 1);
    fn_005b4558(param_1,0,uVar2);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_005b3974(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  fn_005b4558(param_1,0);
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xd0));
  *(undefined1 *)(param_1 + 0xf8) = 0;
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = 1;
  fn_0031f3f4(iVar1,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined4 fn_005b344c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_64;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_50;
  undefined1 local_4e;
  undefined1 local_4c [20];
  undefined1 auStack_38 [4];
  undefined1 local_34;
  uint local_30 [3];
  
  fn_00229474(*(undefined4 *)(DAT_00897804 + 0x28));
  local_30[1] = 0x8c000000;
  fn_00163988(DAT_00897810,local_30 + 1,1);
  fn_00397b18(&local_80);
  local_80 = DAT_00894158;
  local_7c = DAT_0089415c;
  puVar1 = (undefined4 *)fn_0022f584(DAT_00894160,0);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_64 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_64 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_64 + -3,local_64[-2] + 8,0);
      }
      local_64 = &DAT_008f9cf4;
      goto LAB_005b36c8;
    }
    local_64[-1] = 0;
    puVar1 = local_64;
  }
  else {
    uVar9 = local_64[-3] + 1;
    bVar12 = local_64[-3] != -1;
    bVar11 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar12 = (uint)local_64[-2] <= uVar2;
      bVar11 = uVar2 == local_64[-2];
    }
    if (bVar12 && !bVar11) {
LAB_005b3514:
      uVar9 = local_64[-1];
      local_30[0] = uVar2;
      local_84 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_84 < uVar9 + 0x80) {
        local_84 = uVar9 + 0x80;
      }
      puVar5 = local_30;
      if (uVar2 <= local_84) {
        puVar5 = &local_84;
      }
      uVar9 = *puVar5;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar9);
      }
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar10[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar9;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_64 != &DAT_008f9cf4) {
        piVar4 = local_64 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_64 + -3,local_64[-2] + 8,0);
        }
      }
      local_64 = puVar10 + 3;
      goto LAB_005b36c8;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_64;
      if (local_64 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_64 + local_64[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_005b3514;
    }
    fn_001006ac(local_64,puVar1,uVar2);
    local_64[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_64 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005b36c8:
  local_78 = 3;
  local_50 = 0;
  local_4c[0] = 1;
  local_34 = 1;
  local_4e = 1;
  local_54 = 0;
  local_53 = 0;
  local_74 = 0;
  uVar3 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  fn_00344bf8(local_4c,uVar3,1);
  fn_00344eb8(param_1 + 0xd4,param_1 + 0xd8);
  uVar3 = fn_00397a98(param_1,&local_80);
  iVar7 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar7 != 0) {
    piVar4 = (int *)fn_00327fb4(iVar7,*(undefined4 *)(param_1 + 4),0);
  }
  piVar8 = *(int **)(param_1 + 0xd0);
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0xd0) = piVar4;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x30) = *(undefined4 *)(param_1 + 0x70);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))
            (*(int **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x48));
  fn_00344ef0(*(undefined4 *)(param_1 + 0xb4),1,0);
  iVar7 = fn_001588d4(auStack_38);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -0x10);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  fn_001588d4(iVar7 + -4);
  return uVar3;
}



void fn_005b3408(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x14))();
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  fn_00397db0(param_1);
  return;
}


