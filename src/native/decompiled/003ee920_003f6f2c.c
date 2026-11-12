#include "003ee920_003f6f2c.h"



void fn_003f6f2c(undefined4 param_1)

{
  int iVar1;
  
  fn_0043c608();
  fn_00689efc(param_1,0x39,0);
  iVar1 = fn_001f7e04(param_1,0x80);
  if (iVar1 == 0) {
    fn_00689878(param_1,0x80);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_003f6650(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  uint local_30;
  uint auStack_2c [2];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892b2c) goto LAB_003f6698;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f6698:
  param_1[0x2d] = (int)puVar1;
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_003f66d4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f66d4:
  fn_002c330c(&local_64);
  local_64 = DAT_00892b00;
  local_60 = DAT_00892b04;
  fn_0037c0b8(puVar1[3]);
  iVar3 = fn_0037bfe4();
  local_5c = iVar3;
  if (9 < iVar3) {
    local_5c = 10;
  }
  if (*(char *)(puVar1 + 2) == '\0') {
    local_54 = 0;
    local_58 = local_54;
  }
  else {
    local_58 = puVar1[4];
    local_54 = puVar1[5];
  }
  local_50 = iVar3;
  fn_0037c060(puVar1[3]);
  puVar1 = (undefined4 *)fn_0022f750();
  uVar4 = fn_00100b58();
  puVar2 = &DAT_008f9ce8;
  if (uVar4 == 0) {
    piVar5 = local_48 + -3;
    iVar8 = *piVar5;
    if (iVar8 == 0) {
      local_48[-1] = 0;
      *(undefined2 *)local_48 = 0;
    }
    else {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
    }
    goto LAB_003f6970;
  }
  if ((local_48[-3] + 1 < 2) && (uVar4 <= (uint)local_48[-2])) {
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_003f67b4;
    }
    fn_001006ac(local_48,puVar1,uVar4);
    local_48[-1] = uVar4;
    *(undefined2 *)((int)local_48 + uVar4 * 2) = 0;
  }
  else {
LAB_003f67b4:
    uVar6 = local_48[-1];
    local_30 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_30 < uVar6 + 0x80) {
      local_30 = uVar6 + 0x80;
    }
    puVar9 = auStack_2c;
    if (uVar4 <= local_30) {
      puVar9 = &local_30;
    }
    auStack_2c[0] = uVar4;
    uVar6 = *puVar9;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar6);
    }
    if (uVar6 != 0) {
      puVar2 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar7 = (undefined2 *)((int)puVar2 + uVar4 * 2 + 0xc);
      *puVar2 = 0;
      puVar2[1] = uVar6;
      puVar2[2] = uVar4;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    fn_00301a9c(puVar2 + 3,puVar1,uVar4 << 1);
    if (local_48 != &DAT_008f9cf4) {
      piVar5 = local_48 + -3;
      iVar8 = *piVar5;
      if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
    }
    local_48 = puVar2 + 3;
  }
LAB_003f6970:
  local_38 = 10 < iVar3;
  local_37 = 0;
  fn_002c29a0(param_1,&local_64);
  (**(code **)(*param_1 + 0x124))(param_1);
  param_1[0x2c] = 0;
  if (local_3c != &DAT_008f9cf4) {
    piVar5 = local_3c + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar5 = local_40 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar5 = local_44 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar5 = local_48 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}



void fn_003f6564(int param_1)

{
  undefined4 uVar1;
  
  fn_0022e4c4(param_1 + 0xb4,(&DAT_007c4d9c)[*(int *)(param_1 + 0xc0) * 2]);
  uVar1 = fn_00231cb8((&DAT_007c4d9d)[*(int *)(param_1 + 0xc0) * 2]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  fn_003f59b4(param_1,3);
  fn_003f5990(param_1);
  return;
}



void fn_003f5f58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00154ac8(0x19);
  if (iVar1 == 0) {
    puVar3 = &DAT_007c4d8e;
    uVar4 = 3;
  }
  else {
    puVar3 = &DAT_007c4d94;
    uVar4 = 4;
  }
  fn_0022e488(param_1 + 0xb4,puVar3[*(int *)(param_1 + 0xc0) * 2]);
  uVar2 = fn_00231cb8(puVar3[*(int *)(param_1 + 0xc0) * 2 + 1]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
  fn_003f59b4(param_1,uVar4);
  fn_003f5990(param_1);
  return;
}



void fn_003f5178(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00318bc4(param_1,0);
  *puVar1 = &DAT_00835088;
  return;
}



void fn_003f4f48(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00318bc4(param_1,1);
  *puVar1 = &DAT_0083504c;
  return;
}



void fn_003f3398(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,2);
  *puVar1 = &DAT_00834e7c;
  return;
}



void fn_003f2ae4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,3);
  *puVar1 = &DAT_00834e20;
  return;
}



void fn_003f1550(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0xd8) == '\0') && (iVar1 = fn_006ba220(param_1), iVar1 == 0)) {
    uVar2 = fn_0022f750(*(undefined4 *)(&DAT_007bfd68 + param_2 * 8));
    uVar3 = fn_0022eefc((int)*(short *)(&DAT_007bfd6c + param_2 * 8),0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



void fn_003efad8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x76);
  uVar1 = (uint)*(byte *)(param_1 + 0x74);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x74);
  bVar5 = uVar1 != uVar4;
  if (bVar5) {
    uVar1 = 0;
  }
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x76);
  if (bVar5) {
    *(uint *)(param_1 + 0x7c) = uVar1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x7c) = iVar2;
    if (iVar2 != 0) goto LAB_003efb1c;
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x10))(*(int **)(param_1 + 0x80),uVar4 == 1);
  (**(code **)(**(int **)(param_1 + 0x84) + 0x10))(*(int **)(param_1 + 0x84),uVar4 == 2);
  if (uVar4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  fn_001c20c8(DAT_008977e4,uVar3);
  if (uVar4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  fn_001c2b7c(uVar3);
  *(undefined1 *)(param_1 + 0x88) = 1;
LAB_003efb1c:
  fn_003ef9fc(param_1);
  fn_0068a5a8(param_1);
  return;
}



undefined4 fn_003ee920(int param_1)

{
  undefined4 uVar1;
  
  fn_0043cd80();
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(DAT_00898840 + 0x4d);
  uVar1 = fn_002525a0(9);
  fn_00748808(param_1,uVar1,0,1,1,0);
  fn_0040f600(*(undefined4 *)(*(int *)(param_1 + 0x118) + 0x3c),0,2);
  return 1;
}


