#include "005f1dd0_005f2e74.h"



undefined4 fn_005f2e74(float *param_1,float *param_2,float *param_3,float *param_4)

{
  if ((((*param_1 <= *param_4) && (*param_3 <= *param_2)) && (param_1[1] <= param_4[1])) &&
     (((param_3[1] <= param_2[1] && (param_1[2] <= param_4[2])) && (param_3[2] <= param_2[2])))) {
    return 1;
  }
  return 0;
}



bool fn_005f2d8c(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,float *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_7 * *param_3 + param_7[1] * param_3[1] + param_7[2] * param_3[2];
  if ((fVar2 < 0.0) &&
     (fVar2 = (*param_7 * (*param_4 - *param_2) + param_7[1] * (param_4[1] - param_2[1]) +
              param_7[2] * (param_4[2] - param_2[2])) / fVar2, 0.0 <= fVar2)) {
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    *param_1 = *param_2 + *param_3 * fVar2;
    param_1[1] = param_2[1] + fVar3 * fVar2;
    param_1[2] = param_2[2] + fVar4 * fVar2;
    iVar1 = fn_005f1ef8(param_4,param_5,param_6,param_7,param_1);
    return iVar1 != 0;
  }
  return false;
}



void fn_005f2d30(float *param_1,float *param_2)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = in_s0 * 40.743664;
  fVar1 = fVar4;
  fn_00194408();
  fn_00525abc();
  fVar3 = *param_1;
  fVar2 = param_1[1];
  *param_2 = fVar3 * fVar4 - fVar2 * fVar1;
  param_2[1] = fVar3 * fVar1 + fVar2 * fVar4;
  return;
}



undefined4 * fn_005f2cac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  if (puVar5 != (uint *)0x0) {
    uVar2 = *puVar5;
    uVar4 = puVar5[1];
    uVar1 = uVar2;
    if (uVar2 < uVar4) {
      if (0 < (int)(uVar4 - uVar2)) {
        for (iVar3 = (int)(uVar4 - uVar2) >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        }
      }
    }
    else {
      for (; uVar1 != uVar4; uVar1 = uVar1 + 8) {
      }
    }
    fn_001008c4(uVar2,(int)(puVar5[2] - uVar2) >> 3,0);
    fn_002feef8(puVar5);
  }
  return param_1;
}



undefined4 * fn_005f2c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4
fn_005f2020(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            float *param_6)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*param_2 - *param_3) * *param_6 + (param_2[1] - param_3[1]) * param_6[1] +
      (param_2[2] - param_3[2]) * param_6[2] < in_s0) {
    fn_005f20f8(&local_20,param_2,param_3,param_4,param_5);
    fVar3 = *param_2;
    fVar2 = param_2[1];
    fVar1 = param_2[2];
    if (param_1 != (float *)0x0) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18;
    }
    if ((local_20 - fVar3) * (local_20 - fVar3) + (local_1c - fVar2) * (local_1c - fVar2) +
        (local_18 - fVar1) * (local_18 - fVar1) <= in_s0 * in_s0) {
      return 1;
    }
  }
  return 0;
}



