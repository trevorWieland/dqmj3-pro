#include "005c2240_005c45ac.h"



undefined4 fn_005c45ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_1058 [432];
  undefined4 local_ea8;
  undefined1 auStack_ea0 [8];
  undefined4 local_e98;
  undefined1 local_e94;
  undefined1 local_e93;
  undefined4 local_e90;
  undefined4 uStack_e8c;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 uStack_e74;
  undefined1 auStack_e70 [960];
  undefined1 auStack_ab0 [2264];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [376];
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_0089905c) goto LAB_005c45f4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005c45f4:
  *(undefined4 **)(param_1 + 0x104) = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00899218) goto LAB_005c4638;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005c4638:
  *(undefined4 **)(param_1 + 0x108) = puVar4;
  uVar2 = fn_0043cd80(param_1);
  fn_00689efc(param_1,0xe7,0);
  if (*(char *)(*(int *)(param_1 + 0x104) + 0x14) == '\x01') {
    *(undefined1 *)(*(int *)(param_1 + 0x104) + 0x14) = 0;
    iVar3 = fn_0020bc58(auStack_1d8);
    *(undefined1 *)(iVar3 + 0x1b0) = 0;
    *(undefined4 *)(iVar3 + 0x1b2) = 0;
    *(undefined4 *)(iVar3 + 0x1b6) = 0;
    *(undefined4 *)(iVar3 + 0x1ba) = 0;
    *(undefined2 *)(iVar3 + 0x1be) = 0;
    fn_002908c8(auStack_ab0);
    fn_001003e0(auStack_190,auStack_ab0);
    fn_0017821c(*(int *)(param_1 + 0x104) + 0x18,auStack_1d8,0x1c0);
  }
  iVar3 = fn_0020bc58(auStack_1058);
  iVar3 = fn_00124be8(iVar3 + 0x1b8);
  *(undefined2 *)(iVar3 + 0x10) = 0;
  *(undefined2 *)(iVar3 + 0x12) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  iVar3 = fn_00101a1c(iVar3 + 0x30,&LAB_0020c1dc,0x20,0x1e);
  *(undefined4 *)(iVar3 + -0x38) = 0;
  fn_0014f510(iVar3 + -0x30,DAT_008b64f8);
  *(undefined4 *)(iVar3 + -0x28) = 0;
  *(undefined1 *)(iVar3 + -0x24) = 0;
  *(undefined1 *)(iVar3 + -0x23) = 0;
  iVar3 = *(int *)(param_1 + 0x104);
  fn_0017821c(auStack_1058,iVar3 + 0x18,0x1b0);
  local_e93 = *(undefined1 *)(iVar3 + 0x1c8);
  iVar3 = *(int *)(param_1 + 0x108);
  fn_0017821c(iVar3 + 0x558,auStack_1058,0x1b0);
  *(undefined4 *)(iVar3 + 0x708) = local_ea8;
  fn_0014f510(iVar3 + 0x710,auStack_ea0);
  *(undefined4 *)(iVar3 + 0x718) = local_e98;
  *(undefined1 *)(iVar3 + 0x71c) = local_e94;
  *(undefined1 *)(iVar3 + 0x71d) = local_e93;
  *(undefined4 *)(iVar3 + 0x720) = local_e90;
  *(undefined4 *)(iVar3 + 0x724) = uStack_e8c;
  *(undefined4 *)(iVar3 + 0x728) = uStack_e88;
  *(undefined4 *)(iVar3 + 0x72c) = uStack_e84;
  *(undefined4 *)(iVar3 + 0x730) = uStack_e80;
  *(undefined4 *)(iVar3 + 0x734) = uStack_e7c;
  *(undefined4 *)(iVar3 + 0x738) = uStack_e78;
  *(undefined4 *)(iVar3 + 0x73c) = uStack_e74;
  fn_0017821c(iVar3 + 0x740,auStack_e70,0x3c0);
  return uVar2;
}



