#include "004816cc_00481d98.h"



undefined4 fn_00481d98(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  int local_28;
  
  uVar3 = 0;
  if (param_1 != 0) {
    local_48 = 0;
    local_44 = 0;
    local_28 = param_1;
    iVar2 = fn_0052cf1c(&local_48);
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    else {
      fn_00114248(&local_40);
      iVar2 = (int)local_44 >> 0x1f;
      lVar1 = (ulonglong)local_44 * 0xd7b634db +
              CONCAT44(iVar2 * -0x2849cb25,(int)((ulonglong)local_48 * 0xd7b634db >> 0x20));
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)((ulonglong)local_44 * 0x431bde82);
      uVar4 = (int)((ulonglong)local_48 * 0x431bde82 >> 0x20) +
              (uint)CARRY4((uint)lVar1,(uint)((ulonglong)local_48 * 0x431bde82));
      iVar6 = iVar2 * 0x431bde82 + (int)((ulonglong)local_44 * 0x431bde82 >> 0x20) +
              ((int)uVar4 >> 0x1f) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7) +
              (uint)CARRY4(uVar4 + uVar7,uVar5);
      uVar4 = uVar4 + uVar7 + uVar5 >> 0x12 | iVar6 * 0x4000;
      uVar5 = -iVar2 + uVar4;
      local_38 = uVar5 + local_40;
      iStack_34 = local_3c + (iVar6 >> 0x12) + (uint)CARRY4(-iVar2,uVar4) +
                  (uint)CARRY4(uVar5,local_40);
      uVar3 = fn_004b9a2c(auStack_30,&local_38);
      fn_0014f510(local_28,uVar3);
      uVar3 = 1;
    }
  }
  return uVar3;
}



void fn_00481c70(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00854544;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = uVar2;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  iVar1 = fn_004b637c(param_1 + 6,param_2 + 0x18);
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(param_2 + 0x20);
  iVar1 = fn_004b8ae8(iVar1 + 0xc,param_2 + 0x24);
  iVar1 = fn_0048b288(iVar1 + 0x20,param_2 + 0x44);
  iVar1 = fn_0048b288(iVar1 + 0x14,param_2 + 0x58);
  iVar1 = fn_004b9b4c(iVar1 + 0x18,param_2 + 0x70);
  iVar1 = fn_004b9b4c(iVar1 + 8,param_2 + 0x78);
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)(iVar1 + 10) = *(undefined1 *)(param_2 + 0x82);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x8c);
  iVar1 = fn_004b9b4c(iVar1 + 0x18,param_2 + 0x90);
  iVar1 = fn_004b9b4c(iVar1 + 8,param_2 + 0x98);
  iVar1 = fn_004b9014(iVar1 + 8,param_2 + 0xa0);
  iVar1 = fn_004b8eac(iVar1 + 0xc,param_2 + 0xac);
  *(undefined **)(iVar1 + -0xac) = &DAT_00853870;
  return;
}



