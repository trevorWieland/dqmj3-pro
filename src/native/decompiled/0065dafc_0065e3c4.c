#include "0065dafc_0065e3c4.h"



undefined4 fn_0065e3c4(void)

{
  return DAT_008bf654;
}



undefined4 fn_0065e3b4(void)

{
  return DAT_008bf644;
}



int fn_0065e38c(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(DAT_008bf61c + param_1 * 0x1c + param_3 * 0xc + param_2 * 2);
}



undefined4
fn_0065dfc0(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,undefined4 param_6,
            uint param_7,int param_8,int param_9,undefined4 param_10,int param_11,int param_12,
            int param_13,undefined4 param_14,uint param_15,int param_16,int param_17,
            undefined4 param_18,uint param_19,int param_20,int param_21,undefined4 param_22,
            uint param_23,int param_24,int param_25,undefined4 param_26,uint param_27,int param_28,
            int param_29,undefined4 param_30,uint param_31,int param_32)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0065e348,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x1c;
  iVar2 = 0;
  DAT_008bf620 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (!(iVar1 == 0 && iVar2 == 0)) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008bf620 = 0;
  }
  DAT_008bf61c = param_1;
  if (((param_5 == 0) || (param_8 < (int)(uint)(param_7 == 0))) ||
     (iVar1 = fn_00147e6c(param_5,&DAT_0065e354,4,4 - param_3), iVar1 != 0)) {
    DAT_008bf624 = 0;
  }
  else {
    DAT_008bf624 = param_5 + 4;
  }
  if ((int)-(param_8 + (uint)(4 < param_7)) < 0 ==
      (SBORROW4(0,param_8) != SBORROW4(-param_8,(uint)(4 < param_7)))) {
    DAT_008bf628 = 0;
  }
  else {
    DAT_008bf628 = param_7 - 4;
  }
  if (((param_9 == 0) || (param_12 < (int)(uint)(param_11 == 0))) ||
     (iVar1 = fn_00147e6c(param_9,&DAT_0065e35c,4), iVar1 != 0)) {
    DAT_008bf62c = 0;
  }
  else {
    DAT_008bf62c = param_9 + 4;
  }
  if (((param_13 == 0) || (param_16 < (int)(uint)(param_15 == 0))) ||
     (iVar1 = fn_00147e6c(param_13,&DAT_0065e364,4), iVar1 != 0)) {
    param_13 = 0;
  }
  else {
    param_13 = param_13 + 4;
  }
  iVar1 = 0xc;
  iVar2 = 0;
  DAT_008bf634 = fn_0011c134(param_15 - 4,param_16 - (uint)(param_15 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_13 = 0;
  }
  if ((int)-(param_16 + (uint)(4 < param_15)) < 0 ==
      (SBORROW4(0,param_16) != SBORROW4(-param_16,(uint)(4 < param_15)))) {
    DAT_008bf634 = 0;
  }
  DAT_008bf630 = param_13;
  if (((param_17 == 0) || (param_20 < (int)(uint)(param_19 == 0))) ||
     (iVar1 = fn_00147e6c(param_17,&DAT_0065e36c), iVar1 != 0)) {
    DAT_008bf638 = 0;
  }
  else {
    DAT_008bf638 = param_17 + 4;
  }
  if ((param_19 - 4 & 0xf) != 0) {
    DAT_008bf638 = 0;
  }
  if ((int)-(param_20 + (uint)(4 < param_19)) < 0 ==
      (SBORROW4(0,param_20) != SBORROW4(-param_20,(uint)(4 < param_19)))) {
    DAT_008bf63c = 0;
  }
  else {
    DAT_008bf63c = fn_0011c134(param_19 - 4,param_20 - (uint)(param_19 < 4),0x10,0);
  }
  if (((param_21 == 0) || (param_24 < (int)(uint)(param_23 == 0))) ||
     (iVar1 = fn_00147e6c(param_21,&DAT_0065e374), iVar1 != 0)) {
    DAT_008bf640 = 0;
  }
  else {
    DAT_008bf640 = param_21 + 4;
  }
  if ((param_23 - 4 & 3) != 0) {
    DAT_008bf640 = 0;
  }
  if ((int)-(param_24 + (uint)(4 < param_23)) < 0 ==
      (SBORROW4(0,param_24) != SBORROW4(-param_24,(uint)(4 < param_23)))) {
    DAT_008bf644 = 0;
  }
  else {
    DAT_008bf644 = fn_0011c134(param_23 - 4,param_24 - (uint)(param_23 < 4),4,0);
  }
  if (((param_25 == 0) || (param_28 < (int)(uint)(param_27 == 0))) ||
     (iVar1 = fn_00147e6c(param_25,&DAT_0065e37c), iVar1 != 0)) {
    DAT_008bf648 = 0;
  }
  else {
    DAT_008bf648 = param_25 + 4;
  }
  if ((param_27 - 4 & 3) != 0) {
    DAT_008bf648 = 0;
  }
  if ((int)-(param_28 + (uint)(4 < param_27)) < 0 ==
      (SBORROW4(0,param_28) != SBORROW4(-param_28,(uint)(4 < param_27)))) {
    DAT_008bf64c = 0;
  }
  else {
    DAT_008bf64c = fn_0011c134(param_27 - 4,param_28 - (uint)(param_27 < 4),4,0);
  }
  if (((param_29 == 0) || (param_32 < (int)(uint)(param_31 == 0))) ||
     (iVar1 = fn_00147e6c(param_29,&DAT_0065e384), iVar1 != 0)) {
    DAT_008bf650 = 0;
  }
  else {
    DAT_008bf650 = param_29 + 4;
  }
  if ((param_31 - 4 & 3) != 0) {
    DAT_008bf650 = 0;
  }
  if ((int)-(param_32 + (uint)(4 < param_31)) < 0 ==
      (SBORROW4(0,param_32) != SBORROW4(-param_32,(uint)(4 < param_31)))) {
    DAT_008bf654 = 0;
  }
  else {
    DAT_008bf654 = fn_0011c134(param_31 - 4,param_32 - (uint)(param_31 < 4),4,0);
  }
  return 1;
}



