#include "004497e0_0044a5d8ba.h"



void fn_0044a2c0(int param_1)

{
  if (*(char *)(param_1 + 0xec) == '\0') {
    fn_002c3d68(param_1);
    (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
    fn_006899f4(param_1,0xe0,0);
    *(undefined1 *)(param_1 + 0xec) = 2;
  }
  return;
}



undefined4 fn_00449eec(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 *local_70;
  undefined1 auStack_64 [12];
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint local_2c [2];
  
  puVar9 = (undefined4 *)param_1[6];
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_00449f34;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_00449f34:
  param_1[0x39] = (int)puVar9;
  puVar9 = (undefined4 *)fn_001f74d8(param_1,0xe8);
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_00896a84) goto LAB_00449f78;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_00449f78:
  param_1[0x3a] = (int)puVar9;
  fn_00397774(&local_8c);
  local_8c = DAT_00896684;
  local_88 = DAT_00896688;
  uStack_84 = 2;
  local_80 = *(undefined4 *)(param_1[0x39] + 8);
  puVar9 = (undefined4 *)fn_0022f584((char *)&DAT_0044a274,0);
  uVar2 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_70 + -3;
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_0044a1bc;
    }
    local_70[-1] = 0;
    puVar9 = local_70;
  }
  else {
    uVar7 = local_70[-3] + 1;
    bVar11 = local_70[-3] != -1;
    bVar10 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar11 = (uint)local_70[-2] <= uVar2;
      bVar10 = uVar2 == local_70[-2];
    }
    if (bVar11 && !bVar10) {
LAB_0044a014:
      uVar7 = local_70[-1];
      local_30 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_30 < uVar7 + 0x80) {
        local_30 = uVar7 + 0x80;
      }
      local_2c[0] = uVar2;
      puVar8 = &local_30;
      if (local_30 < uVar2) {
        puVar8 = local_2c;
      }
      uVar7 = *puVar8;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar7);
      }
      if (uVar7 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar5 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar7;
        puVar1[2] = uVar2;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar9,uVar2 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar3 = local_70 + -3;
        iVar6 = *piVar3;
        if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar1 + 3;
      goto LAB_0044a1bc;
    }
    if (puVar9 != (undefined4 *)0x0) {
      bVar10 = puVar9 <= local_70;
      if (local_70 <= puVar9) {
        bVar10 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar9;
      }
      if (!bVar10) goto LAB_0044a014;
    }
    fn_001006ac(local_70,puVar9,uVar2);
    local_70[-1] = uVar2;
    puVar9 = (undefined4 *)((int)local_70 + uVar2 * 2);
  }
  *(undefined2 *)puVar9 = 0;
LAB_0044a1bc:
  local_58 = 1;
  fn_00397618(param_1,&local_8c);
  uVar4 = fn_0022f584((char *)&DAT_0044a29c,0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar4);
  fn_0029376c(param_1[0x3a]);
  fn_00689efc(param_1,0xe8,0);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar6 = fn_001588d4(auStack_64);
  iVar6 = fn_001588d4(iVar6 + -4);
  iVar6 = fn_001588d4(iVar6 + -4);
  fn_001588d4(iVar6 + -4);
  return 1;
}


