#include "001c7924_001c804c.h"



void fn_001c804c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == -1) {
    return;
  }
  uVar1 = fn_0019d91c(param_1,param_2,0x616e696d,param_4,param_4);
  uVar2 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_3);
  fn_0011030c(param_1,uVar1,param_2,uVar2,0);
  return;
}



int fn_001c801c(int param_1)

{
  for (; 0x78 < param_1; param_1 = param_1 + -0xf0) {
  }
  for (; param_1 < -0x78; param_1 = param_1 + 0xf0) {
  }
  return (int)(char)param_1;
}



void fn_001c7f50(undefined1 *param_1,byte *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_8 [4];
  byte local_4 [4];
  
  pbVar4 = local_8;
  pbVar2 = local_8;
  if ((char)*param_2 < 0) {
    uVar5 = (int)(char)*param_2 + 0xf0U & 0xff;
  }
  else {
    uVar5 = (uint)*param_2;
  }
  local_8[0] = (byte)uVar5;
  if ((char)*param_3 < 0) {
    uVar1 = (int)(char)*param_3 + 0xf0U & 0xff;
  }
  else {
    uVar1 = (uint)*param_3;
  }
  local_4[0] = (byte)uVar1;
  if (!(uVar5 < uVar1 || uVar5 == uVar1)) {
    pbVar4 = local_4;
  }
  if (uVar5 < uVar1) {
    pbVar2 = local_4;
  }
  uVar5 = (uint)*pbVar4;
  iVar3 = *pbVar2 - uVar5;
  if (iVar3 == 0x78) {
    if (0xb3 < *pbVar2) goto LAB_001c7fdc;
  }
  else if (iVar3 < 0x78) {
    if (param_4 == 0) goto LAB_001c7fdc;
  }
  else if (param_4 != 0) {
LAB_001c7fdc:
    iVar3 = uVar5 + iVar3 / 2 + 0x78;
    goto joined_r0x001c7fec;
  }
  iVar3 = uVar5 + iVar3 / 2;
joined_r0x001c7fec:
  for (; 0x78 < iVar3; iVar3 = iVar3 + -0xf0) {
  }
  for (; iVar3 < -0x78; iVar3 = iVar3 + 0xf0) {
  }
  *param_1 = (char)iVar3;
  return;
}



void fn_001c7ea8(void)

{
  uint uVar1;
  
  uVar1 = fn_0044c928((char *)&DAT_005e0874);
  if ((((uVar1 & 0x80000000) == 0) ||
      ((((uVar1 & 0x3fc00) == 0x4400 && (99 < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xb4)))) ||
     (-1 < (int)uVar1)) {
    return;
  }
  fn_0015e590(uVar1,0x5e06a4);
  return;
}



void fn_001c7e78(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = &DAT_0081bb5c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}



void fn_001c7e38(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  uVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



void fn_001c7db8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(iVar1 + 0x15) != '\0') {
    if (param_2 == 0) {
      if (*(char *)(iVar1 + 0x14) == '\0') {
        return;
      }
      iVar3 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
      uVar4 = 0;
      *(int *)(iVar1 + 4) = (iVar3 - *(int *)(iVar1 + 0xc)) + *(int *)(iVar1 + 4);
    }
    else {
      if (*(char *)(iVar1 + 0x14) != '\0') {
        return;
      }
      uVar2 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
      uVar4 = 1;
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
    }
    *(undefined1 *)(iVar1 + 0x14) = uVar4;
  }
  return;
}



void fn_001c7d8c(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



undefined4 * fn_001c7c68(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)fn_00683780();
  uVar5 = 0;
  *puVar3 = &DAT_0081bab4;
  uVar6 = 0x3f800000;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  if (((DAT_008c62f8 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62f8), iVar4 != 0)) {
    DAT_008f9e20 = uVar6;
    DAT_008f9e24 = uVar6;
    DAT_008f9e28 = uVar6;
  }
  uVar2 = DAT_008f9e28;
  uVar1 = DAT_008f9e24;
  puVar3[0xe] = DAT_008f9e20;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = uVar2;
  puVar3[0x11] = uVar5;
  puVar3[0x12] = uVar5;
  puVar3[0x13] = uVar5;
  puVar3[0x14] = uVar6;
  puVar3[0x15] = uVar6;
  *(undefined1 *)(puVar3 + 0x16) = 0;
  *(undefined1 *)((int)puVar3 + 0x59) = 0;
  *(undefined1 *)((int)puVar3 + 0x5b) = 0;
  fn_00301f50(puVar3 + 0x17,0x80);
  return puVar3;
}



