#include "00493e68_004948e8.h"



void fn_004948e8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085444c;
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar1 = fn_0045c8f4();
    fn_004aae70(*(undefined4 *)(iVar1 + 0x24),param_1[0x1c]);
    fn_004a1464(param_1[0x1c],param_1[0x1b]);
    if ((int *)param_1[0x1b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1b] + 4))();
    }
    param_1[0x1b] = 0;
    if ((int *)param_1[0x1c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1c] + 4))();
    }
    param_1[0x1c] = 0;
  }
  param_1[0x2a] = &DAT_00854554;
  iVar1 = fn_00170f54(param_1 + 0x30);
  iVar1 = fn_004b5780(iVar1 + -0x48);
  fn_00479d5c(iVar1 + -0x78);
  fn_00455018();
  return;
}



void fn_00494738(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [12];
  undefined4 local_38 [6];
  
  iVar1 = fn_00455e10();
  if (iVar1 != 0) {
    iVar1 = fn_0015ecdc(0xd0);
    uVar6 = 0;
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      puVar2 = (undefined4 *)fn_00479cd8(iVar1,2,&local_58);
      *puVar2 = &DAT_0085444c;
      puVar2[0x1a] = 0;
      iVar1 = fn_004b5710(puVar2 + 0x1e);
      *(undefined1 *)(iVar1 + 0x28) = 0;
      *(undefined4 **)(iVar1 + 0x30) = &DAT_00854554;
      *(undefined1 *)(iVar1 + 0x34) = 0;
      iVar1 = fn_0013d40c(iVar1 + 0x48);
      *(undefined4 *)(iVar1 + -0x10) = 0;
      *(undefined **)(iVar1 + -0x18) = &DAT_00853900;
      piVar5 = (int *)(iVar1 + -0xc0);
      *(undefined4 *)(iVar1 + -0xc) = 0;
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    local_50 = (undefined4)param_5;
    local_4c = (undefined4)((ulonglong)param_5 >> 0x20);
    local_58 = param_3;
    local_54 = param_4;
    uStack_48 = param_6;
    (**(code **)(*piVar5 + 0x34))(auStack_44,piVar5,*(undefined4 *)(param_1 + 0x44),param_2);
    iVar1 = fn_006d3b8c(auStack_44);
    if (iVar1 != 0) {
      iVar1 = fn_001249d0();
      if (iVar1 != 0) {
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
      }
      fn_004bdba4(uVar6,piVar5,0);
      local_38[0] = 0x10001;
      fn_004b8d4c(auStack_44,local_38);
      fn_006d3b8c();
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
  }
  local_4c = 0x8001000d;
  fn_004b8d4c(&local_58,&local_4c);
  fn_006d3b8c();
  return;
}



void fn_0049462c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_00494598(param_1,uVar2);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x6c) + 8) != '\0') {
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_00494598(param_1,uVar2);
    return;
  }
  iVar1 = fn_004b5654(param_1 + 0x78);
  if (*(int *)(param_1 + 0xcc) < iVar1) {
    local_c = 0x8001000b;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_00494598(param_1,uVar2);
    return;
  }
  fn_004b2e68(param_1,0x10);
  return;
}



void fn_00494598(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        fn_004966a4(*(int *)(param_1 + 0xa4),*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x2c));
      }
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_00493ee8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38 = 0x80010004;
    uVar2 = fn_004b8d4c(&local_30,&local_38);
    fn_00493e68(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    local_30 = *(undefined **)(param_1 + 0xb8);
    pcStack_2c = *(code **)(param_1 + 0xbc);
    uStack_28 = *(undefined4 *)(param_1 + 0xc0);
    fn_00493e68(param_1,&local_30);
    return;
  }
  if (*(int *)(param_1 + 0xe8) - 1U < 299) {
    local_38 = 0x10001;
    uVar2 = fn_004b8d4c(&local_30,&local_38);
    fn_00493e68(param_1,uVar2);
    return;
  }
  local_34[0] = 0;
  puVar3 = *(undefined1 **)(param_1 + 0xf0);
  if (puVar3 == *(undefined1 **)(param_1 + 0xf4)) {
    fn_0079b730(param_1 + 0xec,puVar3,local_34);
  }
  else {
    *(undefined1 **)(param_1 + 0xf0) = puVar3 + 1;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
    }
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0x133) {
      iVar1 = fn_004b626c(*(undefined4 *)(param_1 + 0x100),&DAT_004941a0);
      if ((iVar1 == 0) && (*(uint *)(param_1 + 0xe4) < 5)) {
        fn_00170fa4(param_1 + 0x70,param_1 + 0xfc);
        pcStack_2c = fn_004941c4;
        uStack_28 = 0;
        local_24 = &DAT_004941a0;
        local_30 = &DAT_00853500;
        fn_00479c98(param_1,&local_30);
        return;
      }
      local_38 = 0x8005001a;
      uVar2 = fn_004b8d4c(auStack_20,&local_38);
      fn_00493e68(param_1,uVar2);
      return;
    }
    if (iVar1 == 0x194) {
      local_38 = 0x80690004;
      uVar2 = fn_004b8d4c(&local_30,&local_38);
      fn_00493e68(param_1,uVar2);
      return;
    }
    if (iVar1 == 0x199 || iVar1 == 500) {
      if (*(uint *)(param_1 + 0xe4) < 3) {
        pcStack_2c = fn_004941c4;
        uStack_28 = 0;
        local_30 = &DAT_00853500;
        local_24 = &DAT_004941a0;
        fn_00479c98(param_1,&local_30);
        return;
      }
      local_38 = 0x80050019;
      uVar2 = fn_004b8d4c(auStack_20,&local_38);
      fn_00493e68(param_1,uVar2);
      return;
    }
  }
  local_38 = 0x8005001a;
  uVar2 = fn_004b8d4c(&local_30,&local_38);
  fn_00493e68(param_1,uVar2);
  return;
}



void fn_004941c4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  undefined4 local_10 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_10[0] = 0x80010004;
    uVar3 = fn_004b8d4c(&local_28,local_10);
    fn_00493e68(param_1,uVar3);
    return;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != *(int *)(param_1 + 0xf0)) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  fn_0013d438(param_1 + 0xfc,&DAT_007d8c58);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  fn_00456400(param_1 + 0x80);
  uStack_20 = *(undefined4 *)(param_1 + 0x104);
  local_28 = (uint)*(byte *)(param_1 + 0x78);
  iStack_24 = param_1 + 0x68;
  fn_00454dfc(auStack_1c,param_1 + 0xe0,param_1 + 0x80,param_1 + 0x70);
  iVar1 = fn_006d3b8c(auStack_1c);
  if (iVar1 == 0) {
    local_10[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(&local_28,local_10);
    fn_00493e68(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xc4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = fn_00493ee8;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0049433c;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar2);
  return;
}



void fn_00493e68(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x80,4);
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
  fn_004b2f04(param_1);
  return;
}


