#include "00525440_00525d68.h"



uint fn_00525d68(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 4) {
    uVar1 = 3;
  }
  else {
    uVar1 = param_1 | 1;
    if (0x13 < param_1) {
      uVar3 = 0;
      do {
        uVar2 = param_1 + uVar3;
        if (((((uVar2 & 1) != 0) && (uVar2 % 3 != 0)) && (uVar2 % 5 != 0)) &&
           ((((uint)((ulonglong)uVar2 * 0x49249249 + 0x49249249 >> 0x21) * -7 + uVar2 != 0 &&
             (uVar2 % 0xb != 0)) && ((uVar2 % 0xd != 0 && (uVar2 % 0x11 != 0)))))) {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 100);
    }
  }
  return uVar1;
}



void fn_00525ce4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar4 = *param_2;
  fVar2 = param_3[2];
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar1 * fVar2 - fVar3 * fVar6;
  param_1[1] = fVar3 * fVar5 - fVar4 * fVar2;
  param_1[2] = fVar4 * fVar6 - fVar1 * fVar5;
  return;
}



void fn_00525b38(void)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    if ((uint)in_s0 < 0xbf800001) {
      fn_00525440();
      return;
    }
    fn_00525440();
    return;
  }
  if ((int)in_s0 < 0x3f800001) {
    fn_00525440();
    return;
  }
  fn_00525440();
  return;
}



void fn_00525abc(void)

{
  uint in_fpscr;
  float in_s0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ABS(in_s0);
  if (0x477fffff < (int)fVar1) {
    fn_001a23a8();
  }
  uVar2 = VectorFloatToUnsigned(fVar1,3);
  VectorUnsignedToFloat(uVar2 & 0xffff,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return;
}



undefined4 * fn_00525a2c(void)

{
  int iVar1;
  
  if ((((byte)DAT_008c6304 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6304), iVar1 != 0)) {
    DAT_008f9e68 = 0x3f800000;
    DAT_008f9e6c = 0;
    DAT_008f9e70 = 0;
    DAT_008f9e74 = 0;
    DAT_008f9e78 = 0;
    DAT_008f9e7c = 0x3f800000;
    DAT_008f9e80 = 0;
    DAT_008f9e84 = 0;
    DAT_008f9e88 = 0;
    DAT_008f9e8c = 0;
    DAT_008f9e90 = 0x3f800000;
    DAT_008f9e94 = 0;
    DAT_008f9e98 = 0;
    DAT_008f9e9c = 0;
    DAT_008f9ea0 = 0;
    DAT_008f9ea4 = 0x3f800000;
  }
  return &DAT_008f9e68;
}



void fn_00525824(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar5 = ABS(param_2[1] * 40.743664);
  fVar4 = ABS(param_2[2] * 40.743664);
  for (fVar6 = ABS(*param_2 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  uVar3 = uVar7 & 0xff;
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar8 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar7 = uVar9 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar10 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar11 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fVar13 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar5 - fVar12) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar5 - fVar12) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if (*param_2 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  fVar5 = (float)(&DAT_007d6f20)[uVar7 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f28)[uVar7 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar7 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  if (param_2[1] * 40.743664 < 0.0) {
    fVar6 = -fVar6;
  }
  if (param_2[2] * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  param_1[8] = -fVar6;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = fVar4 * fVar13;
  param_1[4] = fVar5 * fVar13;
  param_1[9] = fVar10 * fVar13;
  param_1[10] = fVar11 * fVar13;
  param_1[1] = fVar10 * fVar4 * fVar6 - fVar11 * fVar5;
  param_1[6] = fVar11 * fVar5 * fVar6 - fVar10 * fVar4;
  param_1[2] = fVar10 * fVar5 + fVar11 * fVar4 * fVar6;
  param_1[5] = fVar11 * fVar4 + fVar10 * fVar5 * fVar6;
  return;
}



void fn_00525630(float *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float in_s1;
  float fVar6;
  float fVar7;
  float in_s2;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar6 = ABS(in_s1);
  fVar8 = ABS(in_s2);
  for (fVar5 = ABS(in_s0); 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar5,3);
  uVar11 = VectorFloatToUnsigned(fVar6,3);
  uVar2 = uVar10 & 0xff;
  uVar12 = VectorFloatToUnsigned(fVar8,3);
  uVar3 = uVar11 & 0xff;
  uVar4 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar9 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar7 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar8 - fVar13) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar5 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar6 - fVar15) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar8 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar8 - fVar13) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar6 - fVar15) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (in_s0 < 0.0) {
    fVar9 = -fVar9;
  }
  if (in_s1 < 0.0) {
    fVar5 = -fVar5;
  }
  if (in_s2 < 0.0) {
    fVar7 = -fVar7;
  }
  param_1[8] = -fVar5;
  *param_1 = fVar8 * fVar6;
  param_1[4] = fVar7 * fVar6;
  param_1[1] = fVar9 * fVar8 * fVar5 - fVar14 * fVar7;
  param_1[6] = fVar14 * fVar7 * fVar5 - fVar9 * fVar8;
  param_1[2] = fVar9 * fVar7 + fVar14 * fVar8 * fVar5;
  param_1[5] = fVar14 * fVar8 + fVar9 * fVar7 * fVar5;
  param_1[9] = fVar9 * fVar6;
  param_1[10] = fVar14 * fVar6;
  if (param_2 != 0) {
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
  }
  return;
}



void fn_0052555c(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar3 = param_2[3];
  fVar5 = 2.0 / (fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = fVar2 * fVar5;
  fVar6 = fVar4 * fVar5;
  fVar8 = fVar1 * fVar1 * fVar5;
  fVar5 = fVar3 * fVar1 * fVar5;
  if (param_3 != 0) {
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
  }
  *param_1 = 1.0 - (fVar2 * fVar7 + fVar4 * fVar6);
  param_1[4] = fVar1 * fVar7 + fVar3 * fVar6;
  param_1[5] = 1.0 - (fVar8 + fVar4 * fVar6);
  param_1[6] = fVar2 * fVar6 - fVar5;
  param_1[8] = fVar1 * fVar6 - fVar3 * fVar7;
  param_1[9] = fVar2 * fVar6 + fVar5;
  param_1[10] = 1.0 - (fVar8 + fVar2 * fVar7);
  param_1[1] = fVar1 * fVar7 - fVar3 * fVar6;
  param_1[2] = fVar1 * fVar6 + fVar3 * fVar7;
  return;
}



void fn_005254cc(float *param_1)

{
  float in_s0;
  float fVar1;
  float in_s1;
  float fVar2;
  float in_s2;
  float fVar3;
  float in_s3;
  float in_s4;
  float in_s5;
  
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  fVar2 = 1.0 / (in_s1 - in_s0);
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  fVar3 = 1.0 / (in_s3 - in_s2);
  fVar1 = 1.0 / (in_s5 - in_s4);
  param_1[10] = fVar1;
  *param_1 = fVar2 * 2.0;
  param_1[3] = -((in_s1 + in_s0) * fVar2);
  param_1[5] = fVar3 * 2.0;
  param_1[7] = -((in_s3 + in_s2) * fVar3);
  param_1[0xb] = in_s4 * fVar1;
  return;
}



void fn_00525480(void)

{
  return;
}



void fn_00525440(void)

{
  uint in_fpscr;
  float in_s0;
  uint uVar1;
  
  uVar1 = VectorFloatToUnsigned(in_s0 * 32.0,3);
  VectorUnsignedToFloat(uVar1 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  return;
}


