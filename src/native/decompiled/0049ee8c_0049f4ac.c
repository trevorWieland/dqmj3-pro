#include "0049ee8c_0049f4ac.h"



void fn_0049f18c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a0) + 4);
  uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x20) + 0xc);
  if (((*(int *)(param_1 + 0x2b0) != 0) && (*(int *)(param_1 + 0xb8) == 0)) &&
     (*(char *)(param_1 + 0x50) == '\0')) {
    local_2c = param_1;
    fn_0045616c(param_1 + 0x40,fn_001be628,&local_2c,1);
    local_30 = (undefined4 *)(param_1 + 0xb8);
    iVar2 = fn_0046ca3c(*(undefined4 *)(*(int *)(iVar4 + 0x18) + 0x18),param_1 + 0x40,uVar5,
                         *(undefined4 *)(param_1 + 0x2b0));
    if (iVar2 == 0) {
      local_30 = (undefined4 *)0x8001000d;
      uVar5 = fn_004b8d4c(&local_28,&local_30);
      fn_004b8d90(param_1 + 0x228,uVar5);
      *(undefined1 *)(param_1 + 0x3a) = 5;
      fn_004b2f04(param_1);
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1bc);
  bVar6 = uVar3 == 0;
  if (bVar6) {
    uVar3 = (uint)*(byte *)(param_1 + 0xd8);
  }
  if (bVar6 && uVar3 == 0) {
    local_28 = param_1;
    fn_0045616c(param_1 + 200,fn_001be628,&local_28,1);
    local_24 = *(undefined4 *)(param_1 + 0x2b4);
    local_30 = local_20;
    local_20[0] = *(undefined4 *)(param_1 + 0x2b0);
    local_2c = param_1 + 0x1a8;
    iVar4 = fn_004abf60(*(int *)(iVar4 + 0x1c) + 0x10,param_1 + 200,&DAT_008b6881,&local_24);
    if (iVar4 == 0) {
      local_30 = (undefined4 *)0x8001000d;
      uVar5 = fn_004b8d4c(&local_24,&local_30);
      fn_004b8d90(param_1 + 0x228,uVar5);
      *(undefined1 *)(param_1 + 0x3a) = 5;
      fn_004b2f04(param_1);
      return;
    }
  }
  bVar6 = *(char *)(param_1 + 0x50) != '\x01';
  cVar1 = '\x01';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0xd8);
  }
  if (bVar6 && cVar1 != '\x01') {
    local_24 = 0x8001000d;
    uVar5 = fn_004b8d4c(&local_30,&local_24);
    fn_004b8d90(param_1 + 0x228,uVar5);
    *(undefined1 *)(param_1 + 0x3a) = 5;
    fn_004b2f04(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x3a) = 2;
  fn_004b2f0c(param_1);
  return;
}



void fn_0049f038(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_30 [4];
  char local_2c;
  undefined4 local_24 [3];
  undefined1 local_18 [4];
  int local_14;
  
  piVar1 = *(int **)(param_1 + 0x2b8);
  if (piVar1 != (int *)0x0) {
    puVar5 = (uint *)(piVar1 + 1);
    do {
      uVar4 = *puVar5 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar7);
    *puVar5 = uVar4;
    bVar7 = uVar4 == 0;
    if (bVar7) {
      uVar4 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar7 && uVar4 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  local_18[0] = 1;
  iVar2 = fn_006d3b54(param_1 + 0x228,local_18);
  if (iVar2 != 0) {
    fn_004baf50(*(undefined4 *)(param_1 + 0xc0));
    iVar2 = *(int *)(param_1 + 0xc0);
    iVar6 = *(int *)(param_1 + 0xc4);
    fn_004bb1c4(auStack_30);
    fn_004bb3d0(iVar2,auStack_30);
    if (((*(char *)(iVar2 + 4) == '\0') &&
        (fn_004bad60(auStack_30,&local_14,4,1), local_2c == '\0')) && (local_14 == iVar6 + 1)) {
      fn_004bb288(auStack_30);
    }
    else {
      fn_004bb288(auStack_30);
      local_24[0] = 0x8005000a;
      uVar3 = fn_004b8d4c(auStack_30,local_24);
      fn_004b8d90(param_1 + 0x228,uVar3);
    }
    piVar1 = *(int **)(param_1 + 0x1a0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x8c))(piVar1,*(int *)(param_1 + 0xb8) + 0x34);
    }
  }
  *(undefined1 *)(param_1 + 0x3a) = 5;
  fn_004b2f04(param_1);
  return;
}



