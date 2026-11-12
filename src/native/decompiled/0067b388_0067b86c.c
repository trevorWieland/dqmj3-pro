#include "0067b388_0067b86c.h"



void fn_0067b86c(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  uVar1 = param_2[9];
  *(undefined4 *)(param_1 + 0x84) = param_2[8];
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x8c) = param_3;
  return;
}



bool fn_0067b820(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    param_1[0x13] = *param_2;
    param_1[0x14] = iVar2;
    param_1[0x15] = iVar3;
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar5;
    param_1[0x18] = iVar6;
    param_1[0x11] = 2;
  }
  return iVar1 == 0;
}



void fn_0067b6d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)fn_00145b00(0x7c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringFindByPartici_008c72a4);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a884;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0x14;
    *(undefined **)(iVar2 + 0x1c) = &DAT_00852a4c;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    local_24 = 0;
    local_28 = &DAT_00852a4c;
    local_1c = 0x14;
    local_20 = 0;
    fn_00124914(iVar2 + 0x1c,&local_28);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    fn_0067beb0(puVar1);
  }
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  return;
}



void fn_0067b620(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  
  fn_0066e458(DAT_00898840,2,0);
  local_20 = 0x14;
  local_28 = 0;
  local_2c = &DAT_00852a4c;
  local_24 = 0;
  local_30 = 0;
  local_3c = 0;
  local_40 = &DAT_00852a4c;
  local_34 = 0x14;
  local_38 = 0;
  fn_00124914(&local_2c,&local_40);
  local_1c = (int *)0x0;
  local_30 = param_2;
  fn_00124914(&local_2c,param_3);
  local_1c = param_1 + 0x26;
  fn_0067bef8(param_1[0x2c],&local_30);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067b5a0(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067b578(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  fn_00301a9c(piVar1 + 0xcd,param_1 + 100,0xff,param_4,unaff_r4,in_lr);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0xc);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0067b54c(int param_1,undefined4 param_2)

{
  fn_00158f6c(param_1 + 100,0xff);
  fn_00301a9c(param_1 + 100,param_2,0xff);
  return;
}



void fn_0067b540(int param_1)

{
  fn_00158f6c(param_1 + 100,0xff);
  return;
}



void fn_0067b4f8(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067b470(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066d168(piVar1,param_1 + 100);
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}



void fn_0067b458(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  uVar1 = param_2[9];
  *(undefined4 *)(param_1 + 0x84) = param_2[8];
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  return;
}



void fn_0067b3b0(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067b388(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x7c);
  iVar8 = *(int *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0x84);
  piVar1[0x10e] = *(int *)(param_1 + 0x68);
  piVar1[0x10f] = iVar3;
  piVar1[0x110] = iVar4;
  piVar1[0x111] = iVar5;
  piVar1[0x112] = iVar6;
  piVar1[0x113] = iVar7;
  piVar1[0x114] = iVar8;
  piVar1[0x115] = iVar9;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0xd,iVar3,iVar4,unaff_r4);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}


