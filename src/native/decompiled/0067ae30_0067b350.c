#include "0067ae30_0067b350.h"



void fn_0067b350(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  return;
}



void fn_0067b328(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



void fn_0067b2cc(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067b2a4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  *(undefined1 *)(piVar1 + 0x152) = *(undefined1 *)(param_1 + 100);
  fn_00124914(piVar1 + 0x153,param_1 + 0x68);
  piVar1[0x157] = *(int *)(param_1 + 0x78);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x1c);
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



void fn_0067b278(int param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 100) = *param_2;
  fn_00124914(param_1 + 0x68,param_2 + 4);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x14);
  return;
}



void fn_0067b22c(int param_1)

{
  undefined *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined1 *)(param_1 + 100) = 1;
  local_1c = 0;
  local_14 = 0x14;
  local_20 = &DAT_00852a4c;
  local_18 = 0;
  fn_00124914(param_1 + 0x68,&local_20);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



void fn_0067b11c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x164,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandRankingUploadCommonDat_008c71d1);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a750;
    fn_0067b540(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return;
}



void fn_0067b0a4(int *param_1,undefined4 param_2,uint param_3)

{
  undefined1 auStack_110 [256];
  
  fn_0066e458(DAT_00898840,2,0);
  fn_00158f6c(auStack_110,0xff);
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  fn_00301a9c(auStack_110,param_2,param_3);
  fn_0067b54c(param_1[0x26],auStack_110);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067b024(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067affc(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar2 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar4 = *(int *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar6 = *(int *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x74);
  iVar8 = *(int *)(param_1 + 0x78);
  iVar9 = *(int *)(param_1 + 0x7c);
  iVar10 = *(int *)(param_1 + 0x80);
  piVar2[0x11e] = *(int *)(param_1 + 100);
  piVar2[0x11f] = iVar4;
  piVar2[0x120] = iVar5;
  piVar2[0x121] = iVar6;
  piVar2[0x122] = iVar7;
  piVar2[0x123] = iVar8;
  piVar2[0x124] = iVar9;
  piVar2[0x125] = iVar10;
  piVar1 = piVar2 + 0x1e;
  piVar2[0x1d] = 0;
  *piVar1 = 0;
  *(undefined1 *)(piVar2 + 0x1f) = 0;
  if ((*(byte *)(piVar2 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar2 + 0x30))(piVar2);
    return 1;
  }
  fn_00673ce8(piVar2,0xf,iVar4,iVar5,unaff_r4);
  piVar2[0x1d] = 0;
  *piVar1 = 0;
  *(undefined1 *)(piVar2 + 0x1f) = 0;
  if ((*(byte *)(piVar2 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar2,2);
    piVar2[0x1d] = 0;
    *piVar1 = 0;
    *(undefined1 *)(piVar2 + 0x1f) = 0;
    uVar3 = 0;
    if ((*(byte *)(piVar2 + 0x13) & 1) == 0) {
      (**(code **)(*piVar2 + 0x30))(piVar2,1);
      uVar3 = 1;
    }
  }
  else {
    (**(code **)(*piVar2 + 0x30))(piVar2,2);
    uVar3 = 1;
  }
  return uVar3;
}



void fn_0067afc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x80) = 0;
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
  return;
}



void fn_0067af94(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



void fn_0067af4c(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067ae30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_00898840;
  iVar2 = fn_0066eb80(DAT_00898840,0xb);
  uVar3 = fn_0066eb80(iVar1,3);
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      return iVar4 != 2;
    }
    if ((*(byte *)(iVar2 + 0x4c) & 0xe) == 0) {
      return true;
    }
    *(undefined4 *)(param_1 + 0x44) = 2;
    return true;
  }
  if (*(int *)(iVar1 + 0x34) == 1) {
    if (*(char *)(iVar1 + 0x4d) == '\0') {
      fn_00673ff8(iVar2);
      goto LAB_0067af10;
    }
  }
  else if ((*(char *)(iVar1 + 0x4c) == '\0') && (*(char *)(iVar1 + 0x4d) == '\0')) {
    fn_0066add4(uVar3,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
    goto LAB_0067af10;
  }
  fn_0067412c(iVar2);
LAB_0067af10:
  *(undefined4 *)(param_1 + 0x44) = 1;
  return true;
}


