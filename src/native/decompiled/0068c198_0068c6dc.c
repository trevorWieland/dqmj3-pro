#include "0068c198_0068c6dc.h"



void fn_0068c6dc(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_2f8 [20];
  undefined1 local_2e4 [72];
  undefined4 local_29c;
  undefined4 local_298;
  undefined1 local_294 [380];
  undefined1 auStack_118 [98];
  undefined1 auStack_b6 [14];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  char local_a1 [4];
  undefined1 local_9d;
  undefined1 auStack_98 [96];
  undefined1 auStack_38 [18];
  char local_26;
  
  if (*(int *)(*param_1 + 0x328) == 0) {
    return;
  }
  piVar6 = *(int **)(*(int *)(*param_1 + 0x328) + 4);
  iVar9 = piVar6[9];
  iVar10 = (piVar6[1] - *piVar6) / 0x14;
  iVar5 = iVar10 * 0x14 + (piVar6[4] - piVar6[3] >> 2) * 4;
  iVar7 = piVar6[6];
  iVar11 = piVar6[7];
  iVar8 = piVar6[10];
  *param_2 = 0x18;
  iVar7 = iVar5 + (iVar11 - iVar7 >> 2) * 4;
  param_2[1] = iVar10 * 0x14 + 0x18;
  param_2[2] = iVar5 + 0x18;
  param_2[3] = iVar7 + 0x18;
  param_2[4] = iVar7 + (iVar8 - iVar9 >> 2) * 4 + 0x18;
  uVar1 = fn_0068cc48(DAT_008977e8);
  param_2[5] = uVar1;
  iVar5 = 0x18;
  uVar2 = 0;
  iVar10 = piVar6[1] - *piVar6 >> 0x1f;
  if ((piVar6[1] - *piVar6) / 0x14 + iVar10 != iVar10) {
    do {
      puVar4 = (undefined4 *)((int)param_2 + iVar5);
      puVar3 = (undefined4 *)(*piVar6 + uVar2 * 0x14);
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 0x14;
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar4[4] = puVar3[4];
    } while (uVar2 < (uint)((piVar6[1] - *piVar6) / 0x14));
  }
  uVar2 = 0;
  if (piVar6[4] - piVar6[3] >> 2 != 0) {
    do {
      puVar3 = (undefined4 *)((int)param_2 + iVar5);
      iVar10 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 4;
      *puVar3 = *(undefined4 *)(piVar6[3] + iVar10);
    } while (uVar2 < (uint)(piVar6[4] - piVar6[3] >> 2));
  }
  uVar2 = 0;
  if (piVar6[7] - piVar6[6] >> 2 != 0) {
    do {
      puVar3 = (undefined4 *)((int)param_2 + iVar5);
      iVar10 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 4;
      *puVar3 = *(undefined4 *)(piVar6[6] + iVar10);
    } while (uVar2 < (uint)(piVar6[7] - piVar6[6] >> 2));
  }
  uVar2 = 0;
  if (piVar6[10] - piVar6[9] >> 2 != 0) {
    do {
      puVar3 = (undefined4 *)((int)param_2 + iVar5);
      iVar10 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 4;
      *puVar3 = *(undefined4 *)(piVar6[9] + iVar10);
    } while (uVar2 < (uint)(piVar6[10] - piVar6[9] >> 2));
  }
  local_a8 = 0x5a;
  local_a7 = 0xff;
  local_a6 = 1;
  local_a5 = 1;
  iVar10 = 0;
  do {
    fn_001003e0(auStack_118 + iVar10 * 0x18,&DAT_008c7328);
    local_a1[iVar10] = '\0';
    *(undefined4 *)(local_294 + iVar10 * 0x60 + -4) = 0;
    local_294[iVar10 * 0x60] = 0;
    iVar7 = iVar10 + 1;
    iVar10 = iVar10 * 0x12;
    local_2e4[iVar10] = 0;
    local_2e4[iVar10 + 6] = 0;
    local_2e4[iVar10 + 0xc] = 0;
    iVar10 = iVar7;
  } while (iVar7 < 4);
  fn_0011a604(auStack_b6);
  local_a2 = 0;
  local_29c = 0;
  local_9d = 0;
  local_a4 = 1;
  local_a3 = 0;
  fn_0068c6c4(DAT_008977e8,auStack_2f8);
  local_26 = local_a1[0];
  if (local_a1[0] == '\0') {
    fn_00176fb0(auStack_98,&local_298);
  }
  else {
    fn_0017821c(auStack_98,&local_298,0x60);
  }
  fn_0017821c(auStack_38,local_2e4,0x12);
  fn_00301a9c((int)param_2 + iVar5,auStack_98,0x74);
  return;
}



