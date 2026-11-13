#include "0049fe68_004a0658.h"



void fn_004a0658(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_00854a70;
  if ((int *)param_1[0x61] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x61] + 4))();
  }
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 4))();
  }
  if (param_1[0x5c] != 0) {
    fn_0014f1bc();
  }
  param_1[0x4e] = &DAT_008551e0;
  fn_0014f1bc(param_1[0x59]);
  iVar1 = fn_004b8dac(param_1 + 0x56);
  iVar1 = fn_004b8dac(iVar1 + -0xc);
  iVar1 = fn_00170f54(iVar1 + -8);
  *(undefined **)(iVar1 + -0x3c) = &DAT_00855750;
  puVar3 = *(undefined4 **)(iVar1 + -0x18);
  for (puVar2 = *(undefined4 **)(iVar1 + -0x1c); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*(int *)(iVar1 + -0x1c));
  iVar1 = fn_0048cc74(iVar1 + -0xb4);
  fn_00479d5c(iVar1 + -0x90);
  return;
}



void fn_004a04e4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,auStack_24);
  *puVar1 = &PTR_FUN_00854a70;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 1;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  iVar2 = fn_0048cc04(puVar1 + 0x24,0);
  *(undefined **)(iVar2 + 0x78) = &DAT_00855750;
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  puVar3 = (undefined4 *)fn_0075546c(iVar2 + 0x98,0);
  puVar3[-8] = &DAT_00855150;
  puVar3[-6] = 0;
  puVar3[-5] = 0;
  puVar3[-4] = 0;
  puVar3[-2] = 0;
  puVar3[-1] = 0;
  puVar4 = (undefined4 *)puVar3[1];
  puVar5 = (undefined4 *)*puVar3;
  puVar1 = puVar5;
  if (puVar5 != puVar4) {
    do {
      (**(code **)*puVar1)(puVar1);
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar4);
    puVar3[1] = puVar3[1] - ((int)puVar4 - (int)puVar5 & 0xfffffff8U);
  }
  puVar3[4] = &DAT_008551e0;
  *(undefined1 *)(puVar3 + 5) = 0;
  iVar2 = fn_0013d40c(puVar3 + 7);
  iVar2 = fn_0075499c(iVar2 + 8,0);
  iVar2 = fn_0075499c(iVar2 + 0xc,0);
  iVar2 = fn_001676b0(iVar2 + 0xc,0);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined **)(iVar2 + -0x2c) = &DAT_0085438c;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  local_28 = 0x10001;
  iVar2 = fn_004b8d4c(iVar2 + 0x14,&local_28);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  return;
}



void fn_004a0184(int param_1)

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
    fn_0049fde8(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x2c))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,param_1 + 0x108,param_1 + 0x138);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_18,&local_c);
    fn_0049fde8(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = &DAT_004a028c;
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0049fe68;
    puVar2[2] = 0;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  return;
}



void fn_0049fe68(int param_1)

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
    fn_0049fde8(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_48 = *(int *)(param_1 + 200);
    local_44 = *(int *)(param_1 + 0xcc);
    local_40 = *(undefined4 *)(param_1 + 0xd0);
    fn_0049fde8(param_1,&local_48);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = fn_0015ecdc(0x4c);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_3c = *(int *)(param_1 + 0x170);
    local_34 = *(undefined4 *)(param_1 + 0x88);
    local_40 = *(undefined4 *)(param_1 + 0x78);
    uStack_38 = *(undefined4 *)(param_1 + 0x118);
    if (local_3c == 0) {
      local_3c = *(int *)(param_1 + 0x174);
    }
    local_48 = param_1 + 0x164;
    local_44 = *(int *)(param_1 + 0x7c);
    uVar2 = fn_004aaa4c(iVar1,*(undefined4 *)(param_1 + 0x68),param_1 + 0x14c,param_1 + 0x158);
  }
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  iVar1 = fn_006d380c(param_1 + 0x144,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x144,L"https://"), iVar1 == 0)) {
    fn_004b637c(auStack_28,param_1 + 0x144);
  }
  else {
    if (*(char *)(param_1 + 0x74) == '\0') {
      pwVar5 = L"http://";
    }
    else {
      pwVar5 = L"https://";
    }
    fn_004be9d4(auStack_28,pwVar5,param_1 + 0x144);
  }
  iVar1 = *(int *)(param_1 + 0x84);
  local_48 = iVar1;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar3 = fn_00169f1c(*(undefined4 *)(param_1 + 0x118),*(int *)(param_1 + 0x80));
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
  local_48 = *(int *)(param_1 + 0x184);
  local_40 = *(undefined4 *)(param_1 + 0x8c);
  local_44 = 2;
  fn_004a2204(auStack_20,*(undefined4 *)(param_1 + 0x70),param_1 + 0x90,auStack_28);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_3c = -0x7ffefff3;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_0049fde8(param_1,uVar2);
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
    puVar4[1] = fn_004a0298;
    *puVar4 = &DAT_00853500;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar4);
  fn_00170f54(auStack_28);
  return;
}



void fn_004a0298(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
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
    uVar3 = fn_004b8d4c(&local_18,&local_c);
    fn_0049fde8(param_1,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_18 = *(undefined4 *)(param_1 + 200);
    uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    uStack_10 = *(undefined4 *)(param_1 + 0xd0);
    fn_004b8d90(param_1 + 0x178,&local_18);
  }
  fn_00456400(param_1 + 0x90);
  local_2c = 0;
  local_30 = &DAT_00855200;
  local_20 = *(undefined4 *)(param_1 + 0x140);
  local_28 = *(undefined4 *)(param_1 + 0x110);
  uStack_24 = *(undefined4 *)(param_1 + 0x114);
  local_1c = fn_006d3b8c(param_1 + 0x178);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x30))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,&local_30);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    uVar3 = fn_004b8d4c(&local_18,&local_c);
    fn_0049fde8(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_004a0410;
    puVar2[2] = 0;
    puVar2[3] = &DAT_004a0404;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  return;
}



void fn_004a0410(int param_1)

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
    fn_0049fde8(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_18 = *(undefined4 *)(param_1 + 200);
    uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    uStack_10 = *(undefined4 *)(param_1 + 0xd0);
    fn_0049fde8(param_1,&local_18);
    return;
  }
  iVar1 = fn_006d3b8c(param_1 + 0x178);
  if (iVar1 == 0) {
    fn_0049fde8(param_1,param_1 + 0x178);
    return;
  }
  local_1c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_1c);
  fn_0049fde8(param_1,uVar2);
  return;
}


