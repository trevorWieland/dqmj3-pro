#include "0023eef8_0023f468.h"



void fn_0023f468(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081d184;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x40000000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[6] = 0x3e4ccccd;
  param_1[7] = 0x41000000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  return;
}



void fn_0023f454(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



void fn_0023f3dc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  *(undefined4 *)(param_1 + 8) = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



void fn_0023f3bc(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x14);
  if (0.0 < *(float *)(param_1 + 0x14)) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x14) = fVar1;
  return;
}



void fn_0023f3a8(int param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



void fn_0023f0f4(int param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  float in_s5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_40 [2];
  float local_38 [9];
  
  fVar7 = 0.0;
  iVar1 = fn_006a99b0(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    in_s5 = 0.2;
  }
  if (iVar1 == 0) {
    in_s5 = *(float *)(param_1 + 0x28);
  }
  bVar5 = false;
  if (*param_3 == fVar7) {
    bVar5 = param_3[1] == fVar7;
  }
  if ((bVar5) && (param_3[2] == fVar7)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*(char *)(param_1 + 0x3f) == '\0') {
    fVar6 = in_s5;
    fn_0023eef8(param_1,uVar2 ^ 1);
    *(float *)(param_1 + 0x2c) = in_s5;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x2c);
  }
  if ((uVar2 ^ 1) == 0) {
    if (*(float *)(param_1 + 0x2c) <= fVar6) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = fVar7;
        DAT_008f9e30 = fVar7;
        DAT_008f9e34 = fVar7;
      }
      fVar4 = DAT_008f9e34;
      fVar6 = DAT_008f9e30;
      *(float *)(param_1 + 8) = DAT_008f9e2c;
      *(float *)(param_1 + 0xc) = fVar6;
      *(float *)(param_1 + 0x10) = fVar4;
    }
  }
  else {
    fVar6 = param_3[1];
    fVar4 = param_3[2];
    *(float *)(param_1 + 8) = *param_3;
    *(float *)(param_1 + 0xc) = fVar6;
    *(float *)(param_1 + 0x10) = fVar4;
  }
  fVar6 = *(float *)(param_1 + 0x2c);
  fVar4 = *(float *)(param_1 + 0x38);
  uVar8 = CONCAT44(*(float *)(param_1 + 8) * fVar6 * fVar4,fVar7);
  uVar9 = CONCAT44(*(float *)(param_1 + 0xc) * fVar6 * fVar4,
                   *(float *)(param_1 + 0x10) * fVar6 * fVar4);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    iVar1 = fn_006a9938(*(undefined4 *)(param_1 + 4));
    if ((iVar1 != 0) || (iVar1 = fn_006a99b0(*(undefined4 *)(param_1 + 4)), iVar1 != 0)) {
      fVar7 = *(float *)(param_1 + 0x14);
      if (*(float *)(param_1 + 0x14) <= (float)uVar8) {
        fVar7 = (float)uVar8;
      }
      *(float *)(param_1 + 0x14) = fVar7;
      iVar1 = fn_006a9960(*(undefined4 *)(param_1 + 4));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x44) = 4;
      }
      if ((float)uVar8 < *(float *)(param_1 + 0x14)) {
        iVar1 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x44) < 1) goto LAB_0023f2c8;
        *(float *)(param_1 + 0x14) = (float)uVar8;
        iVar1 = *(int *)(param_1 + 0x44) + -1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
    }
  }
  else {
    iVar1 = fn_006a9960();
    bVar5 = true;
    if (iVar1 != 0) {
      bVar5 = (float)uVar8 <= *(float *)(param_1 + 0x14);
    }
    if (!bVar5) {
      *(float *)(param_1 + 0x14) = (float)uVar8;
    }
  }
LAB_0023f2c8:
  fVar7 = (float)((ulonglong)uVar9 >> 0x20) + *(float *)(param_1 + 0x14);
  local_40[0] = (float)uVar8;
  if (*(char *)(param_1 + 0x3c) == '\0') {
LAB_0023f2ec:
    if (*(char *)(param_1 + 0x3d) != '\0') goto LAB_0023f300;
    fVar6 = -*(float *)(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x3d) == '\0') {
      fVar7 = -fVar7;
      goto LAB_0023f2ec;
    }
