#include "00471688_00471c38.h"



void fn_00471c38(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 100) = param_3;
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



void fn_00471c14(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x6c) = param_3;
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



void fn_00471bb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = param_2;
  fn_0013d0fc(&local_18);
  *(undefined4 *)(param_1 + 0x10) = local_18;
  *(undefined4 *)(param_1 + 0x14) = uStack_14;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 * fn_00471b2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0013d3e8(auStack_18,L"<unknown>");
  puVar2 = (undefined4 *)fn_0047a4a4(param_1,uVar1);
  fn_00170f54(auStack_18);
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_2;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  *puVar2 = &DAT_008532a0;
  puVar2[0xf] = 0;
  return puVar2;
}



void fn_004718b0(int *param_1,undefined4 param_2,int param_3,int param_4,undefined1 *param_5,
                 undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_7 == (int *)0x0) {
    fn_004951a0();
    uVar3 = fn_006d29ec();
    iVar1 = param_1[0xf];
    iVar6 = param_1[0xe];
    uVar2 = fn_004951a0();
    fn_004952a0(uVar2,iVar6,iVar1,uVar3);
    goto LAB_004719c4;
  }
  if (param_7 == (int *)0xfffffff8) {
code_r0x00471944:
    fn_004951a0();
    iVar1 = fn_006d29ec();
  }
  else {
    fn_006d09b8();
    iVar1 = fn_006d0c7c();
    if (iVar1 == 0) goto code_r0x00471944;
  }
  uVar3 = fn_004951a0();
  fn_004952a0(uVar3,param_7[0x1f],param_7[0x1e],iVar1);
  param_1[0xc] = (int)param_7;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = param_7[0x1f];
  param_1[0xf] = param_7[0x1e];
  if ((param_7[0x1f] - 0x6eU < 10) ||
     (uVar4 = (**(code **)(*param_7 + 0x7c))(), (uVar4 & 0x8000000) == 0)) {
    *(undefined1 *)(param_3 + 0x3b) = 1;
    *(undefined1 *)(param_4 + 0x3b) = 1;
  }
LAB_004719c4:
  if ((param_1[0xb] & 2U) == 0) {
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    piVar5 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar5 + 8))();
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x50))(param_1,param_3,param_4,param_5,param_7);
    }
    else {
      (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x50))(param_1,param_3,param_4,param_5,param_7);
    }
    else {
      (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  if ((char)param_1[0xd] == '\0') {
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  fn_004951a0();
  fn_00495244();
  if ((param_1[0xb] & 8U) != 0) {
    *param_5 = 0;
  }
  return;
}



void fn_0047187c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = fn_006d1a94(*(int *)(param_1 + 0x28) + 0x2c);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  fn_004b8d90(iVar1 + 0x20,&local_18);
  return;
}



void fn_00471688(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  bool bVar7;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = fn_0015ecdc(0x2c0);
  if (iVar1 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    local_44 = param_5;
    local_3c = param_7;
    local_40 = param_6;
    piVar6 = (int *)fn_0049f8dc(iVar1,param_2,param_2 + 8,param_3,param_4);
  }
  piVar3 = piVar6 + 1;
  do {
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = *piVar3 + 1;
  iVar1 = fn_001249d0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  fn_004bdba4(uVar2,piVar6,0);
  if (param_5 == 0) {
    local_34 = 0x80050001;
    fn_004b8d4c(&local_40,&local_34);
    fn_004b2f20(piVar6,param_7);
    if (*(char *)((int)piVar6 + 0x22) == '\x05') {
      local_30 = piVar6[0x8a];
      iStack_2c = piVar6[0x8b];
      iStack_28 = piVar6[0x8c];
      fn_004b8d90(&local_40,&local_30);
    }
    else {
      local_44 = -0x7ffafff8;
      uVar2 = fn_004b8d4c(&local_30,&local_44);
      fn_004b8d90(&local_40,uVar2);
    }
    puVar5 = (uint *)(piVar6 + 1);
    do {
      uVar4 = *puVar5 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar7);
    *puVar5 = uVar4;
    bVar7 = uVar4 == 0;
    if (bVar7) {
      uVar4 = (uint)*(byte *)(piVar6 + 2);
    }
    if (bVar7 && uVar4 == 0) {
      *(undefined1 *)(piVar6 + 2) = 1;
      (**(code **)(*piVar6 + 4))();
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = uStack_38;
    return;
  }
  puVar5 = (uint *)(piVar6 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar7 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar7);
  *puVar5 = uVar4;
  bVar7 = uVar4 == 0;
  if (bVar7) {
    uVar4 = (uint)*(byte *)(piVar6 + 2);
  }
  if (bVar7 && uVar4 == 0) {
    *(undefined1 *)(piVar6 + 2) = 1;
    (**(code **)(*piVar6 + 4))();
  }
  local_40 = 0x10001;
  fn_004b8d4c(param_1,&local_40);
  return;
}


