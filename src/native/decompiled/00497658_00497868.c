#include "00497658_00497868.h"



undefined4 fn_00497868(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
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
  fn_004ba7ac(auStack_80,1);
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
  fn_0015ef4c(auStack_80,param_3 + 8,4);
  fn_0015ef4c(auStack_80,param_3 + 0xc,4);
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
  DAT_008e6688 = fn_0049a91c;
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



undefined4 fn_00497658(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
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
  fn_004ba7ac(auStack_80,0xd);
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
  fn_0045f6f0(auStack_80,param_3 + 8);
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
  DAT_008e66b8 = fn_0049a6e4;
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


