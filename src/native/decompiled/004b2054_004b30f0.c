#include "004b2054_004b30f0.h"



undefined4 fn_004b30f0(int param_1,undefined4 param_2)

{
  fn_0079c308(param_1 + 0xc,param_2,0);
  return *(undefined4 *)(param_1 + 0xc);
}



void fn_004b30d8(undefined4 *param_1)

{
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return;
}



void fn_004b3044(undefined4 *param_1,undefined1 param_2,undefined1 *param_3)

{
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0085588c;
  param_1[4] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)((int)param_1 + 0x21) = *param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



void fn_004b2fec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (0 < iVar1) {
    fn_004b301c(param_1,1);
    *(int *)(param_1 + 0x24) = iVar1;
    return;
  }
  *(undefined1 *)(param_1 + 0x22) = 5;
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b3038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
  return;
}



void fn_004b2fe4(undefined4 param_1)

{
  fn_004b301c(param_1,3);
  return;
}



int fn_004b2f20(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [4];
  undefined2 local_44;
  char local_10 [4];
  
  local_10[0] = '\0';
  iVar1 = fn_004bcad0(param_2 != 0,param_2,0,fn_001c08ec,param_1,local_10);
  if (iVar1 == 0) {
    fn_004bac20(auStack_48,10,param_2);
    local_44 = 2;
    do {
      if (*(char *)(param_1 + 0x22) == '\x05') goto LAB_004b2fbc;
      iVar1 = fn_004bab94(auStack_48,
                           L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Job.cpp"
                           ,0xd0);
    } while (iVar1 != 0);
    if (*(char *)(param_1 + 0x22) == '\x05') {
LAB_004b2fbc:
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)local_10[0];
  }
  return iVar1;
}



void fn_004b2f0c(undefined4 param_1)

{
  fn_004b301c(param_1,2);
  return;
}



void fn_004b2e84(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0xa0,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (iVar2 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_004b2e60(undefined4 param_1)

{
  fn_004b301c(param_1,4);
  return;
}



void fn_004b301c(int param_1,int param_2)

{
  *(char *)(param_1 + 0x22) = (char)param_2;
  if ((param_2 == 5) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004b3038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
    return;
  }
  return;
}



void fn_004b29d8(int *param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  undefined4 local_30 [3];
  undefined4 local_24 [2];
  
  fn_0074a528(param_2,&local_48);
  if (((uint)local_48 & 0xffff) != 1) {
    local_30[0] = 0x80010002;
    puVar1 = (undefined4 *)fn_004b8d4c(auStack_3c,local_30);
    iVar2 = fn_006d1a94(param_1[10] + 0x2c);
    local_48 = (undefined4 *)*puVar1;
    local_44 = puVar1[1];
    uStack_40 = puVar1[2];
    fn_004b8d90(iVar2 + 0x20,&local_48);
    return;
  }
  local_48 = &DAT_00854554;
  local_44 = local_44 & 0xffffff00;
  iVar2 = fn_0013d40c(local_30);
  *(undefined **)(iVar2 + -0x18) = &DAT_00853900;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  fn_00496578(param_2,&local_48);
  if (*(char *)(param_2 + 4) == '\0') {
    (**(code **)(*param_1 + 0x5c))(param_1,&local_48);
    local_24[0] = 0x8001;
    fn_0015ef4c(param_3,local_24,4);
  }
  local_48 = &DAT_00854554;
  fn_00170f54(local_30);
  *param_4 = 1;
  return;
}



void fn_004b22e8(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,8);
  fn_0015ef4c(param_1,param_2 + 0x10,4);
  fn_0015ef4c(param_1,param_2 + 0x18,8);
  local_28 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 3;
  fn_0015ef4c(param_1,&local_28,4);
  iVar4 = *(int *)(param_2 + 0x24);
  for (iVar3 = *(int *)(param_2 + 0x20); iVar3 != iVar4; iVar3 = iVar3 + 8) {
    fn_0045f6f0(param_1,iVar3);
  }
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_28 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_004b2054(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_60 [4];
  uint local_5c;
  undefined4 local_58 [2];
  int local_50 [2];
  int local_48;
  int local_44;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c [2];
  
  local_44 = (int)*(char *)(param_1 + 0x3b);
  iVar9 = 0;
  if (local_44 == 0) {
    local_5c = local_5c & 0xffffff00;
    local_60[0] = *(char *)(param_2 + 4);
    puVar3 = &local_5c;
    if (local_60[0] == '\0') {
      puVar3 = (uint *)local_60;
    }
    fn_0015ef4c(param_1,puVar3,1);
    iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_58[0] = 0;
    fn_0015ef4c(param_1,local_58,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,4);
  fn_0045f6f0(param_1,param_2 + 0xc);
  fn_0015ef4c(param_1,param_2 + 0x14,2);
  fn_0046d5f8(param_1,param_2 + 0x18);
  fn_0074cd60(param_1,param_2 + 0x38);
  fn_0074cd60(param_1,param_2 + 0x4c);
  fn_0015ef4c(param_1,param_2 + 0x60,4);
  fn_0015ef4c(param_1,param_2 + 100,2);
  fn_0015ef4c(param_1,param_2 + 0x68,4);
  local_50[0] = *(int *)(param_2 + 0x70) - *(int *)(param_2 + 0x6c) >> 3;
  fn_0015ef4c(param_1,local_50,4);
  iVar6 = *(int *)(param_2 + 0x70);
  for (iVar5 = *(int *)(param_2 + 0x6c); iVar5 != iVar6; iVar5 = iVar5 + 8) {
    fn_0045f6f0(param_1,iVar5);
  }
  local_34 = (*(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78)) / 0x28;
  fn_0015ef4c(param_1,&local_34,4);
  iVar6 = *(int *)(param_2 + 0x7c);
  for (iVar5 = *(int *)(param_2 + 0x78); iVar5 != iVar6; iVar5 = iVar5 + 0x28) {
    cVar1 = *(char *)(param_1 + 0x3b);
    iVar8 = 0;
    if (cVar1 == '\0') {
      local_30[0] = 0;
      piVar4 = &local_48;
      if (*(char *)(iVar5 + 4) != '\0') {
        piVar4 = (int *)local_30;
      }
      uVar2 = (uint)local_48 >> 8;
      local_48 = CONCAT31((int3)uVar2,*(char *)(iVar5 + 4));
      fn_0015ef4c(param_1,piVar4,1);
      iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      local_2c[0] = 0;
      fn_0015ef4c(param_1,local_2c,4);
    }
    fn_0015ef4c(param_1,iVar5 + 5,1);
    fn_004aa248(param_1,iVar5 + 8);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      fn_00454cbc(param_1,iVar8);
      local_48 = (iVar7 - iVar8) + -4;
      fn_0015ef4c(param_1,&local_48,4);
      fn_00454cbc(param_1,iVar7);
    }
  }
  if (local_44 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar9);
    local_5c = (iVar5 - iVar9) - 4;
    fn_0015ef4c(param_1,&local_5c,4);
    fn_00454cbc(param_1,iVar5);
  }
  return;
}


