#include "004a939c_004a9c04.h"



void fn_004a9c04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_20;
  code *pcStack_1c;
  undefined4 local_18;
  undefined *local_14 [2];
  
  pcStack_1c = (code *)(param_1 + 0x178);
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x20);
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  local_18 = *(undefined4 *)(param_1 + 0xf8);
  local_20 = *(undefined **)(param_1 + 0xf4);
  iVar2 = fn_004a7f94(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x10),
                       param_1 + 0x100,*(undefined4 *)(param_1 + 0x198),
                       *(undefined4 *)(param_1 + 0xfc));
  if (iVar2 == 0) {
    local_14[0] = (undefined *)0x8001000d;
    uVar3 = fn_004b8d4c(&local_20,local_14);
    fn_004a9a5c(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x110) != '\x01') {
    pcStack_1c = fn_004a9d34;
    local_18 = 0;
    local_14[0] = &DAT_004a9d28;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  fn_004b2f0c(param_1);
  puVar1 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = fn_004a9d34;
    *puVar1 = &DAT_00853500;
    puVar1[2] = 0;
    puVar1[3] = &DAT_004a9d28;
  }
  fn_00479b1c(param_1,param_1 + 0x100,puVar1);
  return;
}



void fn_004a9aac(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 auStack_48 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  if ((*(char *)(param_1 + 0x88) != '\x02') && (DAT_008b6385 == '\0')) {
    local_50 = *(undefined4 *)(param_1 + 0xb0);
    local_4c = *(undefined4 *)(param_1 + 0xb4);
    auStack_48[0] = *(undefined4 *)(param_1 + 0xb8);
    fn_004a9a5c(param_1,*(undefined1 *)(param_1 + 0x88),&local_50);
    return;
  }
  fn_0015ed28(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),param_1 + 0xd8);
  puVar1 = (undefined4 *)fn_0014f1e0(auStack_48);
  *puVar1 = &DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  iVar3 = fn_00486fa8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),
                       param_1 + 0x178,auStack_48);
  if (iVar3 == 0) {
    local_50 = 0x80030065;
    uVar2 = fn_004b8d4c(auStack_1c,&local_50);
    fn_004b8d90(*(undefined4 *)(param_1 + 0x198),uVar2);
    local_50 = 0x8003006a;
    uVar2 = fn_004b8d4c(auStack_1c,&local_50);
    fn_004a9a5c(param_1,2,uVar2);
    fn_0014f480(auStack_48);
    return;
  }
  local_4c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_4c);
  fn_004a9a5c(param_1,*(undefined1 *)(param_1 + 0x110),uVar2);
  fn_0014f480(auStack_48);
  return;
}



void fn_004a9a5c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fn_004b2f04();
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    fn_00455e8c(iVar1,param_2,&local_20,1);
  }
  return;
}



void fn_004a952c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int aiStack_a4 [3];
  undefined4 local_98 [16];
  undefined1 *local_58;
  int local_54;
  undefined4 local_50;
  undefined *local_40;
  code *local_3c;
  undefined4 uStack_38;
  undefined *local_34;
  undefined1 auStack_30 [12];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x6c) + 0x14);
  iVar4 = iVar3;
  iVar1 = *(int *)(iVar3 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < *(uint *)(param_1 + 0x74)) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar4 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar4 == iVar3) || (*(uint *)(param_1 + 0x74) < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  bVar6 = iVar4 != iVar3;
  if (bVar6) {
    iVar4 = *(int *)(iVar4 + 0x14);
  }
  iVar1 = 0;
  if (!bVar6) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 8) != 0) {
      fn_004b73b0(local_98);
      fn_004ba7c4(local_98,10,1);
      iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 0x20);
      uVar2 = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(param_1 + 0xdc) = uVar2;
      aiStack_a4[0] = param_1 + 0xf8;
      fn_004a86f8(param_1 + 0x80,local_98,param_1 + 0x118,param_1 + 0x70,param_1 + 0x74);
      local_54 = param_1;
      fn_0045616c(param_1 + 0x80,&LAB_004b2e4c,&local_54,0);
      piVar5 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 8) + 0x28);
      fn_00456160(param_1 + 0x80,piVar5,piVar5[0x1e]);
      local_58 = auStack_30;
      local_50 = fn_004b72d8(local_98);
      iVar4 = fn_001249d0();
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 0xc);
      }
      (**(code **)(*(int *)(iVar1 + 0x50) + 8))();
      aiStack_a4[0] = 0;
      aiStack_a4[1] = 0;
      (**(code **)(*piVar5 + 0x78))(local_58,piVar5,local_50,1,0);
      (**(code **)(*(int *)(iVar1 + 0x50) + 0xc))((int *)(iVar1 + 0x50));
      fn_006d3b8c(auStack_30);
      local_3c = fn_004a97e8;
      uStack_38 = 0;
      local_34 = &DAT_004a97e0;
      local_40 = &DAT_00853500;
      fn_00479c98(param_1,&local_40);
      fn_004b2f0c(param_1);
      fn_004b7520(local_98);
      return;
    }
    fn_004b2f04(param_1);
    iVar4 = fn_001249d0();
    iVar4 = fn_0048a058(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar4 != 0) {
      local_58 = (undefined1 *)0x10001;
      uVar2 = fn_004b8d4c(aiStack_a4,&local_58);
      fn_00455e8c(iVar4,2,uVar2,1);
      return;
    }
  }
  else {
    **(int **)(param_1 + 0x78) = iVar4;
    piVar5 = (int *)(iVar4 + 4);
    do {
      bVar6 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar6);
    *piVar5 = *piVar5 + 1;
    fn_004b2f04(param_1);
    iVar4 = fn_001249d0();
    iVar4 = fn_0048a058(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar4 != 0) {
      local_98[0] = 0x10001;
      uVar2 = fn_004b8d4c(aiStack_a4,local_98);
      fn_00455e8c(iVar4,2,uVar2,1);
    }
  }
  return;
}