undefined4 fn_0065dfb0(void)

{
  return DAT_008bf64c;
}



void fn_0065df28(undefined4 *param_1)

{
  *param_1 = &DAT_007bef98;
  if ((int *)param_1[0x68] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x68] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_0065dee8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x19c) != -1) {
    fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x19c),param_2);
  }
  fn_001dbb48(param_1,param_2);
  return;
}



void fn_0065dea0(int param_1)

{
  if (*(int *)(param_1 + 0x19c) != -1) {
    fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
  }
  fn_001db8a4(param_1);
  return;
}



undefined4 fn_0065de48(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[0x69] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x69) = 1;
      uVar1 = fn_006f7a84(DAT_008977e0);
      fn_001e483c(uVar1,0xffffffff);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0065ddd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  fn_001db0c0();
  iVar1 = *(int *)(param_1 + 0xe8);
  bVar4 = iVar1 == -1;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x19c);
  }
  if (bVar4 && iVar1 == -1) {
    uVar3 = *(undefined4 *)(DAT_008977e0 + 0x2c);
    uVar2 = fn_0023ddec(uVar3,0x7549);
    *(undefined4 *)(param_1 + 0x19c) = uVar2;
    fn_0023e2ac(uVar3,uVar2);
    return;
  }
  return;
}



void fn_0065dafc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_58 = 0x41200000;
  local_54 = 0x41200000;
  local_50 = 0x42a00000;
  local_70 = *(float *)(param_1 + 0x20);
  local_6c = *(float *)(param_1 + 0x24);
  local_68 = *(float *)(param_1 + 0x28);
  fVar9 = *(float *)(param_1 + 0x34) * 40.743664;
  fVar4 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar6 = *(float *)(param_1 + 0x30) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar7 = ABS(fVar6);
  fVar5 = ABS(fVar9);
  for (fVar8 = ABS(fVar4); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar8,3);
  uVar11 = VectorFloatToUnsigned(fVar7,3);
  uVar12 = VectorFloatToUnsigned(fVar5,3);
  uVar3 = uVar11 & 0xff;
  uVar2 = uVar10 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar10 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar8 - fVar16) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar16 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar8 - fVar16) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar7 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  if (fVar4 < 0.0) {
    fVar13 = -fVar13;
  }
  local_20 = (float)(&DAT_007d6f24)[uVar3 * 4] +
             (fVar7 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fVar7 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar5 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4]
  ;
  fVar5 = (float)(&DAT_007d6f24)[uVar10 * 4] + (fVar5 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4]
  ;
  if (fVar6 < 0.0) {
    fVar8 = -fVar8;
  }
  if (fVar9 < 0.0) {
    fVar7 = -fVar7;
  }
  local_48 = fVar5 * local_20;
  local_38 = fVar7 * local_20;
  local_24 = fVar13 * local_20;
  local_20 = fVar16 * local_20;
  local_28 = -fVar8;
  fStack_44 = fVar13 * fVar5 * fVar8 - fVar16 * fVar7;
  local_30 = fVar16 * fVar7 * fVar8 - fVar13 * fVar5;
  local_40 = fVar13 * fVar7 + fVar16 * fVar5 * fVar8;
  local_34 = fVar16 * fVar5 + fVar13 * fVar7 * fVar8;
  local_3c = 0;
  local_2c = 0;
  local_1c = 0;
  local_64 = 0.0;
  local_60 = 0.0;
  local_5c = 80.0;
  fn_0016947c(&local_64);
  local_70 = local_70 + local_64;
  local_6c = local_6c + local_60;
  local_68 = local_68 + local_5c;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1a0),&local_58,&local_18,param_1 + 0x2c,&local_70
              );
  return;
}


