#include "004989a8_00499148.h"



void fn_00499148(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (0x2e < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008e6684 + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004991a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008e6684 + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



void fn_004990cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_28,fn_0048fc98,0x1c,1);
    fn_004a5b04(param_1,auStack_28);
    fn_00100414(auStack_28,&LAB_0048fd74,0x1c,1);
    return;
  }
  fn_004a5b04(param_1,iVar1);
  return;
}



undefined4 fn_00498eb4(int param_1,undefined4 param_2,int param_3)

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
  fn_004ba7ac(auStack_70,0xb);
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
  fn_0015ef4c(auStack_70,param_3 + 0x10,4);
  fn_00454d74(auStack_70,param_3 + 0x14);
  if (local_35 == '\0') {
    iVar5 = *(int *)(local_68 + 0x10);
    fn_00454cbc(auStack_70,iVar1);
    local_30 = (iVar5 - iVar1) + -4;
    fn_0015ef4c(auStack_70,&local_30,4);
    fn_00454cbc(auStack_70,iVar5);
  }
  DAT_008e66b0 = &DAT_0049b308;
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



undefined4 fn_00498ca8(int param_1,undefined4 param_2,int param_3)

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
  fn_004ba7ac(auStack_70,3);
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
  fn_0015ef4c(auStack_70,param_3 + 8,4);
  fn_00454d74(auStack_70,param_3 + 0xc);
  if (local_35 == '\0') {
    iVar5 = *(int *)(local_68 + 0x10);
    fn_00454cbc(auStack_70,iVar1);
    local_30 = (iVar5 - iVar1) + -4;
    fn_0015ef4c(auStack_70,&local_30,4);
    fn_00454cbc(auStack_70,iVar5);
  }
  DAT_008e6690 = &DAT_0049b304;
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



undefined4 fn_00498b40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,10);
  fn_004b22e8(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e66ac = fn_0049adbc;
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



void fn_00498b08(int param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  fn_006d30f0(param_1 + -0x10,param_3 + 0x20);
}



undefined4 fn_004989a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,2);
  fn_004b2054(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e668c = fn_0049ab54;
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


