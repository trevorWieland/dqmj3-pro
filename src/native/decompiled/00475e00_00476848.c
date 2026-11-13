#include "00475e00_00476848.h"



void fn_00476848(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  uVar1 = param_1[1];
  param_1[1] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar1 = param_1[2];
  param_1[2] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar1 = param_1[3];
  param_1[3] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  return;
}



void fn_00476814(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  uVar1 = param_1[1];
  param_1[1] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar1 = param_1[2];
  param_1[2] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar1 = param_1[3];
  param_1[3] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  return;
}



void fn_00476010(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined *local_20;
  code *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[0x45]);
  if (iVar1 == 0) {
    fn_004b604c(param_1 + 0x22);
    if ((char)param_1[0x5e] == '\x01') {
      fn_00456510(param_1 + 0x5a,4);
    }
    fn_004b2f04(param_1);
    return;
  }
  fn_004b604c(param_1 + 0x22);
  if ((char)param_1[0x5e] == '\x03') {
    local_24 = param_1[0x68];
    local_20 = (undefined *)param_1[0x69];
    local_1c = (code *)param_1[0x6a];
    fn_00456044(iVar1,&local_24);
    fn_004b2f04(param_1);
    return;
  }
  if ((char)param_1[0x5e] == '\x01') {
    fn_00456510(param_1 + 0x5a,4);
  }
  (**(code **)(*param_1 + 0x3c))(&local_30,param_1);
  iVar2 = fn_006d3b8c(&local_30);
  if (iVar2 != 0) {
    local_18 = 0x10001;
    uVar3 = fn_004b8d4c(&local_24,&local_18);
    fn_00455e8c(iVar1,2,uVar3,1);
    fn_004b2f04(param_1);
    return;
  }
  iVar2 = param_1[0x58];
  param_1[0x58] = iVar2 + 1U;
  if (iVar2 + 1U < DAT_008b6890) {
    local_1c = fn_004764b0;
    local_18 = 0;
    local_14 = &DAT_004761a8;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  local_24 = local_30;
  local_20 = puStack_2c;
  local_1c = (code *)uStack_28;
  fn_00456044(iVar1,&local_24);
  fn_004b2f04(param_1);
  return;
}



void fn_004764b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  iVar1 = fn_004b7748();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_004b7748();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x90);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      iVar1 = fn_001249d0();
      iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x114));
      if (iVar1 == 0) {
        local_24 = fn_00476010;
        uStack_20 = 0;
LAB_00476588:
        local_1c = &DAT_00476718;
        local_28 = &DAT_00853500;
        fn_00479c98(param_1,&local_28);
        return;
      }
      iVar1 = 0;
      do {
        puVar3 = (undefined4 *)fn_0047687c(&local_28);
        puVar3[4] = 0;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        iVar2 = param_1 + iVar1 * 0x14;
        *(undefined4 *)(iVar2 + 0x118) = *puVar3;
        *(undefined4 *)(iVar2 + 0x11c) = uVar5;
        *(undefined4 *)(iVar2 + 0x120) = uVar6;
        *(undefined4 *)(iVar2 + 0x124) = uVar7;
        *(undefined4 *)(iVar2 + 0x128) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
      iVar2 = fn_004b7748(&local_28);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x90);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar1 = fn_004b7748();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x90);
        }
        if (*(char *)(iVar1 + 0xfc) != '\0') {
          local_24 = (code *)0x34;
          uStack_20 = 1;
          goto LAB_00476588;
        }
      }
      fn_00456400(param_1 + 0x168);
      iVar1 = fn_00455e10(param_1 + 0x168);
      if (iVar1 == 0) {
        local_24 = fn_00476010;
        uStack_20 = 0;
        local_28 = &DAT_00853500;
        local_1c = &DAT_00476718;
        fn_00479c98(param_1,&local_28);
        return;
      }
      iVar1 = fn_0015ecdc(0xb8);
      uVar5 = 0;
      if (iVar1 != 0) {
        local_28 = (undefined *)0x0;
        uVar5 = fn_0046edfc(iVar1,DAT_008b6448,DAT_008b644c,fn_004692d8);
      }
      fn_0046e85c(uVar5,*(undefined4 *)(param_1 + 0x1ac));
      iVar1 = fn_001249d0();
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
      }
      fn_004bdba4(uVar4,uVar5,1);
      iVar1 = fn_001249d0();
      fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x114),
                   *(undefined4 *)(param_1 + 0x1ac));
      fn_004b2f0c(param_1);
      puVar3 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &DAT_00853500;
        puVar3[1] = fn_004763d0;
        puVar3[2] = 0;
        puVar3[3] = &DAT_00476718;
      }
      fn_00479b1c(param_1,param_1 + 0x168,puVar3);
      return;
    }
  }
  local_24 = fn_00476010;
  uStack_20 = 0;
  local_1c = &DAT_00476718;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_004763d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puStack_18;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x114));
  if (iVar2 == 0) {
LAB_00476448:
    pcStack_14 = fn_00476010;
    uStack_10 = 0;
    local_c = &DAT_004764a8;
    puStack_18 = &DAT_00853500;
    fn_00479c98(param_1,&puStack_18);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x178);
  if (cVar1 == '\x01') {
    fn_004b2e68(param_1,10);
    return;
  }
  if (cVar1 == '\x02') {
    pcStack_14 = (code *)0x34;
    uStack_10 = 1;
  }
  else {
    if (cVar1 == '\x03') goto LAB_00476448;
    pcStack_14 = fn_00476010;
    uStack_10 = 0;
  }
  local_c = &DAT_004764a8;
  puStack_18 = &DAT_00853500;
  fn_00479c98(param_1,&puStack_18);
  return;
}



void fn_00475e00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_3c = -0x7ffefffc;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_004b2e84(param_1,uVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_1 + 0x110)) {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x10c);
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  fn_0013d438(param_1 + 0x11c,&DAT_007d8c58);
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  fn_00456400(param_1 + 0xa0);
  fn_004b41a8(&local_28,*(undefined4 *)(param_1 + 0x13c));
  *(undefined4 *)(param_1 + 0xf8) = local_28;
  *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  fn_004753cc(param_1);
  if (*(int **)(param_1 + 0x154) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x154) + 4))();
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  iVar1 = fn_0015ecdc(0x4c);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x8c);
    local_3c = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x94);
    local_40 = 0x4000;
    uStack_34 = 0;
    local_48 = param_1 + 0x170;
    local_44 = *(undefined4 *)(param_1 + 0x124);
    uVar2 = fn_004aaa4c(iVar1,*(undefined4 *)(param_1 + 0x6c),param_1 + 0x158,param_1 + 0x164);
  }
  local_48 = (uint)*(byte *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  local_44 = param_1 + 0x68;
  local_40 = 0x4000;
  fn_00454dfc(auStack_20,param_1 + 0x100,param_1 + 0xa0,param_1 + 0x70);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_3c = -0x7ffefff3;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_004b2e84(param_1,uVar2);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xe4));
  fn_004b2f0c(param_1);
  puVar3 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = fn_00475044;
    *puVar3 = &DAT_00853500;
    puVar3[2] = 0;
    puVar3[3] = &DAT_00476004;
  }
  fn_00479b1c(param_1,param_1 + 0xa0,puVar3);
  return;
}


