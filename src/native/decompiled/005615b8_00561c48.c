#include "005615b8_00561c48.h"



void fn_00561c48(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_4[2] - param_2[2];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = fVar3 * (*param_3 - *param_2) - (*param_4 - *param_2) * fVar4;
  fVar2 = (*param_4 - *param_2) * (param_3[1] - param_2[1]) -
          (param_4[1] - param_2[1]) * (*param_3 - *param_2);
  fVar3 = (param_4[1] - param_2[1]) * fVar4 - fVar3 * (param_3[1] - param_2[1]);
  fVar4 = 1.0 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  *param_1 = fVar3 * fVar4;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar4;
  param_1[3] = -(fVar3 * fVar4 * *param_2 + fVar1 * fVar4 * param_2[1] + fVar2 * fVar4 * param_2[2])
  ;
  return;
}



void fn_00561b8c(float *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  uVar1 = 1;
  *param_1 = *param_2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  param_1[3] = *param_2;
  param_1[4] = fVar3;
  param_1[5] = fVar4;
  if (1 < param_3) {
    do {
      pfVar2 = param_2 + uVar1 * 3;
      fVar3 = *pfVar2;
      if (fVar3 < *param_1) {
        *param_1 = fVar3;
      }
      else {
        if (fVar3 <= param_1[3]) {
          fVar3 = param_1[3];
        }
        param_1[3] = fVar3;
      }
      fVar3 = pfVar2[1];
      if (fVar3 < param_1[1]) {
        param_1[1] = fVar3;
      }
      else {
        if (fVar3 <= param_1[4]) {
          fVar3 = param_1[4];
        }
        param_1[4] = fVar3;
      }
      fVar3 = pfVar2[2];
      if (fVar3 < param_1[2]) {
        param_1[2] = fVar3;
      }
      else {
        if (fVar3 <= param_1[5]) {
          fVar3 = param_1[5];
        }
        param_1[5] = fVar3;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}



int fn_00561a34(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_4 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &local_18;
  }
  iVar1 = fn_00561a9c(param_1,param_2,&local_1c,puVar2);
  if (iVar1 == 1) {
    if (local_1c < 0.0) {
      iVar1 = 0;
    }
    else {
      if (param_3 != (float *)0x0) {
        *param_3 = local_1c;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_18;
        param_4[1] = uStack_14;
        param_4[2] = uStack_10;
      }
    }
  }
  return iVar1;
}



undefined4 fn_00561a9c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *param_2;
  fVar6 = param_1[4];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar3 = param_1[3] * fVar2 + fVar6 * fVar4 + param_1[5] * fVar5;
  if (DAT_008c0614 <= ABS(fVar3)) {
    if (param_4 != (float *)0x0 || param_3 != (float *)0x0) {
      fVar3 = -(fVar4 * param_1[1] + fVar5 * param_1[2] + param_2[3] + fVar2 * *param_1) / fVar3;
      if (param_4 != (float *)0x0) {
        fVar2 = param_1[5];
        *param_4 = *param_1 + param_1[3] * fVar3;
        param_4[1] = param_1[1] + fVar6 * fVar3;
        param_4[2] = param_1[2] + fVar2 * fVar3;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = fVar3;
      }
    }
    return 1;
  }
  if (ABS(fVar4 * param_1[1] + fVar5 * param_1[2] + param_2[3] + fVar2 * *param_1) < DAT_008c0614) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



float * fn_0056181c(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_38;
  float afStack_34 [10];
  
  fVar3 = *param_2 - *param_3;
  fVar5 = param_2[1] - param_3[1];
  fVar2 = param_2[2] - param_3[2];
  bVar1 = fVar3 == 0.0;
  fVar4 = param_3[1];
  if (bVar1) {
    fVar4 = fVar2;
  }
  if (!bVar1 || (!bVar1 || fVar4 != 0.0)) {
    fVar6 = -fVar3;
    fVar8 = 1.0 / SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
    fVar3 = fVar3 * fVar8;
    fVar5 = fVar5 * fVar8;
    fVar8 = fVar2 * fVar8;
    fVar4 = 1.0 / SQRT(fVar2 * fVar2 + 0.0 + fVar6 * fVar6);
    fVar2 = fVar2 * fVar4;
    fVar6 = fVar6 * fVar4;
    fVar10 = fVar8 * fVar2 - fVar3 * fVar6;
    fVar11 = fVar3 * fVar4 * 0.0 - fVar5 * fVar2;
    fVar9 = fVar5 * fVar6 - fVar8 * fVar4 * 0.0;
    fn_0052534c(&local_38,afStack_34);
    fVar4 = fVar9 * local_38 + afStack_34[0] * fVar2;
    fVar7 = fVar11 * local_38 + afStack_34[0] * fVar6;
    fVar2 = fVar9 * afStack_34[0] - local_38 * fVar2;
    fVar6 = fVar11 * afStack_34[0] - local_38 * fVar6;
    *param_1 = fVar4;
    param_1[1] = fVar10 * local_38;
    param_1[2] = fVar7;
    param_1[3] = -(*param_2 * fVar4 + param_2[1] * fVar10 * local_38) + -(param_2[2] * fVar7);
    param_1[4] = fVar2;
    param_1[5] = fVar10 * afStack_34[0];
    param_1[6] = fVar6;
    param_1[7] = -(*param_2 * fVar2 + param_2[1] * fVar10 * afStack_34[0] + param_2[2] * fVar6);
    param_1[8] = fVar3;
    param_1[9] = fVar5;
    param_1[10] = fVar8;
    param_1[0xb] = -(*param_2 * fVar3 + param_2[1] * fVar5) + -(param_2[2] * fVar8);
    return param_1;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = -*param_2;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[8] = 0.0;
  param_1[10] = 0.0;
  if (0.0 < fVar5) {
    param_1[6] = -1.0;
    param_1[7] = param_2[2];
    param_1[9] = 1.0;
    param_1[0xb] = -param_2[1];
    return param_1;
  }
  param_1[6] = 1.0;
  param_1[7] = -param_2[2];
  param_1[9] = -1.0;
  param_1[0xb] = param_2[1];
  return param_1;
}



void fn_005617ec(undefined4 *param_1)

{
  *param_1 = &DAT_00858780;
  if (param_1[2] != 0) {
    fn_00116fdc();
  }
  fn_00117008(param_1);
  fn_002feef8();
  return;
}



uint fn_005616e8(float *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  
  fVar5 = 1.0;
  fVar3 = *param_1;
  fVar1 = 0.0;
  if (1.0 < fVar3) {
    fVar3 = fVar5;
  }
  else if (fVar3 < 0.0) {
    fVar3 = fVar1;
  }
  uVar4 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
  fVar3 = param_1[1];
  if (1.0 < fVar3) {
    fVar3 = fVar5;
  }
  else if (fVar3 < 0.0) {
    fVar3 = fVar1;
  }
  uVar6 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
  fVar3 = param_1[2];
  if (1.0 < fVar3) {
  }
  else {
    fVar5 = fVar1;
    if (0.0 <= fVar3) {
      fVar5 = fVar3;
    }
  }
  uVar2 = VectorFloatToUnsigned(fVar5 * 255.0 + 0.5,3);
  return (uVar2 & 0xff) << 0x10 | uVar4 & 0xff | (uVar6 & 0xff) << 8 | param_2 << 0x18;
}



uint fn_005615b8(float *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  
  fVar8 = 1.0;
  fVar1 = 0.0;
  fVar6 = *param_1;
  if (1.0 < fVar6) {
    fVar4 = fVar8;
  }
  else {
    fVar4 = fVar1;
    if (0.0 <= fVar6) {
      fVar4 = fVar6;
    }
  }
  uVar3 = VectorFloatToUnsigned(fVar4 * 255.0 + 0.5,3);
  fVar6 = param_1[1];
  if (1.0 < fVar6) {
    fVar4 = fVar8;
  }
  else {
    fVar4 = fVar1;
    if (0.0 <= fVar6) {
      fVar4 = fVar6;
    }
  }
  uVar5 = VectorFloatToUnsigned(fVar4 * 255.0 + 0.5,3);
  fVar6 = param_1[2];
  if (1.0 < fVar6) {
    fVar6 = fVar8;
  }
  else if (fVar6 < 0.0) {
    fVar6 = fVar1;
  }
  uVar7 = VectorFloatToUnsigned(fVar6 * 255.0 + 0.5,3);
  fVar6 = param_1[3];
  if (1.0 < fVar6) {
  }
  else {
    fVar8 = fVar1;
    if (0.0 <= fVar6) {
      fVar8 = fVar6;
    }
  }
  iVar2 = VectorFloatToUnsigned(fVar8 * 255.0 + 0.5,3);
  return (uVar5 & 0xff) << 8 | uVar3 & 0xff | (uVar7 & 0xff) << 0x10 | iVar2 << 0x18;
}


