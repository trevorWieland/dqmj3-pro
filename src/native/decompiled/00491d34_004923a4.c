#include "00491d34_004923a4.h"



void fn_00492328(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_20,fn_0045ce00,0x14,1);
    fn_00482420(param_1,auStack_20);
    fn_00100414(auStack_20,&LAB_0045ce58,0x14,1);
    return;
  }
  fn_00482420(param_1,iVar1);
  return;
}



undefined4 fn_00492198(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_68 [64];
  int local_28 [2];
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_68,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,4);
  local_28[0] = param_3[1] - *param_3;
  fn_0015ef4c(auStack_68,local_28,4);
  iVar4 = param_3[1];
  for (iVar1 = *param_3; iVar1 != iVar4; iVar1 = iVar1 + 1) {
    fn_0015ef4c(auStack_68,iVar1,1);
  }
  fn_0015ef4c(auStack_68,param_4,8);
  DAT_008e6878 = &DAT_00492938;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar3;
}



undefined4 fn_00492030(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [68];
  
  iVar1 = param_1 + 0x10;
  fn_004b73b0(auStack_60);
  iVar2 = fn_004bc44c();
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x30),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,6);
  fn_0015ef4c(auStack_60);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e6880 = fn_00492424;
  if ((*(char *)(param_1 + 0x44) == '\0') || (iVar2 = fn_006d3ef4(iVar1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(iVar1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(iVar1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



undefined4 fn_00491ed4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [68];
  
  iVar1 = param_1 + 0x10;
  fn_004b73b0(auStack_60);
  iVar2 = fn_004bc44c();
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x30),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,1);
  fn_00493830(auStack_60,param_3);
  fn_0015ef4c(auStack_60);
  DAT_008e686c = &DAT_00492420;
  if ((*(char *)(param_1 + 0x44) == '\0') || (iVar2 = fn_006d3ef4(iVar1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(iVar1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(iVar1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



undefined4
fn_00491d34(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_78,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,9);
  fn_0015ef4c(auStack_78,local_2c,1);
  fn_0015ef4c(auStack_78,local_28,4);
  fn_004966f4(auStack_78,param_5);
  fn_0015ef4c(auStack_78,param_7,8);
  fn_0015ef4c(auStack_78,param_8,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e688c = fn_004923a4;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_78);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar3;
}



void fn_004923a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_28,&LAB_00468b80,0x20,1);
    fn_00488e74(param_1,auStack_28);
    fn_00100414(auStack_28,&LAB_00468bc0,0x20,1);
    return;
  }
  fn_00488e74(param_1,iVar1);
  return;
}


