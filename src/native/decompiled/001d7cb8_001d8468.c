#include "001d7cb8_001d8468.h"



void fn_001d8468(float *param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5,
                 float *param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
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
  float local_68;
  float local_64;
  float fStack_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar5 = ABS(param_1[1] * 40.743664);
  fVar4 = ABS(param_1[2] * 40.743664);
  for (fVar6 = ABS(*param_1 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar7 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar7 = uVar8 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar8 = uVar9 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar10 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar6 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar11 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar6 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  local_30 = (float)(&DAT_007d6f24)[uVar7 * 4] +
             (fVar5 - fVar13) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar7 * 4] + (fVar5 - fVar13) * (float)(&DAT_007d6f28)[uVar7 * 4];
  if (*param_1 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  fVar13 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f28)[uVar8 * 4];
  fVar5 = (float)(&DAT_007d6f24)[uVar8 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  if (param_1[1] * 40.743664 < 0.0) {
    fVar6 = -fVar6;
  }
  if (param_1[2] * 40.743664 < 0.0) {
    fVar13 = -fVar13;
  }
  local_58 = fVar5 * local_30;
  local_48 = fVar13 * local_30;
  local_34 = fVar10 * local_30;
  local_30 = fVar11 * local_30;
  local_38 = -fVar6;
  local_54 = fVar10 * fVar5 * fVar6 - fVar11 * fVar13;
  local_50 = fVar10 * fVar13 + fVar11 * fVar5 * fVar6;
  fStack_40 = fVar11 * fVar13 * fVar6 - fVar10 * fVar5;
  local_44 = fVar11 * fVar5 + fVar10 * fVar13 * fVar6;
  local_4c = 0;
  local_3c = 0;
  local_2c = 0;
  fn_0016947c(&local_68,&local_58,param_4);
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar4 = param_3[1];
  fVar10 = param_3[2];
  *param_5 = *param_2 + *param_3;
  param_5[1] = fVar6 + fVar4;
  param_5[2] = fVar5 + fVar10;
  fVar6 = param_2[1];
  fVar5 = param_2[2];
  *param_6 = local_68 + *param_2;
  param_6[1] = local_64 + fVar6;
  param_6[2] = fStack_60 + fVar5;
  uVar3 = fn_006f7388(DAT_008977e0);
  fn_00257d88(uVar3,param_6,param_5,param_7);
  return;
}



void fn_001d8164(int param_1)

{
  int iVar1;
  float in_s0;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fn_006a8fac();
  fn_006f7a48(DAT_008977e0);
  fn_006a7de0();
  fVar5 = in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7e74();
  fVar5 = fVar5 + in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7e80();
  fVar4 = in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7edc();
  fVar7 = 0.5;
  fVar6 = 0.0;
  if ((-0.5 < fVar5) && (fVar5 < 0.5)) {
    fVar5 = fVar6;
  }
  if ((-0.5 < fVar4) && (fVar4 < 0.5)) {
    fVar4 = fVar6;
  }
  fVar3 = fVar7;
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    fn_006f7a48(DAT_008977e0);
    fn_006a7e74();
    fVar5 = fVar7;
    fVar4 = fVar6;
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    fn_006f7a84(DAT_008977e0);
    fn_006aaa00();
  }
  if (*(char *)(param_1 + 0x15c) == '\0') {
    fn_006f7a48(DAT_008977e0);
    iVar1 = fn_006a7da4();
    if (iVar1 == 0) goto LAB_001d8328;
  }
  iVar1 = fn_006f7a84(DAT_008977e0);
  if (*(char *)(iVar1 + 0x399) == '\0') {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aab48();
    if (iVar1 == 0) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      uVar2 = *(undefined4 *)(iVar1 + 0x30);
      fn_005df8f8();
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      iVar1 = fn_006f7a84(DAT_008977e0);
      fVar7 = *(float *)(iVar1 + 0x2c);
      fn_006a8fac(param_1);
      fn_00764608();
      *(float *)(param_1 + 0x10) = fVar7;
      *(float *)(param_1 + 0xec) = fVar6;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined1 *)(param_1 + 0x15c) = 0;
    }
  }
LAB_001d8328:
  if ((in_s0 != fVar6) && (fVar5 == fVar6)) {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aa980();
    if (iVar1 == 0) {
      fVar7 = 1.65;
    }
    else {
      fVar7 = 0.8;
    }
    fVar5 = in_s0 * fVar7;
  }
  fVar8 = 3.0;
  if (fVar4 != fVar6) {
    fVar3 = fVar4 * 3.0 * fVar3;
    fn_0017fe34();
    fVar7 = *(float *)(param_1 + 0xec) + fVar3 + *(float *)(param_1 + 0x10);
    fn_00764608();
    fVar7 = fVar7 - *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0xec) = fVar7;
  }
  if (fVar5 != fVar6) {
    fVar5 = fVar5 * fVar8;
    fn_0017fe34();
    fVar7 = *(float *)(param_1 + 0x14) + fVar5;
    fn_005df8f8();
    *(float *)(param_1 + 0x14) = fVar7;
  }
  fn_006f7a48(DAT_008977e0);
  fn_006a7f38();
  fVar5 = *(float *)(param_1 + 0xb0);
  if (fVar7 <= fVar6) {
    fVar4 = *(float *)(param_1 + 0xb4);
    if (fVar4 < fVar5) {
      fVar5 = fVar5 - fVar8;
      *(float *)(param_1 + 0xb0) = fVar5;
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      *(float *)(param_1 + 0xb0) = fVar4;
      return;
    }
  }
  else {
    fVar5 = fVar5 + fVar7;
    *(float *)(param_1 + 0xb0) = fVar5;
    fVar4 = *(float *)(param_1 + 0xb8);
    if (fVar5 <= *(float *)(param_1 + 0xb8)) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0xb0) = fVar4;
  }
  return;
}