void fn_0049ee8c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int iStack_50;
  int local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [28];
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    local_54 = 0x80050003;
    uVar5 = fn_004b8d4c(&local_60,&local_54);
    fn_004b8d90(param_1 + 0x228,uVar5);
    *(undefined1 *)(param_1 + 0x3a) = 5;
    fn_004b2f04(param_1);
    return;
  }
  uVar5 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 4) + 0x20) + 0x24) + 0x18);
  fn_0049f350(param_1);
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 4))();
  }
  iVar2 = fn_0015ecdc(0x18);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_004bb1c4();
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  fn_004b4c44(auStack_30);
  fn_0049ed6c(param_1,auStack_30);
  local_48[0] = param_1;
  fn_0045616c(param_1 + 0x140,fn_0049f4ac,local_48,0);
  local_38 = *(undefined4 *)(param_1 + 0x2a8);
  uStack_34 = *(undefined4 *)(param_1 + 0x2ac);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 8);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8);
  local_58 = fn_004b4164(&local_38);
  local_5c = param_1 + 0x1a4;
  local_60 = auStack_30;
  iStack_50 = param_1 + 0x2b8;
  local_54 = 0;
  iVar2 = fn_004814e8(uVar5,param_1 + 0x140,uVar6,uVar3);
  if (iVar2 == 0) {
    local_54 = 0x8001000d;
    uVar5 = fn_004b8d4c(&local_60,&local_54);
    fn_004b8d90(param_1 + 0x228,uVar5);
    *(undefined1 *)(param_1 + 0x3a) = 4;
    fn_004b2e60(param_1);
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0x2b8) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
    *(undefined1 *)(param_1 + 0x3a) = 4;
    fn_004b2f0c(param_1);
  }
  fn_00786480(auStack_30);
  return;
}



void fn_0049f4ac(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar5 = *param_2;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (*(char *)(param_1 + 0x10) == '\x02') {
    iVar2 = *(int *)(iVar5 + 0x1a0);
    iVar1 = *(int *)(iVar5 + 0x1a4);
    *(int *)(iVar2 + 0x90) = iVar1;
    *(int *)(iVar1 + 0x74) = iVar2;
    (**(code **)(**(int **)(iVar2 + 0x90) + 0x5c))
              (auStack_20,*(int **)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x70));
    fn_004b9c58(*(undefined4 *)(iVar5 + 0x1a4),*(undefined4 *)(iVar5 + 0x2b0));
    fn_004b9c58(*(undefined4 *)(iVar5 + 0x1a0),*(undefined4 *)(iVar5 + 0x2b0));
    fn_004b9cb4(*(undefined4 *)(iVar5 + 0x1a0),*(undefined4 *)(*(int *)(iVar5 + 0x1a4) + 0x78));
  }
  else {
    local_14 = 0x80050001;
    uVar4 = fn_004b8d4c(auStack_20,&local_14);
    fn_004b8d90(iVar5 + 0x228,uVar4);
  }
  fn_004b2fe4(iVar5);
                    /* WARNING: Could not recover jumptable at 0x0049f524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_0049f350(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined1 auStack_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 4);
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
  }
  iVar1 = fn_0015ecdc(0x18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004bb1c4();
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  iVar5 = *(int *)(iVar5 + 0x18);
  iVar6 = *(int *)(param_1 + 0xb8);
  iVar1 = *(int *)(iVar5 + 8);
  fn_004bb2f0(uVar2,iVar6 + 0xc);
  uVar3 = fn_004ba724(0xffffffff);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  fn_004bb1c4(auStack_58);
  local_20 = *(undefined4 *)(iVar5 + 0x1c);
  fn_004baf64(auStack_58,&local_20,4,1);
  if (iVar1 == 0) {
    local_1c = 0;
    fn_004baf64(auStack_58,&local_1c,4,1);
  }
  else {
    local_1c = *(undefined4 *)(iVar1 + 0x10);
    fn_004baf64(auStack_58,&local_1c,4,1);
  }
  fn_004baf64(auStack_58,(undefined4 *)(param_1 + 0xc4),4,1);
  puVar4 = (undefined4 *)fn_0014f1e0(auStack_40);
  *puVar4 = &DAT_00855a18;
  uVar3 = fn_0014f470();
  fn_0014f440(puVar4,uVar3,0);
  fn_00487100(*(undefined4 *)(iVar5 + 0x14),local_50,auStack_40,iVar6 + 0x34);
  fn_004bb2f0(uVar2,auStack_40);
  fn_0014f480(auStack_40);
  fn_004bb288(auStack_58);
  return;
}


