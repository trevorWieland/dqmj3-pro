#include "004c5f04_004c6468.h"



undefined4 * fn_004c6468(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (undefined4 *)fn_004cfd3c();
    return puVar1;
  }
  if (DAT_008c0630 == (undefined4 *)0x0) {
    return &DAT_008c0630;
  }
  return DAT_008c0630;
}



undefined4 * fn_004c63d4(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (undefined4 *)fn_004d047c();
    return puVar1;
  }
  if (DAT_008c0630 == (undefined4 *)0x0) {
    return &DAT_008c0630;
  }
  return DAT_008c0630;
}



void fn_004c63a8(undefined4 *param_1)

{
  *param_1 = &DAT_00855ec0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_004c62f0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *local_30;
  undefined1 auStack_2c [32];
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x18);
  uVar1 = fn_006d1138(param_2);
  *(undefined1 *)(param_1 + 8) = uVar1;
  uVar1 = fn_006d1154(param_2);
  *(undefined1 *)(param_1 + 9) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x1c);
  local_30 = &DAT_00852db4;
  iVar2 = fn_004b637c(auStack_2c,param_2 + 4);
  *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(param_2 + 0xc);
  iVar2 = fn_004b637c(iVar2 + 0xc,param_2 + 0x10);
  *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(iVar2 + 10) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(iVar2 + 0xb) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(iVar2 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  fn_0045fbe8(&local_30);
  return;
}



int fn_004c61bc(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = &DAT_00855e88;
  iVar1 = fn_004d49a8(param_1 + 1);
  iVar1 = fn_0015f180(iVar1 + 0x14);
  iVar1 = fn_0015f180(iVar1 + 8);
  iVar1 = fn_0047687c(iVar1 + 8);
  iVar1 = fn_0047687c(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  fn_004f0c04(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  fn_004f0c04(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  if (iVar1 + 0x40 != 0) {
    uVar3 = 0;
    *(int *)(iVar1 + 0x38) = iVar1 + 0x40;
    *(undefined4 *)(iVar1 + 0x3c) = 0x14;
    do {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x38) + uVar3 * 0x20);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      fn_004f0b78(iVar1 + 0x24,iVar1 + 0x28,
                   *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x38) + uVar3 * 0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x14);
  }
  *(undefined **)(iVar1 + 0x10) = &DAT_00855e78;
  iVar1 = fn_00101a1c(iVar1 + 0x2c0,&LAB_004c5eb4,0x14,3);
  iVar1 = fn_004ca82c(iVar1 + 0x48);
  return iVar1 + -0x340;
}



int fn_004c6158(int param_1)

{
  int local_10;
  
  local_10 = -0x181c0001;
  local_10 = fn_004d44f4(param_1 + 4);
  if (-1 < local_10) {
    local_10 = fn_004d43ec(param_1 + 4);
    if (-1 < local_10) {
      fn_004c5b14(param_1);
      return 0;
    }
  }
  fn_004ed4f8(0x8000,0,&local_10);
  return local_10;
}



undefined1 * fn_004c6048(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_004ed464(param_1 + 0x18,param_3);
  if (*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0x7c) == 0) {
    return &DAT_e0a14827;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  while (puVar1 != (undefined4 *)(param_1 + 0x50)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + (int)puVar1);
    puVar1 = puVar2;
  }
  fn_004f0c04(param_1 + 0x4c);
  return (undefined1 *)0x0;
}



undefined1 * fn_004c601c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 *puVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  fn_004f01f4(param_1 + 0x410);
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_004ed464(param_1 + 0x18,param_3,param_3,param_4,unaff_r4,unaff_r5,unaff_r6);
  if (*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0x7c) == 0) {
    return &DAT_e0a14827;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  while (puVar1 != (undefined4 *)(param_1 + 0x50)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + (int)puVar1);
    puVar1 = puVar2;
  }
  fn_004f0c04(param_1 + 0x4c);
  return (undefined1 *)0x0;
}



void fn_004c5f84(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  local_20 = param_4;
  while (puVar1 != (undefined4 *)(param_1 + 0x50)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + (int)puVar1);
    puVar1 = puVar2;
  }
  fn_004f0c04(param_1 + 0x4c);
  if (0 < *(int *)(param_1 + 8)) {
    local_20 = -0x181c0001;
    local_20 = fn_004d44f4(param_1 + 4);
    if (local_20 < 0) {
      fn_004ed4f8(0x8000,0,&local_20);
    }
  }
  return;
}



int fn_004c5f48(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(DAT_008bf4f4 + 0x20);
  iVar2 = iVar1 + 0x78 + *(int *)(iVar1 + 0x7c) * 8;
  iVar3 = iVar2 + 8;
  bVar4 = iVar3 != iVar1 + 0x80;
  if (bVar4) {
    iVar2 = iVar1 + 0x88;
  }
  if (!bVar4 || iVar3 == iVar2) {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_004c5f18(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_008bf4f4 + 0x20);
  iVar2 = iVar1 + 0x80;
  if (iVar1 + *(int *)(iVar1 + 0x7c) * 8 + 0x80 == iVar2) {
    iVar2 = 0;
  }
  return iVar2;
}



void fn_004c5f04(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return;
}


