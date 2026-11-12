#include "004acbb4_004adbfc.h"



void fn_004adbfc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  fn_004b8d90(param_1 + 0x164);
  iVar1 = fn_006d3b8c(param_1 + 0x164);
  if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 400) + 0x78) != 0)) {
    fn_00456400(param_1 + 0x80);
    iVar1 = fn_00473638(*(int *)(param_1 + 400),param_1 + 0x80,
                         *(undefined4 *)(*(int *)(param_1 + 400) + 0x78));
    if (iVar1 != 0) {
      fn_004b2f0c(param_1);
      puVar2 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &DAT_00853500;
        puVar2[1] = &LAB_004ae178;
        puVar2[2] = 0;
        puVar2[3] = &DAT_004add48;
      }
      fn_00479b1c(param_1,param_1 + 0x80,puVar2);
      return;
    }
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      fn_004b8d90(*(int *)(param_1 + 0x2f8),param_1 + 0x164);
    }
    iVar3 = fn_006d3b8c(param_1 + 0x164);
    if (iVar3 == 0) {
      local_18 = *(undefined4 *)(param_1 + 0x164);
      uStack_14 = *(undefined4 *)(param_1 + 0x168);
      uStack_10 = *(undefined4 *)(param_1 + 0x16c);
      fn_00456044(iVar1,&local_18);
    }
    else {
      **(undefined4 **)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 400) + 0x78);
      local_18 = *(undefined4 *)(param_1 + 0x164);
      uStack_14 = *(undefined4 *)(param_1 + 0x168);
      uStack_10 = *(undefined4 *)(param_1 + 0x16c);
      fn_00456074(iVar1,&local_18);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_004adac8(int param_1,undefined4 param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 auStack_20 [12];
  
  puVar2 = (uint *)fn_0048cbf8(param_2,0);
  if (puVar2 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    cVar1 = *(char *)(param_1 + 4);
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
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 == '\0') {
    iVar4 = fn_0048cbf8(param_2,1);
    if (iVar4 == 0) {
      fn_00101a1c(auStack_20,fn_0013d40c,8,1);
      fn_0045f7f0(param_1,auStack_20);
      fn_00100414(auStack_20,fn_00170f54,8,1);
      return;
    }
    fn_0045f7f0(param_1,iVar4);
  }
  return;
}



void fn_004ada28(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  puVar1 = (uint *)fn_0048cbf8(param_2,0);
  if (puVar1 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar2 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    *puVar1 = 0;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc));
    *puVar1 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  return;
}



undefined4
fn_004ad4c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
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
  fn_0045f6f0(auStack_60,param_3);
  fn_0045f6f0(auStack_60,param_4);
  fn_0045f6f0(auStack_60,param_5);
  DAT_008e93b0 = &DAT_004adac4;
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



undefined4 fn_004ad1b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  fn_004ba7ac(auStack_60,4);
  fn_0045f6f0(auStack_60,param_4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e9360 = fn_004ad84c;
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



void fn_004ad84c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  
  puVar2 = &uStack_10;
  uStack_10 = param_4;
  puVar1 = (undefined1 *)fn_0048cbf8(param_2,0);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined4 *)puVar1;
  }
  fn_00454da8(param_1,puVar2);
  return;
}



undefined4
fn_004ace98(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,1);
  fn_0045f6f0(auStack_78,local_28);
  fn_0045f6f0(auStack_78,param_5);
  fn_0015ef4c(auStack_78,param_6,4);
  fn_0045f6f0(auStack_78,param_7);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e9354 = fn_004ad7e8;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



void fn_004ad7e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_18,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_18);
    return;
  }
  fn_0046d70c(param_1,iVar1);
  return;
}



int fn_004acca0(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  fn_00170fa4(param_1 + 0xc,param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  fn_004b8cb4(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  fn_0079dd48(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  fn_0079dd48(param_1 + 0x54,param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  fn_0079448c(param_1 + 0x6c,param_2 + 0x6c);
  fn_00794084(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(param_2 + 0x8a);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  fn_0079448c(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



int fn_004acbb4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00855624;
  puVar3 = (undefined4 *)param_1[0x25];
  for (puVar2 = (undefined4 *)param_1[0x24]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(param_1[0x24]);
  puVar3 = (undefined4 *)param_1[0x1f];
  for (puVar2 = (undefined4 *)param_1[0x1e]; puVar2 != puVar3; puVar2 = puVar2 + 10) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(param_1[0x1e]);
  puVar3 = (undefined4 *)param_1[0x1c];
  for (puVar2 = (undefined4 *)param_1[0x1b]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(param_1[0x1b]);
  param_1[0x13] = &DAT_00854bdc;
  iVar1 = fn_004b93dc(param_1 + 0x15);
  *(undefined **)(iVar1 + -0x1c) = &DAT_00854bdc;
  iVar1 = fn_004b93dc(iVar1 + -0x14);
  iVar1 = fn_004b8c5c(iVar1 + -0x28);
  iVar1 = fn_00170f54(iVar1 + -0xc);
  return iVar1 + -0xc;
}


