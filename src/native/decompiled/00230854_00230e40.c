#include "00230854_00230e40.h"



void fn_00230e40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  default:
    uVar1 = 0x23;
    break;
  case 1:
    uVar1 = 8;
    break;
  case 2:
    uVar1 = 9;
    break;
  case 3:
    uVar1 = 0xb;
    break;
  case 4:
    uVar1 = 10;
    break;
  case 5:
    uVar1 = 0xd;
    break;
  case 6:
    uVar1 = 0xe;
    break;
  case 7:
    uVar1 = 0xc;
    break;
  case 8:
    uVar1 = 0x2d;
    break;
  case 9:
    uVar1 = 0xf;
  }
  fn_00192cb4(DAT_00897800,uVar1,param_2);
  return;
}



void fn_00230e1c(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_0089820c,param_1,0);
  return;
}



void fn_00230de0(void)

{
  fn_0016ba34(DAT_00897800,DAT_008987ac,(char *)&DAT_00230dfc,0);
  return;
}



void fn_00230d70(undefined4 param_1)

{
  undefined1 auStack_88 [128];
  
  fn_00301f50(auStack_88,0x80);
  fn_001028d4(auStack_88,(char *)&DAT_00230dbc,param_1);
  fn_0016ba34(DAT_00897800,DAT_00898214,auStack_88,0);
  return;
}



void fn_00230ce8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_60 [68];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  iVar3 = *(int *)(DAT_00897804 + 8);
  iVar1 = fn_006b64bc(iVar3);
  if (iVar1 == 0) {
    fn_00168a24(param_1,*(undefined4 *)(iVar3 + 4),auStack_1c);
    return;
  }
  uVar2 = fn_006b621c(iVar3);
  fn_001f825c();
  fn_006619ec(auStack_60,uVar2);
  fn_0011ddb8();
  fn_00168a24(param_1,auStack_60,auStack_18);
  return;
}



void fn_00230c10(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  iVar2 = fn_00203ef8();
  if (iVar2 != 0) {
    iVar2 = fn_00163940(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_00203eb8(param_1), uVar1 = DAT_00898240, iVar2 - 1U < 0x21f)) {
      fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022ee60,iVar2);
      fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
      return;
    }
  }
  fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_00230cc4,0);
  return;
}



void fn_00230bcc(int param_1,undefined4 param_2)

{
  if (param_1 == 1) {
    fn_00192cb4(DAT_00897800,0x17,param_2);
    return;
  }
  if (param_1 == 2) {
    fn_00192cb4(DAT_00897800,0x18,param_2);
    return;
  }
  return;
}



int fn_00230b74(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    sVar1 = *param_1;
    if (sVar1 != 1) goto LAB_00230ba0;
    if (param_1[1] == 0x101) {
      return iVar2;
    }
    do {
      do {
        param_1 = param_1 + 2;
        sVar1 = *param_1;
      } while (sVar1 == 1);
LAB_00230ba0:
    } while (sVar1 == 2);
    if (sVar1 == 0 || sVar1 == 10) break;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void fn_00230b64(void)

{
  fn_0025fa24(DAT_00897800);
  return;
}



void fn_00230b14(int param_1)

{
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x84) + 4))();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 4))();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  fn_0025fa24(DAT_00897800);
  return;
}



void fn_00230af0(int param_1,undefined4 param_2)

{
  fn_00192cb4(DAT_00897800,(int)*(short *)(&DAT_007ce762 + param_1 * 2),param_2);
  return;
}



undefined4 fn_00230a84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  else if (param_1 == 1) {
    uVar1 = 0x21;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = 0x22;
  }
  uVar1 = fn_00192cb4(DAT_00897800,uVar1,param_2);
  return uVar1;
}



void fn_002309d8(undefined2 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
code_r0x00230a10:
    fn_0022ebb4();
    return;
  }
  if (param_3 == 100) {
    uVar5 = 1;
  }
  else {
    if (param_3 != 0x78) goto code_r0x00230a10;
    uVar5 = 2;
  }
  puVar1 = (undefined2 *)fn_00192cb4(DAT_00897800,0x25,0);
  uVar3 = 0;
  if (uVar5 != 0) {
    puVar2 = param_1 + -1;
    if ((uVar5 & 1) != 0) {
      *param_1 = *puVar1;
      puVar2 = param_1;
    }
    for (iVar4 = (int)uVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2[1] = *puVar1;
      puVar2 = puVar2 + 2;
      *puVar2 = *puVar1;
    }
    uVar3 = uVar5;
  }
  param_1[uVar3] = 0;
  return;
}



void fn_0023097c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00230854(&local_30,0x10,param_2,param_3);
  fn_00168a24(param_1,&local_30,auStack_10);
  return;
}



void fn_00230854(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [32];
  
  uVar1 = fn_00660e2c(param_3);
  uVar2 = 0xffffffff;
  switch(uVar1) {
  case 1:
    uVar2 = 0x15;
    break;
  case 2:
    uVar2 = 0x16;
    break;
  case 3:
    uVar2 = 0x35;
    break;
  case 4:
    uVar2 = 0x34;
    break;
  case 5:
    uVar2 = 0x33;
    break;
  case 6:
    uVar2 = 0x94;
    break;
  case 7:
    uVar2 = 0x95;
    break;
  case 8:
    uVar2 = 0x96;
    break;
  case 9:
    uVar2 = 0x97;
    break;
  case 10:
    uVar2 = 0x9d;
  }
  uVar2 = fn_00192cb4(DAT_00897800,uVar2,param_4);
  uVar1 = DAT_00898218;
  fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_0016a87c,param_3);
  uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_40,0);
  fn_0018a618(param_1,param_2,param_2 + -1,L"%ls%ls",uVar2,uVar1);
  return;
}