void fn_001c7c00(int *param_1)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float in_s2;
  
  fn_006a7fac();
  fVar2 = in_s2;
  fVar1 = in_s0;
  (**(code **)(*param_1 + 0x94))(param_1);
  fVar1 = fVar1 * in_s0;
  fVar2 = fVar2 * in_s0;
  param_1[0x11] = (int)fVar1;
  param_1[0x13] = (int)fVar2;
  (**(code **)(*param_1 + 0x40))(param_1,0);
  param_1[0x11] = (int)fVar1;
  param_1[0x12] = (int)fVar2;
  param_1[0x13] = (int)in_s2;
  return;
}



void fn_001c7b7c(int param_1,float *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float in_s2;
  
  if (param_3 != 0) {
    fVar2 = *param_2;
    bVar1 = fVar2 == 0.0;
    if (bVar1) {
      in_s2 = param_2[2];
    }
    if (!bVar1 || (!bVar1 || in_s2 != 0.0)) {
      fn_00525bd0();
      *(float *)(param_1 + 0x30) = fVar2 * 0.024543693;
    }
  }
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + *param_2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + param_2[1];
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + param_2[2];
  return;
}



undefined4 fn_001c7924(int *param_1,float *param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_48;
  float fStack_44;
  float local_40;
  
  fVar3 = in_s0;
  (**(code **)(*param_1 + 0x94))(param_1);
  iVar1 = fn_006a80b8(param_1,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  fVar5 = *param_2;
  fVar11 = (float)param_1[8];
  fVar12 = (float)param_1[9];
  fVar13 = (float)param_1[10];
  fVar7 = fVar5 - fVar11;
  uVar9 = CONCAT44(param_2[1] - fVar12,param_2[2] - fVar13);
  fVar8 = fVar7;
  fn_00525bd0();
  fVar10 = 0.024543693;
  fVar7 = fVar7 * 0.024543693;
  fVar2 = fVar7 - (float)param_1[0xc];
  fn_005df8f8();
  fVar2 = ABS(fVar2);
  iVar1 = fn_001c7160(param_1);
  if (iVar1 == 0) {
    fn_006a7fac(param_1);
    fVar4 = fVar5 * in_s0;
    fVar6 = 0.0;
    fVar7 = *param_2 - (fVar11 + fVar7 * in_s0);
    fVar5 = param_2[1] - (fVar12 + fVar3 * in_s0);
    if ((fVar7 == 0.0 && (fVar7 == 0.0 && fVar5 == 0.0)) && param_2[2] - (fVar13 + fVar4) == 0.0) {
      return 1;
    }
    fn_00525bd0();
    fVar3 = fVar7 * fVar10 - (float)param_1[0xc];
    fn_005df8f8();
    if (fVar2 <= ABS(fVar3)) {
      fVar3 = *param_2 - (float)param_1[8];
      fVar5 = param_2[1] - (float)param_1[9];
      if ((fVar3 != fVar6 || (fVar3 != fVar6 || fVar5 != fVar6)) ||
          param_2[2] - (float)param_1[10] != fVar6) {
        fn_00525bd0();
        param_1[0xc] = (int)(fVar3 * fVar10);
      }
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 == 0) {
    fVar2 = 1.0;
    fVar7 = (float)((ulonglong)uVar9 >> 0x20);
    fVar3 = 1.0 / SQRT(fVar8 * fVar8 + fVar7 * fVar7 + (float)uVar9 * (float)uVar9);
    fVar7 = fVar7 * fVar3;
    fn_006a7fac(param_1);
    fVar2 = fVar2 / SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5);
    fVar8 = fVar3 * fVar2;
    fVar7 = fVar7 * fVar2;
    fVar5 = fVar5 * fVar2;
    (**(code **)(*param_1 + 0x94))(param_1);
    local_48 = fVar8 * fVar3;
    fStack_44 = fVar7 * fVar3;
    local_40 = fVar5 * fVar3;
    (**(code **)(*param_1 + 0x38))(param_1,&local_48,0);
  }
  else {
    (**(code **)(*param_1 + 0x34))(param_1);
  }
  return 0;
}


