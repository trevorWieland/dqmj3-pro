#include "0074f6d4_00750260.h"



void fn_00750260(int param_1)

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
    fn_0074feb0(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x1c))
                    (*(int **)(param_1 + 0x6c),param_1 + 0x90,param_1 + 0x108,param_1 + 400);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_18,&local_c);
    fn_0074feb0(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = &DAT_00750368;
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0074ff48;
    puVar2[2] = 0;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  return;
}



void fn_0074ff48(int param_1)

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
    fn_0074feb0(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_48 = *(int *)(param_1 + 200);
    local_44 = *(int *)(param_1 + 0xcc);
    local_40 = *(undefined4 *)(param_1 + 0xd0);
    fn_0074feb0(param_1,&local_48);
    return;
  }
  fn_00456400(param_1 + 0x90);
  iVar1 = fn_0015ecdc(0x4c);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_3c = *(int *)(param_1 + 0x1c8);
    local_34 = *(undefined4 *)(param_1 + 0x88);
    local_40 = *(undefined4 *)(param_1 + 0x78);
    uStack_38 = *(undefined4 *)(param_1 + 0x110);
    if (local_3c == 0) {
      local_3c = *(int *)(param_1 + 0x1cc);
    }
    local_48 = param_1 + 0x1bc;
    local_44 = *(int *)(param_1 + 0x7c);
    uVar2 = fn_004aaa4c(iVar1,*(undefined4 *)(param_1 + 0x68),param_1 + 0x1a4,param_1 + 0x1b0);
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar2;
  iVar1 = fn_006d380c(param_1 + 0x19c,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x19c,L"https://"), iVar1 == 0)) {
    fn_004b637c(auStack_28,param_1 + 0x19c);
  }
  else {
    if (*(char *)(param_1 + 0x74) == '\0') {
      pwVar5 = L"http://";
    }
    else {
      pwVar5 = L"https://";
    }
    fn_004be9d4(auStack_28,pwVar5,param_1 + 0x19c);
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
  local_48 = *(int *)(param_1 + 0x1dc);
  local_40 = *(undefined4 *)(param_1 + 0x8c);
  local_44 = 2;
  fn_004a2204(auStack_20,*(undefined4 *)(param_1 + 0x70),param_1 + 0x90,auStack_28);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_3c = -0x7ffefff3;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_0074feb0(param_1,uVar2);
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
    puVar4[1] = fn_00750374;
    *puVar4 = &DAT_00853500;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar4);
  fn_00170f54(auStack_28);
  return;
}



void fn_0074feb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
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
      **(undefined4 **)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x198);
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0074fe14(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00854198;
  param_1[0x1a] = &DAT_008541e4;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  param_1[0x62] = &DAT_008557dc;
  iVar1 = fn_004b8c5c(param_1 + 0x66);
  *(undefined **)(iVar1 + -0x48) = &DAT_00854bfc;
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x28));
  iVar1 = fn_004b8dac(iVar1 + -0x38);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_004aa1fc(iVar1 + -0x48);
  iVar1 = fn_0048cc74(iVar1 + -0x78);
  fn_00479d5c(iVar1 + -0x98);
  return;
}



void fn_0074fd04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,&uStack_10);
  *puVar1 = &PTR_FUN_00854198;
  puVar1[0x1a] = &DAT_008541e4;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 1;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  iVar2 = fn_0048cc04(puVar1 + 0x26,0);
  iVar2 = fn_0049e6f4(iVar2 + 0x78);
  *(undefined **)(iVar2 + 0x40) = &DAT_00854bfc;
  *(undefined1 *)(iVar2 + 0x44) = 0;
  iVar2 = fn_0013d40c(iVar2 + 0x48);
  iVar2 = fn_0075499c(iVar2 + 8,0);
  iVar2 = fn_001676b0(iVar2 + 0x10,0);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + -0x20) = &DAT_00853af8;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined **)(iVar2 + 0x18) = &DAT_008557dc;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  iVar2 = fn_004b8b9c(iVar2 + 0x28,0);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined **)(iVar2 + -0x10) = &DAT_00855348;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x36) = 1;
  return;
}



void fn_0074f6d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  wchar16 *pwVar5;
  int *piVar6;
  int local_40;
  int local_3c;
  int local_38 [3];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38[1] = 0x80010004;
    uVar4 = fn_004b8d4c(&local_40,local_38 + 1);
    fn_0074f214(param_1,uVar4);
    return;
  }
  iVar1 = fn_006d380c(param_1 + 0x158,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x158,L"https://"), iVar1 == 0)) {
    fn_004b637c(auStack_28,param_1 + 0x158);
  }
  else {
    if (*(char *)(param_1 + 0x78) == '\0') {
      pwVar5 = L"http://";
    }
    else {
      pwVar5 = L"https://";
    }
    fn_004be9d4(auStack_28,pwVar5,param_1 + 0x158);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  local_3c = iVar1;
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar2 = fn_00169f1c(*(undefined4 *)(param_1 + 0x16c),*(int *)(param_1 + 0x84));
    piVar6 = local_38;
    if (iVar2 * 1000 < iVar1) {
      piVar6 = &local_3c;
    }
    local_38[0] = iVar2 * 1000;
    iVar1 = *piVar6;
  }
  fn_004b41a8(local_38 + 2,iVar1);
  local_40 = param_1 + 0x68;
  *(int *)(param_1 + 0xf0) = local_38[2];
  *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
  local_38[0] = *(int *)(param_1 + 0x90);
  local_3c = 0;
  fn_004a2204(auStack_20,*(undefined4 *)(param_1 + 0x74),param_1 + 0x98,auStack_28);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_38[1] = 0x8001000d;
    uVar4 = fn_004b8d4c(&local_40,local_38 + 1);
    fn_0074f214(param_1,uVar4);
    fn_00170f54(auStack_28);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xdc));
  fn_004b2f0c(param_1);
  puVar3 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = fn_0074f8e4;
    *puVar3 = &DAT_00853500;
    puVar3[2] = 0;
    puVar3[3] = L"";
  }
  fn_00479b1c(param_1,param_1 + 0x98,puVar3);
  fn_00170f54(auStack_28);
  return;
}



void fn_0074f8e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c [3];
  undefined4 local_10 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_1c[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_38,local_1c);
    fn_0074f214(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\x02') {
    if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 0x16c)) {
      local_20 = 0x10001;
      uVar2 = fn_004b8d4c(auStack_2c,&local_20);
      fn_0074f214(param_1,uVar2);
      return;
    }
    local_1c[0] = 0x80690001;
    uVar2 = fn_004b8d4c(&local_38,local_1c);
    fn_0074f214(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    local_10[0] = 0x80050017;
    uVar2 = fn_004b8d4c(local_1c,local_10);
    fn_0074f214(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x1cd) == '\0') {
    local_38 = *(undefined4 *)(param_1 + 0xd0);
    uStack_34 = *(undefined4 *)(param_1 + 0xd4);
    uStack_30 = *(undefined4 *)(param_1 + 0xd8);
    fn_0074f214(param_1,&local_38);
    return;
  }
  local_10[0] = 0x80690001;
  uVar2 = fn_004b8d4c(local_1c,local_10);
  fn_0074f214(param_1,uVar2);
  return;
}


