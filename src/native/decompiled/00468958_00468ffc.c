#include "00468958_00468ffc.h"



void fn_00468ffc(undefined2 param_1)

{
  int *piVar1;
  
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar1 != 0) {
      *(undefined2 *)(DAT_008e6c80 + *piVar1 * 2) = param_1;
      return;
    }
  }
  DAT_008e6c84 = param_1;
  return;
}



undefined2 fn_00468fb0(void)

{
  int *piVar1;
  undefined2 *puVar2;
  
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar1 != 0) {
      puVar2 = (undefined2 *)(DAT_008e6c80 + *piVar1 * 2);
      goto LAB_00468fe4;
    }
  }
  puVar2 = &DAT_008e6c84;
LAB_00468fe4:
  return *puVar2;
}



short fn_00468f84(void)

{
  short sVar1;
  
  sVar1 = fn_004ba724(0x3fff);
  return sVar1 + -0x4000;
}



undefined4 fn_00468ed8(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if ((*(char *)(iVar1 + 8) == '\0') || (*(char *)((int)param_1 + 0xfd) != '\0')) {
    return 1;
  }
  if ((param_1[0x4d] != 0) && (iVar1 = fn_00100b58(), iVar1 != 0)) {
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    *(undefined1 *)((int)param_1 + 0x115) = 2;
    *(undefined2 *)((int)param_1 + 0x116) = 0xed30;
    iVar1 = fn_00170c9c(param_1 + 0x44,param_1[0x4d]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = param_1[0x46];
  *(bool *)((int)param_1 + 0xfd) =
       (((uVar2 & 0xff) != 0 || (uVar2 >> 8 & 0xff) != 0) || (uVar2 >> 0x10 & 0xff) != 0) ||
       uVar2 >> 0x18 != 0;
  return 1;
}



void fn_00468e80(int param_1,int param_2)

{
  fn_00170fa4(param_1 + 0xd0,param_2 + 4);
  *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_2 + 0xc);
  fn_00170fa4(param_1 + 0xdc,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 0x20);
  return;
}



undefined4 fn_00468d84(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [4];
  int local_84;
  char local_24;
  undefined1 local_23;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar3 = (int *)**(int **)(param_1 + 0xc4);
  while( true ) {
    if (piVar3 == (int *)*(int *)(param_1 + 0xc4)) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 1;
    }
    fn_0013ce04(auStack_88);
    if (local_24 == '\0') {
      fn_0014ea80(auStack_88);
    }
    uVar4 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    uVar6 = *(undefined4 *)(param_3 + 0x10);
    uVar7 = *(undefined4 *)(param_3 + 0x14);
    uVar8 = *(undefined4 *)(param_3 + 0x18);
    uVar9 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(local_84 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(local_84 + 8) = uVar4;
    *(undefined4 *)(local_84 + 0xc) = uVar5;
    *(undefined4 *)(local_84 + 0x10) = uVar6;
    *(undefined4 *)(local_84 + 0x14) = uVar7;
    *(undefined4 *)(local_84 + 0x18) = uVar8;
    *(undefined4 *)(local_84 + 0x1c) = uVar9;
    local_23 = 0;
    iVar1 = (**(code **)(*(int *)piVar3[2] + 8))((int *)piVar3[2],param_2,auStack_88);
    if (iVar1 != 0) break;
    piVar3 = (int *)*piVar3;
    fn_0013ce98(auStack_88);
  }
  fn_0013ce98(auStack_88);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return 0;
}



undefined4 fn_00468c28(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 in_r3;
  undefined4 local_10;
  
  iVar7 = DAT_008b63d8;
  uVar3 = 0;
  local_10 = in_r3;
  if (DAT_008b637e != '\0') {
    piVar2 = (int *)(DAT_008b63d8 + 0x10);
    (**(code **)(*(int *)(DAT_008b63d8 + 0x10) + 8))();
    uVar3 = fn_0013d1a8();
    iVar8 = *(int *)(iVar7 + 0x48);
    iVar1 = iVar8;
    iVar4 = *(int *)(iVar8 + 4);
    while (iVar4 != 0) {
      if (*(uint *)(iVar4 + 0x10) < uVar3) {
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar1 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
    if ((iVar1 != iVar8) && (*(uint *)(iVar1 + 0x10) <= uVar3)) {
      iVar8 = iVar1;
    }
    if (iVar8 == *(int *)(iVar7 + 0x48)) {
      local_10 = fn_0013d1a8();
      puVar5 = (undefined4 *)fn_00147a40(iVar7 + 0x38,&local_10);
      *puVar5 = *(undefined4 *)(iVar7 + 0xc);
      local_10 = fn_0013d1a8();
      puVar6 = (uint *)fn_00147a40(iVar7 + 0x38,&local_10);
      pcVar9 = *(code **)(*piVar2 + 0xc);
    }
    else {
      puVar6 = (uint *)(iVar8 + 0x14);
      pcVar9 = *(code **)(*piVar2 + 0xc);
    }
    (*pcVar9)(piVar2);
    uVar3 = *puVar6;
  }
  if (uVar3 == 0) {
    puVar5 = &DAT_008e76a0;
  }
  else {
    if ((uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) <= uVar3) {
      fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar7 = -1;
      goto LAB_00468d4c;
    }
    puVar5 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
  }
  iVar7 = puVar5[2];
  if (iVar7 == 0) {
    return 0;
  }
LAB_00468d4c:
  if (*(int *)(iVar7 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar7 + 0xc) + 0x90);
}



void fn_00468b24(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00852ec4;
  if ((*(char *)((int)param_1 + 0xd) != '\0') && (iVar1 = fn_0046b2bc(param_1), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  iVar1 = fn_0046e758(param_1 + 4);
  fn_0046b3fc(iVar1 + -0x10);
  return;
}



int fn_00468ad4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0046b318(param_1,0x70);
  *puVar1 = &DAT_00852ec4;
  iVar2 = fn_0049293c(puVar1 + 4,0);
  *(undefined2 *)(iVar2 + 0x20) = 0x70;
  *(undefined1 *)(iVar2 + -3) = 0;
  return iVar2 + -0x10;
}



void fn_00468aac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  undefined1 uStack00000000;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_4;
  fn_00491bb4(param_1 + 0x10,param_2,&uStack_c,param_4,&param_5,param_6);
  return;
}



bool fn_00468a74(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0046b2bc();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return iVar1 != 0;
}



void fn_00468a40(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0046b240();
  if ((iVar1 != 0) && (iVar1 = fn_0047ef28(param_1,param_1 + 0x10), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



undefined4 fn_004689dc(int param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 uStack00000000;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_3 != 0) {
    fn_0079bdb8(&local_18,param_3,param_3 + param_4);
  }
  uVar1 = fn_00492198(param_1 + 0x10,param_2,&local_18,&param_5);
  fn_0014f1bc(local_18);
  return uVar1;
}



void fn_004689a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                 undefined1 param_9)

{
  undefined1 local_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_20[0] = (undefined1)param_3;
  iStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  fn_00491d34(param_1 + 0x10,param_2,local_20,&uStack_10,param_5,param_6,&param_7,&param_9);
  return;
}



int fn_00468958(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00852e9c;
  if ((int *)param_1[0x8b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x8b] + 4))();
  }
  *param_1 = &DAT_00853b08;
  iVar1 = fn_0014f2b0(param_1 + 2);
  return iVar1 + -8;
}