LAB_0023f300:
    fVar6 = local_40[0];
  }
  fVar4 = *(float *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (fVar4 != local_40[0]) {
      local_38[0] = fVar4 + fVar6;
      pfVar3 = local_38;
      if (fVar4 + fVar6 < local_40[0]) {
        pfVar3 = local_40;
      }
      *(float *)(param_1 + 0x14) = *pfVar3;
      goto LAB_0023f31c;
    }
    fVar4 = fVar4 * 0.9;
  }
  else {
    fVar4 = fVar4 + fVar6;
  }
  *(float *)(param_1 + 0x14) = fVar4;
LAB_0023f31c:
  fVar6 = -(*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x20));
  if (fVar6 < *(float *)(param_1 + 0x14)) {
    fVar6 = *(float *)(param_1 + 0x14);
  }
  *(float *)(param_1 + 0x14) = fVar6;
  *param_2 = (int)((ulonglong)uVar8 >> 0x20);
  param_2[1] = fVar7;
  param_2[2] = (int)uVar9;
  return;
}



void fn_0023f07c(int param_1)

{
  int iVar1;
  float *pfVar2;
  float in_s0;
  float local_10;
  float local_c;
  float local_8 [2];
  
  iVar1 = *(int *)(param_1 + 400);
  pfVar2 = &local_10;
  local_c = *(float *)(iVar1 + 0x1c) * *(float *)(iVar1 + 0x20);
  local_10 = -(*(float *)(iVar1 + 0x1c) * *(float *)(iVar1 + 0x20));
  local_8[0] = *(float *)(iVar1 + 0x14) + in_s0;
  if (local_c < local_10) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (local_10 <= local_8[0]) {
    pfVar2 = local_8;
  }
  if (local_c < *pfVar2) {
    pfVar2 = &local_c;
  }
  *(float *)(iVar1 + 0x14) = *pfVar2;
  return;
}



void fn_0023f068(int param_1)

{
  float in_s0;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    in_s0 = -in_s0;
  }
  *(float *)(param_1 + 0x14) = in_s0;
  return;
}



void fn_0023f060(int param_1)

{
  float in_s0;
  
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) != '\0') {
    in_s0 = -in_s0;
  }
  *(float *)(*(int *)(param_1 + 400) + 0x14) = in_s0;
  return;
}



void fn_0023f040(int param_1)

{
  float in_s0;
  
  if (in_s0 <= 0.0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(float *)(param_1 + 0x14) = in_s0;
  }
  return;
}



void fn_0023f02c(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x20) = in_s0;
  return;
}



void fn_0023eef8(int param_1,int param_2)

{
  float *pfVar1;
  float in_s0;
  float fVar2;
  float local_8;
  float local_4;
  
  local_8 = *(float *)(param_1 + 0x2c);
  if ((*(float *)(param_1 + 0x14) != 0.0) && (*(char *)(param_1 + 0x55) == '\0')) {
    local_8 = local_8 * *(float *)(param_1 + 0x48);
  }
  local_4 = *(float *)(param_1 + 0x28);
  if ((*(float *)(param_1 + 0x14) != 0.0) && (*(char *)(param_1 + 0x55) == '\0')) {
    local_4 = local_4 * *(float *)(param_1 + 0x48);
  }
  if (local_8 < in_s0) {
    local_8 = in_s0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x3e) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if ((local_8 < local_4) && (in_s0 < local_4)) {
      return;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x30);
    if (local_8 < fVar2) {
      local_8 = (*(float *)(param_1 + 0x34) + 1.0) * local_8;
      pfVar1 = (float *)(param_1 + 0x30);
      if (local_8 <= fVar2) {
        pfVar1 = &local_8;
      }
      if (fVar2 == *pfVar1) {
        *(undefined1 *)(param_1 + 0x3e) = 0;
      }
    }
  }
  return;
}


