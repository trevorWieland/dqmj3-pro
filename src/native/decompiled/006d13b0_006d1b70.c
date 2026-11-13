#include "006d13b0_006d1b70.h"



undefined4 fn_006d1b70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  if (((*(int *)(*(int *)(param_1 + 0x10b4) + 0x18) == 0) &&
      (*(int *)(param_1 + 0x10b8) == *(int *)(param_1 + 0x10bc))) &&
     (*(char *)(param_1 + 0x1084) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return uVar2;
}



undefined4 fn_006d1a94(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 8);
  }
  return uVar1;
}



int fn_006d1a3c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x24);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_006d1a74;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
LAB_006d1a74:
  if (iVar1 != 0) {
    fn_0046b1a0(iVar1);
  }
  return iVar1;
}



bool fn_006d1a20(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  return iVar2 != 0 && cVar1 != '\x05';
}



int fn_006d19d4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x24);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_006d1a0c;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x18);
LAB_006d1a0c:
  if (iVar1 != 0) {
    fn_0046b1a0(iVar1);
  }
  return iVar1;
}



bool fn_006d19b8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x94);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  return iVar2 != 0 && cVar1 != '\x05';
}



void fn_006d1828(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_28 [3];
  undefined4 local_1c;
  
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  iVar6 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iVar3 = *(int *)(param_2 + 0x98);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x22);
  }
  if (((iVar3 != 0 && cVar1 != '\x05') || (*(int *)(param_2 + 0x94) == 0)) ||
     (*(char *)(*(int *)(param_2 + 0x94) + 0x22) != '\x05')) {
    local_28[0] = 0x800300d2;
    fn_004b8d4c(param_1,local_28);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return;
  }
  if (*(int *)(param_2 + 0x78) == 0) {
    iVar3 = 0;
LAB_006d18dc:
    if (iVar3 != 0) {
      piVar5 = *(int **)(iVar3 + 0x1c);
      goto LAB_006d18ec;
    }
    piVar5 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0x78) + 0x24);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 0x10);
      goto LAB_006d18dc;
    }
    piVar5 = (int *)0x0;
LAB_006d18ec:
    if (piVar5 == (int *)0x0) goto LAB_006d195c;
    fn_0046b1a0(piVar5);
  }
  if (((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 0x14))(piVar5), iVar3 != 0)) &&
     ((iVar3 = (**(code **)(*piVar5 + 0x18))(piVar5), iVar3 == 0 && (*(int *)(piVar5[2] + 0xc) != 0)
      ))) {
    iVar3 = fn_004b7748();
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0x90);
    }
    if (*(char *)(iVar6 + 0xfe) == '\0') {
      local_28[0] = 0x10001;
      fn_004b8d4c(param_1,local_28);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      return;
    }
  }
LAB_006d195c:
  local_1c = 0x800300d2;
  fn_004b8d4c(param_1,&local_1c);
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}



int fn_006d162c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined *local_e0 [22];
  undefined1 auStack_88 [16];
  char local_78;
  undefined1 auStack_70 [12];
  int local_64;
  undefined4 local_60;
  int local_58;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    fn_0013d0fc(&local_28);
    local_20 = local_28;
    uStack_1c = uStack_24;
    fn_004b5488(auStack_70,8);
    fn_004b5488(auStack_50,0x10);
    fn_0015ef58(auStack_70,&local_20,8,0xffffffff);
    local_e0[0] = &DAT_0085748c;
    local_78 = '\0';
    fn_00160094(local_e0);
    if (local_78 == '\0') {
      fn_001600c4(local_e0,local_64 + local_58,local_60);
    }
    if (local_78 == '\0') {
      fn_00160190(local_e0,auStack_88);
      local_78 = '\x01';
    }
    fn_0015ef58(auStack_50,auStack_88,0x10,0xffffffff);
    piVar3 = (int *)0x0;
    fn_006d373c(auStack_30,auStack_50);
    if (local_2c != 0) {
      iVar1 = fn_00100b58(local_2c);
      piVar2 = (int *)fn_0015ece0(iVar1 + 5);
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1 + 1;
      fn_00173bf4(local_2c,piVar3,iVar1 + 1);
    }
    fn_00170f54(auStack_30);
    piVar2 = (int *)fn_00102cec(param_1 + 0xf,0x29,(char *)&DAT_007dd178,piVar3);
    bVar4 = piVar3 == (int *)0x0;
    if (!bVar4) {
      piVar2 = piVar3 + -1;
      bVar4 = piVar2 == (int *)0x0;
    }
    *(undefined1 *)(param_1 + 0x37) = 0;
    if (!bVar4) {
      if ((code *)piVar2[-2] == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*(code *)piVar2[-2])();
      }
    }
    fn_0014f480(auStack_50);
    fn_0014f480(auStack_70);
  }
  return param_1 + 0xf;
}



