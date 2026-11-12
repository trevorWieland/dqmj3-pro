#include "005bc898_005bcfdc.h"



void fn_005bcfdc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  fn_002c3e78();
  iVar6 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar6;
      if ((((int)uVar3 < 0) ||
          (uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8),
          iVar1 = (int)((longlong)(int)uVar4 * -0x57f57f57 + ((ulonglong)uVar4 << 0x20) >> 0x20),
          (uint)((iVar1 >> 10) - (iVar1 >> 0x1f)) <= uVar3)) ||
         (puVar5 = (undefined *)(*(int *)(param_1 + 0xe8) + uVar3 * 0x618),
         puVar5 == (undefined *)0x0)) {
        puVar5 = &DAT_005bd0a8;
      }
      fn_0031b78c(param_1,iVar6,0,puVar5);
      iVar6 = iVar6 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar6 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



int fn_005bccf8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_20 [3];
  
  fn_0017821c(param_1,param_2,0x1b0);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  iVar1 = fn_004b9b4c(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(param_2 + 0x1c4);
  *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)(param_2 + 0x1c5);
  uVar13 = *(undefined4 *)(param_2 + 0x1cc);
  uVar14 = *(undefined4 *)(param_2 + 0x1d0);
  uVar15 = *(undefined4 *)(param_2 + 0x1d4);
  uVar16 = *(undefined4 *)(param_2 + 0x1d8);
  uVar17 = *(undefined4 *)(param_2 + 0x1dc);
  uVar18 = *(undefined4 *)(param_2 + 0x1e0);
  uVar19 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(iVar1 + 0x14) = uVar13;
  *(undefined4 *)(iVar1 + 0x18) = uVar14;
  *(undefined4 *)(iVar1 + 0x1c) = uVar15;
  *(undefined4 *)(iVar1 + 0x20) = uVar16;
  *(undefined4 *)(iVar1 + 0x24) = uVar17;
  *(undefined4 *)(iVar1 + 0x28) = uVar18;
  *(undefined4 *)(iVar1 + 0x2c) = uVar19;
  fn_0017821c(iVar1 + 0x30,param_2 + 0x1e8,0x3c0);
  *(undefined4 **)(iVar1 + 0x3f0) = &DAT_00853388;
  *(undefined1 *)(iVar1 + 0x3f4) = *(undefined1 *)(param_2 + 0x5ac);
  *(undefined4 *)(iVar1 + 0x3f8) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined4 *)(iVar1 + 0x3fc) = *(undefined4 *)(param_2 + 0x5b4);
  *(undefined4 *)(iVar1 + 0x400) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined2 *)(iVar1 + 0x404) = *(undefined2 *)(param_2 + 0x5bc);
  *(undefined2 *)(iVar1 + 0x406) = *(undefined2 *)(param_2 + 0x5be);
  *(undefined4 *)(iVar1 + 0x408) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined4 *)(iVar1 + 0x40c) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(iVar1 + 0x410) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(iVar1 + 0x414) = *(undefined4 *)(param_2 + 0x5cc);
  iVar1 = fn_004b637c(iVar1 + 0x418,param_2 + 0x5d0);
  *(undefined ***)(iVar1 + -0x28) = &PTR_FUN_00854c0c;
  *(undefined1 *)(iVar1 + 8) = *(undefined1 *)(param_2 + 0x5d8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x5dc);
  iVar1 = fn_004b637c(iVar1 + 0x10,param_2 + 0x5e0);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  local_20[0] = *(int *)(param_2 + 0x5ec) - *(int *)(param_2 + 0x5e8) >> 2;
  local_20[1] = 0x20;
  puVar2 = local_20;
  if (local_20[0] < 0x20) {
    puVar2 = local_20 + 1;
  }
  uVar12 = *puVar2;
  puVar3 = (undefined4 *)fn_0015ece0(uVar12 << 2);
  *(int *)(iVar1 + 8) = (int)puVar3;
  puVar10 = *(undefined4 **)(param_2 + 0x5ec);
  for (puVar7 = *(undefined4 **)(param_2 + 0x5e8); puVar7 != puVar10; puVar7 = puVar7 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar7;
    }
    puVar3 = puVar3 + 1;
  }
  iVar4 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) =
       (*(int *)(param_2 + 0x5ec) - *(int *)(param_2 + 0x5e8) & 0xfffffffcU) + iVar4;
  *(uint *)(iVar1 + 0x10) = iVar4 + uVar12 * 4;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  local_20[0] = *(int *)(param_2 + 0x5f8) - *(int *)(param_2 + 0x5f4);
  local_20[1] = 0x20;
  puVar2 = local_20;
  if (local_20[0] < 0x20) {
    puVar2 = local_20 + 1;
  }
  uVar12 = *puVar2;
  puVar5 = (undefined1 *)fn_0015ece0(uVar12);
  *(int *)(iVar1 + 0x14) = (int)puVar5;
  puVar11 = *(undefined1 **)(param_2 + 0x5f8);
  for (puVar8 = *(undefined1 **)(param_2 + 0x5f4); puVar8 != puVar11; puVar8 = puVar8 + 1) {
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = *puVar8;
    }
    puVar5 = puVar5 + 1;
  }
  iVar4 = *(int *)(param_2 + 0x5f8);
  iVar9 = *(int *)(param_2 + 0x5f4);
  iVar6 = *(int *)(iVar1 + 0x14);
  *(uint *)(iVar1 + 0x1c) = iVar6 + uVar12;
  *(int *)(iVar1 + 0x18) = (iVar4 - iVar9) + iVar6;
  iVar1 = fn_004b9b4c(iVar1 + 0x20,param_2 + 0x600);
  iVar1 = fn_004b9b4c(iVar1 + 8,param_2 + 0x608);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x614);
  *(undefined ***)(iVar1 + -0x60) = &PTR_FUN_00853b40;
  return iVar1 + -0x608;
}



