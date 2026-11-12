#include "004ab63c_004ac0f8.h"



undefined4 * fn_004ac0f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint local_20 [3];
  undefined4 local_14 [2];
  
  fn_0074a528(param_2,local_20);
  local_20[0] = local_20[0] & 0x7fff;
  if ((local_20[0] == 0) || (8 < local_20[0])) {
    local_14[0] = 0x80010002;
    puVar1 = (undefined4 *)fn_004b8d4c(local_20,local_14);
  }
  else {
    puVar1 = &DAT_008e9564 + local_20[0];
    if (*(code **)(&DAT_008e9560 + local_20[0] * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004ac15c */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined4 *)(**(code **)(&DAT_008e9560 + local_20[0] * 4))(param_2,param_3);
      return puVar1;
    }
  }
  return puVar1;
}



undefined4
fn_004abf60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_68,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  local_28 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_68,&local_28,4);
  local_28 = 2;
  fn_0015ef4c(auStack_68,&local_28,4);
  fn_0015ef4c(auStack_68,param_4,4);
  fn_0015ef4c(auStack_68,param_5,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e9568 = fn_004ac184;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}



void fn_004abdec(int param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 auStack_78 [104];
  
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00101a1c(auStack_78,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_78);
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    fn_0046d70c(param_1);
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 == '\0') {
    puVar2 = *(uint **)(*(int *)(param_2 + 0x60) + 4);
    if (puVar2 == (uint *)0x0) {
      if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      if ((uint)(*(int *)(iVar4 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
        *(undefined1 *)(param_1 + 4) = 1;
        *puVar2 = 0;
      }
      else {
        puVar3 = (uint *)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + *(int *)(param_1 + 0xc));
        *puVar2 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
    }
    if (*(int *)(*(int *)(param_2 + 0x60) + 8) == 0) {
      fn_00101a1c(auStack_78,fn_0013ce04,0x68,1);
      fn_0047fba4(param_1,auStack_78);
      fn_00100414(auStack_78,fn_0013ce98,0x68,1);
      return;
    }
    fn_0047fba4(param_1);
  }
  return;
}



undefined4 fn_004abb10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  undefined4 local_20;
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_60,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  local_20 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_60,&local_20,4);
  local_20 = 8;
  fn_0015ef4c(auStack_60,&local_20,4);
  fn_0015ef4c(auStack_60,param_3,4);
  fn_0046d5f8(auStack_60,param_4);
  DAT_008e9580 = &DAT_004abf5c;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
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



undefined4 fn_004ab9a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  undefined4 local_20;
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_60,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  local_20 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_60,&local_20,4);
  local_20 = 7;
  fn_0015ef4c(auStack_60,&local_20,4);
  fn_0047fb68(auStack_60,param_3);
  fn_0047fb68(auStack_60,param_4);
  DAT_008e957c = &DAT_004abf58;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
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
fn_004ab660(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_68,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  local_28 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_68,&local_28,4);
  local_28 = 1;
  fn_0015ef4c(auStack_68,&local_28,4);
  fn_0074ccc0(auStack_68,param_4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
    fn_0048ca64(param_2,param_5);
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e9564 = fn_004abc80;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}



void fn_004abc80(int param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 auStack_78 [104];
  
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00101a1c(auStack_78,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_78);
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    fn_0046d70c(param_1);
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 == '\0') {
    puVar2 = *(uint **)(*(int *)(param_2 + 0x60) + 4);
    if (puVar2 == (uint *)0x0) {
      if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      if ((uint)(*(int *)(iVar4 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
        *(undefined1 *)(param_1 + 4) = 1;
        *puVar2 = 0;
      }
      else {
        puVar3 = (uint *)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + *(int *)(param_1 + 0xc));
        *puVar2 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
    }
    if (*(int *)(*(int *)(param_2 + 0x60) + 8) == 0) {
      fn_00101a1c(auStack_78,fn_0013ce04,0x68,1);
      fn_0047fba4(param_1,auStack_78);
      fn_00100414(auStack_78,fn_0013ce98,0x68,1);
      return;
    }
    fn_0047fba4(param_1);
  }
  return;
}



int fn_004ab63c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0085557c;
  iVar1 = fn_0047ebf0(param_1 + 0xb);
  iVar1 = fn_00489b2c(iVar1 + -0x28);
  return iVar1 + -4;
}


