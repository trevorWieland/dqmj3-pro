#include "004af264_004afde8.h"



undefined4
fn_004afc70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  fn_004ba7ac(auStack_60,0x16);
  fn_0015ef4c(auStack_60,param_4,4);
  fn_0047f9b8(auStack_60,param_5);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e67cc = fn_004b14e0;
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



undefined4 fn_004afb08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_60 [68];
  
  iVar1 = param_1 + 0x9c;
  fn_004b73b0(auStack_60);
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0xbc),1);
  iVar3 = fn_004bab34(auStack_60,param_2);
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x14);
  fn_0074ab38(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e67c4 = fn_004b11a0;
  if ((*(char *)(param_1 + 0xd0) == '\0') || (iVar3 = fn_006d3ef4(iVar1,0x10), iVar3 == 0)) {
    uVar5 = fn_0046e0a4(iVar1,param_2,auStack_60);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    fn_004b7520(auStack_60);
    return uVar5;
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  uVar5 = fn_0046e0a4(iVar1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar5;
}



void fn_004afa64(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  puVar1 = (uint *)fn_0048cbf8(param_2,0);
  if (puVar1 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar2 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    *puVar1 = 0;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc));
    *puVar1 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  return;
}



void fn_004af9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (0x2f < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008e6774 + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004afa3c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008e6774 + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



undefined4
fn_004af84c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,0x1e);
  fn_0015ef4c(auStack_78,param_3,4);
  fn_0045f6f0(auStack_78,local_28);
  fn_00454d74(auStack_78,param_5);
  fn_0015ef4c(auStack_78,param_7,2);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e67ec = fn_004b0d14;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
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



undefined4
fn_004af538(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  fn_004ba7ac(auStack_60,4);
  fn_004b2b88(auStack_60,param_3);
  fn_0047f9b8(auStack_60,param_4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e6784 = fn_004b022c;
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
fn_004af3c4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  fn_004ba7ac(auStack_60,0x15);
  fn_00454d74(auStack_60,param_4);
  fn_0047f9b8(auStack_60,param_5);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e67c8 = fn_004afeec;
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



undefined4 fn_004af264(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [68];
  
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
  fn_004ba7ac(auStack_60,0x2d);
  fn_0049e354(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e6828 = fn_004afde8;
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



void fn_004afde8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)fn_0048cbf8(param_2,0);
  if (puVar2 == (undefined4 *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 8) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    }
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(param_1 + 0xc)) < 8) {
    *(undefined1 *)(param_1 + 4) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0xc));
  uVar1 = *puVar4;
  puVar2[1] = puVar4[1];
  *puVar2 = uVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
  return;
}


