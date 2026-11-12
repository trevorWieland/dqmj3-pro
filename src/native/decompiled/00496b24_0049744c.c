#include "00496b24_0049744c.h"



undefined4 fn_0049744c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_70 [8];
  int local_68;
  char local_35;
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  
  fn_004b73b0(auStack_70);
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_70,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_70,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_70);
    return 0;
  }
  fn_004ba7ac(auStack_70,0x1a);
  iVar1 = 0;
  if (local_35 == '\0') {
    local_2c[0] = 0;
    piVar4 = &local_30;
    if (*(char *)(param_3 + 4) != '\0') {
      piVar4 = (int *)local_2c;
    }
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,*(char *)(param_3 + 4));
    fn_0015ef4c(auStack_70,piVar4,1);
    iVar1 = *(int *)(local_68 + 0x10);
    local_28 = 0;
    fn_0015ef4c(auStack_70,&local_28,4);
  }
  fn_0015ef4c(auStack_70,param_3 + 8,8);
  fn_00454d74(auStack_70,param_3 + 0x10);
  if (local_35 == '\0') {
    iVar5 = *(int *)(local_68 + 0x10);
    fn_00454cbc(auStack_70,iVar1);
    local_30 = (iVar5 - iVar1) + -4;
    fn_0015ef4c(auStack_70,&local_30,4);
    fn_00454cbc(auStack_70,iVar5);
  }
  DAT_008e66ec = &DAT_0049a6e0;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_70);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_70);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_70);
  fn_004b7520(auStack_70);
  return uVar3;
}



undefined4 fn_004972e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,0x18);
  fn_004ac810(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e66e4 = fn_0049a308;
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



void fn_004972ac(int param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  fn_006d30f0(param_1 + -0x10,param_3 + 0x90);
}



undefined4 fn_0049706c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  int local_78;
  char local_45;
  int local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_80);
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_80,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_80,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_80);
    return 0;
  }
  fn_004ba7ac(auStack_80,0x14);
  iVar1 = 0;
  if (local_45 == '\0') {
    local_3c[0] = 0;
    piVar4 = (int *)local_3c;
    if (*(char *)(param_3 + 4) == '\0') {
      piVar4 = &local_40;
    }
    local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,*(char *)(param_3 + 4));
    fn_0015ef4c(auStack_80,piVar4,1);
    iVar1 = *(int *)(local_78 + 0x10);
    local_38 = 0;
    fn_0015ef4c(auStack_80,&local_38,4);
  }
  local_40 = *(int *)(param_3 + 0xc) - *(int *)(param_3 + 8) >> 2;
  fn_0015ef4c(auStack_80,&local_40,4);
  iVar6 = *(int *)(param_3 + 0xc);
  for (iVar5 = *(int *)(param_3 + 8); iVar5 != iVar6; iVar5 = iVar5 + 4) {
    fn_0015ef4c(auStack_80,iVar5,4);
  }
  if (local_45 == '\0') {
    iVar5 = *(int *)(local_78 + 0x10);
    fn_00454cbc(auStack_80,iVar1);
    local_40 = (iVar5 - iVar1) + -4;
    fn_0015ef4c(auStack_80,&local_40,4);
    fn_00454cbc(auStack_80,iVar5);
  }
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_28);
  }
  DAT_008e66d4 = fn_00499a64;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_80);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_80);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_80);
  fn_004b7520(auStack_80);
  return uVar3;
}



undefined4 fn_00496f04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,0x19);
  fn_004aa010(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e66e8 = fn_004999e8;
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



void fn_00496ecc(int param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  fn_006d30f0(param_1 + -0x10,param_3 + 0x30);
}



undefined4 fn_00496c8c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  int local_78;
  char local_45;
  int local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_80);
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_80,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_80,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_80);
    return 0;
  }
  fn_004ba7ac(auStack_80,0x1c);
  iVar1 = 0;
  if (local_45 == '\0') {
    local_3c[0] = 0;
    piVar4 = &local_40;
    if (*(char *)(param_3 + 4) != '\0') {
      piVar4 = (int *)local_3c;
    }
    local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,*(char *)(param_3 + 4));
    fn_0015ef4c(auStack_80,piVar4,1);
    iVar1 = *(int *)(local_78 + 0x10);
    local_38 = 0;
    fn_0015ef4c(auStack_80,&local_38,4);
  }
  local_40 = *(int *)(param_3 + 0xc) - *(int *)(param_3 + 8) >> 3;
  fn_0015ef4c(auStack_80,&local_40,4);
  iVar6 = *(int *)(param_3 + 0xc);
  for (iVar5 = *(int *)(param_3 + 8); iVar5 != iVar6; iVar5 = iVar5 + 8) {
    fn_0015ef4c(auStack_80,iVar5,8);
  }
  if (local_45 == '\0') {
    iVar5 = *(int *)(local_78 + 0x10);
    fn_00454cbc(auStack_80,iVar1);
    local_40 = (iVar5 - iVar1) + -4;
    fn_0015ef4c(auStack_80,&local_40,4);
    fn_00454cbc(auStack_80,iVar5);
  }
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_28);
  }
  DAT_008e66f4 = fn_004991cc;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_80);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_80);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_80);
  fn_004b7520(auStack_80);
  return uVar3;
}



undefined4 fn_00496b24(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,0xc);
  fn_004a365c(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e66b4 = fn_004990cc;
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