undefined4 fn_005bc9e4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 *local_70;
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint local_2c [2];
  
  (**(code **)(*param_1 + 0x144))(param_1);
  fn_00397774(&local_8c);
  local_8c = DAT_008990ec;
  local_88 = DAT_008990f0;
  uStack_84 = 8;
  local_78 = (**(code **)(*param_1 + 0x140))(param_1);
  local_80 = 0;
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_005bccdc);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_70 + -3;
    iVar8 = *piVar3;
    if (iVar8 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_005bcc58;
    }
    local_70[-1] = 0;
    puVar1 = local_70;
  }
  else {
    if ((1 < local_70[-3] + 1) || ((uint)local_70[-2] < uVar2)) {
LAB_005bcaac:
      uVar5 = local_70[-1];
      local_30 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_30 < uVar5 + 0x80) {
        local_30 = uVar5 + 0x80;
      }
      local_2c[0] = uVar2;
      puVar6 = &local_30;
      if (local_30 < uVar2) {
        puVar6 = local_2c;
      }
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar5);
      }
      if (uVar5 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar7 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar5;
        puVar9[2] = uVar2;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar3 = local_70 + -3;
        iVar8 = *piVar3;
        if ((iVar8 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar9 + 3;
      goto LAB_005bcc58;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_70;
      if (local_70 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_005bcaac;
    }
    fn_001006ac(local_70,puVar1,uVar2);
    local_70[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_70 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005bcc58:
  local_58 = param_1[0x3e];
  uVar4 = fn_00397618(param_1,&local_8c);
  fn_00689efc(param_1,0xe7,0);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_64);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  return uVar4;
}



void fn_005bc990(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005bc9d8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005bc9d8:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  return;
}



void fn_005bc954(int param_1)

{
  int in_stack_00000000;
  
  if (in_stack_00000000 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  }
  fn_0068974c();
  return;
}



void fn_005bc928(int *param_1)

{
  (**(code **)(*param_1 + 0x108))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005bc950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



void fn_005bc8d8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1[0x44] + 0x14))();
  if ((iVar1 != 0) || (iVar1 = fn_006e8ff4(param_1), iVar1 != 0)) {
    fn_0023d364(param_1[0x44]);
    fn_0038e520(param_1[0x3d]);
  }
  (**(code **)(*param_1 + 0x108))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005bc950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



void fn_005bc898(undefined4 *param_1)

{
  *param_1 = &DAT_00849518;
  if ((int *)param_1[0x44] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x44] + 4))();
  }
  fn_005bd474(param_1);
  fn_002feef8();
  return;
}


