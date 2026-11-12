#include "003f5348_003f5abc.h"



void fn_003f5abc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) *
          (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar2,uVar1);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x1c) =
       *(undefined2 *)(*(int *)(param_1 + 0xb4) + uVar2 * 2);
  return;
}



void fn_003f59d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &PTR_LAB_008350c0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  return;
}



void fn_003f59b4(int param_1)

{
  undefined4 extraout_r1;
  
  fn_00300f74(*(int *)(param_1 + 0xc0) + 1);
  *(undefined4 *)(param_1 + 0xc0) = extraout_r1;
  return;
}



void fn_003f5990(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_003f5934(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x150))(param_1);
  (**(code **)(*param_1 + 0x124))(param_1);
  (**(code **)(*param_1 + 0x158))(param_1,param_2);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_003f5908(undefined4 param_1)

{
  fn_002c3e78();
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_003f58e0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_003f5828(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1[0x2c] == 1) && (iVar1 = (**(code **)(*param_1 + 0x14c))(param_1), iVar1 != 0)) {
    fn_002c3d68(param_1);
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd5);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_0089292c) goto LAB_003f58a0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003f58a0:
    fn_005aeb2c(puVar2);
    fn_006899f4(param_1,0xd5,0);
    fn_00689efc(param_1,0xe8,0);
    param_1[0x2c] = 3;
  }
  return;
}



undefined4 fn_003f5348(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  uint local_a4;
  uint auStack_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  
  puVar12 = (undefined4 *)param_1[6];
  if (puVar12 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar12)(puVar12);
    do {
      if (puVar1 == &DAT_0089292c) goto LAB_003f5394;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar12 = (undefined4 *)0x0;
LAB_003f5394:
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_003f53d4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f53d4:
  uVar3 = (**(code **)(*param_1 + 0x154))(param_1);
  fn_002c330c(&local_58);
  local_58 = DAT_0089299c;
  uStack_54 = DAT_008929a0;
  uStack_50 = 10;
  uStack_4c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  uVar11 = puVar12[3];
  local_44 = uVar3;
  uVar3 = fn_0037c0b8(puVar1[3]);
  fn_0037bef8(&local_98,0x20,uVar3,uVar11);
  puVar1 = &local_98;
  uVar4 = fn_00100b58(puVar1);
  puVar12 = &DAT_008f9ce8;
  if (uVar4 == 0) {
    piVar5 = local_3c + -3;
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      if ((local_3c != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
      local_3c = &DAT_008f9cf4;
      goto LAB_003f5680;
    }
    local_3c[-1] = 0;
    puVar12 = local_3c;
LAB_003f567c:
    *(undefined2 *)puVar12 = 0;
  }
  else {
    uVar9 = local_3c[-3] + 1;
    bVar14 = local_3c[-3] != -1;
    bVar13 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar14 = (uint)local_3c[-2] <= uVar4;
      bVar13 = uVar4 == local_3c[-2];
    }
    if (!bVar14 || bVar13) {
      puVar2 = local_3c;
      if (puVar1 >= local_3c) {
        puVar2 = (undefined4 *)((int)local_3c + local_3c[-1] * 2);
      }
      if ((puVar1 < local_3c || puVar2 < puVar1) || puVar1 == puVar2) {
        fn_001006ac(local_3c,puVar1,uVar4);
        local_3c[-1] = uVar4;
        puVar12 = (undefined4 *)((int)local_3c + uVar4 * 2);
        goto LAB_003f567c;
      }
    }
    uVar9 = local_3c[-1];
    uVar6 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    local_a4 = uVar9 + 0x80;
    if (uVar9 + 0x80 <= uVar6) {
      local_a4 = uVar6;
    }
    puVar10 = auStack_a0;
    if (uVar4 <= local_a4) {
      puVar10 = &local_a4;
    }
    auStack_a0[0] = uVar4;
    uVar9 = *puVar10;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar9);
    }
    if (uVar9 != 0) {
      puVar12 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
      }
      puVar12[2] = uVar4;
      puVar7 = (undefined2 *)((int)puVar12 + uVar4 * 2 + 0xc);
      *puVar12 = 0;
      puVar12[1] = uVar9;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    fn_00301a9c(puVar12 + 3,puVar1,uVar4 << 1);
    if (local_3c != &DAT_008f9cf4) {
      piVar5 = local_3c + -3;
      iVar8 = *piVar5;
      if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
    }
    local_3c = puVar12 + 3;
  }
LAB_003f5680:
  local_2c = 1;
  local_2b = 0;
  local_29 = 1;
  local_40 = 0x42c00000;
  fn_002c29a0(param_1,&local_58);
  fn_0031f8fc(param_1[0x1d],1,0,0,0xffffffff);
  iVar8 = param_1[0x1d];
  *(undefined1 *)(iVar8 + 0x83) = 0;
  fn_0031f954(iVar8,0);
  (**(code **)(*param_1 + 0x150))(param_1);
  (**(code **)(*param_1 + 0x124))(param_1);
  param_1[0x2c] = 0;
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar5 = local_38 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar5 = local_3c + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return 1;
}


