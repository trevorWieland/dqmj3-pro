#include "00750374_00750b10.h"



void fn_00750600(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 int param_14,int param_15)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_6c [4];
  undefined *local_68;
  code *local_64;
  undefined4 uStack_60;
  undefined *local_5c;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x68) = param_3;
  *(undefined4 *)(param_2 + 0x6c) = param_4;
  puVar4 = (undefined4 *)fn_0015ecdc(4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &DAT_00854c38;
  }
  *(undefined4 **)(param_2 + 0x70) = puVar4;
  *(undefined4 *)(param_2 + 0x88) = param_12;
  fn_004acca0(param_2 + 0x108,param_5);
  *(undefined4 *)(param_2 + 0x7c) = param_6;
  *(undefined1 *)(param_2 + 0x74) = param_7;
  *(undefined4 *)(param_2 + 0x78) = param_8;
  *(undefined4 *)(param_2 + 0x8c) = param_13;
  *(undefined4 *)(param_2 + 0x1a4) = param_11;
  *(undefined4 *)(param_2 + 0x80) = param_9;
  *(undefined4 *)(param_2 + 0x84) = param_10;
  if (param_14 != 0) {
    if (param_15 == 0) {
      *(int *)(param_2 + 0x1ec) = param_14;
    }
    else {
      uVar5 = fn_0015ece0(*(undefined4 *)(param_5 + 8));
      *(undefined4 *)(param_2 + 0x1e8) = uVar5;
      fn_00301a9c(uVar5,param_14,*(undefined4 *)(param_5 + 8));
    }
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x68));
  fn_0048c944(param_2 + 0x90,*(undefined4 *)(iVar1 + 0x74));
  local_64 = fn_00750b10;
  uStack_60 = 0;
  local_5c = &DAT_00750754;
  local_68 = &DAT_00853500;
  fn_00479c98(param_2,&local_68);
  local_6c[0] = 1;
  fn_004b8d18(local_34,local_6c);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00750b10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar3 = fn_004b8d4c(auStack_18,&local_c);
    fn_0075075c(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,param_1 + 0x108,param_1 + 0x1a8);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_18,&local_c);
    fn_0075075c(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = &DAT_00750c18;
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_007507f8;
    puVar2[2] = 0;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  return;
}



void fn_007507f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  wchar16 *pwVar5;
  int *piVar6;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_3c = -0x7ffefffc;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_0075075c(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_48 = *(int *)(param_1 + 200);
    local_44 = *(int *)(param_1 + 0xcc);
    local_40 = *(undefined4 *)(param_1 + 0xd0);
    fn_0075075c(param_1,&local_48);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = fn_0015ecdc(0x4c);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_3c = *(int *)(param_1 + 0x1e8);
    local_34 = *(undefined4 *)(param_1 + 0x88);
    local_40 = *(undefined4 *)(param_1 + 0x78);
    uStack_38 = *(undefined4 *)(param_1 + 0x110);
    if (local_3c == 0) {
      local_3c = *(int *)(param_1 + 0x1ec);
    }
    local_48 = param_1 + 0x1d8;
    local_44 = *(int *)(param_1 + 0x7c);
    uVar2 = fn_004aaa4c(iVar1,*(undefined4 *)(param_1 + 0x68),param_1 + 0x1c0,param_1 + 0x1cc);
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  iVar1 = fn_006d380c(param_1 + 0x1b8,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x1b8,L"https://"), iVar1 == 0)) {
    fn_004b637c(auStack_28,param_1 + 0x1b8);
  }
  else {
    if (*(char *)(param_1 + 0x74) == '\0') {
      pwVar5 = L"http://";
    }
    else {
      pwVar5 = L"https://";
    }
    fn_004be9d4(auStack_28,pwVar5,param_1 + 0x1b8);
  }
  iVar1 = *(int *)(param_1 + 0x84);
  local_48 = iVar1;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar3 = fn_00169f1c(*(undefined4 *)(param_1 + 0x110),*(int *)(param_1 + 0x80));
    piVar6 = &local_44;
    if (iVar3 * 1000 < iVar1) {
      piVar6 = &local_48;
    }
    local_44 = iVar3 * 1000;
    iVar1 = *piVar6;
  }
  fn_004b41a8(&local_30,iVar1);
  *(undefined4 *)(param_1 + 0xe8) = local_30;
  *(undefined4 *)(param_1 + 0xec) = uStack_2c;
  local_48 = *(int *)(param_1 + 0x1fc);
  local_40 = *(undefined4 *)(param_1 + 0x8c);
  local_44 = 2;
  fn_004a2204(auStack_20,*(undefined4 *)(param_1 + 0x70),param_1 + 0x90,auStack_28);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_3c = -0x7ffefff3;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_0075075c(param_1,uVar2);
    fn_00170f54(auStack_28);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar4 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[3] = L"";
    puVar4[2] = 0;
    puVar4[1] = fn_00750c24;
    *puVar4 = &DAT_00853500;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar4);
  fn_00170f54(auStack_28);
  return;
}



void fn_0075075c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x90,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x1a4);
      uVar3 = *(undefined4 *)(param_1 + 0x1b4);
      *puVar4 = *(undefined4 *)(param_1 + 0x1b0);
      puVar4[1] = uVar3;
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_00750374(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_0074feb0(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_18 = *(undefined4 *)(param_1 + 200);
    uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    uStack_10 = *(undefined4 *)(param_1 + 0xd0);
    fn_004b8d90(param_1 + 0x1d0,&local_18);
  }
  if ((*(uint *)(param_1 + 0x168) & 0x40) != 0) {
    fn_0074feb0(param_1,param_1 + 0x1d0);
    return;
  }
  fn_00456400(param_1 + 0x90);
  local_24 = 0;
  local_28 = &DAT_008551f0;
  local_1c = 0;
  local_20 = *(undefined4 *)(param_1 + 0x198);
  local_1c = fn_006d3b8c(param_1 + 0x1d0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x24))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,&local_28);
  if (iVar1 != 0) {
    iVar1 = fn_001249d0();
    fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0xd4));
    fn_004b2f0c(param_1);
    puVar3 = (undefined4 *)fn_0015ecdc(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &DAT_00853500;
      puVar3[1] = fn_00750530;
      puVar3[2] = 0;
      puVar3[3] = &DAT_00750528;
    }
    fn_00479b1c(param_1,param_1 + 0x90,puVar3);
    return;
  }
  iVar1 = fn_006d3b8c(param_1 + 0x1d0);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    fn_004b8d4c(&local_18,&local_c);
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_14 = *(undefined4 *)(param_1 + 0x1d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x1d8);
  }
  fn_0074feb0(param_1,&local_18);
  return;
}



void fn_00750530(int param_1)

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
    fn_0074feb0(param_1,uVar2);
    return;
  }
  iVar1 = fn_006d3b8c(param_1 + 0x1d0);
  if (iVar1 == 0) {
    fn_0074feb0(param_1,param_1 + 0x1d0);
    return;
  }
  if (*(char *)(param_1 + 0xa0) == '\x02') {
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_0074feb0(param_1,uVar2);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 200);
  uStack_14 = *(undefined4 *)(param_1 + 0xcc);
  uStack_10 = *(undefined4 *)(param_1 + 0xd0);
  fn_0074feb0(param_1,&local_18);
  return;
}