void fn_001d8140(int param_1)

{
  *(undefined4 *)(param_1 + 0xf4) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xf8) = 0x42400000;
  *(undefined4 *)(param_1 + 0xfc) = 0x3c83126f;
  return;
}



void fn_001d7cb8(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
                 float *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [44];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar9 = ABS(param_1[1] * 40.743664);
  fVar8 = ABS(param_1[2] * 40.743664);
  for (fVar10 = ABS(*param_1 * 40.743664); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  uVar11 = VectorFloatToUnsigned(fVar10,3);
  uVar12 = VectorFloatToUnsigned(fVar9,3);
  uVar13 = VectorFloatToUnsigned(fVar8,3);
  uVar6 = uVar11 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar11 = uVar12 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar12 = uVar13 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar10 - fVar16) * (float)(&DAT_007d6f28)[uVar6 * 4]
  ;
  fVar16 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar10 - fVar16) * (float)(&DAT_007d6f2c)[uVar6 * 4]
  ;
  local_6c = (float)(&DAT_007d6f24)[uVar11 * 4] +
             (fVar9 - fVar15) * (float)(&DAT_007d6f2c)[uVar11 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar11 * 4] +
           (fVar9 - fVar15) * (float)(&DAT_007d6f28)[uVar11 * 4];
  if (*param_1 * 40.743664 < 0.0) {
    fVar14 = -fVar14;
  }
  fVar15 = (float)(&DAT_007d6f20)[uVar12 * 4] +
           (fVar8 - fVar17) * (float)(&DAT_007d6f28)[uVar12 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar12 * 4] + (fVar8 - fVar17) * (float)(&DAT_007d6f2c)[uVar12 * 4]
  ;
  if (param_1[1] * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  if (param_1[2] * 40.743664 < 0.0) {
    fVar15 = -fVar15;
  }
  local_90 = fVar9 * local_6c;
  local_80 = fVar15 * local_6c;
  fStack_68 = fVar16 * local_6c;
  local_6c = fVar14 * local_6c;
  local_70 = -fVar10;
  local_8c = fVar14 * fVar9 * fVar10 - fVar16 * fVar15;
  local_78 = fVar16 * fVar15 * fVar10 - fVar14 * fVar9;
  local_88 = fVar14 * fVar15 + fVar16 * fVar9 * fVar10;
  local_7c = fVar16 * fVar9 + fVar14 * fVar15 * fVar10;
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  fn_0016947c(&local_60,&local_90,param_3);
  fVar15 = local_60 + *param_2;
  fVar16 = local_5c + param_2[1];
  fVar14 = local_58 + param_2[2];
  *param_5 = fVar15;
  param_5[1] = fVar16;
  param_5[2] = fVar14;
  iVar2 = fn_006f7a84(DAT_008977e0);
  uVar3 = fn_006f751c(DAT_008977e0);
  fn_006c1c18(uVar3,iVar2 + 0x460,0);
  fn_006f751c(DAT_008977e0);
  iVar2 = fn_00341920();
  fVar14 = fVar14 + *(float *)(iVar2 + 0x30);
  fn_006887f0(auStack_e8);
  uVar3 = fn_003412c0();
  uVar4 = fn_006f751c(DAT_008977e0);
  fn_006c180c(uVar4,auStack_e8,uVar3);
  fn_006f6988(auStack_e8);
  fVar10 = fVar15;
  fVar9 = fVar16;
  fVar8 = fVar15;
  iVar2 = fn_006f7a84(DAT_008977e0);
  fn_006f6988(iVar2 + 0x460);
  fVar17 = param_2[2] + param_4[2];
  local_bc = *param_2 + *param_4 + (fVar14 - fVar16);
  fVar8 = fVar17 + (fVar8 - fVar10);
  fVar10 = param_2[1] + param_4[1] + (fVar9 - fVar15);
  local_b8 = fVar10;
  local_b4 = fVar8;
  iVar2 = fn_006f7a84(DAT_008977e0);
  uVar7 = *(undefined4 *)(iVar2 + 0x468);
  uVar3 = fn_003412c0();
  uVar4 = fn_006f751c(DAT_008977e0);
  fn_006c18f0(uVar4,auStack_e8,uVar3,uVar7,&local_bc,0);
  fn_006f6988(auStack_e8);
  local_b4 = (fVar17 - local_b4) * 0.5 + local_b4;
  local_b8 = (fVar8 - local_b8) * 0.5 + local_b8;
  local_bc = (fVar10 - local_bc) * 0.5 + local_bc;
  *param_6 = local_bc;
  param_6[1] = local_b8;
  param_6[2] = local_b4;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  iVar2 = fn_00176d68(*(undefined4 *)(iVar2 + 4));
  local_54 = *(undefined4 *)(iVar2 + 0x58);
  uStack_50 = *(undefined4 *)(iVar2 + 0x68);
  uStack_4c = *(undefined4 *)(iVar2 + 0x78);
  iVar2 = fn_006f7a5c(DAT_008977e0);
  fn_00176d68(*(undefined4 *)(iVar2 + 4));
  puVar5 = (undefined4 *)fn_006dcd40();
  local_48 = *puVar5;
  uStack_44 = puVar5[1];
  uStack_40 = puVar5[2];
  uVar3 = fn_006f7388(DAT_008977e0);
  fn_00257d38(uVar3,param_5,param_6,param_3,param_4,&local_54,&local_48,param_7,param_8,param_9);
  return;
}