undefined4 fn_005c2240(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined1 auStack_8c [10];
  undefined1 local_82;
  undefined4 local_80;
  undefined1 auStack_78 [32];
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  uint local_44 [2];
  undefined4 local_3c;
  uint local_38 [3];
  uint local_2c [2];
  
  fn_00121838(DAT_00897800,DAT_0089878c,1);
  fn_00121838(DAT_00897800,DAT_00898794,1);
  fn_00397774(&local_b4);
  local_b4 = DAT_00894200;
  local_b0 = DAT_00894204;
  local_80 = 1;
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_005c2648);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  puVar11 = &DAT_008f9cf4;
  if (uVar2 == 0) {
    piVar4 = local_98 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_98 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_98 + -3,local_98[-2] + 8,0);
      }
      local_98 = &DAT_008f9cf4;
      goto LAB_005c24bc;
    }
    local_98[-1] = 0;
    puVar1 = local_98;
  }
  else {
    uVar9 = local_98[-3] + 1;
    bVar13 = local_98[-3] != -1;
    bVar12 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar13 = (uint)local_98[-2] <= uVar2;
      bVar12 = uVar2 == local_98[-2];
    }
    if (bVar13 && !bVar12) {
LAB_005c230c:
      uVar9 = local_98[-1];
      local_58 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_58 < uVar9 + 0x80) {
        local_58 = uVar9 + 0x80;
      }
      puVar8 = &uStack_54;
      if (uVar2 <= local_58) {
        puVar8 = &local_58;
      }
      uStack_54 = uVar2;
      uVar9 = *puVar8;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar9);
      }
      puVar3 = puVar10;
      if (uVar9 != 0) {
        puVar3 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        puVar3[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
        *puVar3 = 0;
        puVar3[1] = uVar9;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar3 + 3,puVar1,uVar2 << 1);
      if (local_98 != &DAT_008f9cf4) {
        piVar4 = local_98 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_98 + -3,local_98[-2] + 8,0);
        }
      }
      local_98 = puVar3 + 3;
      goto LAB_005c24bc;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar12 = puVar1 <= local_98;
      if (local_98 <= puVar1) {
        bVar12 = (undefined4 *)((int)local_98 + local_98[-1] * 2) <= puVar1;
      }
      if (!bVar12) goto LAB_005c230c;
    }
    fn_001006ac(local_98,puVar1,uVar2);
    local_98[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_98 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005c24bc:
  local_ac = 2;
  local_a0 = 2;
  local_82 = 1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  local_3c = fn_00397618(param_1,&local_b4);
  iVar7 = *(int *)(param_1[0x39] + 0x1c);
  if (*(byte *)(iVar7 + 0xb) < 100) {
    fn_0015b0f8();
    local_50 = fn_0022fd28((char *)&DAT_005c2658);
  }
  else {
    fn_00231ca0(0x25,0);
    fn_0015b0dc();
    local_50 = fn_0022fd28((char *)&DAT_005c2658);
  }
  uVar2 = fn_00100b58();
  local_4c = puVar11;
  if (uVar2 != 0) {
    puVar8 = local_44;
    if (0x20 < uVar2) {
      puVar8 = local_2c;
    }
    local_2c[0] = uVar2;
    local_44[0] = 0x20;
    uVar9 = *puVar8;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar9);
    }
    puVar1 = puVar10;
    if (uVar9 != 0) {
      puVar1 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      puVar6 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
      *puVar1 = 0;
      puVar1[1] = uVar9;
      puVar1[2] = uVar2;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    local_4c = puVar1 + 3;
  }
  fn_00301a9c(local_4c,local_50,uVar2 << 1);
  uVar5 = fn_0022fc1c(iVar7 + 8);
  uVar2 = fn_00100b58();
  if (uVar2 != 0) {
    puVar8 = local_44;
    if (0x20 < uVar2) {
      puVar8 = local_38;
    }
    local_38[0] = uVar2;
    local_44[0] = 0x20;
    uVar9 = *puVar8;
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
      puVar6 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
      *puVar10 = 0;
      puVar10[1] = uVar9;
      puVar10[2] = uVar2;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar11 = puVar10 + 3;
  }
  local_48 = puVar11;
  fn_00301a9c(puVar11,uVar5,uVar2 << 1);
  fn_0015b0dc(local_4c);
  fn_0015b0dc(local_48);
  uVar5 = fn_0022fd28((char *)&DAT_005c27c4);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar5);
  uVar5 = local_3c;
  fn_001588d4(&local_48);
  fn_001588d4(&local_4c);
  fn_00100414(auStack_78,&LAB_0059e0e0,8,4);
  iVar7 = fn_001588d4(auStack_8c);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  fn_001588d4(iVar7 + -4);
  return uVar5;
}


