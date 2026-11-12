#include "004a87f8_004a8fdc.h"



void fn_004a8a68(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined1 *param_15,undefined1 param_16)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_78 [8];
  undefined *local_70;
  code *local_6c;
  undefined4 uStack_68;
  undefined *local_64;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  *(undefined4 *)(param_2 + 0x6c) = param_3;
  *(undefined4 *)(param_2 + 0x70) = param_4;
  puVar3 = (undefined4 *)fn_0015ecdc(4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00854c38;
  }
  *(undefined4 **)(param_2 + 0x74) = puVar3;
  *(undefined4 *)(param_2 + 0x78) = param_8;
  *(undefined4 *)(param_2 + 0x84) = param_5;
  *(undefined4 *)(param_2 + 0x88) = param_6;
  fn_00170fa4(param_2 + 0x7c,param_7);
  *(undefined4 *)(param_2 + 0x108) = param_11;
  *(undefined4 *)(param_2 + 0x118) = param_13;
  *(undefined4 *)(param_2 + 0x11c) = param_12;
  *(undefined4 *)(param_2 + 0x120) = param_14;
  *(undefined4 *)(param_2 + 0x110) = param_9;
  *(undefined4 *)(param_2 + 0x114) = param_10;
  *(undefined1 *)(param_2 + 0x161) = param_16;
  *(undefined1 **)(param_2 + 0x164) = param_15;
  *param_15 = 0;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x6c));
  fn_0048c944(param_2 + 0x90,*(undefined4 *)(iVar1 + 0x74));
  if ((((*(char *)(param_2 + 0x161) == '\0') &&
       (iVar1 = fn_004b626c(*(undefined4 *)(param_2 + 0x80),&DAT_004a8c1c), iVar1 == 0)) &&
      (iVar1 = fn_004b626c(*(undefined4 *)(param_2 + 0x80),L"invalidurl"), iVar1 == 0)) &&
     (*(int *)(param_2 + 0x11c) != 0)) {
    local_6c = fn_004a8ea4;
  }
  else {
    local_6c = fn_004a8d14;
  }
  uStack_68 = 0;
  local_64 = &DAT_004a8c1c;
  local_70 = &DAT_00853500;
  fn_00479c98(param_2,&local_70);
  local_78[0] = 1;
  fn_004b8d18(local_34,local_78);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}



void fn_004a8ea4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_38 [5];
  undefined1 auStack_24 [12];
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38[3] = 0x80010004;
    uVar3 = fn_004b8d4c(local_38,local_38 + 3);
    fn_004a8c20(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x90);
  fn_004b41a8(&local_18,*(undefined4 *)(param_1 + 0x88));
  local_38[0] = param_1 + 0x68;
  *(undefined4 *)(param_1 + 0xe8) = local_18;
  *(undefined4 *)(param_1 + 0xec) = uStack_14;
  local_38[1] = 0;
  local_38[2] = 0x4000;
  fn_004a2204(auStack_24,*(undefined4 *)(param_1 + 0x74),param_1 + 0x90,param_1 + 0x7c);
  iVar1 = fn_006d3b8c(auStack_24);
  if (iVar1 == 0) {
    local_38[3] = 0x8001000d;
    uVar3 = fn_004b8d4c(local_38,local_38 + 3);
    fn_004a8c20(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_004a917c;
    puVar2[2] = 0;
    puVar2[3] = &DAT_004a8fd0;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  return;
}



void fn_004a8d14(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_30;
  undefined1 local_2c;
  undefined1 auStack_28 [8];
  undefined4 local_20 [2];
  undefined1 auStack_18 [4];
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_14[0] = 0x80010004;
    uVar3 = fn_004b8d4c(local_20,local_14);
    fn_004a8c20(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x90);
  local_30 = &DAT_00855820;
  local_2c = 0;
  iVar1 = fn_0013d40c(auStack_28);
  *(undefined **)(iVar1 + -8) = &DAT_00855664;
  if (*(char *)(param_1 + 0x160) == '\0') {
    fn_00170fa4(auStack_28,param_1 + 0x7c);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0x50))
                    (*(int **)(param_1 + 0x70),param_1 + 0x90,&local_30,param_1 + 0x124);
  if (iVar1 == 0) {
    **(undefined1 **)(param_1 + 0x164) = 1;
    local_20[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_18,local_20);
    fn_004a8c20(param_1,uVar3);
    local_30 = &DAT_00855820;
    fn_00170f54(auStack_28);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xd4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = fn_004a8fdc;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &DAT_004a8e9c;
  }
  fn_00479b1c(param_1,param_1 + 0x90,puVar2);
  local_30 = &DAT_00855820;
  fn_00170f54(auStack_28);
  return;
}



void fn_004a8fdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_14[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_20,local_14);
    fn_004a8c20(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    **(undefined1 **)(param_1 + 0x164) = 1;
    local_20 = *(undefined4 *)(param_1 + 200);
    uStack_1c = *(undefined4 *)(param_1 + 0xcc);
    uStack_18 = *(undefined4 *)(param_1 + 0xd0);
    fn_004a8c20(param_1,&local_20);
    return;
  }
  fn_004bebd8(auStack_40,param_1 + 300,param_1 + 0x134);
  fn_004bebd8(auStack_38,auStack_40,param_1 + 0x13c);
  fn_00170fa4(param_1 + 0x7c,auStack_38);
  fn_00170f54(auStack_38);
  fn_00170f54(auStack_40);
  iVar1 = fn_006d380c(param_1 + 0x7c,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x7c,L"https://"), iVar1 == 0)) {
    fn_004bead4(auStack_40,param_1 + 0x7c,L"");
  }
  else {
    fn_004be9d4(auStack_40,L"https://",param_1 + 0x7c);
  }
  fn_00170fa4(param_1 + 0x7c,auStack_40);
  fn_00170f54(auStack_40);
  if (*(int *)(param_1 + 0x11c) == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
  local_24 = 0x10001;
  uVar2 = fn_004b8d4c(auStack_30,&local_24);
  fn_004a8c20(param_1,uVar2);
  return;
}



void fn_004a8c20(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
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
      if (*(char *)(param_1 + 0x168) == '\0') {
        fn_00170fa4(*(undefined4 *)(param_1 + 0x78),param_1 + 0x7c);
        puVar4 = *(undefined4 **)(param_1 + 0x108);
        uVar3 = *(undefined4 *)(param_1 + 0x114);
        *puVar4 = *(undefined4 *)(param_1 + 0x110);
        puVar4[1] = uVar3;
        **(undefined4 **)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x11c);
      }
      else {
        fn_0013d438(*(undefined4 *)(param_1 + 0x78),L"invalidurl");
        puVar4 = *(undefined4 **)(param_1 + 0x108);
        *puVar4 = 0;
        puVar4[1] = 0;
        **(undefined4 **)(param_1 + 0x118) = 0;
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



undefined4 * fn_004a899c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_008552b4;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    iVar2 = fn_0015ecdc(0x44);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_004a899c(iVar2,0);
    }
    iVar2 = fn_0045c8f4();
    fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar3);
  }
  return puVar1;
}



undefined4
fn_004a87f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_78,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  local_38 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_78,&local_38,4);
  local_38 = 1;
  fn_0015ef4c(auStack_78,&local_38,4);
  fn_0045f6f0(auStack_78,local_28);
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_2c);
    fn_0048ca64(param_2,param_5);
    fn_0048ca64(param_2,param_6);
    fn_0048ca64(param_2,param_7);
    fn_0048ca64(param_2,param_8);
  }
  DAT_008e9548 = fn_004a7854;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}