void fn_0068c6c4(int *param_1,undefined4 param_2)

{
  fn_0017821c(param_2,*param_1 + 100,0x25d);
  return;
}



void fn_0068c63c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *param_1;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00267ec0();
  }
  iVar1 = *(int *)(iVar3 + 0x300);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0012219c(iVar1);
      fn_002feef8();
    }
    *(int *)(iVar3 + 0x300) = iVar2;
  }
  fn_00266874(**(undefined4 **)(iVar3 + 0x300),*(undefined4 *)(iVar3 + 0x2d8),param_3,param_4,
               unaff_r4,in_lr);
  return;
}



void fn_0068c5a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar3 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar3 + 0x24),uVar2);
  iVar3 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
  iVar3 = fn_00163868(6);
  *(int *)(param_1 + 0x58) = (iVar3 + 5) * 0x1e;
  uVar4 = *(uint *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    piVar5 = &DAT_008cd57c;
    uVar1 = DAT_008cd580 - DAT_008cd57c;
  }
  else {
    piVar5 = &DAT_008cd588;
    uVar1 = DAT_008cd58c - DAT_008cd588;
  }
  if (uVar1 <= uVar4) {
    fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,uVar4,uVar1,unaff_r4,unaff_r5,unaff_r6);
  }
  *(undefined1 *)(*piVar5 + uVar4) = 0;
  return;
}



bool fn_0068c528(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_0068c694(DAT_008977e8);
  iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
  bVar3 = iVar2 == 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  return bVar3 && iVar2 == 0;
}



int fn_0068c408(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[1] = (int)piVar2;
  }
  uVar3 = fn_0068eb30(DAT_008977e8);
  uVar3 = fn_002653b0(uVar3,param_2);
  iVar1 = fn_0069ee40(param_1[1],uVar3,0);
  if (iVar1 != 0) {
    *(char *)((int)param_1 + 0x53) = (char)param_2;
    param_1[0x12] = 0x41700000;
    param_1[0xf] = 0;
    param_1[0x10] = 0x40a00000;
    param_1[0x11] = 0;
  }
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  iVar4 = fn_00163868(6);
  param_1[0x16] = (iVar4 + 5) * 0x1e;
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return iVar1;
}



void fn_0068c384(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(param_1[1]);
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_001969a4(*(undefined4 *)(iVar2 + 0x24),uVar1);
  iVar2 = (**(code **)(*param_1 + 0x44))(param_1,0x9c50,1);
  if (iVar2 == -1) {
    return;
  }
  uVar1 = fn_0068c7e8(DAT_008977e8);
  fn_0023dd30(uVar1,iVar2);
  return;
}



int fn_0068c2e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x250) = 0x5a;
  *(undefined1 *)(param_1 + 0x251) = 0xff;
  *(undefined1 *)(param_1 + 0x252) = 1;
  *(undefined1 *)(param_1 + 0x253) = 1;
  iVar2 = 0;
  do {
    fn_001003e0(param_1 + iVar2 * 0x18 + 0x1e0,&DAT_008c7328);
    *(undefined1 *)(param_1 + iVar2 + 599) = 0;
    iVar1 = param_1 + iVar2 * 0x60;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined1 *)(iVar1 + 100) = 0;
    iVar1 = iVar2 + 1;
    iVar2 = param_1 + iVar2 * 0x12;
    *(undefined1 *)(iVar2 + 0x14) = 0;
    *(undefined1 *)(iVar2 + 0x1a) = 0;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    iVar2 = iVar1;
  } while (iVar1 < 4);
  fn_0011a604(param_1 + 0x242);
  *(undefined1 *)(param_1 + 0x256) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x25b) = 0;
  *(undefined1 *)(param_1 + 0x254) = 1;
  *(undefined1 *)(param_1 + 0x255) = 0;
  return param_1;
}



void fn_0068c198(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00851160;
  if (param_1[0x1b] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x1b]);
    param_1[0x1b] = 0xffffffff;
  }
  if (param_1[0x1c] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x1c]);
    param_1[0x1c] = 0xffffffff;
  }
  if (param_1[0x1d] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x1d]);
    param_1[0x1d] = 0xffffffff;
  }
  if (param_1[0x1e] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x1e]);
    param_1[0x1e] = 0xffffffff;
  }
  uVar2 = param_1[0x18];
  uVar3 = uVar2;
  if ((uint)param_1[0x19] < uVar2) {
    do {
      uVar3 = uVar3 + 2;
    } while (uVar3 != param_1[0x19]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x1a] - uVar2) >> 1,0);
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))();
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))();
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  fn_001cccdc(param_1);
  return;
}


