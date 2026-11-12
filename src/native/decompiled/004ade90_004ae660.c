#include "004ade90_004ae660.h"



void fn_004ae660(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = 0x10001;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_004adbfc(param_1,uVar1);
  return;
}



void fn_004ae32c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [4];
  undefined1 local_34 [4];
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(char *)(param_1 + 0x328) != '\0') {
    local_2c = (code *)0x80010004;
    uVar1 = fn_004b8d4c(auStack_38,&local_2c);
    fn_004adbfc(param_1,uVar1);
    return;
  }
  if (*(char *)(param_1 + 0xf0) == '\x02') {
    local_34[0] = 1;
    iVar2 = fn_006d3b54(param_1 + 0x158,local_34);
    if (iVar2 != 0) {
      iVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 400));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0xc) =
           *(undefined4 *)(iVar2 + 0x1c);
      iVar2 = *(int *)(param_1 + 400);
      iVar3 = *(int *)(iVar2 + 0x78);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x24);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x10);
      }
      else {
        iVar2 = 0;
      }
      *(int *)(iVar2 + 0x20) = iVar3;
      fn_0046b1a0(*(undefined4 *)(iVar2 + 0x18));
      fn_0046b1a0(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20));
      iVar2 = fn_0045c8f4();
      uVar4 = fn_006d3b9c(param_1 + 0x2f0);
      *(undefined8 *)(iVar2 + 0x58) = uVar4;
      fn_004b4218(&local_20);
      *(undefined4 *)(iVar2 + 0x50) = local_20;
      *(undefined4 *)(iVar2 + 0x54) = uStack_1c;
      local_2c = fn_004ae7a0;
      uStack_28 = 0;
      local_24 = &DAT_004ae46c;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
  }
  local_18 = *(undefined4 *)(param_1 + 0x158);
  uStack_14 = *(undefined4 *)(param_1 + 0x15c);
  uStack_10 = *(undefined4 *)(param_1 + 0x160);
  fn_004adbfc(param_1,&local_18);
  return;
}



void fn_004ae19c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  uVar4 = fn_00156284(*(int *)(param_1 + 0x304) + 8);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  if (bVar3 && iVar2 != 0) {
    local_24 = fn_004ae474;
    uStack_20 = 0;
    local_1c = &DAT_004ae224;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  local_c = 0x8001000a;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_004adbfc(param_1,uVar1);
  return;
}



void fn_004ae474(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_2a8;
  int iStack_2a4;
  undefined1 auStack_2a0 [4];
  undefined4 local_29c;
  undefined1 auStack_88 [104];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  fn_0045f27c(auStack_2a0);
  uVar2 = fn_0045f3dc(auStack_2a0,L"prudp:/address=");
  uVar2 = fn_004be9cc(uVar2,param_1 + 0x70);
  uVar2 = fn_0045f3dc(uVar2,L";port=");
  uVar2 = fn_0045f058(uVar2,*(undefined2 *)(param_1 + 0x78));
  uVar2 = fn_0045f3dc(uVar2,L";stream=");
  uVar2 = fn_0045f058(uVar2,10);
  uVar2 = fn_0045f3dc(uVar2,L";sid=");
  uVar2 = fn_0045f058(uVar2,1);
  uVar2 = fn_0045f3dc(uVar2,L";type=");
  fn_0045f058(uVar2,2);
  fn_00455c50(auStack_88,local_29c);
  local_20 = *(undefined4 *)(param_1 + 800);
  uStack_1c = *(undefined4 *)(param_1 + 0x324);
  local_2a8 = fn_004b4164(&local_20);
  iStack_2a4 = param_1 + 0x310;
  iVar3 = *(int *)(*(int *)(param_1 + 400) + 0x78);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x24);
  }
  iVar4 = fn_004817e4(*(undefined4 *)(iVar4 + 0x18),param_1 + 0x80,auStack_88,param_1 + 0x314);
  if (iVar4 == 0) {
    local_2a8 = 0x8001000d;
    uVar2 = fn_004b8d4c(auStack_18,&local_2a8);
    fn_004adbfc(param_1,uVar2);
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 0x310) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    fn_004b2f0c(param_1);
    puVar5 = (undefined4 *)fn_0015ecdc(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = fn_004ae22c;
      *puVar5 = &DAT_00853500;
      puVar5[2] = 0;
      puVar5[3] = L"";
    }
    fn_00479b1c(param_1,param_1 + 0x80,puVar5);
  }
  fn_0013ce98(auStack_88);
  fn_0045f2ec(auStack_2a0);
  return;
}



