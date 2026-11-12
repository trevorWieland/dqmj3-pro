#include "0049c724_0049cef8b.h"



void fn_0049cef8(int param_1)

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
  
  if (*(char *)(param_1 + 800) != '\0') {
    local_2c = (code *)0x80010004;
    uVar1 = fn_004b8d4c(auStack_38,&local_2c);
    fn_0049c724(param_1,uVar1);
    return;
  }
  if (*(char *)(param_1 + 0xf8) == '\x02') {
    local_34[0] = 1;
    iVar2 = fn_006d3b54(param_1 + 0x160,local_34);
    if (iVar2 != 0) {
      iVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 0x198));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0xc) =
           *(undefined4 *)(iVar2 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x198);
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
      uVar4 = fn_006d3b9c(param_1 + 0x2f8);
      *(undefined8 *)(iVar2 + 0x58) = uVar4;
      fn_004b4218(&local_20);
      *(undefined4 *)(iVar2 + 0x50) = local_20;
      *(undefined4 *)(iVar2 + 0x54) = uStack_1c;
      local_2c = fn_0049d3e0;
      uStack_28 = 0;
      local_24 = &DAT_0049d038;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
  }
  local_18 = *(undefined4 *)(param_1 + 0x160);
  uStack_14 = *(undefined4 *)(param_1 + 0x164);
  uStack_10 = *(undefined4 *)(param_1 + 0x168);
  fn_0049c724(param_1,&local_18);
  return;
}



void fn_0049cdf8(int param_1)

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
  
  piVar1 = *(int **)(param_1 + 0x30c);
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
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x02') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x28) =
         *(undefined4 *)(param_1 + 0x310);
    uVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 0x198));
    fn_0046b1a0(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78));
    local_1c = fn_0049c874;
    uStack_18 = 0;
    local_14 = &DAT_0049cef0;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (*(int *)(param_1 + 0x310) != 0) {
    fn_004b9d74();
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  local_20 = *(undefined **)(param_1 + 0xc0);
  local_1c = *(code **)(param_1 + 0xc4);
  uStack_18 = *(undefined4 *)(param_1 + 200);
  fn_0049c724(param_1,&local_20);
  return;
}



void fn_0049cd6c(int param_1)

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
  
  uVar4 = fn_00156284(param_1 + 0x6c);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (bVar3 && iVar2 != 0) {
    local_24 = fn_0049d040;
    uStack_20 = 0;
    local_1c = &DAT_0049cdf0;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  local_c = 0x8001000a;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_0049c724(param_1,uVar1);
  return;
}


