#include "00750c24_00751248.h"



undefined4
fn_00751248(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined1 *local_64;
  int iStack_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 auStack_3c [32];
  
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (iVar1 == 0) {
      local_64 = &DAT_80010001;
      uVar2 = fn_004b8d4c(&local_70,&local_64);
      fn_00456044(param_2,uVar2);
      return 0;
    }
    iVar1 = fn_0015ecdc(0x1d0);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_0074fd04();
    }
    local_4c = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack_48 = (undefined4)param_6;
    uStack_44 = (undefined4)((ulonglong)param_6 >> 0x20);
    local_40 = 0;
    local_5c = param_1[0x1b];
    local_54 = param_1[0x1c];
    local_50 = (undefined4)param_5;
    iStack_60 = param_1[0x1a];
    local_68 = (int)(char)param_1[0x19];
    local_64 = (undefined1 *)param_1[0x1d];
    local_6c = param_1[0x18];
    local_70 = param_3;
    local_58 = param_4;
    (**(code **)(*piVar5 + 0x34))(auStack_3c,piVar5,*(undefined4 *)(param_2 + 0x44),param_1 + 4);
    iVar1 = fn_006d3b8c(auStack_3c);
    if (iVar1 == 0) {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      uVar2 = fn_006d3b8c(auStack_3c);
      return uVar2;
    }
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar2,piVar5,0);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_007510a8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined1 *local_64;
  int iStack_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 auStack_3c [32];
  
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (iVar1 == 0) {
      local_64 = &DAT_80010001;
      uVar2 = fn_004b8d4c(&local_70,&local_64);
      fn_00456044(param_2,uVar2);
      return 0;
    }
    iVar1 = fn_0015ecdc(0x198);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_0074ee60();
    }
    local_4c = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack_48 = (undefined4)param_6;
    uStack_44 = (undefined4)((ulonglong)param_6 >> 0x20);
    local_40 = 0;
    local_5c = param_1[0x1b];
    local_54 = param_1[0x1c];
    local_50 = (undefined4)param_5;
    iStack_60 = param_1[0x1a];
    local_68 = (int)(char)param_1[0x19];
    local_64 = (undefined1 *)param_1[0x1d];
    local_6c = param_1[0x18];
    local_70 = param_3;
    local_58 = param_4;
    (**(code **)(*piVar5 + 0x34))(auStack_3c,piVar5,*(undefined4 *)(param_2 + 0x44),param_1 + 4);
    iVar1 = fn_006d3b8c(auStack_3c);
    if (iVar1 == 0) {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      uVar2 = fn_006d3b8c(auStack_3c);
      return uVar2;
    }
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar2,piVar5,0);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00750fa0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x7f];
  *param_1 = &DAT_0085440c;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 4))();
  }
  if (param_1[0x7a] != 0) {
    fn_0014f1bc();
  }
  param_1[0x6a] = &DAT_00854dd0;
  fn_0014f1bc(param_1[0x76]);
  iVar1 = fn_004b8dac(param_1 + 0x73);
  iVar1 = fn_004b8dac(iVar1 + -0xc);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_004acbb4(iVar1 + -0xb0);
  iVar1 = fn_0048cc74(iVar1 + -0x78);
  fn_00479d5c(iVar1 + -0x90);
  fn_00455018();
  return;
}



void fn_00750c24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_0075075c(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_18 = *(undefined4 *)(param_1 + 200);
    uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    uStack_10 = *(undefined4 *)(param_1 + 0xd0);
    fn_004b8d90(param_1 + 0x1f0,&local_18);
  }
  if ((*(uint *)(param_1 + 0x168) & 0x40) != 0) {
    fn_0075075c(param_1,param_1 + 0x1f0);
    return;
  }
  fn_00456400(param_1 + 0x90);
  local_30 = &DAT_00854df0;
  local_2c = 0;
  local_20 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x1b0);
  uStack_24 = *(undefined4 *)(param_1 + 0x1b4);
  local_20 = fn_006d3b8c(param_1 + 0x1f0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,&local_30);
  if (iVar1 != 0) {
    iVar1 = fn_001249d0();
    fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0xd4));
    fn_004b2f0c(param_1);
    puVar3 = (undefined4 *)fn_0015ecdc(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &DAT_00853500;
      puVar3[1] = fn_00750df0;
      puVar3[2] = 0;
      puVar3[3] = &DAT_00750de8;
    }
    fn_00479b1c(param_1,param_1 + 0x90,puVar3);
    return;
  }
  iVar1 = fn_006d3b8c(param_1 + 0x1f0);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    fn_004b8d4c(&local_18,&local_c);
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x1f0);
    uStack_14 = *(undefined4 *)(param_1 + 500);
    uStack_10 = *(undefined4 *)(param_1 + 0x1f8);
  }
  fn_0075075c(param_1,&local_18);
  return;
}



void fn_00750df0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_0075075c(param_1,uVar2);
    return;
  }
  iVar1 = fn_006d3b8c(param_1 + 0x1f0);
  if (iVar1 == 0) {
    fn_0075075c(param_1,param_1 + 0x1f0);
    return;
  }
  if (*(char *)(param_1 + 0xa0) == '\x02') {
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_0075075c(param_1,uVar2);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 200);
  uStack_14 = *(undefined4 *)(param_1 + 0xcc);
  uStack_10 = *(undefined4 *)(param_1 + 0xd0);
  fn_0075075c(param_1,&local_18);
  return;
}