void fn_004a97e8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_ac;
  undefined1 auStack_a8 [8];
  undefined4 local_a0 [6];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    puVar2 = (undefined4 *)fn_0014f1e0(auStack_a8);
    *puVar2 = &DAT_00855a18;
    uVar3 = fn_0014f470();
    fn_0014f440(puVar2,uVar3,0);
    iVar4 = fn_00486fa8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),
                         param_1 + 0xf8,auStack_a8);
    if (iVar4 == 0) {
      fn_004b2f04(param_1);
      iVar4 = fn_001249d0();
      iVar4 = fn_0048a058(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(param_1 + 0x68));
      if (iVar4 != 0) {
        local_ac = 0x10001;
        uVar3 = fn_004b8d4c(auStack_20,&local_ac);
        fn_00455e8c(iVar4,2,uVar3,1);
      }
      fn_0014f480(auStack_a8);
      return;
    }
    fn_004b3294(auStack_50);
    puVar2 = (undefined4 *)fn_0014f1e0(auStack_88);
    *puVar2 = &DAT_00855a18;
    uVar3 = fn_0014f470();
    fn_0014f440(puVar2,uVar3,0);
    fn_004bb16c(auStack_68,auStack_a8);
    uVar3 = fn_004b30f0(auStack_50,0x20);
    fn_004bad6c(auStack_68,uVar3,0x100);
    fn_004bad60(auStack_68,local_38,4,1);
    fn_004bb340(auStack_68,auStack_88);
    fn_00124be8(auStack_30);
    fn_004b9850(auStack_30);
    iVar5 = fn_0015ecdc(0x58);
    iVar4 = 0;
    if (iVar5 != 0) {
      local_ac = fn_004b9b4c(auStack_28,auStack_30);
      iVar4 = fn_004b66f8(iVar5,auStack_88,*(undefined4 *)(param_1 + 0x70),local_38[0],auStack_50);
    }
    fn_0046c8f4(*(undefined4 *)(param_1 + 0x6c),local_38[0],iVar4);
    piVar6 = (int *)(iVar4 + 4);
    **(int **)(param_1 + 0x78) = iVar4;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    fn_004bb288(auStack_68);
    fn_0014f480(auStack_88);
    fn_0014f2b0(auStack_50);
    fn_0014f480(auStack_a8);
  }
  fn_004b2f04(param_1);
  iVar4 = fn_001249d0();
  iVar4 = fn_0048a058(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar4 != 0) {
    local_a0[0] = 0x10001;
    uVar3 = fn_004b8d4c(&local_ac,local_a0);
    fn_00455e8c(iVar4,2,uVar3,1);
  }
  return;
}



void fn_004a9494(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00855358;
  param_1[0x1a] = &DAT_008553a4;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0014f1bc(param_1[0x54]);
  param_1[0x49] = &DAT_0085587c;
  fn_0014f1bc(param_1[0x51]);
  iVar1 = fn_00170f54(param_1 + 0x4f);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_0048cc74(iVar1 + -0x9c);
  iVar1 = fn_00170f54(iVar1 + -0x14);
  fn_00479d5c(iVar1 + -0x7c);
  return;
}



void fn_004a939c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,&uStack_10);
  *puVar1 = &PTR_FUN_00855358;
  puVar1[0x1a] = &DAT_008553a4;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  iVar2 = fn_0013d3e8(puVar1 + 0x1f,&DAT_007d8c58);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar2 = fn_0048cc04(iVar2 + 0x14,0);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  *(undefined **)(iVar2 + 0x94) = &DAT_0085587c;
  *(undefined1 *)(iVar2 + 0x98) = 0;
  iVar2 = fn_0013d40c(iVar2 + 0x9c);
  iVar2 = fn_0013d40c(iVar2 + 8);
  iVar2 = fn_0013d40c(iVar2 + 8);
  iVar2 = fn_001676b0(iVar2 + 8,0);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined **)(iVar2 + -0x20) = &DAT_008557bc;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  return;
}


