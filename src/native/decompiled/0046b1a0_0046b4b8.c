#include "0046b1a0_0046b4b8.h"



/* WARNING: Removing unreachable block (ram,0x0046b580) */

void fn_0046b4b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[0x1a]);
  if (iVar1 == 0) {
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[0x1a]);
    if (iVar1 != 0) {
      uStack_40 = 0x80010004;
      puStack_3c = &DAT_007dba44;
      uStack_38 = 0x71;
      fn_00455e8c(iVar1,3,&uStack_40,1);
    }
  }
  else {
    local_34 = &DAT_80010001;
    local_30 = &DAT_007dba44;
    uStack_2c = 0x71;
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
    if (iVar1 == 0) {
      fn_004b301c(param_1,1);
      param_1[9] = 0x10;
      return;
    }
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[0x1a]);
    if (iVar1 != 0) {
      puStack_28 = local_34;
      puStack_24 = local_30;
      uStack_20 = uStack_2c;
      if ((int)local_34 < 0) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
      fn_00455e8c(iVar1,uVar2,&puStack_28,1);
    }
  }
  fn_004b301c(param_1,5);
  return;
}



undefined4 * fn_0046b3fc(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &DAT_00852f6c;
  piVar1 = (int *)param_1[2];
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
    param_1[2] = 0;
  }
  piVar1 = (int *)fn_0045c8f4();
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
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}



undefined4 * fn_0046b318(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  param_1[2] = 0;
  *param_1 = &DAT_00852f6c;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = param_2;
  iVar2 = fn_0045c8f4();
  if (iVar2 == 0) {
    fn_004b3b48();
    (**(code **)(DAT_008e778c + 8))();
    iVar2 = fn_0045c8f4();
    if (iVar2 == 0) {
      iVar2 = fn_0015ecdc(0x60);
      if (iVar2 != 0) {
        fn_0045cbd8();
      }
    }
    else {
      iVar2 = fn_0045c8f4();
      piVar3 = (int *)(iVar2 + 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
    }
    (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  }
  else {
    iVar2 = fn_0045c8f4();
    piVar3 = (int *)(iVar2 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  return param_1;
}



undefined4 fn_0046b2bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*param_1 + 0x1c))(param_1);
  fn_0046b1a0(param_1,0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_0046b240(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (param_2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  fn_0046b1a0(param_1);
  (**(code **)(*param_1 + 0x1c))(param_1);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_0046b1a0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  (**(code **)(*param_1 + 0x20))(param_1);
  piVar1 = (int *)param_1[2];
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
    param_1[2] = 0;
  }
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 4);
    param_1[2] = param_2;
    do {
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


