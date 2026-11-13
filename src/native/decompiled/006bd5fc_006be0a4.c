#include "006bd5fc_006be0a4.h"



void fn_006be0a4(void)

{
  return;
}



void fn_006be07c(void)

{
  return;
}



void fn_006be058(void)

{
  return;
}



void fn_006be030(void)

{
  return;
}



void fn_006be01c(void)

{
  return;
}



void fn_006bdd6c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x30))(param_1);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar4 = ABS((float)param_1[9] * 40.743664);
  fVar3 = ABS((float)param_1[10] * 40.743664);
  for (fVar5 = ABS((float)param_1[8] * 40.743664); 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0)
  {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar3; fVar3 = fVar3 - 65536.0) {
  }
  uVar6 = VectorFloatToUnsigned(fVar5,3);
  uVar7 = VectorFloatToUnsigned(fVar4,3);
  uVar8 = VectorFloatToUnsigned(fVar3,3);
  uVar2 = uVar7 & 0xff;
  uVar1 = uVar6 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = uVar8 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar5 - fVar10) * (float)(&DAT_007d6f28)[uVar1 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar5 - fVar10) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar5 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if ((float)param_1[8] * 40.743664 < 0.0) {
    fVar9 = -fVar9;
  }
  fVar4 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar3 - fVar12) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar3 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar3 - fVar12) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if ((float)param_1[9] * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  if ((float)param_1[10] * 40.743664 < 0.0) {
    fVar4 = -fVar4;
  }
  local_40 = fVar3 * local_18;
  local_30 = fVar4 * local_18;
  local_1c = fVar9 * local_18;
  local_18 = fVar10 * local_18;
  local_20 = -fVar5;
  local_3c = fVar9 * fVar3 * fVar5 - fVar10 * fVar4;
  local_28 = fVar10 * fVar4 * fVar5 - fVar9 * fVar3;
  local_38 = fVar9 * fVar4 + fVar10 * fVar3 * fVar5;
  local_2c = fVar10 * fVar3 + fVar9 * fVar4 * fVar5;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(local_50,&local_40);
  return;
}



void fn_006bdb1c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x2c))(param_1);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar4 = ABS((float)param_1[9] * 40.743664);
  fVar3 = ABS((float)param_1[10] * 40.743664);
  for (fVar5 = ABS((float)param_1[8] * 40.743664); 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0)
  {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar3; fVar3 = fVar3 - 65536.0) {
  }
  uVar6 = VectorFloatToUnsigned(fVar5,3);
  uVar7 = VectorFloatToUnsigned(fVar4,3);
  uVar8 = VectorFloatToUnsigned(fVar3,3);
  uVar2 = uVar7 & 0xff;
  uVar1 = uVar6 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = uVar8 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar5 - fVar10) * (float)(&DAT_007d6f28)[uVar1 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar5 - fVar10) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar5 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if ((float)param_1[8] * 40.743664 < 0.0) {
    fVar9 = -fVar9;
  }
  fVar4 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar3 - fVar12) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar3 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar3 - fVar12) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if ((float)param_1[9] * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  if ((float)param_1[10] * 40.743664 < 0.0) {
    fVar4 = -fVar4;
  }
  local_40 = fVar3 * local_18;
  local_30 = fVar4 * local_18;
  local_1c = fVar9 * local_18;
  local_18 = fVar10 * local_18;
  local_20 = -fVar5;
  local_3c = fVar9 * fVar3 * fVar5 - fVar10 * fVar4;
  local_28 = fVar10 * fVar4 * fVar5 - fVar9 * fVar3;
  local_38 = fVar9 * fVar4 + fVar10 * fVar3 * fVar5;
  local_2c = fVar10 * fVar3 + fVar9 * fVar4 * fVar5;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(local_50,&local_40);
  return;
}



int fn_006bd968(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    return param_3;
  }
  fVar10 = *(float *)(*(int *)(param_3 + 0x100) + 0xc) * 2.0 + 5.0;
  iVar4 = param_2 % 4;
  iVar3 = ((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2) + 1;
  if (iVar4 == 0) {
    if (iVar3 == 3) {
      iVar3 = 1;
    }
  }
  else if (1 < iVar4) {
    iVar1 = iVar4 + 1;
    goto LAB_006bd9d8;
  }
  iVar1 = iVar4 + -1;
LAB_006bd9d8:
  fVar9 = (float)VectorSignedToFloat(iVar1 * 2 + -3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(iVar4 * 2 + -3,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = (int)(fVar7 * fVar10);
  if (iVar4 == 1 && iVar3 == 3) {
    iVar1 = -(int)(fVar9 * fVar10);
  }
  iVar6 = (int)(fVar9 * fVar10) - iVar1;
  iVar2 = iVar6;
  if (iVar6 < 0) {
    iVar2 = -iVar6;
  }
  iVar2 = fn_00163868(iVar2);
  if (iVar6 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar3 < 2) {
    iVar6 = iVar3 + -1;
  }
  else {
    iVar6 = iVar3 + 1;
  }
  fVar9 = (float)VectorSignedToFloat(iVar6 * 2 + -3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(iVar3 * 2 + -3,(byte)(in_fpscr >> 0x16) & 3);
  iVar8 = (int)(fVar9 * fVar10);
  iVar5 = iVar8 - (int)(fVar7 * fVar10);
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  iVar6 = fn_00163868(iVar6);
  if (iVar5 < 0) {
    iVar6 = -iVar6;
  }
  iVar6 = iVar6 + (int)(fVar7 * fVar10);
  if (!(iVar4 == 1 && iVar3 == 3)) {
    iVar8 = iVar6;
  }
  VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar2 + iVar1,(byte)(in_fpscr >> 0x16) & 3);
  return iVar6;
}



undefined4 fn_006bd7f4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2), iVar2 != 0)) {
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x1c) - iVar2 >> 2));
  }
  return 0;
}



undefined4 fn_006bd784(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2), iVar2 != 0)) {
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0xc);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x10) - iVar2 >> 2));
  }
  return 0;
}



void fn_006bd6f4(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fn_00525abc();
  fn_00194408();
  return;
}



void fn_006bd68c(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    return;
  }
  fn_006bd5fc();
  fn_006bd5fc(param_1,param_2 + -1);
  return;
}



void fn_006bd5fc(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fn_00525abc();
  fn_00194408();
  return;
}


