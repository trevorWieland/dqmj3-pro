#include "004ae698_004af11c.h"



undefined4 fn_004af11c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [64];
  
  fn_004b73b0(auStack_58);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_58,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_58,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return 0;
  }
  fn_004ba7ac(auStack_58,1);
  fn_0015ef4c(auStack_58,param_3,4);
  DAT_008e6778 = &DAT_004afde4;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
  fn_004b7520(auStack_58);
  return uVar4;
}



undefined4 fn_004aefd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [64];
  
  fn_004b73b0(auStack_58);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_58,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_58,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return 0;
  }
  fn_004ba7ac(auStack_58,2);
  fn_0015ef4c(auStack_58,param_3,4);
  DAT_008e677c = &DAT_004afb04;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
  fn_004b7520(auStack_58);
  return uVar4;
}



undefined4 fn_004aee88(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [64];
  
  iVar1 = param_1 + 0x9c;
  fn_004b73b0(auStack_58);
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  fn_004ba7c4(auStack_58,*(undefined2 *)(param_1 + 0xbc),1);
  iVar3 = fn_004bab34(auStack_58,param_2);
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    fn_004b7520(auStack_58);
    return 0;
  }
  fn_004ba7ac(auStack_58,0x12);
  fn_004a1dbc(auStack_58,param_3);
  DAT_008e67bc = &DAT_004afb00;
  if ((*(char *)(param_1 + 0xd0) == '\0') || (iVar3 = fn_006d3ef4(iVar1,0x10), iVar3 == 0)) {
    uVar5 = fn_0046e0a4(iVar1,param_2,auStack_58);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    fn_004b7520(auStack_58);
    return uVar5;
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  uVar5 = fn_0046e0a4(iVar1,param_2,auStack_58);
  fn_004b7520(auStack_58);
  return uVar5;
}



undefined4
fn_004aed18(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x11);
  fn_004a1dbc(auStack_60,param_3);
  fn_0045f6f0(auStack_60,param_5);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e67b8 = fn_004afa64;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



undefined4
fn_004aebb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x13);
  fn_0015ef4c(auStack_60,param_3,4);
  fn_0045f6f0(auStack_60,param_4);
  fn_0045f6f0(auStack_60,param_5);
  DAT_008e67c0 = &DAT_004af534;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



void fn_004aeb08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_00855830;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[2] = &DAT_008554d0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = uVar1;
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  param_1[2] = &DAT_008549ec;
  *param_1 = &DAT_00855674;
  return;
}



void fn_004aeaec(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  return;
}



void fn_004ae9e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  iVar1 = *(int *)(*(int *)(param_1 + 400) + 0x78);
  uVar5 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x318);
  uVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 400));
  fn_0046b1a0(uVar2,*(undefined4 *)(*(int *)(param_1 + 400) + 0x78));
  *(undefined4 *)(param_1 + 0x314) = 0;
  fn_00456400(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x324);
  iVar3 = *(int *)(*(int *)(param_1 + 400) + 0x78);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x24);
  }
  iVar1 = fn_00481410(*(undefined4 *)(iVar1 + 0x18),param_1 + 0x80,uVar5);
  if (iVar1 == 0) {
    local_14[0] = 0x10001;
    uVar2 = fn_004b8d4c(auStack_20,local_14);
    fn_004adbfc(param_1,uVar2);
    return;
  }
  fn_004b2f0c(param_1);
  puVar4 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = fn_004ae660;
    *puVar4 = &DAT_00853500;
    puVar4[2] = 0;
    puVar4[3] = &DAT_004aeae4;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar4);
  return;
}



void fn_004ae698(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  piVar1 = *(int **)(param_1 + 0x310);
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar4);
    *puVar3 = uVar2;
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x02') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x2c) =
         *(undefined4 *)(param_1 + 0x318);
    piVar1 = (int *)fn_006d1a3c(*(undefined4 *)(param_1 + 400));
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(*(int *)(param_1 + 400) + 0x78));
    local_1c = fn_004ade90;
    uStack_18 = 0;
    local_14 = &DAT_004ae798;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (*(int *)(param_1 + 0x318) != 0) {
    fn_004b9d74();
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  local_20 = *(undefined **)(param_1 + 0xb8);
  local_1c = *(code **)(param_1 + 0xbc);
  uStack_18 = *(undefined4 *)(param_1 + 0xc0);
  fn_004adbfc(param_1,&local_20);
  return;
}