void fn_006d145c(undefined4 param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_a0 [59];
  undefined1 local_65;
  uint local_58 [2];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  fn_0013d40c(auStack_30);
  fn_0045f7f0(param_2,auStack_30);
  uVar1 = *(undefined1 *)(param_2 + 0x3b);
  piVar2 = (int *)fn_006d1330(param_1,auStack_30);
  if (piVar2 == (int *)0x0) {
    uVar5 = fn_0013d3e8(auStack_28,L"DynamicData");
    piVar2 = (int *)fn_006d1330(param_1,uVar5);
    fn_00170f54(auStack_28);
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
      fn_00170fa4(iVar3 + 0x28,auStack_30);
      *(undefined1 *)(iVar3 + 0x30) = uVar1;
    }
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 8))();
  }
  *param_3 = iVar3;
  puVar4 = (undefined4 *)fn_0014f1e0(auStack_50);
  *puVar4 = &DAT_00855a18;
  uVar5 = fn_0014f470();
  fn_0014f440(puVar4,uVar5,0);
  local_58[0] = 0;
  iVar3 = fn_0074a528(param_2,local_58);
  if (iVar3 != 0) {
    if ((uint)(*(int *)(*(int *)(param_2 + 8) + 0x10) - *(int *)(param_2 + 0xc)) < local_58[0]) {
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else {
      iVar3 = fn_004b72d8(param_2);
      fn_0015ef58(auStack_50,
                   *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) + *(int *)(param_2 + 0xc),
                   local_58[0],0xffffffff);
      uVar6 = *(int *)(param_2 + 0xc) + local_58[0];
      if (uVar6 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
        *(uint *)(param_2 + 0xc) = uVar6;
      }
    }
  }
  fn_004b72ec(auStack_a0,auStack_50);
  local_65 = *(undefined1 *)(param_2 + 0x3b);
  (**(code **)(*(int *)*param_3 + 0x1c))((int *)*param_3,auStack_a0);
  fn_004b7520(auStack_a0);
  fn_0014f480(auStack_50);
  fn_00170f54(auStack_30);
  return;
}



void fn_006d13b0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_68 [59];
  undefined1 local_2d;
  undefined4 local_24 [3];
  undefined1 auStack_18 [12];
  
  (**(code **)(*param_3 + 0xc))(auStack_18,param_3);
  fn_0045f6f0(param_2,auStack_18);
  fn_00170f54(auStack_18);
  fn_004b73b0(auStack_68);
  local_2d = *(undefined1 *)(param_2 + 0x3b);
  (**(code **)(*param_3 + 0x18))(param_3,auStack_68);
  iVar1 = fn_004b72d8(auStack_68);
  local_24[0] = *(undefined4 *)(iVar1 + 0x10);
  fn_0015ef4c(param_2,local_24,4);
  fn_0015ef4c(param_2,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10))
  ;
  fn_004b7520(auStack_68);
  return;
}


