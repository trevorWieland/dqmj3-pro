#include "004a67b0_004a6f78.h"



void fn_004a6f78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (6 < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008e6990 + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004a6fd4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008e6990 + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



undefined4
fn_004a6e0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_60,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,1);
  fn_0015ef4c(auStack_60,param_4,4);
  fn_0045f6f0(auStack_60,param_5);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e6994 = fn_004a6ffc;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar3;
}



int fn_004a6be4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined *local_a8;
  undefined1 local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 auStack_88 [12];
  int local_7c;
  int local_78;
  int local_70;
  int local_6c [3];
  int local_60;
  undefined1 auStack_48 [12];
  int local_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = (undefined4 *)fn_0015ece0(0xb0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    puVar1[4] = 1;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[3] = &DAT_008558c4;
    puVar1[7] = 0;
    *puVar1 = &DAT_00852a84;
    puVar1[8] = 0;
    puVar1[9] = 6;
    puVar1[10] = 0x40;
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  fn_004b54dc(&local_70);
  local_a0 = &local_70;
  local_a8 = &DAT_00855d10;
  do {
    bVar6 = (bool)hasExclusiveAccess(local_6c);
  } while (!bVar6);
  local_a4 = 0;
  local_98 = 7;
  local_9c = 0;
  local_94 = local_60 << 3;
  local_6c[0] = local_6c[0] + 1;
  fn_0013d0fc(&local_28);
  local_20 = local_28;
  uStack_1c = uStack_24;
  fn_004baf70(&local_a8,&local_20,0x40);
  fn_004b54dc(auStack_48);
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),&local_70,auStack_48);
  fn_0014f24c(auStack_88,local_30 + local_3c,uStack_38);
  piVar3 = *(int **)(param_1 + 4);
  uVar2 = local_78 - local_7c;
  uVar4 = piVar3[9];
  bVar6 = uVar4 <= uVar2;
  if (bVar6) {
    uVar4 = piVar3[10];
  }
  if (bVar6 && uVar2 <= uVar4) {
    fn_0015ed58(piVar3 + 3,auStack_88);
    (**(code **)(*piVar3 + 0x20))(piVar3);
  }
  fn_0014f2b0(auStack_88);
  fn_0014f480(auStack_48);
  local_a8 = &DAT_00855d10;
  puVar5 = (uint *)(local_a0 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar4;
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(local_a0 + 2);
  }
  if (bVar6 && uVar4 == 0) {
    *(undefined1 *)(local_a0 + 2) = 1;
    (**(code **)(*local_a0 + 4))();
  }
  local_a0 = (int *)0x0;
  fn_0014f480(&local_70);
  return param_1;
}



void fn_004a6a7c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30 [6];
  
  iVar1 = fn_00455e10(param_3);
  if (iVar1 == 0) {
    local_48 = 0x8001000d;
    fn_004b8d4c(param_1,&local_48);
    return;
  }
  iVar1 = fn_0015ecdc(0x80);
  uVar6 = 0;
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_00479cd8(iVar1,2,&local_48);
    *puVar2 = &DAT_00854ab0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    iVar1 = fn_0013d40c(puVar2 + 0x1c);
    piVar5 = (int *)(iVar1 + -0x70);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  local_48 = (undefined4)param_5;
  uStack_44 = (undefined4)((ulonglong)param_5 >> 0x20);
  uStack_40 = param_6;
  fn_004a0738(&local_3c,piVar5,*(undefined4 *)(param_3 + 0x44),param_4);
  iVar1 = fn_006d3b8c(&local_3c);
  if (iVar1 != 0) {
    iVar1 = fn_001249d0();
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar6,piVar5,0);
    local_30[0] = 0x10001;
    fn_004b8d4c(param_1,local_30);
    return;
  }
  puVar4 = (uint *)(piVar5 + 1);
  do {
    uVar3 = *puVar4 - 1;
    bVar7 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar7);
  *puVar4 = uVar3;
  bVar7 = uVar3 == 0;
  if (bVar7) {
    uVar3 = (uint)*(byte *)(piVar5 + 2);
  }
  if (bVar7 && uVar3 == 0) {
    *(undefined1 *)(piVar5 + 2) = 1;
    (**(code **)(*piVar5 + 4))();
  }
  *param_1 = local_3c;
  param_1[1] = uStack_38;
  param_1[2] = uStack_34;
  return;
}



void fn_004a6890(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x68) + 0x94);
  if (piVar2 != (int *)0x0) {
    param_3 = (uint)*(byte *)((int)piVar2 + 0x22);
  }
  if (piVar2 == (int *)0x0 || param_3 == 5) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x98);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x22);
    }
    if (iVar3 != 0 && cVar1 != '\x05') {
      fn_004b2e68(param_1,100);
      return;
    }
    local_1c = fn_004a6954;
  }
  else {
    (**(code **)(*piVar2 + 0x24))();
    local_1c = fn_004a6824;
  }
  uStack_18 = 0;
  local_14 = &DAT_004a694c;
  local_20 = &DAT_00853500;
  fn_00479c98(param_1,&local_20);
  return;
}



void fn_004a6824(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *local_18;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x94);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  if (iVar2 != 0 && cVar1 != '\x05') {
    fn_004b2e68(param_1,100);
    return;
  }
  pcStack_14 = fn_004a6954;
  uStack_10 = 0;
  local_c = &DAT_004a6888;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_004a6954(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined4 local_18 [2];
  
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x78) == 0) {
    local_18[0] = 0x10001;
    puVar1 = (undefined4 *)fn_004b8d4c(auStack_24,local_18);
    iVar2 = fn_001249d0();
    iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
    if (iVar2 != 0) {
      local_30 = *puVar1;
      uStack_2c = puVar1[1];
      uStack_28 = puVar1[2];
      fn_00455e8c(iVar2,2,&local_30,1);
    }
    fn_004b2f04(param_1);
    return;
  }
  fn_00473638(*(int *)(param_1 + 0x68),param_1 + 0x70);
  fn_004b2f0c(param_1);
  puVar1 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853500;
    puVar1[1] = fn_004a67b0;
    puVar1[2] = 0;
    puVar1[3] = &DAT_004a6a30;
  }
  fn_00479b1c(param_1,param_1 + 0x70,puVar1);
  return;
}



void fn_004a67b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28 = *(undefined4 *)(param_1 + 0xa8);
  uStack_24 = *(undefined4 *)(param_1 + 0xac);
  uStack_20 = *(undefined4 *)(param_1 + 0xb0);
  fn_006d3b8c(&local_28);
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  local_28 = *(undefined4 *)(param_1 + 0xa8);
  uStack_24 = *(undefined4 *)(param_1 + 0xac);
  uStack_20 = *(undefined4 *)(param_1 + 0xb0);
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar2 != 0) {
    local_1c = local_28;
    uStack_18 = uStack_24;
    uStack_14 = uStack_20;
    fn_00455e8c(iVar2,uVar1,&local_1c,1);
  }
  fn_004b2f04(param_1);
  return;
}