void fn_005f20f8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar5 = param_3[1];
  fVar7 = *param_4 - *param_3;
  fVar9 = *param_3;
  fVar14 = param_4[1] - fVar5;
  fVar12 = *param_5 - fVar9;
  fVar6 = param_5[1] - fVar5;
  fVar8 = param_4[2] - param_3[2];
  fVar13 = param_5[2] - param_3[2];
  fVar5 = param_2[1] - fVar5;
  fVar10 = fVar7 * (*param_2 - fVar9) + fVar14 * fVar5 + fVar8 * (param_2[2] - param_3[2]);
  fVar5 = fVar12 * (*param_2 - fVar9) + fVar6 * fVar5 + fVar13 * (param_2[2] - param_3[2]);
  bVar1 = fVar10 == 0.0;
  bVar2 = 0.0 <= fVar10;
  if (!bVar2 || bVar1) {
    bVar1 = fVar5 == 0.0;
    bVar2 = 0.0 <= fVar5;
  }
  if (!bVar2 || bVar1) {
    fVar5 = param_3[1];
    fVar10 = param_3[2];
  }
  else {
    fVar9 = *param_4;
    fVar15 = param_2[1] - param_4[1];
    fVar4 = fVar7 * (*param_2 - fVar9) + fVar14 * fVar15 + fVar8 * (param_2[2] - param_4[2]);
    fVar15 = fVar12 * (*param_2 - fVar9) + fVar6 * fVar15 + fVar13 * (param_2[2] - param_4[2]);
    if ((fVar4 < 0.0) || (fVar4 < fVar15)) {
      fVar9 = fVar10 * fVar15 - fVar4 * fVar5;
      if (((fVar9 <= 0.0) && (0.0 <= fVar10)) && (fVar4 <= 0.0)) {
        fVar10 = fVar10 / (fVar10 - fVar4);
        fVar9 = param_3[1];
        fVar5 = param_3[2];
        *param_1 = *param_3 + fVar7 * fVar10;
        param_1[1] = fVar9 + fVar14 * fVar10;
        param_1[2] = fVar5 + fVar8 * fVar10;
        return;
      }
      fVar18 = *param_5;
      fVar17 = param_5[1];
      fVar3 = fVar12 * (*param_2 - fVar18) + fVar6 * (param_2[1] - fVar17) +
              fVar13 * (param_2[2] - param_5[2]);
      fVar16 = fVar7 * (*param_2 - fVar18) + fVar14 * (param_2[1] - fVar17) +
               fVar8 * (param_2[2] - param_5[2]);
      if ((0.0 <= fVar3) && (fVar16 <= fVar3)) {
        fVar9 = param_5[2];
        *param_1 = fVar18;
        param_1[1] = fVar17;
        param_1[2] = fVar9;
        return;
      }
      fVar10 = fVar16 * fVar5 - fVar10 * fVar3;
      if (((0.0 < fVar10) || (fVar5 < 0.0)) || (0.0 < fVar3)) {
        fVar5 = fVar4 * fVar3 - fVar16 * fVar15;
        if (fVar5 <= 0.0) {
          fVar11 = fVar15 - fVar4;
          bVar1 = fVar11 < 0.0;
          if (!bVar1) {
            fVar11 = fVar16 - fVar3;
            bVar1 = fVar11 < 0.0;
          }
          if (bVar1 == NAN(fVar11)) {
            fVar6 = param_4[1];
            fVar10 = param_4[2];
            fVar9 = (fVar15 - fVar4) / ((fVar15 - fVar4) + (fVar16 - fVar3));
            fVar5 = param_5[2];
            *param_1 = *param_4 + (fVar18 - *param_4) * fVar9;
            param_1[1] = fVar6 + (fVar17 - fVar6) * fVar9;
            param_1[2] = fVar10 + (fVar5 - fVar10) * fVar9;
            return;
          }
        }
        fVar5 = 1.0 / (fVar5 + fVar10 + fVar9);
        fVar10 = fVar10 * fVar5;
        fVar9 = fVar9 * fVar5;
        fVar6 = param_3[1] + fVar14 * fVar10 + fVar6 * fVar9;
        fVar7 = *param_3 + fVar7 * fVar10 + fVar12 * fVar9;
        fVar9 = param_3[2] + fVar8 * fVar10 + fVar13 * fVar9;
      }
      else {
        fVar5 = fVar5 / (fVar5 - fVar3);
        fVar7 = *param_3 + fVar12 * fVar5;
        fVar6 = param_3[1] + fVar6 * fVar5;
        fVar9 = param_3[2] + fVar13 * fVar5;
      }
      *param_1 = fVar7;
      param_1[1] = fVar6;
      param_1[2] = fVar9;
      return;
    }
    fVar5 = param_4[1];
    fVar10 = param_4[2];
  }
  *param_1 = fVar9;
  param_1[1] = fVar5;
  param_1[2] = fVar10;
  return;
}



bool fn_005f1dd0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,float *param_7)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_3 - *param_2;
  fVar8 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  if ((fVar5 == 0.0 && (fVar5 == 0.0 && fVar8 == 0.0)) && (fVar6 == 0.0)) {
    return false;
  }
  fVar7 = *param_7 * fVar5 + param_7[1] * fVar8 + param_7[2] * fVar6;
  if (fVar7 < 0.0) {
    fVar7 = (*param_7 * (*param_4 - *param_2) + param_7[1] * (param_4[1] - param_2[1]) +
            param_7[2] * (param_4[2] - param_2[2])) / fVar7;
    bVar2 = 0.0 < fVar7;
    bVar3 = fVar7 == 0.0;
    bVar4 = NAN(fVar7);
    if (0.0 <= fVar7) {
      bVar4 = SBORROW4((int)fVar7,0x3f800000);
      bVar2 = (int)fVar7 + -0x3f800000 < 0;
      bVar3 = fVar7 == 1.0;
    }
    if (bVar3 || bVar2 != bVar4) {
      *param_1 = *param_2 + fVar5 * fVar7;
      param_1[1] = param_2[1] + fVar8 * fVar7;
      param_1[2] = param_2[2] + fVar6 * fVar7;
      iVar1 = fn_005f1ef8(param_4,param_5,param_6,param_7,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined4 fn_005f1ef8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *param_1 - *param_5;
  fVar6 = param_1[1] - param_5[1];
  fVar5 = param_1[2] - param_5[2];
  fVar3 = *param_2 - *param_5;
  fVar9 = param_2[2] - param_5[2];
  fVar7 = param_2[1] - param_5[1];
  if ((uint)((fVar6 * fVar9 - fVar5 * fVar7) * *param_4 +
             (fVar5 * fVar3 - fVar8 * fVar9) * param_4[1] +
            (fVar8 * fVar7 - fVar6 * fVar3) * param_4[2]) < 0xba831270) {
    fVar1 = *param_3 - *param_5;
    fVar2 = param_3[1] - param_5[1];
    fVar4 = param_3[2] - param_5[2];
    if (((uint)((fVar7 * fVar4 - fVar9 * fVar2) * *param_4 +
                (fVar9 * fVar1 - fVar3 * fVar4) * param_4[1] +
               (fVar3 * fVar2 - fVar7 * fVar1) * param_4[2]) < 0xba831270) &&
       ((uint)((fVar2 * fVar5 - fVar4 * fVar6) * *param_4 +
               (fVar4 * fVar8 - fVar1 * fVar5) * param_4[1] +
              (fVar1 * fVar6 - fVar2 * fVar8) * param_4[2]) < 0xba831270)) {
      return 1;
    }
  }
  return 0;
}