int fn_00481940(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                undefined1 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined *local_30;
  undefined4 local_2c [2];
  
  *param_1 = &DAT_00853838;
  local_30 = &DAT_00855a94;
  fn_0015e6f0(local_2c,L"ConnectionManager");
  piVar8 = (int *)0x0;
  param_1[3] = 0;
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = &DAT_0085355c;
  param_1[5] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 6,local_2c[0]);
  *(undefined2 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[2] = &DAT_00853064;
  param_1[9] = 0;
  fn_00170f54(&local_30);
  param_1[10] = &DAT_008528bc;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 2;
  param_1[0x13] = 0;
  param_1[0x15] = param_2;
  iVar2 = fn_0045a21c(param_1 + 0x16);
  *(undefined1 *)(iVar2 + 0x1c) = param_4;
  *(undefined1 *)(iVar2 + 0x1d) = param_5;
  *(undefined1 *)(iVar2 + 0x1e) = param_3;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -8) = 0;
  if (DAT_008b637e == '\0') {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar3 = *puVar4;
  }
  *(undefined4 *)(iVar2 + -0x54) = uVar3;
  fn_00479edc(iVar2 + -0x50);
  iVar5 = fn_004b7748();
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(iVar5 + 0x90);
  }
  iVar5 = (**(code **)(*piVar6 + 0x28))();
  fn_0045e3dc(*(int *)(iVar5 + 0xc) + 0x78);
  iVar5 = fn_004b7748();
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(iVar5 + 0x90);
  }
  iVar5 = (**(code **)(*piVar6 + 0x28))();
  *(undefined1 *)(iVar5 + 4) = 0;
  if (*(char *)(iVar5 + 5) != '\0') {
    iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 0xa8);
    if (iVar7 != 0) {
      iVar7 = fn_0049599c(iVar7 + 0x94,*(undefined1 *)(*(int *)(iVar5 + 0xc) + 4),1);
      *(bool *)(iVar5 + 5) = iVar7 == 0;
    }
  }
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    iVar5 = fn_004b7748();
    if (iVar5 != 0) {
      piVar8 = *(int **)(iVar5 + 0x90);
    }
    iVar5 = (**(code **)(*piVar8 + 0x28))(piVar8);
    *(undefined1 *)(iVar5 + 4) = 0;
    if (*(char *)(iVar5 + 5) != '\0') {
      iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 0xa8);
      if (iVar7 != 0) {
        iVar7 = fn_0049599c(iVar7 + 0x94,*(undefined1 *)(*(int *)(iVar5 + 0xc) + 4),1);
        *(bool *)(iVar5 + 5) = iVar7 == 0;
      }
    }
  }
  else {
    iVar5 = fn_004b7748();
    if (iVar5 != 0) {
      piVar8 = *(int **)(iVar5 + 0x90);
    }
    iVar5 = (**(code **)(*piVar8 + 0x28))(piVar8);
    *(undefined1 *)(iVar5 + 4) = 1;
    iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 0xa8);
    if (iVar7 != 0) {
      uVar1 = fn_004955f0(iVar7 + 0x94,*(int *)(iVar5 + 0xc),1,0);
      *(undefined1 *)(iVar5 + 5) = uVar1;
    }
  }
  return iVar2 + -0x58;
}



void fn_00481930(int param_1)

{
  fn_0047a2ec(*(int *)(param_1 + 0x18) + 8);
  return;
}



undefined4
fn_004817e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  fn_004b4c44(&local_58);
  if (local_54 == (int *)0x0) {
    if (local_50 == local_4c) {
      if (local_58 == (int *)0x0) {
        uVar5 = 0x20;
      }
      else {
        uVar1 = local_58[1];
        uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar5 < uVar1 + 0x20) {
          uVar5 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar5 * 0x70);
      piVar2[2] = iVar3;
      *piVar2 = (int)local_58;
      piVar2[1] = uVar5;
      local_50 = (int *)piVar2[2];
      local_4c = local_50 + uVar5 * 0x1c;
      local_58 = piVar2;
    }
    piVar2 = local_50;
    local_50 = local_50 + 0x1c;
  }
  else {
    piVar2 = local_54;
    local_54 = (int *)*local_54;
  }
  if (piVar2 + 2 != (int *)0x0) {
    fn_0013cd7c(piVar2 + 2,param_3);
  }
  *piVar2 = local_48;
  piVar2[1] = *(int *)(local_48 + 4);
  **(undefined4 **)(local_48 + 4) = piVar2;
  *(int **)(local_48 + 4) = piVar2;
  local_44 = local_44 + 1;
  uVar4 = fn_004814e8(param_1,local_30,0,0,&local_58,param_4,(int)param_5,0,
                       (int)((ulonglong)param_5 >> 0x20));
  fn_00786480(&local_58);
  return uVar4;
}



void fn_004817d4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = *param_3;
  return;
}



undefined4
fn_00481758(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_004b54dc(auStack_30);
    iVar1 = (**(code **)(param_1 + 0x48))(param_1 + 0x4c,param_4,auStack_30,param_5);
    if (iVar1 == 0) {
      fn_0014f480(auStack_30);
      return 0;
    }
    fn_004b5540(param_4,auStack_30);
    fn_0014f480(auStack_30);
  }
  return 1;
}



undefined4
fn_004816cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [12];
  
  if (DAT_008b637e != '\0') {
    fn_00477090(param_1[1]);
  }
  uVar2 = 0;
  if ((char)param_1[0x14] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4,param_5);
    uVar2 = 0;
    if (iVar1 != 0) {
      (**(code **)(*param_5 + 0x5c))(auStack_24,param_5,param_1[0x15]);
      uVar2 = 1;
    }
  }
  return uVar2;
}