void fn_004ae22c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  piVar1 = *(int **)(param_1 + 0x310);
  if (piVar1 != (int *)0x0) {
    puVar4 = (uint *)(piVar1 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x02') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x28) =
         *(undefined4 *)(param_1 + 0x314);
    uVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 400));
    fn_0046b1a0(uVar2,*(undefined4 *)(*(int *)(param_1 + 400) + 0x78));
    local_1c = fn_004add4c;
    uStack_18 = 0;
    local_14 = &DAT_004ae324;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    fn_004b9d74();
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  local_20 = *(undefined **)(param_1 + 0xb8);
  local_1c = *(code **)(param_1 + 0xbc);
  uStack_18 = *(undefined4 *)(param_1 + 0xc0);
  fn_004adbfc(param_1,&local_20);
  return;
}



void fn_004ade90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [28];
  
  fn_00456400(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x324);
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 400));
  fn_004b4c44(auStack_38);
  fn_00495020(iVar1,auStack_38);
  local_48 = *(int *)(iVar1 + 8) + 0x10;
  iStack_44 = param_1 + 0x194;
  if (DAT_008b68a8 == 0) {
    iVar1 = fn_004ab660(iVar1 + 0x10,param_1 + 0xe0,param_1 + 0x158,auStack_38);
    fn_00786480(auStack_38);
  }
  else {
    puStack_40 = &DAT_008b68a4;
    iVar1 = fn_004ab7f0(iVar1 + 0x10);
    fn_00786480(auStack_38);
  }
  if (iVar1 == 0) {
    local_3c = 0x8001000d;
    uVar3 = fn_004b8d4c(&local_48,&local_3c);
    fn_004adbfc(param_1,uVar3);
    return;
  }
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_004adfd8;
    puVar2[2] = 0;
    puVar2[3] = &DAT_004adfd0;
  }
  fn_00479b1c(param_1,param_1 + 0xe0,puVar2);
  return;
}



void fn_004adfd8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_40 [8];
  undefined *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = fn_006d19d4(*(undefined4 *)(param_1 + 400));
  if (*(int *)(iVar1 + 0x1c) != 2) {
    if (*(char *)(param_1 + 0xf0) != '\x02') {
      local_28 = *(undefined4 *)(param_1 + 0x118);
      uStack_24 = *(undefined4 *)(param_1 + 0x11c);
      uStack_20 = *(undefined4 *)(param_1 + 0x120);
      fn_004adbfc(param_1,&local_28);
      return;
    }
    local_40[0] = 0;
    iVar1 = fn_006d3b54(param_1 + 0x158,local_40);
    if (iVar1 != 0) {
      local_28 = *(undefined4 *)(param_1 + 0x158);
      uStack_24 = *(undefined4 *)(param_1 + 0x15c);
      uStack_20 = *(undefined4 *)(param_1 + 0x160);
      fn_004adbfc(param_1,&local_28);
      return;
    }
  }
  fn_004554c4(param_1 + 0x194,*(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x10));
  fn_00455474(param_1 + 0x194);
  iVar1 = fn_004b7748();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  for (piVar5 = (int *)**(int **)(iVar1 + 0x88); piVar5 != (int *)*(int *)(iVar1 + 0x88);
      piVar5 = (int *)*piVar5) {
    uVar3 = fn_006d0c04(piVar5 + 2);
    if ((uVar3 & 2) == 0) {
      uVar4 = fn_006d0ae4(param_1 + 0x194);
      fn_004554c4(piVar5 + 2,uVar4);
    }
  }
  uVar4 = fn_004b7748();
  fn_004b755c(uVar4,param_1 + 0x194);
  (**(code **)(**(int **)(param_1 + 400) + 0xc))();
  local_34 = fn_004ae9e8;
  uStack_30 = 0;
  local_2c = &DAT_004ae174;
  local_38 = &DAT_00853500;
  fn_00479c98(param_1,&local_38);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


