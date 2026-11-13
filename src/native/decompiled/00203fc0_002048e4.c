#include "00203fc0_002048e4.h"



void fn_002048e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 100) != -1;
  iVar1 = param_1;
  if (bVar3) {
    iVar1 = (int)*(char *)(param_1 + 0x34);
  }
  if (bVar3 && iVar1 != param_2) {
    uVar2 = fn_00156f24(DAT_008987bc);
    fn_00154a48(uVar2,param_2);
  }
  fn_0020573c(param_1,param_2);
  return;
}



void fn_00204620(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *param_1 = &DAT_0081c3ac;
  fn_002044a0(param_1);
  fn_002feef8(param_1);
  return;
}



void fn_002044a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_003a3f68();
      fn_002feef8();
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_002feef8(*(int *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_00338764();
      fn_002feef8();
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    do {
      piVar3 = (int *)(param_1 + iVar2 * 4 + 8);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      *piVar3 = 0;
    } while (iVar2 < 8);
  }
  return;
}



int fn_00204414(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((*(int *)(iVar1 + 8) == param_2) ||
       (iVar1 = *(int *)(param_1 + 0xc), *(int *)(iVar1 + 8) == param_2)) ||
      (iVar1 = *(int *)(param_1 + 0x10), *(int *)(iVar1 + 8) == param_2)) ||
     (((iVar1 = *(int *)(param_1 + 0x14), *(int *)(iVar1 + 8) == param_2 ||
       (iVar1 = *(int *)(param_1 + 0x18), *(int *)(iVar1 + 8) == param_2)) ||
      ((iVar1 = *(int *)(param_1 + 0x1c), *(int *)(iVar1 + 8) == param_2 ||
       (iVar1 = *(int *)(param_1 + 0x20), *(int *)(iVar1 + 8) == param_2)))))) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar1 + 8) != param_2) {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_00204404(int param_1)

{
  return *(undefined4 *)(param_1 + *(char *)(param_1 + 4) * 4 + 8);
}



int fn_00204250(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = &DAT_0081c39c;
  iVar6 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = fn_005ed66c();
  }
  param_1[1] = uVar7;
  uVar2 = DAT_008c7814;
  uVar1 = DAT_008c7810;
  uVar7 = DAT_008c780c;
  uVar8 = 0;
  param_1[2] = DAT_008c780c;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  uVar5 = DAT_008c7820;
  uVar4 = DAT_008c781c;
  uVar3 = DAT_008c7818;
  param_1[7] = DAT_008c7820;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[0xd] = uVar5;
  param_1[8] = uVar7;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar8;
    DAT_008f9e30 = uVar8;
    DAT_008f9e34 = uVar8;
  }
  uVar1 = DAT_008f9e34;
  uVar7 = DAT_008f9e30;
  param_1[0x14] = DAT_008f9e2c;
  param_1[0x15] = uVar7;
  param_1[0x16] = uVar1;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar8;
    DAT_008f9e30 = uVar8;
    DAT_008f9e34 = uVar8;
  }
  uVar1 = DAT_008f9e34;
  uVar7 = DAT_008f9e30;
  param_1[0x17] = DAT_008f9e2c;
  param_1[0x18] = uVar7;
  param_1[0x19] = uVar1;
  iVar6 = fn_0033ce74(param_1 + 0x1a);
  *(undefined4 *)(iVar6 + 0x20) = uVar8;
  *(undefined4 *)(iVar6 + 0x24) = uVar8;
  *(undefined4 *)(iVar6 + 0x28) = uVar8;
  *(undefined4 *)(iVar6 + 0x2c) = uVar8;
  return iVar6 + -0x68;
}



void fn_00204208(int param_1)

{
  int iVar1;
  
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_00545bc4();
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_00545bec();
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar1 + 0x294) = 0x3883126f;
  return;
}



void fn_002041b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  
  if (in_s0 != 0.0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(float *)(param_1 + 0x94) = in_s0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (in_s0 == 0.0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 0x44) = *param_2;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }
  return;
}



void fn_00204158(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  
  if (in_s0 != 0.0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(float *)(param_1 + 0x8c) = in_s0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (in_s0 == 0.0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



void fn_00203fd8(int param_1)

{
  float fVar1;
  float fVar2;
  
  fn_0033cd5c(param_1 + 0x68);
  fVar2 = 1.0;
  if (*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x8c)) {
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + 1.0;
  }
  if (*(float *)(param_1 + 0x90) < *(float *)(param_1 + 0x94)) {
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + 1.0;
  }
  fVar1 = fVar2;
  if (*(float *)(param_1 + 0x8c) != 0.0) {
    fVar1 = *(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x8c);
    if (1.0 <= fVar1) {
      fVar1 = fVar2;
    }
    else if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = (2.0 - fVar1) * fVar1;
  }
  *(float *)(param_1 + 0x40) =
       *(float *)(param_1 + 0x28) +
       (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x28)) * fVar1;
  *(float *)(param_1 + 0x38) =
       *(float *)(param_1 + 0x20) + (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x20)) * fVar1;
  *(float *)(param_1 + 0x3c) =
       *(float *)(param_1 + 0x24) + (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24)) * fVar1
  ;
  if (*(float *)(param_1 + 0x94) != 0.0) {
    fVar1 = *(float *)(param_1 + 0x90) / *(float *)(param_1 + 0x94);
    if (1.0 <= fVar1) {
    }
    else {
      fVar2 = fVar1;
      if (fVar1 <= 0.0) {
        fVar2 = 0.0;
      }
    }
    fVar2 = (2.0 - fVar2) * fVar2;
  }
  *(float *)(param_1 + 0x44) =
       *(float *)(param_1 + 0x2c) +
       (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x2c)) * fVar2;
  *(float *)(param_1 + 0x48) =
       *(float *)(param_1 + 0x30) +
       (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x30)) * fVar2;
  *(float *)(param_1 + 0x4c) =
       *(float *)(param_1 + 0x34) +
       (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x34)) * fVar2;
  return;
}



int fn_00203fc0(short param_1)

{
  return (int)(short)(param_1 + DAT_00892390);
}


